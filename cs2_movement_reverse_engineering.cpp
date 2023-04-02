
// most things taken from: https://github.com/neverlosecc/source2sdk/tree/cs2

#pragma pack(8)

// Alignment: 4
// Size: 0x49
enum loadout_positions_t : uint32_t
{ 
	LOADOUT_POSITION_INVALID = 0xffffffff,
	LOADOUT_POSITION_MELEE = 0x0,
	LOADOUT_POSITION_C4 = 0x1,
	LOADOUT_POSITION_FIRST_AUTO_BUY_WEAPON = 0x0,
	LOADOUT_POSITION_LAST_AUTO_BUY_WEAPON = 0x1,
	LOADOUT_POSITION_SECONDARY0 = 0x2,
	LOADOUT_POSITION_SECONDARY1 = 0x3,
	LOADOUT_POSITION_SECONDARY2 = 0x4,
	LOADOUT_POSITION_SECONDARY3 = 0x5,
	LOADOUT_POSITION_SECONDARY4 = 0x6,
	LOADOUT_POSITION_SECONDARY5 = 0x7,
	LOADOUT_POSITION_SMG0 = 0x8,
	LOADOUT_POSITION_SMG1 = 0x9,
	LOADOUT_POSITION_SMG2 = 0xa,
	LOADOUT_POSITION_SMG3 = 0xb,
	LOADOUT_POSITION_SMG4 = 0xc,
	LOADOUT_POSITION_SMG5 = 0xd,
	LOADOUT_POSITION_RIFLE0 = 0xe,
	LOADOUT_POSITION_RIFLE1 = 0xf,
	LOADOUT_POSITION_RIFLE2 = 0x10,
	LOADOUT_POSITION_RIFLE3 = 0x11,
	LOADOUT_POSITION_RIFLE4 = 0x12,
	LOADOUT_POSITION_RIFLE5 = 0x13,
	LOADOUT_POSITION_HEAVY0 = 0x14,
	LOADOUT_POSITION_HEAVY1 = 0x15,
	LOADOUT_POSITION_HEAVY2 = 0x16,
	LOADOUT_POSITION_HEAVY3 = 0x17,
	LOADOUT_POSITION_HEAVY4 = 0x18,
	LOADOUT_POSITION_HEAVY5 = 0x19,
	LOADOUT_POSITION_FIRST_WHEEL_WEAPON = 0x2,
	LOADOUT_POSITION_LAST_WHEEL_WEAPON = 0x19,
	LOADOUT_POSITION_FIRST_PRIMARY_WEAPON = 0x8,
	LOADOUT_POSITION_LAST_PRIMARY_WEAPON = 0x19,
	LOADOUT_POSITION_FIRST_WHEEL_GRENADE = 0x1a,
	LOADOUT_POSITION_GRENADE0 = 0x1a,
	LOADOUT_POSITION_GRENADE1 = 0x1b,
	LOADOUT_POSITION_GRENADE2 = 0x1c,
	LOADOUT_POSITION_GRENADE3 = 0x1d,
	LOADOUT_POSITION_GRENADE4 = 0x1e,
	LOADOUT_POSITION_GRENADE5 = 0x1f,
	LOADOUT_POSITION_LAST_WHEEL_GRENADE = 0x1f,
	LOADOUT_POSITION_EQUIPMENT0 = 0x20,
	LOADOUT_POSITION_EQUIPMENT1 = 0x21,
	LOADOUT_POSITION_EQUIPMENT2 = 0x22,
	LOADOUT_POSITION_EQUIPMENT3 = 0x23,
	LOADOUT_POSITION_EQUIPMENT4 = 0x24,
	LOADOUT_POSITION_EQUIPMENT5 = 0x25,
	LOADOUT_POSITION_FIRST_WHEEL_EQUIPMENT = 0x20,
	LOADOUT_POSITION_LAST_WHEEL_EQUIPMENT = 0x25,
	LOADOUT_POSITION_CLOTHING_CUSTOMPLAYER = 0x26,
	LOADOUT_POSITION_PET = 0x27,
	LOADOUT_POSITION_CLOTHING_FACEMASK = 0x28,
	LOADOUT_POSITION_CLOTHING_HANDS = 0x29,
	LOADOUT_POSITION_FIRST_COSMETIC = 0x29,
	LOADOUT_POSITION_LAST_COSMETIC = 0x29,
	LOADOUT_POSITION_CLOTHING_EYEWEAR = 0x2a,
	LOADOUT_POSITION_CLOTHING_HAT = 0x2b,
	LOADOUT_POSITION_CLOTHING_LOWERBODY = 0x2c,
	LOADOUT_POSITION_CLOTHING_TORSO = 0x2d,
	LOADOUT_POSITION_CLOTHING_APPEARANCE = 0x2e,
	LOADOUT_POSITION_MISC0 = 0x2f,
	LOADOUT_POSITION_MISC1 = 0x30,
	LOADOUT_POSITION_MISC2 = 0x31,
	LOADOUT_POSITION_MISC3 = 0x32,
	LOADOUT_POSITION_MISC4 = 0x33,
	LOADOUT_POSITION_MISC5 = 0x34,
	LOADOUT_POSITION_MISC6 = 0x35,
	LOADOUT_POSITION_MUSICKIT = 0x36,
	LOADOUT_POSITION_FLAIR0 = 0x37,
	LOADOUT_POSITION_SPRAY0 = 0x38,
	LOADOUT_POSITION_FIRST_ALL_CHARACTER = 0x36,
	LOADOUT_POSITION_LAST_ALL_CHARACTER = 0x38,
	LOADOUT_POSITION_COUNT = 0x39,
};

// Alignment: 4
// Size: 0xe
enum TakeDamageFlags_t : uint32_t
{ 
	DFLAG_NONE = 0x0,
	DFLAG_SUPPRESS_HEALTH_CHANGES = 0x1,
	DFLAG_SUPPRESS_PHYSICS_FORCE = 0x2,
	DFLAG_SUPPRESS_EFFECTS = 0x4,
	DFLAG_PREVENT_DEATH = 0x8,
	DFLAG_FORCE_DEATH = 0x10,
	DFLAG_ALWAYS_GIB = 0x20,
	DFLAG_NEVER_GIB = 0x40,
	DFLAG_REMOVE_NO_RAGDOLL = 0x80,
	DFLAG_SUPPRESS_DAMAGE_MODIFICATION = 0x100,
	DFLAG_ALWAYS_FIRE_DAMAGE_EVENTS = 0x200,
	DFLAG_RADIUS_DMG = 0x400,
	DMG_LASTDFLAG = 0x400,
	DFLAG_IGNORE_ARMOR = 0x800,
};

// Alignment: 1
// Size: 0x6
enum MoveCollide_t : uint8_t
{ 
	MOVECOLLIDE_DEFAULT = 0x0,
	MOVECOLLIDE_FLY_BOUNCE = 0x1,
	MOVECOLLIDE_FLY_CUSTOM = 0x2,
	MOVECOLLIDE_FLY_SLIDE = 0x3,
	MOVECOLLIDE_COUNT = 0x4,
	MOVECOLLIDE_MAX_BITS = 0x3,
};

// Alignment: 1
// Size: 0x9
enum SolidType_t : uint8_t
{ 
	SOLID_NONE = 0x0,
	SOLID_BSP = 0x1,
	SOLID_BBOX = 0x2,
	SOLID_OBB = 0x3,
	SOLID_SPHERE = 0x4,
	SOLID_POINT = 0x5,
	SOLID_VPHYSICS = 0x6,
	SOLID_CAPSULE = 0x7,
	SOLID_LAST = 0x8,
};

// Alignment: 1
// Size: 0x9
enum SurroundingBoundsType_t : uint8_t
{ 
	USE_OBB_COLLISION_BOUNDS = 0x0,
	USE_BEST_COLLISION_BOUNDS = 0x1,
	USE_HITBOXES = 0x2,
	USE_SPECIFIED_BOUNDS = 0x3,
	USE_GAME_CODE = 0x4,
	USE_ROTATION_EXPANDED_BOUNDS = 0x5,
	USE_COLLISION_BOUNDS_NEVER_VPHYSICS = 0x6,
	USE_ROTATION_EXPANDED_SEQUENCE_BOUNDS = 0x7,
	SURROUNDING_TYPE_BIT_COUNT = 0x3,
};

// Alignment: 1
// Size: 0xe
enum MoveType_t : uint8_t
{ 
	MOVETYPE_NONE = 0x0,
	MOVETYPE_OBSOLETE = 0x1,
	MOVETYPE_WALK = 0x2,
	MOVETYPE_STEP = 0x3,
	MOVETYPE_FLY = 0x4,
	MOVETYPE_FLYGRAVITY = 0x5,
	MOVETYPE_VPHYSICS = 0x6,
	MOVETYPE_PUSH = 0x7,
	MOVETYPE_NOCLIP = 0x8,
	MOVETYPE_OBSERVER = 0x9,
	MOVETYPE_LADDER = 0xa,
	MOVETYPE_CUSTOM = 0xb,
	MOVETYPE_LAST = 0xc,
	MOVETYPE_MAX_BITS = 0x5,
};

// Alignment: 1
// Size: 0xd
enum RenderMode_t : uint8_t
{ 
	kRenderNormal = 0x0,
	kRenderTransColor = 0x1,
	kRenderTransTexture = 0x2,
	kRenderGlow = 0x3,
	kRenderTransAlpha = 0x4,
	kRenderTransAdd = 0x5,
	kRenderEnvironmental = 0x6,
	kRenderTransAddFrameBlend = 0x7,
	kRenderTransAlphaAdd = 0x8,
	kRenderWorldGlow = 0x9,
	kRenderNone = 0xa,
	kRenderDevVisualizer = 0xb,
	kRenderModeCount = 0xc,
};

// Alignment: 1
// Size: 0x14
enum RenderFx_t : uint8_t
{ 
	kRenderFxNone = 0x0,
	kRenderFxPulseSlow = 0x1,
	kRenderFxPulseFast = 0x2,
	kRenderFxPulseSlowWide = 0x3,
	kRenderFxPulseFastWide = 0x4,
	kRenderFxFadeSlow = 0x5,
	kRenderFxFadeFast = 0x6,
	kRenderFxSolidSlow = 0x7,
	kRenderFxSolidFast = 0x8,
	kRenderFxStrobeSlow = 0x9,
	kRenderFxStrobeFast = 0xa,
	kRenderFxStrobeFaster = 0xb,
	kRenderFxFlickerSlow = 0xc,
	kRenderFxFlickerFast = 0xd,
	kRenderFxNoDissipation = 0xe,
	kRenderFxFadeOut = 0xf,
	kRenderFxFadeIn = 0x10,
	kRenderFxPulseFastWider = 0x11,
	kRenderFxGlowShell = 0x12,
	kRenderFxMax = 0x13,
};

