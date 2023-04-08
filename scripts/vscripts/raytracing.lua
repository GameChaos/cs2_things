
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
	WINDOW                  = 0x2;         -- translucent, but not watery (glass).
	AUX                     = 0x4;
	GRATE                   = 0x8;         -- alpha-tested "grate" textures.  Bullets/sight pass through, but solids don't.
	SLIME                   = 0x10;
	WATER                   = 0x20;
	MIST                    = 0x40;
	OPAQUE                  = 0x80;        -- things that cannot be seen through (may be non-solid though).
	-- LAST_VISIBLE_CONTENTS            = 0x80;
	-- ALL_VISIBLE_CONTENTS             = (0x80 | (0x80 - 1));
	TESTFOGVOLUME           = 0x100;
	UNUSED5                 = 0x200;
	UNUSED6                 = 0x4000;
	TEAM1                   = 0x800;       -- per team contents used to differentiate collisions.
	TEAM2                   = 0x1000;      -- between players and objects on different teams.
	IGNORE_NODRAW_OPAQUE    = 0x2000;      -- ignore CONTENTS.OPAQUE on surfaces that have SURF_NODRAW.
	MOVEABLE                = 0x4000;      -- hits entities which are MOVETYPE_PUSH (doors, plats, etc)
	AREAPORTAL              = 0x8000;      -- remaining contents are non-visible, and don't eat brushes.
	PLAYERCLIP              = 0x10000;
	MONSTERCLIP             = 0x20000;
	CURRENT_0               = 0x40000;
	CURRENT_90              = 0x80000;
	CURRENT_180             = 0x100000;
	CURRENT_270             = 0x200000;
	CURRENT_UP              = 0x400000;
	CURRENT_DOWN            = 0x800000;
	ORIGIN                  = 0x1000000;   -- removed before bsp-ing an entity.
	MONSTER                 = 0x2000000;   -- should never be on a brush, only in game.
	DEBRIS                  = 0x4000000;
	DETAIL                  = 0x8000000;   -- brushes to be added after vis leafs.
	TRANSLUCENT             = 0x10000000;  -- auto set if any surface has trans.
	LADDER                  = 0x20000000;
	HITBOX                  = 0x40000000;  -- use accurate hitboxes on trace.
}

local MASK = {
	ALL                    = (0xFFFFFFFF);
	SOLID                  = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.WINDOW, CONTENTS.MONSTER, CONTENTS.GRATE);                       -- everything that is normally solid
	PLAYERSOLID            = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.PLAYERCLIP, CONTENTS.WINDOW, CONTENTS.MONSTER, CONTENTS.GRATE);  -- everything that blocks player movement
	NPCSOLID               = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.MONSTERCLIP, CONTENTS.WINDOW, CONTENTS.MONSTER, CONTENTS.GRATE); -- blocks npc movement
	WATER                  = bit.bor(CONTENTS.WATER, CONTENTS.MOVEABLE, CONTENTS.SLIME);                                                          -- water physics in these contents
	OPAQUE                 = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.OPAQUE);                                                         -- everything that blocks line of sight for AI, lighting, etc
	OPAQUE_AND_NPCS        = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.OPAQUE, CONTENTS.MONSTER);                                       -- everything that blocks line of sight for AI, lighting, etc, but with monsters added.
	VISIBLE                = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.OPAQUE, CONTENTS.IGNORE_NODRAW_OPAQUE);                          -- everything that blocks line of sight for players
	VISIBLE_AND_NPCS       = bit.bor(CONTENTS.SOLID, CONTENTS.MOVEABLE, CONTENTS.OPAQUE, CONTENTS.MONSTER, CONTENTS.IGNORE_NODRAW_OPAQUE);        -- everything that blocks line of sight for players, but with monsters added.
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

function SetPixelAndIncrement(picture, pixel, r, g, b)
	picture[pixel] = r
	picture[pixel + 1] = g
	picture[pixel + 2] = b
	return pixel + 3
end

function Round(value)
	return math.floor(value + 0.5)
end

