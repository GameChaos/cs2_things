
-- 0 = kztimer, 1 = vnl
local mode = 0
local cpSound = "sounds/buttons/blip1.vsnd"
local g_worldent = nil

if Kreedz == nil then
	Kreedz = class({})
end

function CvarsKztimer()
	mode = 0
	SendToServerConsole("sv_accelerate 6.5")
	SendToServerConsole("sv_accelerate_use_weapon_speed 0")
	SendToServerConsole("sv_airaccelerate 100.0")
	SendToServerConsole("sv_air_max_wishspeed 30.0")
	SendToServerConsole("sv_enablebunnyhopping 1")
	SendToServerConsole("sv_friction 5.0")
	SendToServerConsole("sv_gravity 800.0")
	SendToServerConsole("sv_jump_impulse 301.993377")
	SendToServerConsole("sv_ladder_scale_speed 1.0")
	SendToServerConsole("sv_ledge_mantle_helper 0.0")
	SendToServerConsole("sv_maxspeed 320.0")
	SendToServerConsole("sv_maxvelocity 2000.0")
	SendToServerConsole("sv_staminajumpcost 0.0")
	SendToServerConsole("sv_staminalandcost 0.0")
	SendToServerConsole("sv_staminamax 0.0")
	SendToServerConsole("sv_staminarecoveryrate 0.0")
	SendToServerConsole("sv_standable_normal 0.7")
	SendToServerConsole("sv_timebetweenducks 0.0")
	SendToServerConsole("sv_walkable_normal 0.7")
	SendToServerConsole("sv_wateraccelerate 10.0")
	SendToServerConsole("sv_water_movespeed_multiplier 0.8")
	SendToServerConsole("sv_water_swim_mode  0.0")
	SendToServerConsole("sv_weapon_encumbrance_per_item 0.0")
	SendToServerConsole("sv_weapon_encumbrance_scale 0.0")
end

function CvarsVanilla()
	mode = 1
	SendToServerConsole("sv_accelerate 5.5")
	SendToServerConsole("sv_accelerate_use_weapon_speed 1")
	SendToServerConsole("sv_airaccelerate 12.0")
	SendToServerConsole("sv_air_max_wishspeed 30.0")
	SendToServerConsole("sv_enablebunnyhopping 1")
	SendToServerConsole("sv_friction 5.2")
	SendToServerConsole("sv_gravity 800.0")
	SendToServerConsole("sv_jump_impulse 301.993377")
	SendToServerConsole("sv_ladder_scale_speed 0.78")
	SendToServerConsole("sv_ledge_mantle_helper 0.0")
	SendToServerConsole("sv_maxspeed 320.0")
	SendToServerConsole("sv_maxvelocity 3500.0")
	SendToServerConsole("sv_staminajumpcost 0.08")
	SendToServerConsole("sv_staminalandcost 0.05")
	SendToServerConsole("sv_staminamax 80.0")
	SendToServerConsole("sv_staminarecoveryrate 60.0")
	SendToServerConsole("sv_standable_normal 0.7")
	SendToServerConsole("sv_timebetweenducks 0.4")
	SendToServerConsole("sv_walkable_normal 0.7")
	SendToServerConsole("sv_wateraccelerate 10.0")
	SendToServerConsole("sv_water_movespeed_multiplier 0.8")
	SendToServerConsole("sv_water_swim_mode  0.0")
	SendToServerConsole("sv_weapon_encumbrance_per_item 0.85")
	SendToServerConsole("sv_weapon_encumbrance_scale 0.0")
end

function locals()
	local i = 1
	repeat
		local k, v = debug.getlocal(1, i)
		if k then
			print(k, v)
			i = i + 1
		end
	until nil == k
end

function PlayCpSound(player)
	-- HACK, can't get EmitSoundOnClient to work :(
	SendToConsole("play " .. cpSound)
end

Convars:RegisterCommand("kz_cp", function()
	local player = Convars:GetCommandClient()
	if player.onGround then
		player.cpSaved = true
		player.cpOrigin = player:GetAbsOrigin()
		player.cpAngles = player:EyeAngles()
		PlayCpSound(player)
	end
	
end, nil, 0)