// Alignment: 4
// Size: 0xe
enum HitGroup_t : uint32_t
{ 
	HITGROUP_INVALID = 0xffffffff,
	HITGROUP_GENERIC = 0x0,
	HITGROUP_HEAD = 0x1,
	HITGROUP_CHEST = 0x2,
	HITGROUP_STOMACH = 0x3,
	HITGROUP_LEFTARM = 0x4,
	HITGROUP_RIGHTARM = 0x5,
	HITGROUP_LEFTLEG = 0x6,
	HITGROUP_RIGHTLEG = 0x7,
	HITGROUP_NECK = 0x8,
	HITGROUP_UNUSED = 0x9,
	HITGROUP_GEAR = 0xa,
	HITGROUP_SPECIAL = 0xb,
	HITGROUP_COUNT = 0xc,
};

// Alignment: 4
// Size: 0xb
enum Hull_t : uint32_t
{ 
	HULL_HUMAN = 0x0,
	HULL_SMALL_CENTERED = 0x1,
	HULL_WIDE_HUMAN = 0x2,
	HULL_TINY = 0x3,
	HULL_MEDIUM = 0x4,
	HULL_TINY_CENTERED = 0x5,
	HULL_LARGE = 0x6,
	HULL_LARGE_CENTERED = 0x7,
	HULL_MEDIUM_TALL = 0x8,
	NUM_HULLS = 0x9,
	HULL_NONE = 0xa,
};

// Alignment: 4
// Size: 0x7
enum ObserverMode_t : uint32_t
{ 
	OBS_MODE_NONE = 0x0,
	OBS_MODE_FIXED = 0x1,
	OBS_MODE_IN_EYE = 0x2,
	OBS_MODE_CHASE = 0x3,
	OBS_MODE_ROAMING = 0x4,
	OBS_MODE_DIRECTED = 0x5,
	NUM_OBSERVER_MODES = 0x6,
};

// Alignment: 4
// Size: 0x2
enum attributeprovidertypes_t : uint32_t
{ 
	PROVIDER_GENERIC = 0x0,
	PROVIDER_WEAPON = 0x1,
};

// Alignment: 4
// Size: 0x3
enum WeaponState_t : uint32_t
{ 
	WEAPON_NOT_CARRIED = 0x0,
	WEAPON_IS_CARRIED_BY_PLAYER = 0x1,
	WEAPON_IS_ACTIVE = 0x2,
};

// Alignment: 4
// Size: 0x6
enum RelativeDamagedDirection_t : uint32_t
{ 
	DAMAGED_DIR_NONE = 0x0,
	DAMAGED_DIR_FRONT = 0x1,
	DAMAGED_DIR_BACK = 0x2,
	DAMAGED_DIR_LEFT = 0x3,
	DAMAGED_DIR_RIGHT = 0x4,
	DAMAGED_DIR_TOTAL = 0x5,
};

// Alignment: 4
// Size: 0xa
enum CSPlayerState : uint32_t
{ 
	STATE_ACTIVE = 0x0,
	STATE_WELCOME = 0x1,
	STATE_PICKINGTEAM = 0x2,
	STATE_PICKINGCLASS = 0x3,
	STATE_DEATH_ANIM = 0x4,
	STATE_DEATH_WAIT_FOR_KEY = 0x5,
	STATE_OBSERVER_MODE = 0x6,
	STATE_GUNGAME_RESPAWN = 0x7,
	STATE_DORMANT = 0x8,
	NUM_PLAYER_STATES = 0x9,
};

// Alignment: 4
// Size: 0x12
enum CSPlayerBlockingUseAction_t : uint32_t
{ 
	k_CSPlayerBlockingUseAction_None = 0x0,
	k_CSPlayerBlockingUseAction_DefusingDefault = 0x1,
	k_CSPlayerBlockingUseAction_DefusingWithKit = 0x2,
	k_CSPlayerBlockingUseAction_HostageGrabbing = 0x3,
	k_CSPlayerBlockingUseAction_HostageDropping = 0x4,
	k_CSPlayerBlockingUseAction_OpeningSafe = 0x5,
	k_CSPlayerBlockingUseAction_EquippingParachute = 0x6,
	k_CSPlayerBlockingUseAction_EquippingHeavyArmor = 0x7,
	k_CSPlayerBlockingUseAction_EquippingContract = 0x8,
	k_CSPlayerBlockingUseAction_EquippingTabletUpgrade = 0x9,
	k_CSPlayerBlockingUseAction_TakingOffHeavyArmor = 0xa,
	k_CSPlayerBlockingUseAction_PayingToOpenDoor = 0xb,
	k_CSPlayerBlockingUseAction_CancelingSpawnRappelling = 0xc,
	k_CSPlayerBlockingUseAction_EquippingExoJump = 0xd,
	k_CSPlayerBlockingUseAction_PickingUpBumpMine = 0xe,
	k_CSPlayerBlockingUseAction_MapLongUseEntity_Pickup = 0xf,
	k_CSPlayerBlockingUseAction_MapLongUseEntity_Place = 0x10,
	k_CSPlayerBlockingUseAction_MaxCount = 0x11,
};

// Alignment: 1
// Size: 0x6
enum WaterLevel_t : uint8_t
{ 
	WL_NotInWater = 0x0,
	WL_Feet = 0x1,
	WL_Waist = 0x2,
	WL_Chest = 0x3,
	WL_FullyUnderwater = 0x4,
	WL_Count = 0x5,
};

struct Vector2D
{
	float x;
	float y;
};

struct Vector
{
	float x;
	float y;
	float z;
};

struct Vector4D
{
	float x;
	float y;
	float z;
	float w;
};

class CInButtonState
{
	virtual ~CInButtonState();
	uint64_t m_pButtonStates[3];
};

// Size: 0x4
struct CUtlStringToken
{
	uint32_t m_nHashCode;
};

// Alignment: 1
// Size: 0x28
struct CNetworkVarChainer
{
	uint8_t unknown0[0x20];
	int16_t m_PathIndex; 	// 0x20
	uint8_t unknown1[6];
};

struct CCSPlayerPawn;

// Alignment: 1
// Size: 0x40
struct CPlayerPawnComponent
{
	void *vtable;
	CNetworkVarChainer __m_pChainEntity; 	// 0x8
	
	CCSPlayerPawn *pawn;
	uint8_t unknown0[6];
};

// Alignment: 14
// Size: 0x1b8
struct CPlayer_MovementServices : CPlayerPawnComponent
{
	int32_t m_nImpulse; 	// 0x40
	CInButtonState m_nButtons; 	// 0x48
	uint64_t m_nQueuedButtonDownMask; 	// 0x68
	uint64_t m_nQueuedButtonChangeMask; 	// 0x70
	uint64_t m_nButtonDoublePressed; 	// 0x78
	uint32_t m_pButtonPressedCmdNumber[64]; 	// 0x80
	uint32_t m_nLastCommandNumberProcessed; 	// 0x180
	// assume ida pads correctly to 8 bytes :)
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint64_t m_nToggleButtonDownMask; 	// 0x188
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "2048"
	// MNetworkEncodeFlags
	float m_flMaxspeed; 	// 0x190
	// MNetworkEnable
	float m_flForceSubtickMoveWhen; 	// 0x194
	float m_flForwardMove; 	// 0x198
	float m_flLeftMove; 	// 0x19c
	float m_flUpMove; 	// 0x1a0
	Vector m_vecOldViewAngles; 	// 0x1a4
};

// Alignment: 14
// Size: 0x208
struct CPlayer_MovementServices_Humanoid : CPlayer_MovementServices
{
	void *vtableCPlayer_MovementServices_Humanoid;
	float m_flStepSoundTime; 	// 0x1b8
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkBitCount "17"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	float m_flFallVelocity; 	// 0x1bc
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInCrouch; 	// 0x1c0
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nCrouchState; 	// 0x1c4
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flCrouchTransitionStartTime; 	// 0x1c8
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucked; 	// 0x1cc
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bDucking; 	// 0x1cd
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bInDuckJump; 	// 0x1ce
	Vector m_groundNormal; 	// 0x1d0
	float m_flSurfaceFriction; 	// 0x1dc
	CUtlStringToken m_surfaceProps; 	// 0x1e0
	uint8_t unknown2[12];
	int32_t m_nStepside; 	// 0x1f0
	int32_t m_iTargetVolume; 	// 0x1f4
	Vector m_vecSmoothedVelocity; 	// 0x1f8
	
	uint8_t unknown3[4];
};

// Alignment: 35
// Size: 0x13c0
struct CCSPlayer_MovementServices : CPlayer_MovementServices_Humanoid
{
	// MNetworkEnable
	float m_flMaxFallVelocity; 	// 0x208
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vecLadderNormal; 	// 0x20c
	// MNetworkEnable
	int32_t m_nLadderSurfacePropIndex; 	// 0x218
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	bool m_bAllowAutoMovement; 	// 0x21c
	// MNetworkEnable
	float m_flDuckAmount; 	// 0x220
	// MNetworkEnable
	float m_flDuckSpeed; 	// 0x224
	// MNetworkEnable
	bool m_bDuckOverride; 	// 0x228
	float m_flDuckOffset; 	// 0x22c
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	uint32_t m_nDuckTimeMsecs; 	// 0x230
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nDuckJumpTimeMsecs; 	// 0x234
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_nJumpTimeMsecs; 	// 0x238
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flLastDuckTime; 	// 0x23c
	uint8_t unknown3[8];
	Vector2D m_vecLastPositionAtFullCrouchSpeed; 	// 0x248
	bool m_duckUntilOnGround; 	// 0x250
	bool m_bHasWalkMovedSinceLastJump; 	// 0x251
	bool m_bInStuckTest; 	// 0x252
	uint64_t m_CachedGetPointContents[64][3]; 	// 0x258
	Vector m_CachedGetPointContentsPoint[64][3]; 	// 0x858
	uint8_t unknown4[6];
	float m_flStuckCheckTime[64][2]; 	// 0x1160
	int32_t m_nTraceCount; 	// 0x1360
	int32_t m_StuckLast; 	// 0x1364
	bool m_bSpeedCropped; 	// 0x1368
	int32_t m_nOldWaterLevel; 	// 0x136c
	float m_flWaterEntryTime; 	// 0x1370
	Vector m_vecForward; 	// 0x1374
	Vector m_vecLeft; 	// 0x1380
	Vector m_vecUp; 	// 0x138c
	Vector m_vecPreviouslyPredictedOrigin; 	// 0x1398
	bool m_bMadeFootstepNoise; 	// 0x13a4
	int32_t m_iFootsteps; 	// 0x13a8
	int32_t m_nRoundFootstepsMade; 	// 0x13ac
	// MNetworkEnable
	bool m_bOldJumpPressed; 	// 0x13b0
	// MNetworkEnable
	float m_flJumpUntil; 	// 0x13b4
	// MNetworkEnable
	float m_flJumpVel; 	// 0x13b8
	// MNetworkEnable
	float m_fStashGrenadeParameterWhen; 	// 0x13bc
};

