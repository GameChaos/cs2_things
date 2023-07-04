-- how to use:
-- 1. put this file in csgo/scripts/vscripts/
-- 2. type script_reload_code raytracing.lua in console
-- 3. type gc_raytrace in console, or bind it to a key.

local FCVAR_GAMEDLL = 0x4
local FCVAR_CLIENTDLL = 0x8
local FCVAR_RELEASE = 0x80000
local cvarFlags = bit.bor(FCVAR_GAMEDLL, FCVAR_CLIENTDLL, FCVAR_NOTIFY, FCVAR_REPLICATED, FCVAR_RELEASE)

Convars:RegisterConvar("gc_raytrace_fov", "90.0", nil, cvarFlags)
Convars:RegisterConvar("gc_raytrace_width", "192.0", nil, cvarFlags)
Convars:RegisterConvar("gc_raytrace_height", "108.0", nil, cvarFlags)

local CONTENTS = {
	EMPTY                   = 0;           -- No contents.
	SOLID                   = 0x1;         -- an eye is never valid in a solid .
	HITBOX                  = 0x2;         -- From reversing IDA + elimination, yet to hit in testing
	PLAYERCLIP              = 0x10;
	MONSTERCLIP             = 0x20;
	UNKNOWN0                = 0x40;        -- hits world and weapons
	OPAQUE                  = 0x80;        -- things that cannot be seen through (may be non-solid though).
	LADDER                  = 0x100;
	UNKNOWN1                = 0x200;       -- hits weapons
	UNKNOWN2                = 0x400;       -- hits world
	WINDOW                  = 0x1000;      -- translucent, but not watery (glass).
	GRATE                   = 0x2000;      -- alpha-tested "grate" textures.  Bullets/sight pass through, but solids don't.
	WATER                   = 0x8000;
	SLIME                   = 0x10000;
	UNKNOWN3                = 0x20000;     -- hits football in dust2 and players
	MOVEABLE                = 0x40000;     -- hits entities which are MOVETYPE_PUSH (doors, plats, etc)
	MONSTER                 = 0x80000;     -- should never be on a brush, only in game.
	DEBRIS                  = 0x100000;
	UNKNOWN4                = 0x200000;    -- hits football
	UNKNOWN5                = 0x8000000;   -- hits football
	UNKNOWN6                = 0x40000000;  -- hits world
}

local MASK = {
	ALL                    = (0xFFFFFFFF);
	SOLID                  = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.WINDOW, CONTENTS.MONSTER, CONTENTS.GRATE);                       -- everything that is normally solid
	PLAYERSOLID            = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.PLAYERCLIP, CONTENTS.WINDOW, CONTENTS.MONSTER, CONTENTS.GRATE);  -- everything that blocks player movement
	NPCSOLID               = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.MONSTERCLIP, CONTENTS.WINDOW, CONTENTS.MONSTER, CONTENTS.GRATE); -- blocks npc movement
	WATER                  = bit.bor(CONTENTS.WATER, CONTENTS.MOVEABLE, CONTENTS.SLIME);                                                          -- water physics in these contents
	OPAQUE                 = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.OPAQUE);                                                         -- everything that blocks line of sight for AI, lighting, etc
	OPAQUE_AND_NPCS        = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.OPAQUE, CONTENTS.MONSTER);                                       -- everything that blocks line of sight for AI, lighting, etc, but with monsters added.
	VISIBLE                = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.OPAQUE);                                                         -- everything that blocks line of sight for players
	VISIBLE_AND_NPCS       = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.OPAQUE, CONTENTS.MONSTER);                                       -- everything that blocks line of sight for players, but with monsters added.
	SHOT                   = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.MONSTER, CONTENTS.WINDOW, CONTENTS.DEBRIS, CONTENTS.HITBOX);     -- bullets see these as solid
	SHOT_HULL              = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.MONSTER, CONTENTS.WINDOW, CONTENTS.DEBRIS, CONTENTS.GRATE);      -- non-raycasted weapons see this as solid (includes grates)
	SHOT_PORTAL            = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.WINDOW);                                                         -- hits solids (not grates) and passes through everything else
	SOLID_BRUSHONLY        = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.WINDOW, CONTENTS.GRATE);                                         -- everything normally solid, except monsters (world+brush only)
	PLAYERSOLID_BRUSHONLY  = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.WINDOW, CONTENTS.PLAYERCLIP, CONTENTS.GRATE);                    -- everything normally solid for player movement, except monsters (world+brush only)
	NPCSOLID_BRUSHONLY     = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.WINDOW, CONTENTS.MONSTERCLIP, CONTENTS.GRATE);                   -- everything normally solid for npc movement, except monsters (world+brush only)
	NPCWORLDSTATIC         = bit.bor(CONTENTS.SOLID, CONTENTS.WINDOW, CONTENTS.MONSTERCLIP, CONTENTS.GRATE);                                      -- just the world, used for route rebuilding
	SPLITAREAPORTAL        = bit.bor(CONTENTS.WATER, CONTENTS.SLIME);                                                                             -- These are things that can split areaportals
}