Convars:RegisterCommand("kz_tp", function()
	local player = Convars:GetCommandClient()
	if player.cpSaved then
		player:SetAbsOrigin(player.cpOrigin)
		player:SetAngles(player.cpAngles.x, player.cpAngles.y, player.cpAngles.z)
		player:SetVelocity(Vector(0, 0, 0))
		PlayCpSound(player)
		print(player)
	end
end, nil, 0)

Convars:RegisterCommand("kz_kztimer", function()
	CvarsKztimer()
end, nil, 0)

Convars:RegisterCommand("kz_vanilla", function()
	CvarsVanilla()
end, nil, 0)

Convars:RegisterCommand("kz_testcommand", function()
	local player = Convars:GetCommandClient()
	ScriptPrintMessageChatAll(tostring(player:GetAbsOrigin()))
	-- print(player:QueryFloat("m_flFriction", 420.69))
end, nil, 0)

function UserIdPawnToPlayerPawn(useridPawn)
	return EntIndexToHScript(bit.band(useridPawn, 16383))
end

ListenToGameEvent("player_jump", function (event)
	local player = UserIdPawnToPlayerPawn(event.userid_pawn)
	
	player.userid = event.userid
	-- NOTE: 2 jump events get fired on the same tick for some reason...
	if player.lastJumpEventFrame ~= GetFrameCount() then
		player.jumped = true
		player.jumpOrigin = player:GetAbsOrigin()
		ScriptPrintMessageChatAll("FOG: " .. tostring(player.lastFramesOnGround))
		player.lastJumpEventFrame = GetFrameCount()
	end
end, nil)

function InitialiseVars(player)
	player.varsInitialised = true
	player.framesOnGround = 0
	player.onGround = false
	player.lastOnGround = false
	player.lastOrigin = player:GetAbsOrigin()
	player.lastVelocity = player:GetVelocity()
	player.jumpOrigin = Vector(0, 0, 0)
	player.jumpVelocity = Vector(0, 0, 0)
	player.jumped = false
	player.lastFramesOnGround = 0
end

function PlayerTick(player)
	local velocity = player:GetVelocity()
	local speed = velocity:Length2D()
	ScriptPrintMessageCenterAll(string.format("%.3f", speed))
	-- DebugScreenTextPretty(900, 900, 0, "Test!", 255, 255, 255, 255, 5, "Tahoma", 48, false)
	--[[
	local startVector = player:GetAbsOrigin()
	local traceTable =
	{
		startpos = startVector;
		endpos = startVector - Vector(0, 0, 2);
		ignore = player;
		mask =  33636363; -- TRACE_MASK_PLAYER_SOLID from L4D2 script API, may not be correct for Source 2.
		min = player:GetBoundingMins();
		max = player:GetBoundingMaxs()
	}
	
	TraceHull(traceTable)
	--]]
	
	if player.varsInitialised == nil then
		InitialiseVars(player)
	end
	
	if player.lastJumpEventFrame == GetFrameCount() - 2 then
		local speed = velocity:Length2D()
		-- TODO: kinda broken
		if mode == 0 then
			if speed > 380.0 then
				local mult = 380.0 / speed
				velocity.x = velocity.x * mult
				velocity.y = velocity.y * mult
				player:SetVelocity(velocity)
			end
		end
		player.jumpVelocity = velocity
	end
	
	player.onGround = player:GetGraphParameter("Is On Ground")
	if player.onGround then
		player.framesOnGround = player.framesOnGround + 1
	else
		player.framesOnGround = 0
	end
	
	if player.framesOnGround == 1 then
		if player.jumped then
			local jumpVec = player.jumpOrigin - player:GetOrigin()
			local distance = jumpVec:Length2D()
			local pre = math.sqrt(player.jumpVelocity.x * player.jumpVelocity.x + player.jumpVelocity.y * player.jumpVelocity.y)
			ScriptPrintMessageChatAll("[GC] LJ: " .. tostring(distance + 32.0) .. " [Pre: " .. tostring(pre) .. "]")
			player.jumped = false
		end
	end
	
	if player.framesOnGround == 2 then
		-- only for taming movement unlocker
		if speed > 250.0 then
			local mult = 250.0 / speed
			velocity.x = velocity.x * mult
			velocity.y = velocity.y * mult
			player:SetVelocity(velocity)
		end
	end
	
	player:SetGraphParameterFloat("flLandWeight", 1.0)
	player:SetGraphParameterFloat("stand", 1.0)
	
	player.lastOnGround = player.onGround
	player.lastOrigin = player:GetAbsOrigin()
	player.lastVelocity = player:GetVelocity()
	player.lastFramesOnGround = player.framesOnGround