// Alignment: 0
// Size: 0x78
struct CCSPlayer_ParachuteServices //: public CPlayerPawnComponent
{ 
	CPlayerPawnComponent pawnComponent;
	uint8_t unknown[0x38];
};

// Alignment: 1
// Size: 0x48
struct CCSPlayer_BulletServices //: public CPlayerPawnComponent
{ 
	CPlayerPawnComponent pawnComponent;
	int32_t m_totalHitsOnServer; 	// 0x40
	uint8_t unknown1[0x4];
};

struct CHandle
{
	int32_t handle;
};

// Alignment: 2
// Size: 0x50
struct CCSPlayer_HostageServices //: public CPlayerPawnComponent
{
	CPlayerPawnComponent pawnComponent;
	// MNetworkEnable
	CHandle m_hCarriedHostage; 	// 0x40
	// MNetworkEnable
	CHandle m_hCarriedHostageProp; 	// 0x44
	uint8_t unknown[8];
};

// Alignment: 1
// Size: 0xc8
struct CCSPlayer_BuyServices //: public CPlayerPawnComponent
{ 
	CPlayerPawnComponent pawnComponent;
	float m_flNextAutoBuyAmmoTime; 	// 0x40
	uint8_t unknown1[0x84];
};

// Alignment: 2
// Size: 0x58
struct CCSPlayer_PingServices //: public CPlayerPawnComponent
{ 
	CPlayerPawnComponent pawnComponent;
	float m_flPlayerPingTokens[5]; 	// 0x40
	// MNetworkEnable
	CHandle m_hPlayerPing; 	// 0x54
};

// Alignment: 5
// Size: 0x60
struct CCSPlayer_RadioServices //: public CPlayerPawnComponent
{ 
	CPlayerPawnComponent pawnComponent;
	float m_flGotHostageTalkTimer; 	// 0x40
	float m_flDefusingTalkTimer; 	// 0x44
	float m_flC4PlantTalkTimer; 	// 0x48
	float m_flRadioTokenSlots[3]; 	// 0x4c
	bool m_bIgnoreRadio; 	// 0x58
};

// Alignment: 0
// Size: 0x40
struct CCSPlayer_DamageReactServices //: public CPlayerPawnComponent
{ 
	CPlayerPawnComponent pawnComponent;
};

// Size: 0x20
#pragma pack(16)
struct CTransform
{
	Vector m_vPosition;
	Vector4D m_orientation;
};
#pragma pack(8)

// Alignment: 2
// Size: 0x60
struct CAttributeList // : public 
{
	uint8_t unknown0[8];
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
	void *m_Attributes; 	// 0x8
	uint8_t unknown1[0x48];
	void *m_pManager; 	// 0x58 CAttributeManager
};

// Alignment: 13
// Size: 0x278
struct CEconItemView // : public IEconItemInterface
{
	uint8_t unknown0[0x38];
	// MNetworkEnable
	uint16_t m_iItemDefinitionIndex; 	// 0x38
	// MNetworkEnable
	int32_t m_iEntityQuality; 	// 0x3c
	// MNetworkEnable
	uint32_t m_iEntityLevel; 	// 0x40
	uint64_t m_iItemID; 	// 0x48
	// MNetworkEnable
	uint32_t m_iItemIDHigh; 	// 0x50
	// MNetworkEnable
	uint32_t m_iItemIDLow; 	// 0x54
	// MNetworkEnable
	uint32_t m_iAccountID; 	// 0x58
	// MNetworkEnable
	uint32_t m_iInventoryPosition; 	// 0x5c
	uint8_t unknown1[8];
	// MNetworkEnable
	bool m_bInitialized; 	// 0x68
	// MNetworkEnable
	CAttributeList m_AttributeList; 	// 0x70
	// MNetworkEnable
	CAttributeList m_NetworkedDynamicAttributes; 	// 0xd0
	// MNetworkEnable
	char m_szCustomName[161]; 	// 0x130
	char m_szCustomNameOverride[161]; 	// 0x1d1
	uint8_t unknown2[6];
};

struct IHandleEntity // : public 
{
	uint8_t unknown[8];
};

union CUtlSymbolLarge
{
	int64_t m_Id;
	const char *m_pAsString;
};

// Alignment: 11
// Size: 0x78
struct CEntityIdentity // : public 
{ 
	uint8_t unknown0[0x14];
	// MNetworkEnable
	// MNetworkChangeCallback "entityIdentityNameChanged"
	int32_t m_nameStringableIndex; 	// 0x14
	CUtlSymbolLarge m_name; 	// 0x18
	CUtlSymbolLarge m_designerName; 	// 0x20
	uint8_t unknown1[8];
	uint32_t m_flags; 	// 0x30
	uint8_t unknown2[4];
	// MNetworkDisable
	int32_t m_worldGroupId; 	// 0x38
	uint32_t m_fDataObjectTypes; 	// 0x3c
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	int16_t m_PathIndex; 	// 0x40
	uint8_t unknown3[0x16];
	CEntityIdentity* m_pPrev; 	// 0x58
	CEntityIdentity* m_pNext; 	// 0x60
	CEntityIdentity* m_pPrevByClass; 	// 0x68
	CEntityIdentity* m_pNextByClass; 	// 0x70
};

// Alignment: 0
// Size: 0x8
struct CEntityComponent
{ 
	uint8_t unknown[8];
};

// Alignment: 1
// Size: 0x38
struct CScriptComponent : CEntityComponent
{
	uint8_t unknown[0x28];
	CUtlSymbolLarge m_scriptClassName; 	// 0x30
};

// Alignment: 3
// Size: 0x30
struct CEntityInstance : IHandleEntity
{
	// MNetworkDisable
	CUtlSymbolLarge m_iszPrivateVScripts; 	// 0x8
	// MNetworkEnable
	// MNetworkPriority "56"
	CEntityIdentity *m_pEntity; 	// 0x10
	uint8_t unknown[0x10];
	// MNetworkEnable
	// MNetworkDisable
	CScriptComponent *m_CScriptComponent; 	// 0x28
};

// Alignment: 1
// Size: 0x1a0
struct CNetworkTransmitComponent // : public 
{
	uint8_t unknown0[0x16c];
	uint8_t m_nTransmitStateOwnedCounter; 	// 0x16c
	uint8_t unknown1[0x33];
};

// Size: 0x18
struct CUtlVector // : public 
{
	uint8_t unknown[0x18];
};

struct CUtlString
{
	char *m_pMemory;
};

// Alignment: 1
// Size: 0x28
struct CEntityIOOutput
{ 
	uint8_t unknown[0x28];
};

typedef uint64_t CNetworkedQuantizedFloat;

// Alignment: 3
// Size: 0x28
struct CNetworkVelocityVector
{
	uint8_t unknown[0x10];
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecX; 	// 0x10
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecY; 	// 0x18
	// MNetworkBitCount "18"
	// MNetworkMinValue "-4096"
	// MNetworkMaxValue "4096"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkVelocityVector"
	CNetworkedQuantizedFloat m_vecZ; 	// 0x20
};

// Alignment: 8
// Size: 0x30
struct VPhysicsCollisionAttribute_t
{ 
	uint8_t unknown0[8];
	// MNetworkEnable
	uint64_t m_nInteractsAs; 	// 0x8
	// MNetworkEnable
	uint64_t m_nInteractsWith; 	// 0x10
	// MNetworkEnable
	uint64_t m_nInteractsExclude; 	// 0x18
	// MNetworkEnable
	uint32_t m_nEntityId; 	// 0x20
	// MNetworkEnable
	uint32_t m_nOwnerId; 	// 0x24
	// MNetworkEnable
	uint16_t m_nHierarchyId; 	// 0x28
	// MNetworkEnable
	uint8_t m_nCollisionGroup; 	// 0x2a
	// MNetworkEnable
	uint8_t m_nCollisionFunctionMask; 	// 0x2b
	uint8_t unknown1[4];
};

// Alignment: 17
// Size: 0xb0
struct CCollisionProperty
{ 
	uint8_t unknown0[0x10];
	// MNetworkEnable
	// MNetworkChangeCallback "CollisionAttributeChanged"
	VPhysicsCollisionAttribute_t m_collisionAttribute; 	// 0x10
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMins; 	// 0x40
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateOBB"
	Vector m_vecMaxs; 	// 0x4c
	uint8_t unknown1[2];
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidFlags"
	uint8_t m_usSolidFlags; 	// 0x5a
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateSolidType"
	SolidType_t m_nSolidType; 	// 0x5b
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	uint8_t m_triggerBloat; 	// 0x5c
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	SurroundingBoundsType_t m_nSurroundType; 	// 0x5d
	// MNetworkEnable
	uint8_t m_CollisionGroup; 	// 0x5e
	// MNetworkEnable
	// MNetworkChangeCallback "OnUpdateEnablePhysics"
	uint8_t m_nEnablePhysics; 	// 0x5f
	float m_flBoundingRadius; 	// 0x60
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMins; 	// 0x64
	// MNetworkEnable
	// MNetworkChangeCallback "MarkSurroundingBoundsDirty"
	Vector m_vecSpecifiedSurroundingMaxs; 	// 0x70
	Vector m_vecSurroundingMaxs; 	// 0x7c
	Vector m_vecSurroundingMins; 	// 0x88
	// MNetworkEnable
	Vector m_vCapsuleCenter1; 	// 0x94
	// MNetworkEnable
	Vector m_vCapsuleCenter2; 	// 0xa0
	// MNetworkEnable
	float m_flCapsuleRadius; 	// 0xac
};