function GenerateColours(picture, pixel, normal, endPos)
	-- colour
	pixel = SetPixelAndIncrement(picture, pixel,
		Round((normal.x + 1.0) / 2.0 * 255.0),
		Round((normal.y + 1.0) / 2.0 * 255.0),
		Round((normal.z + 1.0) / 2.0 * 255.0)
	)
	
	-- grid
	local endPosArray = {}
	endPosArray[1] = endPos.x
	endPosArray[2] = endPos.y
	endPosArray[3] = endPos.z
	
	local normalArray = {}
	normalArray[1] = normal.x
	normalArray[2] = normal.y
	normalArray[3] = normal.z
	for i = 1, 3 do
		if math.floor(endPosArray[i]) % 16 == 0 then
			local reduction = math.floor(32.0 * (1.0 - math.abs(normalArray[i])))
			picture[pixel - 3] = picture[pixel - 3] - reduction
			picture[pixel - 2] = picture[pixel - 2] - reduction
			picture[pixel - 1] = picture[pixel - 1] - reduction
		end
		
		if math.floor(endPosArray[i] * 16.0) % 16 == 0 then
			local reduction = math.floor(16.0 * (1.0 - math.abs(normalArray[i])))
			picture[pixel - 3] = picture[pixel - 3] - reduction
			picture[pixel - 2] = picture[pixel - 2] - reduction
			picture[pixel - 1] = picture[pixel - 1] - reduction
		end
	end
	
	-- clamp colours
	for i = 1, 3 do
		if picture[pixel - i] < 0 then
			picture[pixel - i] = 0
		elseif picture[pixel - i] > 255 then
			picture[pixel - i] = 255
		end
	end
	return pixel
end

function TraceRayPixel(picture, ignoreEntity, position, pos2, pixel, maskFlags)
	local trace = {
		startpos = position;
		endpos = pos2;
		ignore = ignoreEntity;
		mask = maskFlags;
	}
	TraceLine(trace)
	if not trace.hit then
		return SetPixelAndIncrement(picture, pixel, 0, 0, 0);
	end
	return GenerateColours(picture, pixel, trace.normal, trace.pos);
end

function TraceHullPixel(picture, ignoreEntity, position, pos2, pixel, maskFlags)
	local trace = {
		startpos = position;
		endpos = pos2;
		ignore = ignoreEntity;
		mask = maskFlags;
		min = Vector(-16, -16, 0);
		max = Vector(16, 16, 72);
	}
	TraceHull(trace)
	if not trace.hit then
		return SetPixelAndIncrement(picture, pixel, 0, 0, 0);
	end
	return GenerateColours(picture, pixel, trace.normal, trace.pos);
end

function SavePictureToLogFile(picture, width, height)
	local pp3Table = {}
	for i = 1, (width * height), 1 do
		local picIndex = (i - 1) * 3 + 1
		if i == 1 then
			pp3Table[i] = string.format("P3\n%d %d\n255\n%d %d %d\n", width, height, picture[picIndex], picture[picIndex + 1], picture[picIndex + 2])
		else
			pp3Table[i] = string.format("%d %d %d\n", picture[picIndex], picture[picIndex + 1], picture[picIndex + 2])
		end
	end
	local pp3String = table.concat(pp3Table)
	
	for i = 1, string.len(pp3String), 768 do
	-- for i = 1, 200, 6 do
		FireGameEvent("player_connect", {address = string.sub(pp3String, i, i + 767)})
	end
	print("len:", string.len(pp3String))
end

function TraceRayImage(ignoreEntity, position, angles, traceType, traceMask, fileName)
	--print("Pos { %f, %f, %f } Ang { %f, %f, %f }", position[0], position[1], position[2], angles[0], angles[1], angles[2]);
	local width = PictureWidth()
	local height = PictureHeight()
	-- rgb colours: [r, g, b] * n
	local picture = {}
	for i = 1, ((width * height * 3) + 1) do
		picture[i] = 0
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
			local xx = (2.0 * (x * invWidth) - 1.0) * angle;
			local yy = (1.0 - 2.0 * (y * invHeight)) * angle / aspectRatio;
			
			local pos2 = Vector(xx, yy, -1.0);
			--NormalizeVector(pos2, pos2);
			
			-- x axis aka pitch
			pos2 = RotateVector(pos2, Vector(1.0, 0.0, 0.0), math.rad(90.0 - angles.x));
			
			-- z axis aka yaw
			pos2 = RotateVector(pos2, Vector(0.0, 0.0, 1.0), math.rad(angles.y - 90.0));
			-- pos2 = RotatePosition(Vector(0, 0, 0), angles, pos2)
			pos2 = pos2 * 10000.0;
			pos2 = pos2 + position
			
			if traceType == TRACETYPE_RAY then
				pixel = TraceRayPixel(picture, ignoreEntity, position, pos2, pixel, maskFlags)
			else
				pixel = TraceHullPixel(picture, ignoreEntity, position, pos2, pixel, maskFlags)
			end
		end
	end
	
	SavePictureToLogFile(picture, width, height)
	print("Tracing done.")
end

Convars:RegisterCommand("gc_raytrace", function(command, inTraceType, fileName, inTraceMask)
	local player = Convars:GetCommandClient()
	print(args)
	
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
	SendToServerConsole("sv_logfile true")
	TraceRayImage(player, player:EyePosition(), player:EyeAngles(), traceType, traceMask, fileName)
	SendToServerConsole("log off")
end, nil, 0)