local MAX_PIC_WIDTH = 3840
local MAX_PIC_HEIGHT = 2160


local RAYTRACE_POSITION_USAGE = "Usage: sm_raytrace_position <x> <y> <z> <pitch> <yaw> <roll> <trace_type: 0|1; 0 = ray;1 = hull> <filename> [mask_flags; default: \"MASK_PLAYERSOLID\"]"
local RAYTRACE_USAGE          = "Usage: sm_raytrace <trace_type: 0|1; 0 = ray;1 = hull> <filename> [mask_flags; default: \"MASK_PLAYERSOLID\"]"

local TRACETYPE_RAY = 0
local TRACETYPE_HULL = 1

local g_raytraceOverlay = false

function CvarGetFloatChecked(cvar, min, max, default)
	local cvarValue = Convars:GetFloat(cvar)
	if cvarValue == nil then
		Convars:SetFloat(cvar, default)
		return default
	end
	if cvarValue < min then
		Convars:SetFloat(cvar, min)
		return min
	end
	if cvarValue > max then
		Convars:SetFloat(cvar, max)
		return max
	end
	return cvarValue
end

function PictureWidth()
	return CvarGetFloatChecked("gc_raytrace_width", 2.0, MAX_PIC_WIDTH, 1280.0)
end

function PictureHeight()
	return CvarGetFloatChecked("gc_raytrace_height", 2.0, MAX_PIC_HEIGHT, 720.0)
end

function PictureFov()
	return CvarGetFloatChecked("gc_raytrace_fov", 0.001, 179.0, 90.0)
end

function VectorDot(a, b)
	local temp = a * b
	return temp.x + temp.y + temp.z
end

-- v: a vector in 3D space
-- k: a unit vector describing the axis of rotation
-- theta: the angle (in radians) that v rotates around k
function RotateVector(v, k, theta)
	local cos_theta = math.cos(theta);
	local sin_theta = math.sin(theta);
	
	local cross = CrossVectors(k, v);
	local dot = VectorDot(k, v);
	
	return (v * cos_theta) + (cross * sin_theta) + (k * dot) * (1.0 - cos_theta);
end

function ConvertFov(fovDegrees)
	return math.deg(2.0 * math.atan(math.tan(math.rad(fovDegrees) * 0.5) * (4.0 / 3.0)));
end

function TraceRayPixel(ignoreEntity, position, pos2, pixel, maskFlags)
	local trace = {
		startpos = position;
		endpos = pos2;
		ignore = ignoreEntity;
		mask = maskFlags;
	}
	TraceLine(trace)
	return trace
end

function TraceHullPixel(ignoreEntity, position, pos2, pixel, maskFlags)
	local trace = {
		startpos = position;
		endpos = pos2;
		ignore = ignoreEntity;
		mask = maskFlags;
		min = Vector(-16, -16, 0);
		max = Vector(16, 16, 72);
	}
	TraceHull(trace)
	return trace
end

function ScreenToTraceEndPos(x, y, invWidth, invHeight, angle, aspectRatio, angles)
	local xx = (2.0 * (x * invWidth) - 1.0) * angle;
	local yy = (1.0 - 2.0 * (y * invHeight)) * angle / aspectRatio;
	
	local result = Vector(xx, yy, -1.0);
	--NormalizeVector(result, result);
	
	-- x axis aka pitch
	result = RotateVector(result, Vector(1.0, 0.0, 0.0), math.rad(90.0 - angles.x));
	
	-- z axis aka yaw
	result = RotateVector(result, Vector(0.0, 0.0, 1.0), math.rad(angles.y - 90.0));
	-- result = RotatePosition(Vector(0, 0, 0), angles, result)
	return result;
end

function Quad(v1, v2, v3, v4, r, g, b, a, time)
	--[[
	quad vertex layout:
	1---2
	|  /|
	| / |
	|/  |
	3---4
	
	]]--
	debugoverlay:Triangle(v1, v2, v3, r, g, b, a, false, time)
	debugoverlay:Triangle(v3, v2, v4, r, g, b, a, false, time)