// Alignment: 77
// Size: 0x4a0
struct CBaseEntity : public CEntityInstance
{
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "48"
	void *m_CBodyComponent; 	// 0x30 CBodyComponent
	CNetworkTransmitComponent m_NetworkTransmitComponent; 	// 0x38
	uint8_t unknown0[0x40];
	CUtlVector m_aThinkFunctions; 	// 0x218 CUtlVector< thinkfunc_t >
	int32_t m_iCurrentThinkContext; 	// 0x230
	int32_t m_nLastThinkTick; 	// 0x234
	uint8_t unknown[8];
	uint64_t m_isSteadyState; 	// 0x240
	float m_lastNetworkChange; 	// 0x248
	uint8_t unknown1[0xc];
	CUtlVector m_ResponseContexts; 	// 0x258
	CUtlSymbolLarge m_iszResponseContext; 	// 0x270
	uint8_t unknown2[0x20];
	// MNetworkEnable
	// MNetworkSerializer "ClampHealth"
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	int32_t m_iHealth; 	// 0x298
	// MNetworkEnable
	int32_t m_iMaxHealth; 	// 0x29c
	// MNetworkEnable
	// MNetworkUserGroup "Player"
	// MNetworkPriority "32"
	uint8_t m_lifeState; 	// 0x2a0
	float m_flDamageAccumulator; 	// 0x2a4
	// MNetworkEnable
	bool m_bTakesDamage; 	// 0x2a8
	// MNetworkEnable
	TakeDamageFlags_t m_nTakeDamageFlags; 	// 0x2ac
	// MNetworkEnable
	uint8_t unknown3;
	MoveCollide_t m_MoveCollide; 	// 0x2b1
	// MNetworkEnable
	MoveType_t m_MoveType; 	// 0x2b2
	uint8_t m_nWaterTouch; 	// 0x2b3
	uint8_t m_nSlimeTouch; 	// 0x2b4
	bool m_bRestoreInHierarchy; 	// 0x2b5
	CUtlSymbolLarge m_target; 	// 0x2b8
	float m_flMoveDoneTime; 	// 0x2c0
	CHandle m_hDamageFilter; 	// 0x2c4
	CUtlSymbolLarge m_iszDamageFilterName; 	// 0x2c8
	// MNetworkEnable
	// MNetworkSendProxyRecipientsFilter
	CUtlStringToken m_nSubclassID; 	// 0x2d0
	uint8_t unknown4[8];
	// MNetworkEnable
	// MNetworkPriority "0"
	// MNetworkSerializer "animTimeSerializer"
	// MNetworkSendProxyRecipientsFilter
	float m_flAnimTime; 	// 0x2e0
	// MNetworkEnable
	// MNetworkPriority "1"
	// MNetworkSerializer "simulationTimeSerializer"
	float m_flSimulationTime; 	// 0x2e4
	// MNetworkEnable
	float m_flCreateTime; 	// 0x2e8
	// MNetworkEnable
	bool m_bClientSideRagdoll; 	// 0x2ec
	// MNetworkEnable
	uint8_t m_ubInterpolationFrame; 	// 0x2ed
	Vector m_vPrevVPhysicsUpdatePos; 	// 0x2f0
	// MNetworkEnable
	uint8_t m_iTeamNum; 	// 0x2fc
	CUtlSymbolLarge m_iGlobalname; 	// 0x300
	int32_t m_iSentToClients; 	// 0x308
	float m_flSpeed; 	// 0x30c
	CUtlString *m_sUniqueHammerID; 	// 0x310
	// MNetworkEnable
	uint32_t m_spawnflags; 	// 0x318
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_nNextThinkTick; 	// 0x31c
	int32_t m_nSimulationTick; 	// 0x320
	uint8_t unknown5[4];
	CEntityIOOutput m_OnKilled; 	// 0x328
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	uint32_t m_fFlags; 	// 0x350
	Vector m_vecAbsVelocity; 	// 0x354
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	// MNetworkPriority "32"
	CNetworkVelocityVector m_vecVelocity; 	// 0x360
	uint8_t unknown6[8];
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	Vector m_vecBaseVelocity; 	// 0x390
	int32_t m_nPushEnumCount; 	// 0x39c
	CCollisionProperty *m_pCollision; 	// 0x3a0
	// MNetworkEnable
	CHandle m_hEffectEntity; 	// 0x3a8 // CHandle< CBaseEntity >
	// MNetworkEnable
	// MNetworkPriority "32"
	CHandle m_hOwnerEntity; 	// 0x3ac // CHandle< CBaseEntity >
	// MNetworkEnable
	// MNetworkChangeCallback "OnEffectsChanged"
	uint32_t m_fEffects; 	// 0x3b0
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CHandle m_hGroundEntity; 	// 0x3b4 // CHandle< CBaseEntity >
	// MNetworkEnable
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "4"
	// MNetworkEncodeFlags
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFriction; 	// 0x3b8
	// MNetworkEnable
	// MNetworkEncoder
	float m_flElasticity; 	// 0x3bc
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flGravityScale; 	// 0x3c0
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flTimeScale; 	// 0x3c4
	// MNetworkEnable
	// MNetworkUserGroup "Water"
	// MNetworkBitCount "8"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	float m_flWaterLevel; 	// 0x3c8
	// MNetworkEnable
	bool m_bSimulatedEveryTick; 	// 0x3cc
	// MNetworkEnable
	bool m_bAnimatedEveryTick; 	// 0x3cd
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMinCPULevel; 	// 0x3ce
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMaxCPULevel; 	// 0x3cf
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMinGPULevel; 	// 0x3d0
	// MNetworkEnable
	// MNetworkUserGroup "ScalabilityOptions"
	uint8_t m_nMaxGPULevel; 	// 0x3d1
	bool m_bDisableLowViolence; 	// 0x3d2
	uint8_t m_nWaterType; 	// 0x3d3
	int32_t m_iEFlags; 	// 0x3d4
	CEntityIOOutput m_OnUser1; 	// 0x3d8
	CEntityIOOutput m_OnUser2; 	// 0x400
	CEntityIOOutput m_OnUser3; 	// 0x428
	CEntityIOOutput m_OnUser4; 	// 0x450
	int32_t m_iInitialTeamNum; 	// 0x478
	// MNetworkEnable
	float m_flNavIgnoreUntilTime; 	// 0x47c
	Vector m_vecAngVelocity; 	// 0x480
	bool m_bNetworkQuantizeOriginAndAngles; 	// 0x48c
	bool m_bLagCompensate; 	// 0x48d
	float m_flOverriddenFriction; 	// 0x490
	CHandle m_pBlocker; 	// 0x494 CHandle< CBaseEntity >
	float m_flLocalTime; 	// 0x498
	float m_flVPhysicsUpdateLocalTime; 	// 0x49c
};

// Alignment: 5
// Size: 0xb8
struct CRenderComponent : CEntityComponent
{
	uint8_t unknown0[8];
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; 	// 0x10
	uint8_t unknown1[0x18];
	bool m_bIsRenderingWithViewModels; 	// 0x50
	uint32_t m_nSplitscreenFlags; 	// 0x54
	uint8_t unknown2[8];
	bool m_bEnableRendering; 	// 0x60
	uint8_t unknown3[0x4f];
	bool m_bInterpolationReadyToDraw; 	// 0xb0
	uint8_t unknown4[7];
};

// Alignment: 1
// Size: 0x28
struct CHitboxComponent : CEntityComponent
{ 
	uint8_t unknown[0x1c];
	// MNetworkEnable
	uint32_t m_bvDisabledHitGroups[1]; 	// 0x24
};

struct Color
{
	uint8_t r;
	uint8_t g;
	uint8_t b;
	uint8_t a;
};

struct CUtlVectorEmbeddedNetworkVar
{
	uint8_t unknown[0x50];
};


// Alignment: 11
// Size: 0x58
struct CGlowProperty
{
	uint8_t unknown0[8];
	Vector m_fGlowColor; 	// 0x8
	uint8_t unknown1[0x1C];
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowTypeChanged"
	int32_t m_iGlowType; 	// 0x30
	// MNetworkEnable
	int32_t m_iGlowTeam; 	// 0x34
	// MNetworkEnable
	int32_t m_nGlowRange; 	// 0x38
	// MNetworkEnable
	int32_t m_nGlowRangeMin; 	// 0x3c
	// MNetworkEnable
	// MNetworkChangeCallback "OnGlowColorChanged"
	Color m_glowColorOverride; 	// 0x40
	// MNetworkEnable
	bool m_bFlashing; 	// 0x44
	// MNetworkEnable
	float m_flGlowTime; 	// 0x48
	// MNetworkEnable
	float m_flGlowStartTime; 	// 0x4c
	// MNetworkEnable
	bool m_bEligibleForScreenHighlight; 	// 0x50
	bool m_bGlowing; 	// 0x51
	uint8_t unknown2[7];
};

// Size: 0x18
struct CNetworkUtlVectorBase
{
	uint8_t unknown[0x18];
};

// Alignment: 3
// Size: 0x28
struct CNetworkViewOffsetVector
{ 
	uint8_t unknown[0x10];
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecX; 	// 0x10
	// MNetworkBitCount "10"
	// MNetworkMinValue "-64"
	// MNetworkMaxValue "64"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecY; 	// 0x18
	// MNetworkBitCount "20"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "128"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "CNetworkViewOffsetVector"
	CNetworkedQuantizedFloat m_vecZ; 	// 0x20
};

// Alignment: 26
// Size: 0x6f0
struct CBaseModelEntity : CBaseEntity
{ 
	// MNetworkEnable
	// MNetworkUserGroup "CRenderComponent"
	// MNetworkAlias "CRenderComponent"
	// MNetworkTypeAlias "CRenderComponent"
	CRenderComponent* m_CRenderComponent; 	// 0x4a0
	// MNetworkEnable
	// MNetworkUserGroup "CHitboxComponent"
	// MNetworkAlias "CHitboxComponent"
	// MNetworkTypeAlias "CHitboxComponent"
	CHitboxComponent m_CHitboxComponent; 	// 0x4a8
	float m_flDissolveStartTime; 	// 0x4d0
	uint8_t unknown0[4];
	CEntityIOOutput m_OnIgnite; 	// 0x4d8
	// MNetworkEnable
	RenderMode_t m_nRenderMode; 	// 0x500
	// MNetworkEnable
	RenderFx_t m_nRenderFX; 	// 0x501
	bool m_bAllowFadeInView; 	// 0x502
	// MNetworkEnable
	// MNetworkChangeCallback "OnColorChanged"
	Color m_clrRender; 	// 0x503
	// MNetworkEnable
	// MNetworkChangeCallback "OnRenderAttributesChanged"
	CUtlVectorEmbeddedNetworkVar m_vecRenderAttributes; 	// 0x508 CUtlVectorEmbeddedNetworkVar< EntityRenderAttribute_t >
	// MNetworkEnable
	// MNetworkChangeCallback "OnLightGroupChanged"
	CUtlStringToken m_LightGroup; 	// 0x558
	// MNetworkEnable
	bool m_bRenderToCubemaps; 	// 0x55c
	// MNetworkEnable
	CCollisionProperty m_Collision; 	// 0x560
	// MNetworkEnable
	CGlowProperty m_Glow; 	// 0x610
	// MNetworkEnable
	float m_flGlowBackfaceMult; 	// 0x668
	// MNetworkEnable
	float m_fadeMinDist; 	// 0x66c
	// MNetworkEnable
	float m_fadeMaxDist; 	// 0x670
	// MNetworkEnable
	float m_flFadeScale; 	// 0x674
	// MNetworkEnable
	float m_flShadowStrength; 	// 0x678
	// MNetworkEnable
	uint8_t m_nObjectCulling; 	// 0x67c
	// MNetworkEnable
	int32_t m_nAddDecal; 	// 0x680
	// MNetworkEnable
	Vector m_vDecalPosition; 	// 0x684
	// MNetworkEnable
	Vector m_vDecalForwardAxis; 	// 0x690
	// MNetworkEnable
	float m_flDecalHealBloodRate; 	// 0x69c
	// MNetworkEnable
	float m_flDecalHealHeightRate; 	// 0x6a0
	// MNetworkEnable
	CNetworkUtlVectorBase m_ConfigEntitiesToPropagateMaterialDecalsTo; 	// 0x6a8 CNetworkUtlVectorBase< CHandle< CBaseModelEntity > >
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Player"
	CNetworkViewOffsetVector m_vecViewOffset; 	// 0x6c0
	uint8_t unknown1[8];
};