end

function Tick()
	local players = Entities:FindAllByClassname("player")
	for i, player in ipairs(players)
	do
		PlayerTick(players[i])
	end
	return FrameTime()
end

function UpdateOnRemove()
	StopListeningToAllGameEvents(Kreedz)
end

function Activate()
	SendToServerConsole("mp_ct_default_secondary weapon_usp_silencer")
	SendToServerConsole("mp_t_default_secondary weapon_usp_silencer")
	
	SendToServerConsole("sv_holiday_mode 0")
	SendToServerConsole("sv_party_mode 0")
	
	SendToServerConsole("sv_clamp_unsafe_velocities 0")
	SendToServerConsole("mp_respawn_on_death_ct 1")
	SendToServerConsole("mp_respawn_on_death_t 1")
	SendToServerConsole("mp_respawn_immunitytime -1")
	SendToServerConsole("sv_spec_post_death_additional_time 1")
	
	-- Hide money
	SendToServerConsole("mp_playercashawards 0")
	SendToServerConsole("mp_teamcashawards 0")
	
	-- Stop dropping guns
	SendToServerConsole("mp_death_drop_c4 0")
	SendToServerConsole("mp_death_drop_defuser 0")
	SendToServerConsole("mp_death_drop_grenade 0")
	SendToServerConsole("mp_death_drop_gun 1")
	SendToServerConsole("mp_drop_knife_enable 1")
	SendToServerConsole("mp_weapons_allow_map_placed 1")
	SendToServerConsole("mp_disconnect_kills_players 0")
	
	-- No limits on joining teams
	SendToServerConsole("mp_autoteambalance 0")
	SendToServerConsole("mp_limitteams 0")
	SendToServerConsole("mp_spectators_max 64")
	
	-- Performance
	SendToServerConsole("sv_occlude_players 0")
	
	-- General
	SendToServerConsole("sv_pure 0")
	-- SendToServerConsole("bot_quota 0")
	SendToServerConsole("sv_allow_votes 0")
	SendToServerConsole("sv_infinite_ammo 2")
	SendToServerConsole("mp_free_armor 2")
	SendToServerConsole("mp_buytime 0")
	SendToServerConsole("mp_freezetime 0")
	SendToServerConsole("mp_team_intro_time 0")
	SendToServerConsole("mp_do_warmup_period 0")
	SendToServerConsole("mp_ignore_round_win_conditions 1")
	SendToServerConsole("mp_match_end_changelevel 1")
	SendToServerConsole("sv_ignoregrenaderadio 1")
	SendToServerConsole("sv_disable_radar 1")
	SendToServerConsole("mp_footsteps_serverside 1")
	SendToServerConsole("sv_mincmdrate 128")
	SendToServerConsole("sv_minupdaterate 128")
	SendToServerConsole("mp_warmuptime_all_players_connected 0")
	-- Fix bots not spawning
	SendToServerConsole("mp_randomspawn 1")
	
	-- Team picking
	SendToServerConsole("mp_force_pick_time 60")
	
	-- End to falldamage
	SendToServerConsole("sv_falldamage_scale 0")
	
	-- Restart round to ensure settings (e.g. mp_weapons_allow_map_placed) are applied
	-- SendToServerConsole("mp_restartgame 1")
	
	CvarsKztimer()
	
	g_worldent = Entities:FindByClassname(nil, "worldent")
	g_worldent:SetContextThink(nil, Tick, 0)
end