end

function TwoDto1D(x, y, maxX)
	return ((x - 1) + (y - 1) * maxX) + 1;
end

function Length(vec)
	return math.sqrt(vec.x * vec.x + vec.y * vec.y + vec.z * vec.z)
end

Convars:RegisterCommand("gc_raytrace", function(command, inTraceType, inTraceMask)
	local player = Convars:GetCommandClient()
	
	traceMask = MASK.PLAYERSOLID
	if inTraceMask ~= nil and MASK[inTraceMask] ~= nil then
		traceMask = MASK[inTraceMask]
	end
	-- print("trace mask:", traceMask)
	
	traceType = TRACETYPE_RAY
	if inTraceType ~= nil then
		traceType = tonumber(inTraceType)
		if traceType ~= TRACETYPE_RAY and traceType ~= TRACETYPE_HULL then
			traceType = TRACETYPE_RAY
		end
	end
	
	local position = player:EyePosition()
	local angles = player:EyeAngles()
	local width = PictureWidth()
	local height = PictureHeight()
	-- rgb colours: [r, g, b] * n
	local picture = {}
	for i = 0, (width * height) do
		picture[i + 1] = {
			pos = Vector(0, 0, 0);
			normal = Vector(0, 0, 0);
		}
	end
	-- picture index
	local pixel = 1;
	
	local invWidth = 1.0 / width
	local invHeight = 1.0 / height
	
	-- angle diff
	local fov = ConvertFov(PictureFov());
	
	local angle = math.tan(3.1415926535 * 0.5 * fov / 180.0);
	local aspectRatio = width / height / (4.0 / 3.0);
	
	print("Tracing. width:", width, "height:", height, "traceType:", traceType, "traceMask:", traceMask, "position:", position, "angles:", angles, "fov:", fov)
	-- y is for yaw
	for y = 0, (height - 1) do
		-- x is for pitch
		for x = 0, (width - 1) do
			pos2 = ScreenToTraceEndPos(x, y, invWidth, invHeight, angle, aspectRatio, angles)
			pos2 = pos2 * 10000.0;
			pos2 = pos2 + position
			
			local trace = {}
			if traceType == TRACETYPE_RAY then
				trace = TraceRayPixel(player, position, pos2, pixel, traceMask)
			else
				trace = TraceHullPixel(player, position, pos2, pixel, traceMask)
			end
			picture[pixel].pos = trace.pos
			picture[pixel].normal = trace.normal
			pixel = pixel + 1
		end
	end
	
	debugoverlay:PushAndClearDebugOverlayScope("gc_raytracing")
	for y = 1, (height - 1) do
		for x = 1, (width - 1) do
			local n1 = picture[TwoDto1D(x,     y,     width)].normal
			local n2 = picture[TwoDto1D(x + 1, y,     width)].normal
			local n3 = picture[TwoDto1D(x,     y + 1, width)].normal
			local n4 = picture[TwoDto1D(x + 1, y + 1, width)].normal
			
			local v1 = picture[TwoDto1D(x,     y,     width)].pos + n1 * 0.1
			local v2 = picture[TwoDto1D(x + 1, y,     width)].pos + n2 * 0.1
			local v3 = picture[TwoDto1D(x,     y + 1, width)].pos + n3 * 0.1
			local v4 = picture[TwoDto1D(x + 1, y + 1, width)].pos + n4 * 0.1
			
			local d1 = Length(v2 - v1)
			local d2 = Length(v3 - v1)
			local d3 = Length(v4 - v1)
			
			local tolerance = 32.0
			if d1 < tolerance and d2 < tolerance and d3 < tolerance then
				local colour = (n1 + n2 + n3 + n4) * 0.25
				colour.x = math.abs(colour.x) * 255.0
				colour.y = math.abs(colour.y) * 255.0
				colour.z = math.abs(colour.z) * 255.0
				local frac = (math.floor(v1.x / 32.0) + math.floor(v1.y / 32.0) + math.floor(v1.z / 32.0)) * 0.5
				frac = frac - math.floor(frac)
				colour = colour * (frac * 0.75 + 0.25)
				Quad(v1, v2, v3, v4, colour.x, colour.y, colour.z, 200, -1.0)
			end
		end
	end
	debugoverlay:PopDebugOverlayScope()
	print("Tracing done.")
end, nil, 0)