// Alignment: 2
// Size: 0x48
struct PhysicsRagdollPose_t
{
	uint8_t unknown[8];
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; 	// 0x8
	// MNetworkEnable
	// MNetworkChangeCallback "OnTransformChanged"
	CNetworkUtlVectorBase m_Transforms; 	// 0x30 CNetworkUtlVectorBase< CTransform >
};

// Alignment: 0
// Size: 0x8
struct IChoreoServices
{
	uint8_t unknown[8];
};

// Alignment: 11
// Size: 0x820
class CBaseAnimGraph : CBaseModelEntity
{
	uint8_t unknown0[0x10];
	// MNetworkEnable
	PhysicsRagdollPose_t *m_pRagdollPose; 	// 0x700
	// MNetworkEnable
	// MNetworkChangeCallback "OnClientRagdollChanged"
	bool m_bClientRagdoll; 	// 0x708
	// MNetworkEnable
	Vector m_vecForce; 	// 0x70c
	// MNetworkEnable
	int32_t m_nForceBone; 	// 0x718
	// MNetworkEnable
	bool m_bShouldAnimateDuringGameplayPause; 	// 0x71c
	// MNetworkEnable
	bool m_bAnimGraphUpdateEnabled; 	// 0x71d
	// MNetworkEnable
	bool m_bInitiallyPopulateInterpHistory; 	// 0x71e
	float m_flMaxSlopeDistance; 	// 0x720
	Vector m_vLastSlopeCheckPos; 	// 0x724
	IChoreoServices *m_pChoreoServices; 	// 0x730
	bool m_bAnimGraphDirty; 	// 0x738
	uint8_t unknown1[0xE7];
};

// Alignment: 7
// Size: 0x8b0
struct CBaseFlex : CBaseAnimGraph
{ 
	// MNetworkEnable
	// MNetworkBitCount "12"
	// MNetworkMinValue "0"
	// MNetworkMaxValue "1"
	// MNetworkEncodeFlags
	CNetworkUtlVectorBase m_flexWeight; 	// 0x820 CNetworkUtlVectorBase< float32 >
	// MNetworkEnable
	// MNetworkEncoder
	Vector m_vLookTargetPosition; 	// 0x838
	// MNetworkEnable
	bool m_blinktoggle; 	// 0x844
	uint8_t unknown0[0x53];
	float m_flAllowResponsesEndTime; 	// 0x898
	float m_flLastFlexAnimationTime; 	// 0x89c
	uint32_t m_nNextSceneEventId; 	// 0x8a0
	bool m_bUpdateLayerPriorities; 	// 0x8a4
	uint8_t unknown1[8];
};

// Alignment: 14
// Size: 0x968
struct CBaseCombatCharacter : CBaseFlex
{ 
	bool m_bForceServerRagdoll; 	// 0x8b0
	uint8_t unknown0[7];
	// MNetworkEnable
	CNetworkUtlVectorBase m_hMyWearables; 	// 0x8b8 CNetworkUtlVectorBase< CHandle< CEconWearable > >
	// MNetworkEnable
	float m_flFieldOfView; 	// 0x8d0
	float m_impactEnergyScale; 	// 0x8d4
	HitGroup_t m_LastHitGroup; 	// 0x8d8
	bool m_bApplyStressDamage; 	// 0x8dc
	int32_t m_bloodColor; 	// 0x8e0
	uint8_t unknown1[0x5C];
	int32_t m_registeredNavTeam; 	// 0x940
	int32_t m_navMeshID; 	// 0x944
	int32_t m_iDamageCount; 	// 0x948
	CUtlVector *m_pVecRelationships; 	// 0x950 CUtlVector< RelationshipOverride_t > *
	CUtlSymbolLarge m_strRelationships; 	// 0x958
	Hull_t m_eHull; 	// 0x960
	uint32_t m_nNavHullIdx; 	// 0x964
};

// Alignment: 4
// Size: 0x50
struct CPlayer_ObserverServices : public CPlayerPawnComponent
{
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverModeChanged"
	uint8_t m_iObserverMode; 	// 0x40
	// MNetworkEnable
	// MNetworkChangeCallback "OnObserverTargetChanged"
	CHandle m_hObserverTarget; 	// 0x44 CHandle< CBaseEntity >
	ObserverMode_t m_iObserverLastMode; 	// 0x48
	bool m_bForcedObserverMode; 	// 0x4c
};

// Alignment: 0
// Size: 0x40
struct CPlayer_UseServices : public CPlayerPawnComponent
{
	
};

// Alignment: 0
// Size: 0x40
struct CPlayer_WaterServices : public CPlayerPawnComponent
{
};

// Alignment: 6
// Size: 0xb0
struct CPlayer_WeaponServices : public CPlayerPawnComponent
{ 
	bool m_bAllowSwitchToNoWeapon; 	// 0x40
	uint8_t padding[7];
	// MNetworkEnable
	CNetworkUtlVectorBase m_hMyWeapons; 	// 0x48 CNetworkUtlVectorBase< CHandle< CBasePlayerWeapon > >
	// MNetworkEnable
	CHandle m_hActiveWeapon; 	// 0x60 CHandle< CBasePlayerWeapon >
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CHandle m_hLastWeapon; 	// 0x64 CHandle< CBasePlayerWeapon >
	// MNetworkEnable
	uint16_t m_iAmmo[32]; 	// 0x68
	bool m_bPreventWeaponPickup; 	// 0xa8
	uint8_t unknown[7];
};

// Alignment: 0
// Size: 0x40
struct CPlayer_ItemServices : CPlayerPawnComponent
{ 
};

// Alignment: 0
// Size: 0x40
struct CPlayer_AutoaimServices : CPlayerPawnComponent
{ 
};

// Alignment: 0
// Size: 0x40
struct CPlayer_FlashlightServices : CPlayerPawnComponent
{ 
};

// Alignment: 14
// Size: 0x40
struct fogplayerparams_t
{
	uint8_t unknown[8];
	// MNetworkEnable
	// MNetworkUserGroup "PlayerFogController"
	CHandle m_hCtrl; 	// 0x8 CHandle< CFogController >
	float m_flTransitionTime; 	// 0xc
	Color m_OldColor; 	// 0x10
	float m_flOldStart; 	// 0x14
	float m_flOldEnd; 	// 0x18
	float m_flOldMaxDensity; 	// 0x1c
	float m_flOldHDRColorScale; 	// 0x20
	float m_flOldFarZ; 	// 0x24
	Color m_NewColor; 	// 0x28
	float m_flNewStart; 	// 0x2c
	float m_flNewEnd; 	// 0x30
	float m_flNewMaxDensity; 	// 0x34
	float m_flNewHDRColorScale; 	// 0x38
	float m_flNewFarZ; 	// 0x3c
};

// Alignment: 5
// Size: 0x78
struct audioparams_t
{
	uint8_t unknown[8];
	// MNetworkEnable
	// MNetworkEncoder
	Vector localSound[8]; 	// 0x8
	// MNetworkEnable
	int32_t soundscapeIndex; 	// 0x68
	// MNetworkEnable
	uint8_t localBits; 	// 0x6c
	// MNetworkEnable
	int32_t soundscapeEntityListIndex; 	// 0x70
	// MNetworkEnable
	uint32_t soundEventHash; 	// 0x74
};

// Alignment: 17
// Size: 0x188
struct CPlayer_CameraServices : CPlayerPawnComponent
{ 
	// MNetworkEnable
	uint32_t m_iFOV; 	// 0x40
	// MNetworkEnable
	uint32_t m_iFOVStart; 	// 0x44
	// MNetworkEnable
	float m_flFOVTime; 	// 0x48
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flFOVRate; 	// 0x4c
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkBitCount "32"
	Vector m_vecPunchAngle; 	// 0x50
	// MNetworkEnable
	// MNetworkBitCount "32"
	Vector m_vecPunchAngleVel; 	// 0x5c
	// MNetworkEnable
	// MNetworkChangeCallback "OnPunchJoltChanged"
	float m_nPunchAngleJoltTick; 	// 0x68
	// MNetworkEnable
	CHandle m_hZoomOwner; 	// 0x6c CHandle< CBaseEntity >
	// MNetworkEnable
	fogplayerparams_t m_PlayerFog; 	// 0x70
	// MNetworkEnable
	CHandle m_hColorCorrectionCtrl; 	// 0xb0 CHandle< CColorCorrection >
	// MNetworkEnable
	CHandle m_hViewEntity; 	// 0xb4 CHandle< CBaseEntity >
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CHandle m_hTonemapController; 	// 0xb8 CHandle< CTonemapController2 >
	uint8_t unknown0[4];
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	audioparams_t m_audio; 	// 0xc0
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerAndObserversExclusive"
	CNetworkUtlVectorBase m_PostProcessingVolumes; 	// 0x138 CNetworkUtlVectorBase< CHandle< CPostProcessingVolume > >
	float m_flOldPlayerZ; 	// 0x150
	float m_flOldPlayerViewOffsetZ; 	// 0x154
	uint8_t unknown1[0x18];
	CUtlVector m_hTriggerSoundscapeList; 	// 0x170 CUtlVector< CHandle< CEnvSoundscapeTriggerable > >
};

// Alignment: 25
// Size: 0x68
struct fogparams_t
{
	uint8_t unknown[8];
	// MNetworkEnable
	// MNetworkEncoder
	Vector dirPrimary; 	// 0x8
	// MNetworkEnable
	Color colorPrimary; 	// 0x14
	// MNetworkEnable
	Color colorSecondary; 	// 0x18
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorPrimaryLerpTo; 	// 0x1c
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	Color colorSecondaryLerpTo; 	// 0x20
	// MNetworkEnable
	float start; 	// 0x24
	// MNetworkEnable
	float end; 	// 0x28
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float farz; 	// 0x2c
	// MNetworkEnable
	float maxdensity; 	// 0x30
	// MNetworkEnable
	float exponent; 	// 0x34
	// MNetworkEnable
	float HDRColorScale; 	// 0x38
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactor; 	// 0x3c
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float skyboxFogFactorLerpTo; 	// 0x40
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float startLerpTo; 	// 0x44
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float endLerpTo; 	// 0x48
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float maxdensityLerpTo; 	// 0x4c
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float lerptime; 	// 0x50
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float duration; 	// 0x54
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float blendtobackground; 	// 0x58
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float scattering; 	// 0x5c
	// MNetworkEnable
	// MNetworkUserGroup "FogController"
	float locallightscale; 	// 0x60
	// MNetworkEnable
	bool enable; 	// 0x64
	// MNetworkEnable
	bool blend; 	// 0x65
	// MNetworkEnable
	bool m_bNoReflectionFog; 	// 0x66
	bool m_bPadding; 	// 0x67
};

typedef uint32_t WorldGroupId_t;

// Alignment: 6
// Size: 0x90
struct sky3dparams_t
{
	uint8_t unknown[8];
	// MNetworkEnable
	int16_t scale; 	// 0x8
	// MNetworkEnable
	// MNetworkEncoder
	Vector origin; 	// 0xc
	// MNetworkEnable
	bool bClip3DSkyBoxNearToWorldFar; 	// 0x18
	// MNetworkEnable
	float flClip3DSkyBoxNearToWorldFarOffset; 	// 0x1c
	// MNetworkEnable
	fogparams_t fog; 	// 0x20
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupID; 	// 0x88
	uint8_t padding[4];
};

// Alignment: 9
// Size: 0x60
struct CAI_Expresser
{
	uint8_t unknown[0x38];
	float m_flStopTalkTime; 	// 0x38
	float m_flStopTalkTimeWithoutDelay; 	// 0x3c
	float m_flBlockedTalkTime; 	// 0x40
	int32_t m_voicePitch; 	// 0x44
	float m_flLastTimeAcceptedSpeak; 	// 0x48
	bool m_bAllowSpeakingInterrupts; 	// 0x4c
	bool m_bConsiderSceneInvolvementAsSpeech; 	// 0x4d
	int32_t m_nLastSpokenPriority; 	// 0x50
	CBaseFlex *m_pOuter; 	// 0x58
};

typedef uint32_t CEntityIndex;

// Alignment: 22
// Size: 0xaa0
struct CBasePlayerPawn : CBaseCombatCharacter
{ 
	// MNetworkEnable
	CPlayer_WeaponServices *m_pWeaponServices; 	// 0x968
	// MNetworkEnable
	CPlayer_ItemServices *m_pItemServices; 	// 0x970
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	CPlayer_AutoaimServices *m_pAutoaimServices; 	// 0x978
	// MNetworkEnable
	CPlayer_ObserverServices *m_pObserverServices; 	// 0x980
	// MNetworkEnable
	CPlayer_WaterServices *m_pWaterServices; 	// 0x988
	// MNetworkEnable
	CPlayer_UseServices *m_pUseServices; 	// 0x990
	// MNetworkEnable
	CPlayer_FlashlightServices *m_pFlashlightServices; 	// 0x998
	// MNetworkEnable
	CPlayer_CameraServices *m_pCameraServices; 	// 0x9a0
	// MNetworkEnable
	CPlayer_MovementServices *m_pMovementServices; 	// 0x9a8
	uint8_t unknown0[8];
	Vector v_angle; 	// 0x9b8
	uint8_t unknown1[0x10];
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	uint32_t m_iHideHUD; 	// 0x9d4
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	sky3dparams_t m_skybox3d; 	// 0x9d8
	float m_fTimeLastHurt; 	// 0xa68
	// MNetworkEnable
	float m_flDeathTime; 	// 0xa6c
	float m_fNextSuicideTime; 	// 0xa70
	bool m_fInitHUD; 	// 0xa74
	float m_flNextDecalTime; 	// 0xa78
	CAI_Expresser *m_pExpresser; 	// 0xa80
	// MNetworkEnable
	CHandle m_hController; 	// 0xa88 CHandle< CBasePlayerController >
	uint8_t unknown2[4];
	float m_fHltvReplayDelay; 	// 0xa90
	float m_fHltvReplayEnd; 	// 0xa94
	CEntityIndex m_iHltvReplayEntity; 	// 0xa98
	uint8_t unknown3[4];
};

// Alignment: 0
// Size: 0x20
struct CTouchExpansionComponent : CEntityComponent
{ 
	uint8_t unknown[0x18];
};

// Alignment: 6
// Size: 0x50
struct CAttributeManager
{
	uint8_t unknown0[8];
	CUtlVector m_Providers; 	// 0x8 CUtlVector< CHandle< CBaseEntity > >
	// MNetworkEnable
	int32_t m_iReapplyProvisionParity; 	// 0x20
	// MNetworkEnable
	CHandle m_hOuter; 	// 0x24 CHandle< CBaseEntity >
	bool m_bPreventLoopback; 	// 0x28
	// MNetworkEnable
	attributeprovidertypes_t m_ProviderType; 	// 0x2c
	CUtlVector m_CachedResults; 	// 0x30 CUtlVector< CAttributeManager::cached_attribute_float_t >
	uint8_t unknown1[8];
};

// Alignment: 1
// Size: 0x2c8
struct CAttributeContainer : CAttributeManager
{ 
	// MNetworkEnable
	CEconItemView m_Item; 	// 0x50
};

// Alignment: 9
// Size: 0xba8
struct CEconEntity : CBaseFlex
{
	uint8_t unknown[0x10];
	// MNetworkEnable
	CAttributeContainer m_AttributeManager; 	// 0x8c0
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidLow; 	// 0xb88
	// MNetworkEnable
	uint32_t m_OriginalOwnerXuidHigh; 	// 0xb8c
	// MNetworkEnable
	int32_t m_nFallbackPaintKit; 	// 0xb90
	// MNetworkEnable
	int32_t m_nFallbackSeed; 	// 0xb94
	// MNetworkEnable
	float m_flFallbackWear; 	// 0xb98
	// MNetworkEnable
	int32_t m_nFallbackStatTrak; 	// 0xb9c
	CHandle m_hOldProvidee; 	// 0xba0 CHandle< CBaseEntity >
	int32_t m_iOldOwnerClass; 	// 0xba4
};

// Alignment: 10
// Size: 0xbf8
struct CBasePlayerWeapon : CEconEntity
{
	// MNetworkEnable
	// MNetworkChangeCallback "OnWeaponStateChanged"
	WeaponState_t m_iState; 	// 0xba8
	bool m_bRemoveable; 	// 0xbac
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nNextPrimaryAttackTick; 	// 0xbb0
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextPrimaryAttackTickRatio; 	// 0xbb4
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	uint32_t m_nNextSecondaryAttackTick; 	// 0xbb8
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	float m_flNextSecondaryAttackTickRatio; 	// 0xbbc
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkPriority "32"
	int32_t m_iClip1; 	// 0xbc0
	// MNetworkEnable
	// MNetworkSerializer "minusone"
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_iClip2; 	// 0xbc4
	// MNetworkEnable
	// MNetworkUserGroup "LocalWeaponExclusive"
	int32_t m_pReserveAmmo[2]; 	// 0xbc8
	CEntityIOOutput m_OnPlayerUse; 	// 0xbd0
};

// Alignment: 4
// Size: 0xa70
struct CCSPlayer_ActionTrackingServices : CPlayerPawnComponent
{
	uint8_t unknown0[0x1F0];
	CBasePlayerWeapon *m_lastWeaponBeforeC4AutoSwitch; 	// 0x230
	uint8_t unknown1[0x30];
	// MNetworkEnable
	bool m_bIsRescuing; 	// 0x268
	// MNetworkEnable
	int32_t m_iWeaponPurchasesThisMatch[256]; 	// 0x26c
	// MNetworkEnable
	int32_t m_iWeaponPurchasesThisRound[256]; 	// 0x66c
	uint8_t unknown2[4];
};

// Alignment: 1
// Size: 0x50
struct CCSPlayer_ViewModelServices : CPlayerPawnComponent
{
	// MNetworkEnable
	CHandle m_hViewModel[3]; 	// 0x40 CHandle< CBaseViewModel >
};

// Alignment: 2
// Size: 0x18
struct EntitySpottedState_t
{
	uint8_t unknown0[8];
	// MNetworkEnable
	// MNetworkChangeCallback "OnIsSpottedChanged"
	bool m_bSpotted; 	// 0x8
	// MNetworkEnable
	// MNetworkChangeCallback "OnIsSpottedChanged"
	uint32_t m_bSpottedByMask[2]; 	// 0xc
	uint8_t unknown1[4];
};

// Alignment: 4
// Size: 0x18
struct CountdownTimer
{
	uint8_t unknown[8];
	// MNetworkEnable
	float m_duration; 	// 0x8
	// MNetworkEnable
	float m_timestamp; 	// 0xc
	// MNetworkEnable
	float m_timescale; 	// 0x10
	// MNetworkEnable
	WorldGroupId_t m_nWorldGroupId; 	// 0x14
};

typedef uint64_t CStrongHandle;

// Alignment: 189
// Size: 0x1570
struct CCSPlayerPawnBase : CBasePlayerPawn
{
	uint8_t unknown0[0x10];
	// MNetworkEnable
	// MNetworkUserGroup "CTouchExpansionComponent"
	// MNetworkAlias "CTouchExpansionComponent"
	// MNetworkTypeAlias "CTouchExpansionComponent"
	CTouchExpansionComponent m_CTouchExpansionComponent; 	// 0xab0
	// MNetworkEnable
	CCSPlayer_ActionTrackingServices *m_pActionTrackingServices; 	// 0xad0
	// MNetworkEnable
	CCSPlayer_ViewModelServices *m_pViewModelServices; 	// 0xad8
	uint32_t m_iDisplayHistoryBits; 	// 0xae0
	float m_flLastAttackedTeammate; 	// 0xae4
	// MNetworkEnable
	CHandle m_hOriginalController; 	// 0xae8 CHandle< CCSPlayerController >
	float m_blindUntilTime; 	// 0xaec
	float m_blindStartTime; 	// 0xaf0
	float m_allowAutoFollowTime; 	// 0xaf4
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; 	// 0xaf8
	int32_t m_nSpotRules; 	// 0xb10
	// MNetworkEnable
	float m_flTimeOfLastInjury; 	// 0xb14
	// MNetworkEnable
	RelativeDamagedDirection_t m_nRelativeDirectionOfLastInjury; 	// 0xb18
	// MNetworkEnable
	CSPlayerState m_iPlayerState; 	// 0xb1c
	uint8_t unknown1[8];
	CountdownTimer m_chickenIdleSoundTimer; 	// 0xb28
	CountdownTimer m_chickenJumpSoundTimer; 	// 0xb40
	uint8_t unknown2[0xA0];
	Vector m_vecLastBookmarkedPosition; 	// 0xbf8
	float m_flLastDistanceTraveledNotice; 	// 0xc04
	float m_flAccumulatedDistanceTraveled; 	// 0xc08
	float m_flLastFriendlyFireDamageReductionRatio; 	// 0xc0c
	bool m_bRespawning; 	// 0xc10
	int32_t m_iNumGunGameTRBombTotalPoints; 	// 0xc14
	bool m_bShouldProgressGunGameTRBombModeWeapon; 	// 0xc18
	int32_t m_nLastPickupPriority; 	// 0xc1c
	float m_flLastPickupPriorityTime; 	// 0xc20
	// MNetworkEnable
	bool m_passiveItems[4]; 	// 0xc24
	// MNetworkEnable
	bool m_bIsScoped; 	// 0xc28
	// MNetworkEnable
	bool m_bIsWalking; 	// 0xc29
	// MNetworkEnable
	bool m_bResumeZoom; 	// 0xc2a
	// MNetworkEnable
	bool m_bIsDefusing; 	// 0xc2b
	// MNetworkEnable
	bool m_bIsGrabbingHostage; 	// 0xc2c
	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; 	// 0xc30
	// MNetworkEnable
	float m_fImmuneToGunGameDamageTime; 	// 0xc34
	// MNetworkEnable
	bool m_bGunGameImmunity; 	// 0xc38
	// MNetworkEnable
	bool m_bMadeFinalGunGameProgressiveKill; 	// 0xc39
	// MNetworkEnable
	int32_t m_iGunGameProgressiveWeaponIndex; 	// 0xc3c
	// MNetworkEnable
	int32_t m_iNumGunGameTRKillPoints; 	// 0xc40
	// MNetworkEnable
	int32_t m_iNumGunGameKillsWithCurrentWeapon; 	// 0xc44
	// MNetworkEnable
	uint32_t m_unTotalRoundDamageDealt; 	// 0xc48
	// MNetworkEnable
	float m_fMolotovDamageTime; 	// 0xc4c
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; 	// 0xc50
	// MNetworkEnable
	bool m_bCanMoveDuringFreezePeriod; 	// 0xc51
	// MNetworkEnable
	bool m_isCurrentGunGameLeader; 	// 0xc52
	// MNetworkEnable
	bool m_isCurrentGunGameTeamLeader; 	// 0xc53
	// MNetworkEnable
	float m_flGuardianTooFarDistFrac; 	// 0xc54
	float m_flNextGuardianTooFarHurtTime; 	// 0xc58
	// MNetworkEnable
	float m_flDetectedByEnemySensorTime; 	// 0xc5c
	// MNetworkEnable
	bool m_bIsSpawnRappelling; 	// 0xc60
	// MNetworkEnable
	Vector m_vecSpawnRappellingRopeOrigin; 	// 0xc64
	// MNetworkEnable
	int32_t m_nSurvivalTeam; 	// 0xc70
	// MNetworkEnable
	CHandle m_hSurvivalAssassinationTarget; 	// 0xc74 CHandle< CCSPlayerPawnBase >
	int32_t m_nCompletedSurvivalAssassinations; 	// 0xc78
	float m_flDealtDamageToEnemyMostRecentTimestamp; 	// 0xc7c
	// MNetworkEnable
	float m_flHealthShotBoostExpirationTime; 	// 0xc80
	float m_flLastEquippedHelmetTime; 	// 0xc84
	float m_flLastEquippedArmorTime; 	// 0xc88
	// MNetworkEnable
	int32_t m_nHeavyAssaultSuitCooldownRemaining; 	// 0xc8c
	bool m_bResetArmorNextSpawn; 	// 0xc90
	// MNetworkEnable
	float m_flLastExoJumpTime; 	// 0xc94
	float m_flLastBumpMineBumpTime; 	// 0xc98
	uint8_t unknown3[12];
	bool m_bEscaped; 	// 0xca8
	bool m_bIsVIP; 	// 0xca9
	int32_t m_iNumSpawns; 	// 0xcac
	int32_t m_iShouldHaveCash; 	// 0xcb0
	bool m_bJustKilledTeammate; 	// 0xcb4
	bool m_bPunishedForTK; 	// 0xcb5
	bool m_bInvalidSteamLogonDelayed; 	// 0xcb6
	int32_t m_iTeamKills; 	// 0xcb8
	float m_flLastAction; 	// 0xcbc
	float m_flNameChangeHistory[5]; 	// 0xcc0
	float m_fLastGivenDefuserTime; 	// 0xcd4
	float m_fLastGivenBombTime; 	// 0xcd8
	// MNetworkEnable
	bool m_bHasNightVision; 	// 0xcdc
	// MNetworkEnable
	bool m_bNightVisionOn; 	// 0xcdd
	float m_fNextRadarUpdateTime; 	// 0xce0
	float m_flLastMoneyUpdateTime; 	// 0xce4
	char m_MenuStringBuffer[1024]; 	// 0xce8
	CHandle m_pIntroCamera; 	// 0x10e8 CHandle< CBaseEntity >
	float m_fIntroCamTime; 	// 0x10ec
	int32_t m_nMyCollisionGroup; 	// 0x10f0
	// MNetworkEnable
	bool m_bInBombZone; 	// 0x10f4
	// MNetworkEnable
	bool m_bInBuyZone; 	// 0x10f5
	// MNetworkEnable
	bool m_bInNoDefuseArea; 	// 0x10f6
	// MNetworkEnable
	bool m_bKilledByTaser; 	// 0x10f7
	// MNetworkEnable
	int32_t m_iMoveState; 	// 0x10f8
	CStrongHandle m_nPreviousModelIndex; 	// 0x1100 CStrongHandle< InfoForResourceTypeCModel >
	float m_grenadeParameterStashTime; 	// 0x1108
	bool m_bGrenadeParametersStashed; 	// 0x110c
	Vector m_angStashedShootAngles; 	// 0x1110
	Vector m_vecStashedGrenadeThrowPosition; 	// 0x111c
	Vector m_vecStashedVelocity; 	// 0x1128
	Vector m_angShootAngleHistory[2]; 	// 0x1134
	Vector m_vecThrowPositionHistory[2]; 	// 0x114c
	Vector m_vecVelocityHistory[2]; 	// 0x1164
	uint16_t m_nCharacterDefIndex; 	// 0x117c
	bool m_bDiedAirborne; 	// 0x117e
	CEntityIndex m_iBombSiteIndex; 	// 0x1180
	// MNetworkEnable
	int32_t m_nWhichBombZone; 	// 0x1184
	bool m_bInBombZoneTrigger; 	// 0x1188
	bool m_bWasInBombZoneTrigger; 	// 0x1189
	bool m_bWasInHostageRescueZone; 	// 0x118a
	bool m_bWasInBuyZone; 	// 0x118b
	// MNetworkEnable
	bool m_bInHostageRescueZone; 	// 0x118c
	// MNetworkEnable
	float m_flStamina; 	// 0x1190
	// MNetworkEnable
	int32_t m_iDirection; 	// 0x1194
	// MNetworkEnable
	int32_t m_iShotsFired; 	// 0x1198
	// MNetworkEnable
	int32_t m_ArmorValue; 	// 0x119c
	float m_flFlinchStack; 	// 0x11a0
	// MNetworkEnable
	float m_flVelocityModifier; 	// 0x11a4
	// MNetworkEnable
	float m_flGroundAccelLinearFracLastTime; 	// 0x11a8
	int32_t m_iHostagesKilled; 	// 0x11ac
	Vector m_vecTotalBulletForce; 	// 0x11b0
	// MNetworkEnable
	float m_flFlashDuration; 	// 0x11bc
	// MNetworkEnable
	float m_flFlashMaxAlpha; 	// 0x11c0
	// MNetworkEnable
	float m_flProgressBarStartTime; 	// 0x11c4
	// MNetworkEnable
	int32_t m_iProgressBarDuration; 	// 0x11c8
	// MNetworkEnable
	bool m_bWaitForNoAttack; 	// 0x11cc
	// MNetworkEnable
	bool m_bIsRespawningForDMBonus; 	// 0x11cd
	// MNetworkEnable
	float m_flLowerBodyYawTarget; 	// 0x11d0
	// MNetworkEnable
	bool m_bStrafing; 	// 0x11d4
	Vector m_lastStandingPos; 	// 0x11d8
	float m_ignoreLadderJumpTime; 	// 0x11e4
	CountdownTimer m_ladderSurpressionTimer; 	// 0x11e8
	Vector m_lastLadderNormal; 	// 0x1200
	Vector m_lastLadderPos; 	// 0x120c
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkBitCount "32"
	// MNetworkPriority "32"
	Vector m_thirdPersonHeading; 	// 0x1218
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; 	// 0x1224
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; 	// 0x1228
	// MNetworkEnable
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; 	// 0x122c
	uint8_t unknown4[8];
	int32_t m_iLastWeaponFireUsercmd; 	// 0x1240
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkBitCount "32"
	// MNetworkPriority "32"
	Vector m_angEyeAngles; 	// 0x1244
	bool m_bVCollisionInitted; 	// 0x1250
	Vector m_storedSpawnPosition; 	// 0x1254
	Vector m_storedSpawnAngle; 	// 0x1260
	bool m_bIsSpawning; 	// 0x126c
	// MNetworkEnable
	bool m_bHideTargetID; 	// 0x126d
	int32_t m_nNumDangerZoneDamageHits; 	// 0x1270
	// MNetworkEnable
	bool m_bHud_MiniScoreHidden; 	// 0x1274
	// MNetworkEnable
	bool m_bHud_RadarHidden; 	// 0x1275
	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; 	// 0x1278
	// MNetworkEnable
	int32_t m_nLastConcurrentKilled; 	// 0x127c
	// MNetworkEnable
	int32_t m_nDeathCamMusic; 	// 0x1280
	// MNetworkEnable
	int32_t m_iAddonBits; 	// 0x1284
	// MNetworkEnable
	int32_t m_iPrimaryAddon; 	// 0x1288
	// MNetworkEnable
	int32_t m_iSecondaryAddon; 	// 0x128c
	int32_t m_nTeamDamageGivenForMatch; 	// 0x1290
	bool m_bTDGaveProtectionWarning; 	// 0x1294
	bool m_bTDGaveProtectionWarningThisRound; 	// 0x1295
	float m_applyDeafnessTime; 	// 0x1298
	float m_flLastTHWarningTime; 	// 0x129c
	CUtlStringToken m_currentDeafnessFilter; 	// 0x12a0
	uint8_t unknown5[4];
	CUtlVector m_enemyPlayersKilledThisRound; 	// 0x12a8 CUtlVector< CHandle< CCSPlayerPawnBase > >
	int32_t m_NumEnemiesKilledThisSpawn; 	// 0x12c0
	int32_t m_maxNumEnemiesKillStreak; 	// 0x12c4
	int32_t m_NumEnemiesKilledThisRound; 	// 0x12c8
	int32_t m_NumEnemiesAtRoundStart; 	// 0x12cc
	int32_t m_iRoundsWon; 	// 0x12d0
	bool m_bHasUsedDMBonusRespawn; 	// 0x12d4
	int32_t m_lastRoundResult; 	// 0x12d8
	bool m_wasNotKilledNaturally; 	// 0x12dc
	// MNetworkEnable
	uint32_t m_vecPlayerPatchEconIndices[5]; 	// 0x12e0
	int32_t m_iDeathFlags; 	// 0x12f4
	CHandle m_hPet; 	// 0x12f8 CHandle< CChicken >
	float m_flLastKnownAccumulatedWeaponEncumbrance; 	// 0x12fc
	float m_flLastTimeComputedAccumulatedWeaponEncumbrance; 	// 0x1300
	uint8_t unknown6[0x1CC];
	// MNetworkEnable
	uint16_t m_unCurrentEquipmentValue; 	// 0x14d0
	// MNetworkEnable
	uint16_t m_unRoundStartEquipmentValue; 	// 0x14d2
	// MNetworkEnable
	uint16_t m_unFreezetimeEndEquipmentValue; 	// 0x14d4
	// MNetworkEnable
	char m_szLastPlaceName[18]; 	// 0x14d6
	int32_t m_nSuicides; 	// 0x14e8
	// MNetworkEnable
	int32_t m_nSurvivalTeamNumber; 	// 0x14ec
	// MNetworkEnable
	// MNetworkBitCount "32"
	Vector m_aimPunchAngle; 	// 0x14f0
	// MNetworkEnable
	// MNetworkBitCount "32"
	Vector m_aimPunchAngleVel; 	// 0x14fc
	// MNetworkEnable
	int32_t m_aimPunchTickBase; 	// 0x1508
	// MNetworkEnable
	float m_aimPunchTickFraction; 	// 0x150c
	CUtlVector m_aimPunchCache; 	// 0x1510 CUtlVector< QAngle >
	bool m_bHasDeathInfo; 	// 0x1528
	float m_flDeathInfoTime; 	// 0x152c
	Vector m_vecDeathInfoOrigin; 	// 0x1530
	// MNetworkEnable
	bool m_bKilledByHeadshot; 	// 0x153c
	int32_t m_LastHitBox; 	// 0x1540
	int32_t m_LastHealth; 	// 0x1544
	float m_flLastCollisionCeiling; 	// 0x1548
	float m_flLastCollisionCeilingChangeTime; 	// 0x154c
	CUtlString m_strVOPrefix; 	// 0x1550
	float m_flLandseconds; 	// 0x1558
	void *m_pBot; 	// 0x1560 CCSBot *
	bool m_bBotAllowActive; 	// 0x1568
	bool m_bCommittingSuicideOnTeamChange; 	// 0x1569
};

// Alignment: 25
// Size: 0x1b00
struct CCSPlayerPawn : CCSPlayerPawnBase
{
	CCSPlayer_ParachuteServices *m_pParachuteServices; 	// 0x1570
	// MNetworkEnable
	CCSPlayer_BulletServices *m_pBulletServices; 	// 0x1578
	// MNetworkEnable
	CCSPlayer_HostageServices *m_pHostageServices; 	// 0x1580
	CCSPlayer_BuyServices *m_pBuyServices; 	// 0x1588
	// MNetworkEnable
	CCSPlayer_PingServices *m_pPingServices; 	// 0x1590
	CCSPlayer_RadioServices *m_pRadioServices; 	// 0x1598
	CCSPlayer_DamageReactServices *m_pDamageReactServices; 	// 0x15a0
	uint8_t unknown1[0xC8];
	// MNetworkEnable
	int32_t m_iRetakesOffering; 	// 0x1670
	// MNetworkEnable
	int32_t m_iRetakesOfferingCard; 	// 0x1674
	// MNetworkEnable
	bool m_bRetakesHasDefuseKit; 	// 0x1678
	// MNetworkEnable
	bool m_bRetakesMVPLastRound; 	// 0x1679
	// MNetworkEnable
	int32_t m_iRetakesMVPBoostItem; 	// 0x167c
	// MNetworkEnable
	loadout_positions_t m_RetakesMVPBoostExtraUtility; 	// 0x1680
	// MNetworkEnable
	bool m_bIsBuyMenuOpen; 	// 0x1684
	uint8_t unknown2[0x15B];
	CTransform m_xLastHeadBoneTransform; 	// 0x17e0
	bool m_bLastHeadBoneTransformIsValid; 	// 0x1800
	int32_t m_iPlayerLocked; 	// 0x1804
	uint8_t unknown3[8];
	// MNetworkEnable
	// MNetworkUserGroup "LocalPlayerExclusive"
	float m_flNextSprayDecalTime; 	// 0x180c
	uint8_t unknown4[4];
	// MNetworkEnable
	int32_t m_nRagdollDamageBone; 	// 0x1814
	// MNetworkEnable
	Vector m_vRagdollDamageForce; 	// 0x1818
	// MNetworkEnable
	Vector m_vRagdollDamagePosition; 	// 0x1824
	// MNetworkEnable
	char m_szRagdollDamageWeaponName[64]; 	// 0x1830
	// MNetworkEnable
	bool m_bRagdollDamageHeadshot; 	// 0x1870
	// MNetworkEnable
	CEconItemView m_EconGloves; 	// 0x1878
	// MNetworkEnable
	Vector m_qDeathEyeAngles; 	// 0x1af0
};

struct CMoveDataSource1
{
	// bool			m_bFirstRunOfFunctions : 1;
	// bool			m_bGameCodeMovedPlayer : 1;
	// bool			m_bNoAirControl : 1;
	bool flags;

	CHandle	m_nPlayerHandle;	// edict index on server, client entity handle on client

	int				m_nImpulseCommand;	// Impulse command issued.
	Vector			m_vecViewAngles;	// Command view angles (local space)
	Vector			m_vecAbsViewAngles;	// Command view angles (world space)
	int				m_nButtons;			// Attack buttons.
	int				m_nOldButtons;		// From host_client->oldbuttons;
	float			m_flForwardMove;
	float			m_flSideMove;
	float			m_flUpMove;
	
	float			m_flMaxSpeed;
	float			m_flClientMaxSpeed;

	// Variables from the player edict (sv_player) or entvars on the client.
	// These are copied in here before calling and copied out after calling.
	Vector			m_vecVelocity;			// edict::velocity		// Current movement direction.
	Vector			m_vecTrailingVelocity;
	float			m_flTrailingVelocityTime;
	Vector			m_vecAngles;			// edict::angles
	Vector			m_vecOldAngles;
	
// Output only
	float			m_outStepHeight;	// how much you climbed this move
	Vector			m_outWishVel;		// This is where you tried 
	Vector			m_outJumpVel;		// This is your jump velocity

	// Movement constraints	(radius 0 means no constraint)
	Vector			m_vecConstraintCenter;
	float			m_flConstraintRadius;
	float			m_flConstraintWidth;
	float			m_flConstraintSpeedFactor;
	bool			m_bConstraintPastRadius;		///< If no, do no constraining past Radius.  If yes, cap them to SpeedFactor past radius
	
	Vector			m_vecAbsOrigin;		// edict::origin
};

// Size: 0xE0
struct CMoveData
{
	/*
	bool			m_bFirstRunOfFunctions : 1;
	bool			m_bGameCodeMovedPlayer : 1;
	bool			m_bNoAirControl : 1;

	CHandle	m_nPlayerHandle;	// edict index on server, client entity handle on client

	int				m_nImpulseCommand;	// Impulse command issued.
	Vector			m_vecViewAngles;	// Command view angles (local space)
	Vector			m_vecAbsViewAngles;	// Command view angles (world space)
	int				m_nButtons;			// Attack buttons.
	int				m_nOldButtons;		// From host_client->oldbuttons;
	float			m_flForwardMove;
	float			m_flSideMove;
	float			m_flUpMove;
	
	float			m_flMaxSpeed;
	float			m_flClientMaxSpeed;

	// Variables from the player edict (sv_player) or entvars on the client.
	// These are copied in here before calling and copied out after calling.
	*/
	uint8_t moveDataFlags; // 0x0
	CHandle	m_nPlayerHandle; // 0x4 don't know if this is actually a CHandle
	uint8_t unknown1[0xC];
	Vector m_vecViewAngles; // 0x14
	float m_flForwardMove; // 0x20	
	float m_flSideMove; // 0x24
	float m_flUpMove; // 0x28
	uint8_t unknown2[4]; // 0x2c
	Vector m_vecVelocity; // 0x30
	Vector m_vecAngles; // 0x3c
	uint8_t unknown3[0x50];
	// 92 absorigin
	/*
	Vector			m_vecTrailingVelocity;
	float			m_flTrailingVelocityTime;
	Vector			m_vecAngles;			// edict::angles
	Vector			m_vecOldAngles;
	
// Output only
	float			m_outStepHeight;	// how much you climbed this move
	Vector			m_outWishVel;		// This is where you tried 
	Vector			m_outJumpVel;		// This is your jump velocity

	// Movement constraints	(radius 0 means no constraint)
	Vector			m_vecConstraintCenter;
	float			m_flConstraintRadius;
	float			m_flConstraintWidth;
	float			m_flConstraintSpeedFactor;
	bool			m_bConstraintPastRadius;		///< If no, do no constraining past Radius.  If yes, cap them to SpeedFactor past radius
	*/
	
	Vector m_vecAbsOrigin; // 0x98
	uint8_t unknown4[0x18];
	Vector m_vecOldAngles; // 0xbc
	float m_flMaxSpeed; // 0xc8
	float m_flClientMaxSpeed; // 0xcc
	bool m_bJumpedThisTick; // 0xd0 related to dev_cs_enable_consistent_jumps
	bool m_bSomethingWithGravity; // 0xd1 related to the new ShouldApplyGravity
	uint8_t unknown5[0x2];
	Vector m_outWishVel; // 0xd4
};

struct CGlobalVarsBase
{
	/*
	// Absolute time (per frame still - Use Plat_FloatTime() for a high precision real time 
	//  perf clock, but not that it doesn't obey host_timescale/host_framerate)
	float			realtime;
	// Absolute frame counter - continues to increase even if game is paused
	int				framecount;
	// Non-paused frametime
	float			absoluteframetime;
	float			absoluteframestarttimestddev;

	// Current time 
	//
	// On the client, this (along with tickcount) takes a different meaning based on what
	// piece of code you're in:
	// 
	//   - While receiving network packets (like in PreDataUpdate/PostDataUpdate and proxies),
	//     this is set to the SERVER TICKCOUNT for that packet. There is no interval between
	//     the server ticks.
	//     [server_current_Tick * tick_interval]
	//
	//   - While rendering, this is the exact client clock 
	//     [client_current_tick * tick_interval + interpolation_amount]
	//
	//   - During prediction, this is based on the client's current tick:
	//     [client_current_tick * tick_interval]
	*/
	// Time spent on last server or client frame (has nothing to do with think intervals)
	uint8_t unknown0[0x28];
	float frametime; // 0x28
	float curtime; // 0x2C
	uint8_t unknown1[0x3C]; // random size to pad out struct
	/*
	// current maxplayers setting
	int				maxClients;

	// Simulation ticks - does not increase when game is paused
	int				tickcount;

	// Simulation tick interval
	float			interval_per_tick;

	// interpolation amount ( client-only ) based on fraction of next tick which has elapsed
	float			interpolation_amount;
	int				simTicksThisFrame;

	int				network_protocol;

	// current saverestore data
	void *pSaveData; // CSaveRestoreData *

	// Set to true in client code.
	bool			m_bClient;
	// true if we are a remote clinet (needs prediction & interpolation - server not on this machine) as opposed to split-screen or local
	bool			m_bRemoteClient;
	// 100 (i.e., tickcount is rounded down to this base and then the "delta" from this base is networked
	int				nTimestampNetworkingBase;   
	// 32 (entindex() % nTimestampRandomizeWindow ) is subtracted from gpGlobals->tickcount to set the networking basis, prevents
	//  all of the entities from forcing a new PackedEntity on the same tick (i.e., prevents them from getting lockstepped on this)
	int				nTimestampRandomizeWindow;  
	*/
};