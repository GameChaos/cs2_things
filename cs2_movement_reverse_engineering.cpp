
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

// Alignment: 8
// Size: 0x15
enum InputBitMask_t : uint64_t
{ 
	IN_NONE = 0x0,
	IN_ALL = 0xffffffffffffffff,
	IN_ATTACK = 0x1,
	IN_JUMP = 0x2,
	IN_DUCK = 0x4,
	IN_FORWARD = 0x8,
	IN_BACK = 0x10,
	IN_USE = 0x20,
	IN_TURNLEFT = 0x80,
	IN_TURNRIGHT = 0x100,
	IN_MOVELEFT = 0x200,
	IN_MOVERIGHT = 0x400,
	IN_ATTACK2 = 0x800,
	IN_RELOAD = 0x2000,
	IN_SPEED = 0x10000,
	IN_JOYAUTOSPRINT = 0x20000,
	IN_FIRST_MOD_SPECIFIC_BIT = 0x100000000,
	IN_USEORRELOAD = 0x100000000,
	IN_SCORE = 0x200000000,
	IN_ZOOM = 0x400000000,
	IN_JUMP_THROW_RELEASE = 0x800000000,
};

// Alignment: 4
// Size: 0x5
enum LifeState_t : uint8_t
{
	LIFE_ALIVE = 0x0,
	LIFE_DYING = 0x1,
	LIFE_DEAD = 0x2,
	LIFE_RESPAWNABLE = 0x3,
	LIFE_RESPAWNING = 0x4,
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

enum Contents : uint64_t
{
	// from CBaseEntity::OnEntityEvent function offset 121 in CBaseEntity vtable
	CONTENTS_WATER = 0x8000,
	CONTENTS_SLIME = 0x10000,
};

// copied from source1
enum EntityEvent_t : uint32_t
{
	ENTITY_EVENT_WATER_TOUCH = 0,
	ENTITY_EVENT_WATER_UNTOUCH,
	ENTITY_EVENT_PARENT_CHANGED,
};

enum EntityFlag_t : uint32_t
{
    FL_ONGROUND = (1<<0), // At rest / on the ground
    FL_DUCKING = (1<<1),
    FL_WATERJUMP = (1<<2), // player jumping out of water
	// Unused 1<<3
	FL_UNKNOWN0 = (1<<4), // Something related to UserCmd
    FL_FROZEN = (1<<5), // Player is frozen for 3rd person camera
    FL_ATCONTROLS = (1<<6),
    FL_CLIENT = (1<<7), // Unsure
    FL_FAKECLIENT = (1<<8), // Unsure
	// Unused 1<<9
    FL_FLY = (1<<10),
    FL_UNKNOWN1 = (1<<11), // Something to do with CRevertSaved
	// Unused 1<<12
	// Unused 1<<13
    FL_GODMODE = (1<<14),
    FL_NOTARGET = (1<<15),
    FL_AIMTARGET = (1<<16),
	// Unused 1<<17
    FL_STATICPROP = (1<<18),
	// Unused 1<<19
    FL_GRENADE = (1<<20),
    FL_DONTTOUCH = (1<<22),
    FL_BASEVELOCITY = (1<<23),
    FL_WORLDBRUSH = (1<<24),
    FL_OBJECT = (1<<25),
    FL_ONFIRE = (1<<27),
    FL_DISSOLVING = (1<<28),
    FL_TRANSRAGDOLL = (1<<29),
    FL_UNBLOCKABLE_BY_PLAYER = (1<<30)
};

enum EntityEffect_t
{
	EF_BONEMERGE                    = 0x001,
	EF_BRIGHTLIGHT                  = 0x002,
	EF_DIMLIGHT                     = 0x004,
	EF_NOINTERP                     = 0x008,
	EF_NOSHADOW                     = 0x010,
	EF_NODRAW                       = 0x020,
	EF_NORECEIVESHADOW              = 0x040,
	EF_BONEMERGE_FASTCULL           = 0x080,
	EF_ITEM_BLINK                   = 0x100,	// blink an item so that the user notices it.
	EF_PARENT_ANIMATES              = 0x200,	// always assume that the parent entity is animating
	EF_MARKED_FOR_FAST_REFLECTION	= 0x400,	// marks an entity for reflection rendering when using $reflectonlymarkedentities material variable
	EF_NOSHADOWDEPTH                = 0x800,	// Indicates this entity does not render into any shadow depthmap
	EF_SHADOWDEPTH_NOCACHE          = 0x1000,	// Indicates this entity cannot be cached in shadow depthmap and should render every frame
	EF_NOFLASHLIGHT                 = 0x2000,
	EF_NOCSM                        = 0x4000,	// Indicates this entity does not render into the cascade shadow depthmap
	EF_MAX_BITS                     = 15
};

class Vector2D
{
public:
	float x;
	float y;
};

class Vector
{
public:
	float x;
	float y;
	float z;
};

typedef Vector QAngle;

class Vector4D
{
public:
	float x;
	float y;
	float z;
	float w;
};

class CInButtonState
{
public:
	virtual void *MaybeGetSchema();
	InputBitMask_t m_pButtonStates[3];
};

// Size: 0x4
class CUtlStringToken
{
public:
	uint32_t m_nHashCode;
};

// Alignment: 1
// Size: 0x28
class CNetworkVarChainer
{
public:
	uint8_t unknown0[0x20];
	int16_t m_PathIndex; 	// 0x20
	uint8_t unknown1[6];
};

class CCSPlayerPawn;

// Alignment: 1
// Size: 0x40
class CPlayerPawnComponent
{
public:
	virtual void *MaybeGetSchema();
	virtual int64_t *Unk0();
	virtual void *Unk1(char a2);
	virtual void MergedNullSub2();
	virtual int64_t Unk3();
	virtual int64_t Unk4();
	virtual void MergedNullSub5();
	virtual int64_t Unk6();
	virtual int64_t Unk7();
	virtual void PostThink();
	virtual char Unk9();
	virtual int64_t Unk10();
	virtual void MergedNullSub11();
	virtual void MergedNullSub12();
	virtual int32_t *Unk13(int32_t *outWorldGroupId);
	
	CNetworkVarChainer __m_pChainEntity; // 0x8
	CCSPlayerPawn *pawn; // 0x30
	uint8_t unknown0[6];
};

class CMoveData;

// Alignment: 14
// Size: 0x1b8
class CPlayer_MovementServices : public CPlayerPawnComponent
{
public:
	virtual void *MaybeGetSchema();
	virtual int64_t *Unk0();
	virtual void *Unk1(char a2);
	// virtual void MergedNullSub2();
	virtual int64_t Unk3();
	virtual int64_t Unk4();
	// virtual void MergedNullSub5();
	virtual int64_t Unk6();
	// virtual int64_t Unk7();
	// virtual void PostThink();
	// virtual char Unk9();
	virtual int64_t Unk10();
	// virtual void MergedNullSub11();
	// virtual void MergedNullSub12();
	virtual int32_t *Unk13(int32_t *outWorldGroupId);
	
	virtual void UpdateButtonState(void *ucmd);
	virtual void PlayerRunCommand(void *ucmd);
	virtual void ProcessMovement(CMoveData *mv);
	virtual int64_t Unk17(int64_t a2);
	virtual bool ReturnOne18();
	virtual void *ResetMoveData();
	virtual int64_t SetupMove(void *ucmd, CMoveData *mv);
	virtual int64_t FinishMove(void *ucmd, CMoveData *mv);
	virtual void SetPredictionRandomSeed(void *ucmd);
	virtual int64_t Unk23(void *ucmd, int64_t a2);
	virtual bool ReturnOne24();
	virtual void CheckMovingGround(double frametime);
	virtual bool ReturnZero26();
	virtual int64_t Unk27(int64_t a2, float a3, float a4, float a5, char a6);
	
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
	float m_arrForceSubtickMoveWhen[4]; 	// 0x194
	float m_flForwardMove; 	// 0x198
	float m_flLeftMove; 	// 0x19c
	float m_flUpMove; 	// 0x1a0
	Vector m_vecLastMovementImpulses; 	// 0x1a4
	Vector m_vecOldViewAngles; 	// 0x1a4
	uint8_t unknown[8];
};

// Alignment: 14
// Size: 0x208
class CPlayer_MovementServices_Humanoid : public CPlayer_MovementServices
{
public:
	virtual void *MaybeGetSchema();
	virtual int64_t *Unk0();
	virtual void *Unk1(char a2);
	// virtual void MergedNullSub2();
	virtual int64_t Unk3();
	// virtual int64_t Unk4();
	// virtual void MergedNullSub5();
	// virtual int64_t Unk6();
	virtual int64_t Unk7();
	virtual void PostThink();
	virtual char Unk9();
	virtual int64_t Unk10();
	// virtual void MergedNullSub11();
	// virtual void MergedNullSub12();
	virtual int32_t *Unk13(int32_t *outWorldGroupId);
	
	// virtual void UpdateButtonState(void *ucmd);
	// virtual void PlayerRunCommand(void *ucmd);
	// virtual void ProcessMovement(CMoveData *mv);
	virtual int64_t Unk17(int64_t a2);
	// virtual bool ReturnOne18();
	// virtual void *ResetMoveData();
	// virtual int64_t SetupMove(void *ucmd, CMoveData *mv);
	// virtual int64_t FinishMove(void *ucmd, CMoveData *mv);
	// virtual void SetPredictionRandomSeed(void *ucmd);
	// virtual int64_t Unk23(void *ucmd, int64_t a2);
	virtual bool ReturnOne24();
	// virtual void CheckMovingGround(double frametime);
	// virtual bool ReturnZero26();
	// virtual int64_t Unk27(int64_t a2, float a3, float a4, float a5, char a6);
	
	virtual float FlPlayerFallDamage();
	virtual void UpdateCollisionBounds();
	virtual void UnkNull30();
	virtual int64_t GetLadderSurface();
	virtual void UpdateStepSound(int64_t psurface, const Vector &vecOrigin, const Vector &vecVelocity);
	virtual void PlayStepSound(Vector &vecOrigin, uint64_t psurface, float fvol);
	virtual void GetStepSoundVelocities( float *velwalk, float *velrun );
	virtual CCSPlayerPawn *SetStepSoundTime(int a2, bool a3);
	virtual int64_t MaybeGetFootstepEntry();
	virtual void UnkNull37();
	virtual void UnkNull38();
	
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
class CCSPlayer_MovementServices : public CPlayer_MovementServices_Humanoid
{
public:
	virtual void *MaybeGetSchema();
	virtual int64_t *Unk0();
	virtual void *Unk1(char a2);
	// virtual void MergedNullSub2();
	virtual int64_t Unk3();
	// virtual int64_t Unk4();
	// virtual void MergedNullSub5();
	// virtual int64_t Unk6();
	// virtual int64_t Unk7();
	// virtual void PostThink();
	// virtual char Unk9();
	// virtual int64_t Unk10();
	// virtual void MergedNullSub11();
	// virtual void MergedNullSub12();
	virtual int32_t *Unk13(int32_t *outWorldGroupId);
	
	virtual void UpdateButtonState(void *ucmd);
	virtual void PlayerRunCommand(void *ucmd);
	virtual void ProcessMovement(CMoveData *mv);
	virtual int64_t Unk17(int64_t a2);
	// virtual bool ReturnOne18();
	virtual void *ResetMoveData();
	virtual int64_t SetupMove(void *ucmd, CMoveData *mv);
	virtual int64_t FinishMove(void *ucmd, CMoveData *mv);
	// virtual void SetPredictionRandomSeed(void *ucmd);
	virtual int64_t Unk23(void *ucmd, int64_t a2);
	// virtual bool ReturnOne24();
	virtual void CheckMovingGround(double frametime);
	// virtual bool ReturnZero26();
	// virtual int64_t Unk27(int64_t a2, float a3, float a4, float a5, char a6);
	
	virtual float FlPlayerFallDamage();
	// virtual void UpdateCollisionBounds();
	// virtual void UnkNull30();
	// virtual int64_t GetLadderSurface();
	virtual void UpdateStepSound(uint64_t psurface, const Vector &vecOrigin, const Vector &vecVelocity);
	// virtual void PlayStepSound(Vector &vecOrigin, uint64_t psurface, float fvol);
	// virtual void GetStepSoundVelocities( float *velwalk, float *velrun );
	// virtual CCSPlayerPawn *SetStepSoundTime(int a2, bool a3);
	virtual int64_t MaybeGetFootstepEntry();
	// virtual void UnkNull37();
	// virtual void UnkNull38();
	
	virtual void CSPlayStepSound( Vector &vecOrigin, uint64_t psurface, float fvol, bool force ); // psurface type is surfacedata_t *
	
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
class CCSPlayer_ParachuteServices //: public CPlayerPawnComponent
{
public:
	CPlayerPawnComponent pawnComponent;
	uint8_t unknown[0x38];
};

// Alignment: 1
// Size: 0x48
class CCSPlayer_BulletServices //: public CPlayerPawnComponent
{
public:
	CPlayerPawnComponent pawnComponent;
	int32_t m_totalHitsOnServer; 	// 0x40
	uint8_t unknown1[0x4];
};

class CHandle
{
public:
	int32_t handle;
};

// Alignment: 2
// Size: 0x50
class CCSPlayer_HostageServices //: public CPlayerPawnComponent
{
public:
	CPlayerPawnComponent pawnComponent;
	// MNetworkEnable
	CHandle m_hCarriedHostage; 	// 0x40
	// MNetworkEnable
	CHandle m_hCarriedHostageProp; 	// 0x44
	uint8_t unknown[8];
};

// Alignment: 1
// Size: 0xc8
class CCSPlayer_BuyServices //: public CPlayerPawnComponent
{
public:
	CPlayerPawnComponent pawnComponent;
	float m_flNextAutoBuyAmmoTime; 	// 0x40
	uint8_t unknown1[0x84];
};

// Alignment: 2
// Size: 0x58
class CCSPlayer_PingServices //: public CPlayerPawnComponent
{
public:
	CPlayerPawnComponent pawnComponent;
	float m_flPlayerPingTokens[5]; 	// 0x40
	// MNetworkEnable
	CHandle m_hPlayerPing; 	// 0x54
};

// Alignment: 5
// Size: 0x60
class CCSPlayer_RadioServices //: public CPlayerPawnComponent
{
public:
	CPlayerPawnComponent pawnComponent;
	float m_flGotHostageTalkTimer; 	// 0x40
	float m_flDefusingTalkTimer; 	// 0x44
	float m_flC4PlantTalkTimer; 	// 0x48
	float m_flRadioTokenSlots[3]; 	// 0x4c
	bool m_bIgnoreRadio; 	// 0x58
};

// Alignment: 0
// Size: 0x40
class CCSPlayer_DamageReactServices //: public CPlayerPawnComponent
{
public:
	CPlayerPawnComponent pawnComponent;
};

// Size: 0x20
#pragma pack(16)
class CTransform
{
public:
	Vector m_vPosition;
	Vector4D m_orientation;
};
#pragma pack(8)

// Alignment: 2
// Size: 0x60
class CAttributeList // : public 
{
public:
	uint8_t unknown0[8];
	// MNetworkEnable
	// MNetworkTypeAlias "CUtlVector< CEconItemAttribute >"
	void *m_Attributes; 	// 0x8
	uint8_t unknown1[0x48];
	void *m_pManager; 	// 0x58 CAttributeManager
};

// Alignment: 13
// Size: 0x278
class CEconItemView // : public IEconItemInterface
{
public:
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

// Size: 0x8
class IHandleEntity // : public 
{
public:
	virtual void *MaybeGetSchema();
	virtual uint64_t *IheUnk0(char a2);
	virtual int *IheUnk1(int *a2);
};

union CUtlSymbolLarge
{
public:
	int64_t m_Id;
	const char *m_pAsString;
};

// Alignment: 11
// Size: 0x78
class CEntityIdentity // : public 
{
public:
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
class CEntityComponent
{
public:
	uint8_t unknown[8];
};

// Alignment: 1
// Size: 0x38
class CScriptComponent : public CEntityComponent
{
public:
	uint8_t unknown[0x28];
	CUtlSymbolLarge m_scriptClassName; 	// 0x30
};

// Alignment: 3
// Size: 0x30
class CEntityInstance : public IHandleEntity
{
public:
	virtual void *MaybeGetSchema();
	virtual uint64_t *IheUnk0(char a2);
	virtual int *IheUnk1(int *a2);
	
	virtual void *CeiUnk2();
	virtual void *CeiUnk3();
	virtual void Precache(int64_t *a2);
	virtual int64_t InitialSpawn();
	virtual void CeiUnk6(int64_t *a2);
	virtual void CeiUnk7();
	virtual void CeiUnk8(uint32_t a2, int64_t a3, int64_t a4);
	virtual void CeiUnk9();
	virtual bool CeiUnk10(int a2, int a3);
	virtual int64_t CeiReturnZero11();
	virtual int64_t CeiReturnZero12();
	virtual void CeiNullSub13();
	virtual bool CeiUnk14(int64_t a2);
	virtual void CeiUnk15(void *a2, int64_t a3, int a4);
	virtual int64_t CeiUnk16(int64_t a2);
	virtual int64_t CeiUnk17(void **a2);
	virtual bool CeiUnk18();
	virtual int64_t OnRestore();
	virtual int32_t CeiUnk20();
	virtual int *CeiUnk21(int *a2);
	virtual int64_t MaybeOnMemberChanged(int64_t memberOffset, int64_t a3, int64_t a4);
	virtual int64_t CeiUnk23(int64_t a2);
	virtual int64_t CeiUnk24(int64_t a2, int64_t a3);
	virtual bool CeiUnk25();
	virtual int16_t *CeiUnk26(int16_t *a2, int16_t *a3);
	virtual bool CeiUnk27();
	virtual bool CeiReturnZero28();
	virtual void **CeiUnk29(int64_t *a2);
	virtual int64_t *CeiUnk30();
	virtual void CeiUnk31();
	
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
class CNetworkTransmitComponent // : public 
{
public:
	uint8_t unknown0[0x16c];
	uint8_t m_nTransmitStateOwnedCounter; 	// 0x16c
	uint8_t unknown1[0x33];
};

// Size: 0x18
class CUtlVector // : public 
{
public:
	uint8_t unknown[0x18];
};

class CUtlString
{
public:
	char *m_pMemory;
};

// Alignment: 1
// Size: 0x28
class CEntityIOOutput
{
public:
	uint8_t unknown[0x28];
};

typedef uint64_t CNetworkedQuantizedFloat;

// Alignment: 3
// Size: 0x28
class CNetworkVelocityVector
{
public:
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
class VPhysicsCollisionAttribute_t
{
public:
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
class CCollisionProperty
{
public:
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

// Alignment: 3
// Size: 0x28
class CNetworkViewOffsetVector
{
public:
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

typedef uint32_t CEntityHandle;

// Alignment: 2
// Size: 0x10
class CGameSceneNodeHandle
{
public:
	uint8_t unknown[0x8]; // 0x0
	// MNetworkEnable
	CEntityHandle m_hOwner; // 0x8	
	// MNetworkEnable
	CUtlStringToken m_name; // 0xc	
};

// Alignment: 7
// Size: 0x30
class CNetworkOriginCellCoordQuantizedVector
{
public:
	uint8_t unknown[0x10]; // 0x0
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "cellx"
	uint16_t m_cellX; // 0x10	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "celly"
	uint16_t m_cellY; // 0x12	
	// MNetworkEnable
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "cellz"
	uint16_t m_cellZ; // 0x14	
	// MNetworkEnable
	uint16_t m_nOutsideWorld; // 0x16	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posx"
	CNetworkedQuantizedFloat m_vecX; // 0x18	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posy"
	CNetworkedQuantizedFloat m_vecY; // 0x20	
	// MNetworkBitCount "15"
	// MNetworkMinValue "0.000000"
	// MNetworkMaxValue "1024.000000"
	// MNetworkEncodeFlags
	// MNetworkChangeCallback "OnCellChanged"
	// MNetworkPriority "31"
	// MNetworkSerializer "posz"
	CNetworkedQuantizedFloat m_vecZ; // 0x28	
};

// Alignment: 33
// Size: 0x150
class CGameSceneNode
{
public:
	uint8_t unknown0[0x10]; // 0x0
	// MNetworkDisable
	CTransform m_nodeToWorld; // 0x10	
	// MNetworkDisable
	CEntityInstance* m_pOwner; // 0x30	
	// MNetworkDisable
	CGameSceneNode* m_pParent; // 0x38	
	// MNetworkDisable
	CGameSceneNode* m_pChild; // 0x40	
	// MNetworkDisable
	CGameSceneNode* m_pNextSibling; // 0x48	
	uint8_t unknown1[0x20]; // 0x50
	// MNetworkEnable
	// MNetworkSerializer "gameSceneNode"
	// MNetworkChangeCallback "gameSceneNodeHierarchyParentChanged"
	// MNetworkPriority "32"
	// MNetworkVarEmbeddedFieldOffsetDelta "8"
	CGameSceneNodeHandle m_hParent; // 0x70	
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkUserGroup "Origin"
	// MNetworkChangeCallback "gameSceneNodeLocalOriginChanged"
	CNetworkOriginCellCoordQuantizedVector m_vecOrigin; // 0x80	
	uint8_t unknown2[0x8]; // 0xb0
	// MNetworkEnable
	// MNetworkPriority "32"
	// MNetworkSerializer "gameSceneNodeStepSimulationAnglesSerializer"
	// MNetworkChangeCallback "gameSceneNodeLocalAnglesChanged"
	Vector m_angRotation; // 0xb8	
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeLocalScaleChanged"
	// MNetworkPriority "32"
	float m_flScale; // 0xc4	
	// MNetworkDisable
	Vector m_vecAbsOrigin; // 0xc8	
	// MNetworkDisable
	Vector m_angAbsRotation; // 0xd4	
	// MNetworkDisable
	float m_flAbsScale; // 0xe0	
	// MNetworkDisable
	int16_t m_nParentAttachmentOrBone; // 0xe4	
	// MNetworkDisable
	bool m_bDebugAbsOriginChanges; // 0xe6	
	// MNetworkDisable
	bool m_bDormant; // 0xe7	
	// MNetworkDisable
	bool m_bForceParentToBeNetworked; // 0xe8	
	
	// MNetworkDisable
	uint8_t m_bDirtyHierarchy: 1; 		
	// MNetworkDisable
	uint8_t m_bDirtyBoneMergeInfo: 1; 		
	// MNetworkDisable
	uint8_t m_bNetworkedPositionChanged: 1; 		
	// MNetworkDisable
	uint8_t m_bNetworkedAnglesChanged: 1; 		
	// MNetworkDisable
	uint8_t m_bNetworkedScaleChanged: 1; 		
	// MNetworkDisable
	uint8_t m_bWillBeCallingPostDataUpdate: 1; 		
	// MNetworkDisable
	uint8_t m_bNotifyBoneTransformsChanged: 1; 		
	// MNetworkDisable
	uint8_t m_bBoneMergeFlex: 1; 		
	// MNetworkDisable
	uint8_t m_nLatchAbsOrigin: 2; 		
	// MNetworkDisable
	uint8_t m_bDirtyBoneMergeBoneToRoot: 1; 		
	// uint16_t __pad0: 13;
	
	// MNetworkDisable
	uint8_t m_nHierarchicalDepth; // 0xeb	
	// MNetworkDisable
	uint8_t m_nHierarchyType; // 0xec	
	// MNetworkDisable
	uint8_t m_nDoNotSetAnimTimeInInvalidatePhysicsCount; // 0xed	
	uint8_t unknown3[0x2]; // 0xee
	// MNetworkEnable
	CUtlStringToken m_name; // 0xf0	
	uint8_t unknown4[0x3c]; // 0xf4
	// MNetworkEnable
	// MNetworkChangeCallback "gameSceneNodeHierarchyAttachmentChanged"
	CUtlStringToken m_hierarchyAttachName; // 0x130	
	// MNetworkDisable
	float m_flZOffset; // 0x134	
	// MNetworkDisable
	Vector m_vRenderOrigin; // 0x138	
};

// Alignment: 2
// Size: 0x50
class CBodyComponent : public CEntityComponent
{
public:
	// MNetworkDisable
	CGameSceneNode *m_pSceneNode; // 0x8	
	uint8_t unknown[0x10]; // 0x10
	// MNetworkDisable
	// MNetworkChangeAccessorFieldPathIndex
	CNetworkVarChainer __m_pChainEntity; // 0x20	
};

// Alignment: 77
// Size: 0x4a0
class CBaseEntity : public CEntityInstance
{
public:
	virtual void *MaybeGetSchema();
	virtual uint64_t *IheUnk0(char a2);
	// virtual int *IheUnk1(int *a2);
	
	virtual void *CeiUnk2();
	virtual void *CeiUnk3();
	virtual void Precache(int64_t *a2);
	virtual int64_t InitialSpawn();
	virtual void CeiUnk6(int64_t *a2);
	// virtual void CeiUnk7();
	virtual void CeiUnk8(uint32_t a2, int64_t a3, int64_t a4);
	virtual void CeiUnk9();
	virtual bool CeiUnk10(int a2, int a3);
	// virtual int64_t CeiReturnZero11();
	// virtual int64_t CeiReturnZero12();
	// virtual void CeiNullSub13();
	virtual bool CeiUnk14(int64_t a2);
	virtual void CeiUnk15(void *a2, int64_t a3, int a4);
	virtual int64_t CeiUnk16(int64_t a2);
	virtual int64_t CeiUnk17(void **a2);
	virtual bool CeiUnk18();
	virtual int64_t OnRestore();
	virtual int32_t CeiUnk20();
	virtual int *CeiUnk21(int *a2);
	virtual int64_t MaybeOnMemberChanged(int64_t memberOffset, int64_t a3, int64_t a4);
	virtual int64_t CeiUnk23(int64_t a2);
	virtual int64_t CeiUnk24(int64_t a2, int64_t a3);
	virtual bool CeiUnk25();
	virtual int16_t *CeiUnk26(int16_t *a2, int16_t *a3);
	virtual bool CeiUnk27();
	// virtual bool CeiReturnZero28();
	// virtual void **CeiUnk29(int64_t *a2);
	virtual int64_t *CeiUnk30();
	virtual void CeiUnk31();
	
	virtual int64_t CbeUnk32();
	virtual bool CbeReturnZero33();
	virtual int64_t CbeUnk34(int64_t *a2);
	virtual int64_t CbeReturnZero35();
	virtual void CbeNullSub36();
	virtual int64_t *CbeUnk37(int64_t *a2, int64_t *a3);
	virtual void CbeUnk38(int64_t *a2);
	virtual void *CbeUnk39();
	virtual void *CbeUnk40();
	virtual int64_t CbeReturnZero41();
	virtual int64_t CbeReturnZero42();
	virtual int64_t CbeReturnZero43();
	virtual int64_t CbeReturnZero44();
	virtual int64_t CbeReturnZero45();
	virtual int64_t CbeReturnZero46();
	virtual bool CbeUnk47();
	virtual bool CbeUnk48();
	virtual int64_t CbeUnk49();
	virtual int64_t CbeUnk50();
	virtual int64_t *CbeUnk51(int64_t *a2, int64_t **a3);
	virtual void CbeUnk52();
	virtual void CbeUnk53();
	virtual void CbeUnk54();
	virtual bool CbeUnk55();
	virtual int64_t CbeUnk56();
	virtual int64_t CbeUnk57(int64_t a2);
	virtual int64_t CbeUnk58(int64_t a2);
	virtual void *CbeUnk59(void *a2);
	virtual CCollisionProperty *GetCollisionProperty();
	virtual bool CbeUnk61();
	virtual bool CbeReturnZero62();
	virtual void CbeUnk63(bool a2);
	virtual void CbeUnk64();
	virtual void VPhysicsUpdate(void *pPhysics);
	virtual int CbeUnk66(int64_t *a2, int a3);
	virtual bool CbeUnk67();
	virtual int64_t CbeUnk68(int64_t *a2);
	virtual void VPhysicsShadowCollision(int index, void *pEvent);
	virtual void CbeUnk70(int a2, int64_t a3);
	virtual void CbeNullSub71();
	virtual void CbeUnk72(float a2);
	virtual bool CbeReturnZero73();
	virtual void SetMoveType(MoveType_t moveType, MoveCollide_t moveCollide);
	virtual bool CbeUnk75(uint8_t a2);
	virtual Vector *CbeUnk76(Vector *a2);
	virtual void CbeNullSub77();
	virtual void CbeUnk78();
	virtual int64_t CbeUnk79();
	virtual int64_t CbeUnk80(void *a2);
	virtual int64_t CbeUnk81(void *a2, bool a3);
	virtual void CbeNullSub82();
	virtual CBaseEntity *CbeUnk83();
	virtual void CbeNullSub84();
	virtual int64_t MaybeChangeTeam(uint32_t teamNumber);
	virtual bool InSameTeam(CBaseEntity *pEntity);
	virtual void CbeUnk87(void *a2, uint32_t a3);
	virtual int64_t CbeReturnTwo88();
	virtual void *CbeReturnZero89();
	virtual void ***CbeUnk90();
	virtual int64_t CbeUnk91(char *a2, char *a3);
	virtual int64_t CbeReturnZero92();
	virtual bool CbeReturnZero93();
	virtual bool CbeReturnZero94();
	virtual bool CbeReturnZero95();
	virtual void AddContext(const char *contextNam);
	virtual char *CbeUnk97(char *a2);
	virtual void CbeUnk98();
	virtual void CbeNullSub99();
	virtual bool IsOnGround();
	virtual bool GetAutoAimRadius();
	virtual int64_t CbeUnk102(int64_t a2);
	virtual int64_t CbeUnk103(int64_t a2);
	virtual bool MaybePassesDamageFilter(void *takeDamageInfo);
	virtual bool CbeReturnOne105();
	virtual int TakeHealth(float flHealth);
	virtual float GetHealthFrac();
	virtual int64_t CbeUnk108(int64_t a2);
	virtual int64_t CbeUnk109(void *a2);
	virtual uint8_t CbeUnk110(void *a2, int64_t a3);
	virtual void Event_Killed(void *cTakeDamageInfo);
	virtual void Event_KilledOther(CBaseEntity *pVictim, void *cTakeDamageInfo);
	virtual bool CbeReturnOne113();
	virtual double CbeReturnZero114();
	virtual int CbeUnk115(void *a2, int64_t a3);
	virtual int ImpactTrace(void *pTrace, int iDamageType, char *pCustomImpactName);
	virtual bool CbeReturnZero117();
	virtual bool CbeUnk118(uint8_t **a2);
	virtual bool CbeReturnZero119();
	virtual bool CbeUnk120();
	virtual void OnEntityEvent(EntityEvent_t, int64_t nContents);
	virtual bool CbeUnk122(void *a2);
	virtual const char *CbeReturnZero123();
	virtual int64_t CbeUnk124(int64_t a2);
	virtual int64_t *CbeUnk125(int64_t a2);
	virtual int64_t *MaybeTouch(CBaseEntity *other);
	virtual int64_t *CbeUnk127(int64_t a2);
	virtual void CbeNullSub128();
	virtual int64_t *CbeUnk129(int64_t a2);
	virtual void CbeNullSub130();
	virtual int64_t CbeReturnZero131();
	virtual int64_t *CbeUnk132();
	virtual int64_t *CbeUnk133();
	virtual void CbeUnk134();
	virtual void CbeUnk135(); // possibly has a call to Physics_SimulateEntity inside it
	virtual void CbeNullSub136();
	virtual void CbeNullSub137();
	virtual void CbeUnk138(void *a2, Vector *velocity);
	virtual void CbeNullSub139();
	virtual int64_t CbeUnk140(int64_t a2, int64_t a3, Vector *a4);
	virtual bool CbeReturnOne141();
	virtual int32_t GetBloodColor();
	virtual bool MaybeIsDead();
	virtual bool IsAlive();
	virtual bool CbeReturnZero145();
	virtual int64_t CbeUnk146();
	virtual bool CbeReturnZero147();
	virtual bool CbeReturnZero148();
	virtual bool CbeUnk149();
	virtual int64_t CbeReturnZero150();
	virtual int64_t CbeReturnZero151();
	virtual bool CbeReturnZero152();
	virtual int64_t CbeReturnZero153();
	virtual bool CbeReturnZero154();
	virtual int64_t CbeReturnZero155();
	virtual int64_t CbeReturnZero156();
	virtual bool CbeReturnZero157();
	virtual int GetMaxHealth();
	virtual int SetHealth(int health);
	virtual void ModifyOrAppendCriteria(void *aiCriteriaSet);
	virtual int64_t CbeUnk161(char *a2);
	virtual void CbeNullSub162();
	virtual int64_t CbeReturnZero163();
	virtual double CbeReturnZero164();
	virtual void CbeNullSub165();
	virtual Vector *MaybeGetViewOffset(Vector *a2);
	virtual Vector *MaybeEyePosition(Vector *a2);
	virtual Vector *MaybeLocalEyeAngles(Vector *a2);
	virtual int64_t CbeUnk169(int64_t a2);
	virtual void SetTimeScale(float timescale);
	virtual Vector *CbeUnk171(Vector *a2, int64_t a3, bool a4);
	virtual int64_t CbeUnk172(int64_t a2);
	virtual CNetworkViewOffsetVector *CbeUnk173();
	virtual Vector *MaybeGetAbsVelocity2(Vector *a2);
	virtual bool MaybeHasBaseVelocity();
	virtual void CbeNullSub176();
	virtual void CbeUnk177(Vector *a2);
	virtual int64_t CbeUnk178();
	virtual bool CbeTraceSomething179(Vector *a2, int64_t *a3);
	virtual bool CbeTraceSomething180(Vector *a2, CBaseEntity *a3, CBaseEntity **a4);
	virtual bool CbeReturnOne181();
	virtual CBaseEntity *CbeUnk182();
	virtual bool CbeReturnZero183();
	virtual void CbeNullSub184();
	virtual int64_t CbeNullSub185(int64_t a2);
	virtual int32_t *MaybeScriptEmitSound(char *soundname);
	virtual bool CbeUnk187(int64_t a2, int32_t *a3);
	virtual bool CbeUnk188(int64_t a2, Vector *a3);
	virtual bool CbeUnk189(int32_t *a2, int64_t *a3);
	virtual void SetEffects(uint32_t nEffects);
	virtual bool CbeReturnOne191();
	virtual int64_t CbeReturnZero192();
	virtual int64_t CbeReturnZero193();
	virtual int32_t CbeUnk194();
	virtual bool CbeNullSub195(uint32_t a2);
	virtual void CbeNullSub196();
	virtual void CbeNullSub197();
	virtual bool CbeReturnZero198();
	virtual double CbeReturnZero199();
	virtual double CbeReturnZero200();
	virtual double CbeReturnZero201();
	virtual void CbeNullSub202();
	virtual void CbeNullSub203();
	virtual bool CbeReturnOne204();
	virtual void CbeNullSub205();
	
	// MNetworkEnable
	// MNetworkUserGroup "CBodyComponent"
	// MNetworkAlias "CBodyComponent"
	// MNetworkTypeAlias "CBodyComponent"
	// MNetworkPriority "48"
	CBodyComponent *m_CBodyComponent; 	// 0x30
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
	LifeState_t m_lifeState; 	// 0x2a0
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
	uint8_t unknown4[12];
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
	EntityFlag_t m_fFlags; 	// 0x350
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
class CRenderComponent : public CEntityComponent
{
public:
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
class CHitboxComponent : public CEntityComponent
{
public:
	uint8_t unknown[0x1c];
	// MNetworkEnable
	uint32_t m_bvDisabledHitGroups[1]; 	// 0x24
};

class Color
{
public:
	uint8_t r;
	uint8_t g;
	uint8_t b;
	uint8_t a;
};

class CUtlVectorEmbeddedNetworkVar
{
public:
	uint8_t unknown[0x50];
};


// Alignment: 11
// Size: 0x58
class CGlowProperty
{
public:
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
class CNetworkUtlVectorBase
{
public:
	uint8_t unknown[0x18];
};

// Alignment: 26
// Size: 0x6f0
class CBaseModelEntity : public CBaseEntity
{
public:
	virtual void *MaybeGetSchema();
	virtual uint64_t *IheUnk0(char a2);
	// virtual int *IheUnk1(int *a2);
	
	virtual void *CeiUnk2();
	virtual void *CeiUnk3();
	virtual void Precache(int64_t *a2);
	// virtual int64_t InitialSpawn();
	// virtual void CeiUnk6(int64_t *a2);
	// virtual void CeiUnk7();
	virtual void CeiUnk8(uint32_t a2, int64_t a3, int64_t a4);
	virtual void CeiUnk9();
	virtual bool CeiUnk10(int a2, int a3);
	// virtual int64_t CeiReturnZero11();
	// virtual int64_t CeiReturnZero12();
	// virtual void CeiNullSub13();
	// virtual bool CeiUnk14(int64_t a2);
	// virtual void CeiUnk15(void *a2, int64_t a3, int a4);
	virtual int64_t CeiUnk16(int64_t a2);
	// virtual int64_t CeiUnk17(void **a2);
	// virtual bool CeiUnk18();
	virtual int64_t OnRestore();
	// virtual int32_t CeiUnk20();
	// virtual int *CeiUnk21(int *a2);
	// virtual int64_t MaybeOnMemberChanged(int64_t memberOffset, int64_t a3, int64_t a4);
	// virtual int64_t CeiUnk23(int64_t a2);
	// virtual int64_t CeiUnk24(int64_t a2, int64_t a3);
	// virtual bool CeiUnk25();
	// virtual int16_t *CeiUnk26(int16_t *a2, int16_t *a3);
	// virtual bool CeiUnk27();
	// virtual bool CeiReturnZero28();
	// virtual void **CeiUnk29(int64_t *a2);
	virtual int64_t *CeiUnk30();
	virtual void CeiUnk31();
	
	virtual int64_t CbeUnk32();
	// virtual bool CbeReturnZero33();
	virtual int64_t CbeUnk34(int64_t *a2);
	// virtual int64_t CbeReturnZero35();
	// virtual void CbeNullSub36();
	virtual int64_t *CbeUnk37(int64_t *a2, int64_t *a3);
	// virtual void CbeUnk38(int64_t *a2);
	virtual void *CbeUnk39();
	virtual void *CbeUnk40();
	// virtual int64_t CbeReturnZero41();
	// virtual int64_t CbeReturnZero42();
	// virtual int64_t CbeReturnZero43();
	// virtual int64_t CbeReturnZero44();
	// virtual int64_t CbeReturnZero45();
	// virtual int64_t CbeReturnZero46();
	// virtual bool CbeUnk47();
	// virtual bool CbeUnk48();
	// virtual int64_t CbeUnk49();
	// virtual int64_t CbeUnk50();
	// virtual int64_t *CbeUnk51(int64_t *a2, int64_t **a3);
	// virtual void CbeUnk52();
	// virtual void CbeUnk53();
	// virtual void CbeUnk54();
	// virtual bool CbeUnk55();
	// virtual int64_t CbeUnk56();
	// virtual int64_t CbeUnk57(int64_t a2);
	// virtual int64_t CbeUnk58(int64_t a2);
	// virtual void *CbeUnk59(void *a2);
	// virtual CCollisionProperty *GetCollisionProperty();
	// virtual bool CbeUnk61();
	// virtual bool CbeReturnZero62();
	virtual void CbeUnk63(bool a2);
	// virtual void CbeUnk64();
	// virtual void VPhysicsUpdate(void *pPhysics);
	// virtual int CbeUnk66(int64_t *a2, int a3);
	// virtual bool CbeUnk67();
	// virtual int64_t CbeUnk68(int64_t *a2);
	// virtual void VPhysicsShadowCollision(int index, void *pEvent);
	// virtual void CbeUnk70(int a2, int64_t a3);
	// virtual void CbeNullSub71();
	// virtual void CbeUnk72(float a2);
	// virtual bool CbeReturnZero73();
	// virtual void SetMoveType(MoveType_t moveType, MoveCollide_t moveCollide);
	// virtual bool CbeUnk75(uint8_t a2);
	// virtual Vector *CbeUnk76(Vector *a2);
	// virtual void CbeNullSub77();
	// virtual void CbeUnk78();
	// virtual int64_t CbeUnk79();
	// virtual int64_t CbeUnk80(void *a2);
	// virtual int64_t CbeUnk81(void *a2, bool a3);
	// virtual void CbeNullSub82();
	// virtual CBaseEntity *CbeUnk83();
	// virtual void CbeNullSub84();
	// virtual int64_t MaybeChangeTeam(uint32_t teamNumber);
	// virtual bool InSameTeam(CBaseEntity *pEntity);
	// virtual void CbeUnk87(void *a2, uint32_t a3);
	// virtual int64_t CbeReturnTwo88();
	virtual void *CbeReturnZero89();
	// virtual void ***CbeUnk90();
	// virtual int64_t CbeUnk91(char *a2, char *a3);
	// virtual int64_t CbeReturnZero92();
	// virtual bool CbeReturnZero93();
	virtual bool CbeReturnZero94();
	// virtual bool CbeReturnZero95();
	// virtual void AddContext(const char *contextNam);
	// virtual char *CbeUnk97(char *a2);
	// virtual void CbeUnk98();
	// virtual void CbeNullSub99();
	// virtual bool IsOnGround();
	// virtual bool GetAutoAimRadius();
	// virtual int64_t CbeUnk102(int64_t a2);
	// virtual int64_t CbeUnk103(int64_t a2);
	// virtual bool MaybePassesDamageFilter(void *takeDamageInfo);
	// virtual bool CbeReturnOne105();
	// virtual int TakeHealth(float flHealth);
	// virtual float GetHealthFrac();
	// virtual int64_t CbeUnk108(int64_t a2);
	// virtual int64_t CbeUnk109(void *a2);
	virtual uint8_t CbeUnk110(void *a2, int64_t a3);
	// virtual void Event_Killed(void *cTakeDamageInfo);
	// virtual void Event_KilledOther(CBaseEntity *pVictim, void *cTakeDamageInfo);
	// virtual bool CbeReturnOne113();
	// virtual double CbeReturnZero114();
	// virtual int CbeUnk115(void *a2, int64_t a3);
	// virtual int ImpactTrace(void *pTrace, int iDamageType, char *pCustomImpactName);
	// virtual bool CbeReturnZero117();
	// virtual bool CbeUnk118(uint8_t **a2);
	// virtual bool CbeReturnZero119();
	// virtual bool CbeUnk120();
	// virtual void OnEntityEvent(EntityEvent_t, int64_t nContents);
	// virtual bool CbeUnk122(void *a2);
	// virtual const char *CbeReturnZero123();
	// virtual int64_t CbeUnk124(int64_t a2);
	// virtual int64_t *CbeUnk125(int64_t a2);
	// virtual int64_t *MaybeTouch(CBaseEntity *other);
	// virtual int64_t *CbeUnk127(int64_t a2);
	// virtual void CbeNullSub128();
	// virtual int64_t *CbeUnk129(int64_t a2);
	// virtual void CbeNullSub130();
	// virtual int64_t CbeReturnZero131();
	// virtual int64_t *CbeUnk132();
	// virtual int64_t *CbeUnk133();
	// virtual void CbeUnk134();
	// virtual void CbeUnk135(); // possibly has a call to Physics_SimulateEntity inside it
	// virtual void CbeNullSub136();
	// virtual void CbeNullSub137();
	// virtual void CbeUnk138(void *a2, Vector *velocity);
	// virtual void CbeNullSub139();
	// virtual int64_t CbeUnk140(int64_t a2, int64_t a3, Vector *a4);
	// virtual bool CbeReturnOne141();
	// virtual int32_t GetBloodColor();
	// virtual bool MaybeIsDead();
	// virtual bool IsAlive();
	// virtual bool CbeReturnZero145();
	// virtual int64_t CbeUnk146();
	// virtual bool CbeReturnZero147();
	// virtual bool CbeReturnZero148();
	// virtual bool CbeUnk149();
	// virtual int64_t CbeReturnZero150();
	// virtual int64_t CbeReturnZero151();
	// virtual bool CbeReturnZero152();
	// virtual int64_t CbeReturnZero153();
	// virtual bool CbeReturnZero154();
	// virtual int64_t CbeReturnZero155();
	// virtual int64_t CbeReturnZero156();
	// virtual bool CbeReturnZero157();
	// virtual int GetMaxHealth();
	// virtual int SetHealth(int health);
	// virtual void ModifyOrAppendCriteria(void *aiCriteriaSet);
	// virtual int64_t CbeUnk161(char *a2);
	// virtual void CbeNullSub162();
	// virtual int64_t CbeReturnZero163();
	// virtual double CbeReturnZero164();
	// virtual void CbeNullSub165();
	// virtual Vector *MaybeGetViewOffset(Vector *a2);
	// virtual Vector *MaybeEyePosition(Vector *a2);
	// virtual Vector *MaybeLocalEyeAngles(Vector *a2);
	// virtual int64_t CbeUnk169(int64_t a2);
	// virtual void SetTimeScale(float timescale);
	// virtual Vector *CbeUnk171(Vector *a2, int64_t a3, bool a4);
	// virtual int64_t CbeUnk172(int64_t a2);
	virtual CNetworkViewOffsetVector *CbeUnk173();
	// virtual Vector *MaybeGetAbsVelocity2(Vector *a2);
	// virtual bool MaybeHasBaseVelocity();
	// virtual void CbeNullSub176();
	// virtual void CbeUnk177(Vector *a2);
	// virtual int64_t CbeUnk178();
	// virtual bool CbeTraceSomething179(Vector *a2, int64_t *a3);
	// virtual bool CbeTraceSomething180(Vector *a2, CBaseEntity *a3, CBaseEntity **a4);
	// virtual bool CbeReturnOne181();
	// virtual CBaseEntity *CbeUnk182();
	// virtual bool CbeReturnZero183();
	// virtual void CbeNullSub184();
	// virtual int64_t CbeNullSub185(int64_t a2);
	// virtual int32_t *MaybeScriptEmitSound(char *soundname);
	// virtual bool CbeUnk187(int64_t a2, int32_t *a3);
	// virtual bool CbeUnk188(int64_t a2, Vector *a3);
	// virtual bool CbeUnk189(int32_t *a2, int64_t *a3);
	// virtual void SetEffects(uint32_t nEffects);
	// virtual bool CbeReturnOne191();
	// virtual int64_t CbeReturnZero192();
	// virtual int64_t CbeReturnZero193();
	// virtual int32_t CbeUnk194();
	// virtual bool CbeNullSub195(uint32_t a2);
	// virtual void CbeNullSub196();
	// virtual void CbeNullSub197();
	// virtual bool CbeReturnZero198();
	// virtual double CbeReturnZero199();
	// virtual double CbeReturnZero200();
	// virtual double CbeReturnZero201();
	// virtual void CbeNullSub202();
	// virtual void CbeNullSub203();
	// virtual bool CbeReturnOne204();
	// virtual void CbeNullSub205();
	
	virtual void CbmeUnk206();
	virtual void CbmeNullSub207();
	virtual const char *DamageDecal(int bitsDamageType, int gameMaterial);
	virtual bool CbmeReturnOne209();
	virtual void CbmeNullSub210();
	virtual bool CbmeUnk211();
	virtual void MaybeSetViewOffset(Vector *viewOffset);
	virtual bool IsRagdoll();
	virtual bool CbmeUnk214(int64_t a2, bool a3, int64_t a4, int a5, int64_t a6);
	virtual void CbmeUnk215(int64_t a2);
	virtual void CbmeUnk216(int64_t a2);
	virtual void Extinguish();
	virtual bool Dissolve(char *pMaterialName, float flStartTime, bool bNPCOnly, int nDissolveType, Vector *vDissolverOrigin, int iMagnitude);
	
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
class PhysicsRagdollPose_t
{
public:
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
class IChoreoServices
{
public:
	uint8_t unknown[8];
};

// Alignment: 11
// Size: 0x820
class CBaseAnimGraph : public CBaseModelEntity
{
public:
	virtual void *MaybeGetSchema();
	virtual uint64_t *IheUnk0(char a2);
	// virtual int *IheUnk1(int *a2);
	
	virtual void *CeiUnk2();
	// virtual void *CeiUnk3();
	virtual void Precache(int64_t *a2);
	virtual int64_t InitialSpawn();
	virtual void CeiUnk6(int64_t *a2);
	virtual void CeiUnk7();
	virtual void CeiUnk8(uint32_t a2, int64_t a3, int64_t a4);
	virtual void CeiUnk9();
	virtual bool CeiUnk10(int a2, int a3);
	// virtual int64_t CeiReturnZero11();
	// virtual int64_t CeiReturnZero12();
	virtual void CeiNullSub13();
	// virtual bool CeiUnk14(int64_t a2);
	virtual void CeiUnk15(void *a2, int64_t a3, int a4);
	// virtual int64_t CeiUnk16(int64_t a2);
	virtual int64_t CeiUnk17(void **a2);
	// virtual bool CeiUnk18();
	// virtual int64_t OnRestore();
	// virtual int32_t CeiUnk20();
	// virtual int *CeiUnk21(int *a2);
	// virtual int64_t MaybeOnMemberChanged(int64_t memberOffset, int64_t a3, int64_t a4);
	// virtual int64_t CeiUnk23(int64_t a2);
	// virtual int64_t CeiUnk24(int64_t a2, int64_t a3);
	// virtual bool CeiUnk25();
	// virtual int16_t *CeiUnk26(int16_t *a2, int16_t *a3);
	// virtual bool CeiUnk27();
	// virtual bool CeiReturnZero28();
	// virtual void **CeiUnk29(int64_t *a2);
	virtual int64_t *CeiUnk30();
	virtual void CeiUnk31();
	
	virtual int64_t CbeUnk32();
	// virtual bool CbeReturnZero33();
	// virtual int64_t CbeUnk34(int64_t *a2);
	// virtual int64_t CbeReturnZero35();
	// virtual void CbeNullSub36();
	virtual int64_t *CbeUnk37(int64_t *a2, int64_t *a3);
	// virtual void CbeUnk38(int64_t *a2);
	// virtual void *CbeUnk39();
	// virtual void *CbeUnk40();
	virtual int64_t CbeReturnZero41();
	virtual int64_t CbeReturnZero42();
	// virtual int64_t CbeReturnZero43();
	// virtual int64_t CbeReturnZero44();
	virtual int64_t CbeReturnZero45();
	virtual int64_t CbeReturnZero46();
	virtual bool CbeUnk47();
	virtual bool CbeUnk48();
	virtual int64_t CbeUnk49();
	virtual int64_t CbeUnk50();
	virtual int64_t *CbeUnk51(int64_t *a2, int64_t **a3);
	virtual void CbeUnk52();
	virtual void CbeUnk53();
	virtual void CbeUnk54();
	// virtual bool CbeUnk55();
	// virtual int64_t CbeUnk56();
	// virtual int64_t CbeUnk57(int64_t a2);
	// virtual int64_t CbeUnk58(int64_t a2);
	// virtual void *CbeUnk59(void *a2);
	// virtual CCollisionProperty *GetCollisionProperty();
	// virtual bool CbeUnk61();
	// virtual bool CbeReturnZero62();
	// virtual void CbeUnk63(bool a2);
	// virtual void CbeUnk64();
	// virtual void VPhysicsUpdate(void *pPhysics);
	// virtual int CbeUnk66(int64_t *a2, int a3);
	// virtual bool CbeUnk67();
	virtual int64_t CbeUnk68(int64_t *a2);
	// virtual void VPhysicsShadowCollision(int index, void *pEvent);
	// virtual void CbeUnk70(int a2, int64_t a3);
	// virtual void CbeNullSub71();
	// virtual void CbeUnk72(float a2);
	// virtual bool CbeReturnZero73();
	// virtual void SetMoveType(MoveType_t moveType, MoveCollide_t moveCollide);
	// virtual bool CbeUnk75(uint8_t a2);
	// virtual Vector *CbeUnk76(Vector *a2);
	// virtual void CbeNullSub77();
	virtual void CbeUnk78();
	// virtual int64_t CbeUnk79();
	// virtual int64_t CbeUnk80(void *a2);
	virtual int64_t CbeUnk81(void *a2, bool a3);
	// virtual void CbeNullSub82();
	// virtual CBaseEntity *CbeUnk83();
	// virtual void CbeNullSub84();
	// virtual int64_t MaybeChangeTeam(uint32_t teamNumber);
	// virtual bool InSameTeam(CBaseEntity *pEntity);
	// virtual void CbeUnk87(void *a2, uint32_t a3);
	// virtual int64_t CbeReturnTwo88();
	// virtual void *CbeReturnZero89();
	// virtual void ***CbeUnk90();
	// virtual int64_t CbeUnk91(char *a2, char *a3);
	// virtual int64_t CbeReturnZero92();
	// virtual bool CbeReturnZero93();
	// virtual bool CbeReturnZero94();
	// virtual bool CbeReturnZero95();
	// virtual void AddContext(const char *contextNam);
	// virtual char *CbeUnk97(char *a2);
	// virtual void CbeUnk98();
	// virtual void CbeNullSub99();
	// virtual bool IsOnGround();
	// virtual bool GetAutoAimRadius();
	// virtual int64_t CbeUnk102(int64_t a2);
	// virtual int64_t CbeUnk103(int64_t a2);
	// virtual bool MaybePassesDamageFilter(void *takeDamageInfo);
	// virtual bool CbeReturnOne105();
	// virtual int TakeHealth(float flHealth);
	// virtual float GetHealthFrac();
	// virtual int64_t CbeUnk108(int64_t a2);
	// virtual int64_t CbeUnk109(void *a2);
	// virtual uint8_t CbeUnk110(void *a2, int64_t a3);
	// virtual void Event_Killed(void *cTakeDamageInfo);
	// virtual void Event_KilledOther(CBaseEntity *pVictim, void *cTakeDamageInfo);
	// virtual bool CbeReturnOne113();
	// virtual double CbeReturnZero114();
	// virtual int CbeUnk115(void *a2, int64_t a3);
	// virtual int ImpactTrace(void *pTrace, int iDamageType, char *pCustomImpactName);
	// virtual bool CbeReturnZero117();
	// virtual bool CbeUnk118(uint8_t **a2);
	// virtual bool CbeReturnZero119();
	// virtual bool CbeUnk120();
	// virtual void OnEntityEvent(EntityEvent_t, int64_t nContents);
	// virtual bool CbeUnk122(void *a2);
	// virtual const char *CbeReturnZero123();
	// virtual int64_t CbeUnk124(int64_t a2);
	// virtual int64_t *CbeUnk125(int64_t a2);
	// virtual int64_t *MaybeTouch(CBaseEntity *other);
	// virtual int64_t *CbeUnk127(int64_t a2);
	// virtual void CbeNullSub128();
	// virtual int64_t *CbeUnk129(int64_t a2);
	// virtual void CbeNullSub130();
	// virtual int64_t CbeReturnZero131();
	// virtual int64_t *CbeUnk132();
	// virtual int64_t *CbeUnk133();
	// virtual void CbeUnk134();
	// virtual void CbeUnk135(); // possibly has a call to Physics_SimulateEntity inside it
	// virtual void CbeNullSub136();
	// virtual void CbeNullSub137();
	// virtual void CbeUnk138(void *a2, Vector *velocity);
	// virtual void CbeNullSub139();
	virtual int64_t CbeUnk140(int64_t a2, int64_t a3, Vector *a4);
	// virtual bool CbeReturnOne141();
	// virtual int32_t GetBloodColor();
	// virtual bool MaybeIsDead();
	// virtual bool IsAlive();
	// virtual bool CbeReturnZero145();
	// virtual int64_t CbeUnk146();
	// virtual bool CbeReturnZero147();
	// virtual bool CbeReturnZero148();
	// virtual bool CbeUnk149();
	// virtual int64_t CbeReturnZero150();
	// virtual int64_t CbeReturnZero151();
	// virtual bool CbeReturnZero152();
	// virtual int64_t CbeReturnZero153();
	// virtual bool CbeReturnZero154();
	// virtual int64_t CbeReturnZero155();
	// virtual int64_t CbeReturnZero156();
	// virtual bool CbeReturnZero157();
	// virtual int GetMaxHealth();
	// virtual int SetHealth(int health);
	// virtual void ModifyOrAppendCriteria(void *aiCriteriaSet);
	// virtual int64_t CbeUnk161(char *a2);
	// virtual void CbeNullSub162();
	// virtual int64_t CbeReturnZero163();
	// virtual double CbeReturnZero164();
	// virtual void CbeNullSub165();
	// virtual Vector *MaybeGetViewOffset(Vector *a2);
	// virtual Vector *MaybeEyePosition(Vector *a2);
	// virtual Vector *MaybeLocalEyeAngles(Vector *a2);
	// virtual int64_t CbeUnk169(int64_t a2);
	// virtual void SetTimeScale(float timescale);
	// virtual Vector *CbeUnk171(Vector *a2, int64_t a3, bool a4);
	// virtual int64_t CbeUnk172(int64_t a2);
	// virtual CNetworkViewOffsetVector *CbeUnk173();
	// virtual Vector *MaybeGetAbsVelocity2(Vector *a2);
	// virtual bool MaybeHasBaseVelocity();
	// virtual void CbeNullSub176();
	// virtual void CbeUnk177(Vector *a2);
	// virtual int64_t CbeUnk178();
	// virtual bool CbeTraceSomething179(Vector *a2, int64_t *a3);
	// virtual bool CbeTraceSomething180(Vector *a2, CBaseEntity *a3, CBaseEntity **a4);
	// virtual bool CbeReturnOne181();
	// virtual CBaseEntity *CbeUnk182();
	// virtual bool CbeReturnZero183();
	// virtual void CbeNullSub184();
	// virtual int64_t CbeNullSub185(int64_t a2);
	// virtual int32_t *MaybeScriptEmitSound(char *soundname);
	// virtual bool CbeUnk187(int64_t a2, int32_t *a3);
	// virtual bool CbeUnk188(int64_t a2, Vector *a3);
	// virtual bool CbeUnk189(int32_t *a2, int64_t *a3);
	// virtual void SetEffects(uint32_t nEffects);
	// virtual bool CbeReturnOne191();
	// virtual int64_t CbeReturnZero192();
	// virtual int64_t CbeReturnZero193();
	// virtual int32_t CbeUnk194();
	// virtual bool CbeNullSub195(uint32_t a2);
	// virtual void CbeNullSub196();
	// virtual void CbeNullSub197();
	// virtual bool CbeReturnZero198();
	// virtual double CbeReturnZero199();
	// virtual double CbeReturnZero200();
	// virtual double CbeReturnZero201();
	// virtual void CbeNullSub202();
	// virtual void CbeNullSub203();
	// virtual bool CbeReturnOne204();
	// virtual void CbeNullSub205();
	
	// virtual void CbmeUnk206();
	// virtual void CbmeNullSub207();
	// virtual const char *DamageDecal(int bitsDamageType, int gameMaterial);
	// virtual bool CbmeReturnOne209();
	// virtual void CbmeNullSub210();
	// virtual bool CbmeUnk211();
	// virtual void MaybeSetViewOffset(Vector *viewOffset);
	virtual bool IsRagdoll();
	// virtual bool CbmeUnk214(int64_t a2, bool a3, int64_t a4, int a5, int64_t a6);
	// virtual void CbmeUnk215(int64_t a2);
	// virtual void CbmeUnk216(int64_t a2);
	// virtual void Extinguish();
	// virtual bool Dissolve(char *pMaterialName, float flStartTime, bool bNPCOnly, int nDissolveType, Vector *vDissolverOrigin, int iMagnitude);
	
	virtual void CbagNullSub219();
	virtual void CbagNullSub220();
	virtual void CbagUnk221();
	virtual bool CbagReturnZero222();
	virtual int64_t CbagReturnZero223();
	virtual int64_t CbagUnk224();
	virtual void CbagNullSub225();
	virtual void CbagNullSub226();
	virtual void CbagNullSub227();
	virtual void *CbagUnk228();
	virtual void CbagNullSub229();
	virtual int64_t CbagUnk230(float a2, float a3);
	virtual void CbagUnk231(float a2, uint8_t a3);
	virtual void CbagNullSub232();
	virtual void CbagUnk233();
	virtual bool CbagUnk234();
	virtual void CbagNullSub235();
	virtual void CbagUnk236(void *a2, int32_t *a3);
	virtual bool CbagReturnOne237();
	virtual Vector *CbagUnk238(Vector *a2, const char *a3);
	virtual void CbagUnk239(void *a2);
	virtual void CbagUnk240(void *a2, void *a3, char *a4);
	virtual bool CbagReturnZero241();
	virtual bool CbagReturnZero242();
	virtual bool CbagUnk243(int64_t a2, bool a3);
	virtual bool CbagUnk244();
	virtual bool CbagReturnZero245();
	virtual void CbagUnk246(Vector *a2, Vector *a3);
	virtual void CbagNullSub247();
	virtual bool CbagReturnZero248();
	virtual void CbagNullSub249();
	virtual int64_t CbagUnk250(int64_t a2, char *a3);
	
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
class CBaseFlex : public CBaseAnimGraph
{
public:
	virtual void *MaybeGetSchema();
	virtual uint64_t *IheUnk0(char a2);
	// virtual int *IheUnk1(int *a2);
	
	virtual void *CeiUnk2();
	// virtual void *CeiUnk3();
	// virtual void Precache(int64_t *a2);
	// virtual int64_t InitialSpawn();
	// virtual void CeiUnk6(int64_t *a2);
	// virtual void CeiUnk7();
	// virtual void CeiUnk8(uint32_t a2, int64_t a3, int64_t a4);
	// virtual void CeiUnk9();
	// virtual bool CeiUnk10(int a2, int a3);
	// virtual int64_t CeiReturnZero11();
	// virtual int64_t CeiReturnZero12();
	// virtual void CeiNullSub13();
	// virtual bool CeiUnk14(int64_t a2);
	// virtual void CeiUnk15(void *a2, int64_t a3, int a4);
	// virtual int64_t CeiUnk16(int64_t a2);
	// virtual int64_t CeiUnk17(void **a2);
	// virtual bool CeiUnk18();
	virtual int64_t OnRestore();
	// virtual int32_t CeiUnk20();
	// virtual int *CeiUnk21(int *a2);
	// virtual int64_t MaybeOnMemberChanged(int64_t memberOffset, int64_t a3, int64_t a4);
	// virtual int64_t CeiUnk23(int64_t a2);
	// virtual int64_t CeiUnk24(int64_t a2, int64_t a3);
	// virtual bool CeiUnk25();
	// virtual int16_t *CeiUnk26(int16_t *a2, int16_t *a3);
	// virtual bool CeiUnk27();
	// virtual bool CeiReturnZero28();
	// virtual void **CeiUnk29(int64_t *a2);
	virtual int64_t *CeiUnk30();
	virtual void CeiUnk31();
	
	virtual int64_t CbeUnk32();
	// virtual bool CbeReturnZero33();
	// virtual int64_t CbeUnk34(int64_t *a2);
	// virtual int64_t CbeReturnZero35();
	// virtual void CbeNullSub36();
	virtual int64_t *CbeUnk37(int64_t *a2, int64_t *a3);
	// virtual void CbeUnk38(int64_t *a2);
	// virtual void *CbeUnk39();
	// virtual void *CbeUnk40();
	// virtual int64_t CbeReturnZero41();
	// virtual int64_t CbeReturnZero42();
	// virtual int64_t CbeReturnZero43();
	// virtual int64_t CbeReturnZero44();
	// virtual int64_t CbeReturnZero45();
	// virtual int64_t CbeReturnZero46();
	// virtual bool CbeUnk47();
	// virtual bool CbeUnk48();
	// virtual int64_t CbeUnk49();
	// virtual int64_t CbeUnk50();
	// virtual int64_t *CbeUnk51(int64_t *a2, int64_t **a3);
	// virtual void CbeUnk52();
	// virtual void CbeUnk53();
	// virtual void CbeUnk54();
	// virtual bool CbeUnk55();
	// virtual int64_t CbeUnk56();
	// virtual int64_t CbeUnk57(int64_t a2);
	// virtual int64_t CbeUnk58(int64_t a2);
	// virtual void *CbeUnk59(void *a2);
	// virtual CCollisionProperty *GetCollisionProperty();
	// virtual bool CbeUnk61();
	// virtual bool CbeReturnZero62();
	// virtual void CbeUnk63(bool a2);
	// virtual void CbeUnk64();
	// virtual void VPhysicsUpdate(void *pPhysics);
	// virtual int CbeUnk66(int64_t *a2, int a3);
	// virtual bool CbeUnk67();
	// virtual int64_t CbeUnk68(int64_t *a2);
	// virtual void VPhysicsShadowCollision(int index, void *pEvent);
	// virtual void CbeUnk70(int a2, int64_t a3);
	// virtual void CbeNullSub71();
	// virtual void CbeUnk72(float a2);
	// virtual bool CbeReturnZero73();
	// virtual void SetMoveType(MoveType_t moveType, MoveCollide_t moveCollide);
	// virtual bool CbeUnk75(uint8_t a2);
	// virtual Vector *CbeUnk76(Vector *a2);
	// virtual void CbeNullSub77();
	// virtual void CbeUnk78();
	// virtual int64_t CbeUnk79();
	// virtual int64_t CbeUnk80(void *a2);
	// virtual int64_t CbeUnk81(void *a2, bool a3);
	// virtual void CbeNullSub82();
	// virtual CBaseEntity *CbeUnk83();
	// virtual void CbeNullSub84();
	// virtual int64_t MaybeChangeTeam(uint32_t teamNumber);
	// virtual bool InSameTeam(CBaseEntity *pEntity);
	// virtual void CbeUnk87(void *a2, uint32_t a3);
	// virtual int64_t CbeReturnTwo88();
	// virtual void *CbeReturnZero89();
	// virtual void ***CbeUnk90();
	// virtual int64_t CbeUnk91(char *a2, char *a3);
	// virtual int64_t CbeReturnZero92();
	// virtual bool CbeReturnZero93();
	// virtual bool CbeReturnZero94();
	// virtual bool CbeReturnZero95();
	// virtual void AddContext(const char *contextNam);
	// virtual char *CbeUnk97(char *a2);
	// virtual void CbeUnk98();
	// virtual void CbeNullSub99();
	// virtual bool IsOnGround();
	// virtual bool GetAutoAimRadius();
	// virtual int64_t CbeUnk102(int64_t a2);
	// virtual int64_t CbeUnk103(int64_t a2);
	// virtual bool MaybePassesDamageFilter(void *takeDamageInfo);
	// virtual bool CbeReturnOne105();
	// virtual int TakeHealth(float flHealth);
	// virtual float GetHealthFrac();
	// virtual int64_t CbeUnk108(int64_t a2);
	// virtual int64_t CbeUnk109(void *a2);
	// virtual uint8_t CbeUnk110(void *a2, int64_t a3);
	// virtual void Event_Killed(void *cTakeDamageInfo);
	// virtual void Event_KilledOther(CBaseEntity *pVictim, void *cTakeDamageInfo);
	// virtual bool CbeReturnOne113();
	// virtual double CbeReturnZero114();
	// virtual int CbeUnk115(void *a2, int64_t a3);
	// virtual int ImpactTrace(void *pTrace, int iDamageType, char *pCustomImpactName);
	// virtual bool CbeReturnZero117();
	// virtual bool CbeUnk118(uint8_t **a2);
	// virtual bool CbeReturnZero119();
	// virtual bool CbeUnk120();
	// virtual void OnEntityEvent(EntityEvent_t, int64_t nContents);
	// virtual bool CbeUnk122(void *a2);
	// virtual const char *CbeReturnZero123();
	// virtual int64_t CbeUnk124(int64_t a2);
	// virtual int64_t *CbeUnk125(int64_t a2);
	// virtual int64_t *MaybeTouch(CBaseEntity *other);
	// virtual int64_t *CbeUnk127(int64_t a2);
	// virtual void CbeNullSub128();
	// virtual int64_t *CbeUnk129(int64_t a2);
	// virtual void CbeNullSub130();
	// virtual int64_t CbeReturnZero131();
	// virtual int64_t *CbeUnk132();
	// virtual int64_t *CbeUnk133();
	// virtual void CbeUnk134();
	// virtual void CbeUnk135(); // possibly has a call to Physics_SimulateEntity inside it
	// virtual void CbeNullSub136();
	// virtual void CbeNullSub137();
	// virtual void CbeUnk138(void *a2, Vector *velocity);
	// virtual void CbeNullSub139();
	// virtual int64_t CbeUnk140(int64_t a2, int64_t a3, Vector *a4);
	// virtual bool CbeReturnOne141();
	// virtual int32_t GetBloodColor();
	// virtual bool MaybeIsDead();
	// virtual bool IsAlive();
	// virtual bool CbeReturnZero145();
	// virtual int64_t CbeUnk146();
	// virtual bool CbeReturnZero147();
	// virtual bool CbeReturnZero148();
	// virtual bool CbeUnk149();
	// virtual int64_t CbeReturnZero150();
	// virtual int64_t CbeReturnZero151();
	// virtual bool CbeReturnZero152();
	// virtual int64_t CbeReturnZero153();
	// virtual bool CbeReturnZero154();
	// virtual int64_t CbeReturnZero155();
	// virtual int64_t CbeReturnZero156();
	// virtual bool CbeReturnZero157();
	// virtual int GetMaxHealth();
	// virtual int SetHealth(int health);
	// virtual void ModifyOrAppendCriteria(void *aiCriteriaSet);
	// virtual int64_t CbeUnk161(char *a2);
	// virtual void CbeNullSub162();
	// virtual int64_t CbeReturnZero163();
	// virtual double CbeReturnZero164();
	// virtual void CbeNullSub165();
	// virtual Vector *MaybeGetViewOffset(Vector *a2);
	// virtual Vector *MaybeEyePosition(Vector *a2);
	// virtual Vector *MaybeLocalEyeAngles(Vector *a2);
	// virtual int64_t CbeUnk169(int64_t a2);
	// virtual void SetTimeScale(float timescale);
	// virtual Vector *CbeUnk171(Vector *a2, int64_t a3, bool a4);
	// virtual int64_t CbeUnk172(int64_t a2);
	// virtual CNetworkViewOffsetVector *CbeUnk173();
	// virtual Vector *MaybeGetAbsVelocity2(Vector *a2);
	// virtual bool MaybeHasBaseVelocity();
	// virtual void CbeNullSub176();
	// virtual void CbeUnk177(Vector *a2);
	// virtual int64_t CbeUnk178();
	// virtual bool CbeTraceSomething179(Vector *a2, int64_t *a3);
	// virtual bool CbeTraceSomething180(Vector *a2, CBaseEntity *a3, CBaseEntity **a4);
	// virtual bool CbeReturnOne181();
	// virtual CBaseEntity *CbeUnk182();
	// virtual bool CbeReturnZero183();
	// virtual void CbeNullSub184();
	// virtual int64_t CbeNullSub185(int64_t a2);
	// virtual int32_t *MaybeScriptEmitSound(char *soundname);
	// virtual bool CbeUnk187(int64_t a2, int32_t *a3);
	// virtual bool CbeUnk188(int64_t a2, Vector *a3);
	// virtual bool CbeUnk189(int32_t *a2, int64_t *a3);
	// virtual void SetEffects(uint32_t nEffects);
	// virtual bool CbeReturnOne191();
	// virtual int64_t CbeReturnZero192();
	// virtual int64_t CbeReturnZero193();
	// virtual int32_t CbeUnk194();
	// virtual bool CbeNullSub195(uint32_t a2);
	// virtual void CbeNullSub196();
	// virtual void CbeNullSub197();
	// virtual bool CbeReturnZero198();
	// virtual double CbeReturnZero199();
	// virtual double CbeReturnZero200();
	// virtual double CbeReturnZero201();
	// virtual void CbeNullSub202();
	// virtual void CbeNullSub203();
	// virtual bool CbeReturnOne204();
	// virtual void CbeNullSub205();
	
	// virtual void CbmeUnk206();
	// virtual void CbmeNullSub207();
	// virtual const char *DamageDecal(int bitsDamageType, int gameMaterial);
	// virtual bool CbmeReturnOne209();
	// virtual void CbmeNullSub210();
	// virtual bool CbmeUnk211();
	// virtual void MaybeSetViewOffset(Vector *viewOffset);
	// virtual bool IsRagdoll();
	// virtual bool CbmeUnk214(int64_t a2, bool a3, int64_t a4, int a5, int64_t a6);
	// virtual void CbmeUnk215(int64_t a2);
	// virtual void CbmeUnk216(int64_t a2);
	// virtual void Extinguish();
	// virtual bool Dissolve(char *pMaterialName, float flStartTime, bool bNPCOnly, int nDissolveType, Vector *vDissolverOrigin, int iMagnitude);
	
	// virtual void CbagNullSub219();
	// virtual void CbagNullSub220();
	// virtual void CbagUnk221();
	// virtual bool CbagReturnZero222();
	// virtual int64_t CbagReturnZero223();
	// virtual int64_t CbagUnk224();
	// virtual void CbagNullSub225();
	// virtual void CbagNullSub226();
	// virtual void CbagNullSub227();
	// virtual void *CbagUnk228();
	// virtual void CbagNullSub229();
	// virtual int64_t CbagUnk230(float a2, float a3);
	// virtual void CbagUnk231(float a2, uint8_t a3);
	// virtual void CbagNullSub232();
	// virtual void CbagUnk233();
	// virtual bool CbagUnk234();
	// virtual void CbagNullSub235();
	// virtual void CbagUnk236(void *a2, int32_t *a3);
	// virtual bool CbagReturnOne237();
	// virtual Vector *CbagUnk238(Vector *a2, const char *a3);
	// virtual void CbagUnk239(void *a2);
	// virtual void CbagUnk240(void *a2, void *a3, char *a4);
	// virtual bool CbagReturnZero241();
	// virtual bool CbagReturnZero242();
	// virtual bool CbagUnk243(int64_t a2, bool a3);
	// virtual bool CbagUnk244();
	// virtual bool CbagReturnZero245();
	// virtual void CbagUnk246(Vector *a2, Vector *a3);
	// virtual void CbagNullSub247();
	// virtual bool CbagReturnZero248();
	// virtual void CbagNullSub249();
	// virtual int64_t CbagUnk250(int64_t a2, char *a3);
	
	virtual bool CbfUnk251(void *a2);
	virtual bool CbfUnk252(void *a2);
	virtual bool CbfUnk253(void *a2, bool a3, bool a4);
	virtual bool CbfReturnOne254();
	virtual double CbfUnk255(const char *a2, float a3, void *a4, void *a5);
	virtual double CbfUnk256(const char *a2, float a3);
	virtual double CbfUnk257(const char *a2, void *a3, void *a4);
	virtual int64_t CbfUnk258();
	virtual int64_t CbfUnk259(int a2);
	virtual void CbfNullSub260();
	virtual bool CbfReturnOne261();
	
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
class CBaseCombatCharacter : public CBaseFlex
{
public:
	virtual void *MaybeGetSchema();
	virtual uint64_t *IheUnk0(char a2);
	// virtual int *IheUnk1(int *a2);
	
	virtual void *CeiUnk2();
	// virtual void *CeiUnk3();
	// virtual void Precache(int64_t *a2);
	// virtual int64_t InitialSpawn();
	virtual void CeiUnk6(int64_t *a2);
	// virtual void CeiUnk7();
	virtual void CeiUnk8(uint32_t a2, int64_t a3, int64_t a4);
	virtual void CeiUnk9();
	// virtual bool CeiUnk10(int a2, int a3);
	// virtual int64_t CeiReturnZero11();
	// virtual int64_t CeiReturnZero12();
	// virtual void CeiNullSub13();
	// virtual bool CeiUnk14(int64_t a2);
	// virtual void CeiUnk15(void *a2, int64_t a3, int a4);
	// virtual int64_t CeiUnk16(int64_t a2);
	virtual int64_t CeiUnk17(void **a2);
	// virtual bool CeiUnk18();
	// virtual int64_t OnRestore();
	// virtual int32_t CeiUnk20();
	// virtual int *CeiUnk21(int *a2);
	// virtual int64_t MaybeOnMemberChanged(int64_t memberOffset, int64_t a3, int64_t a4);
	// virtual int64_t CeiUnk23(int64_t a2);
	// virtual int64_t CeiUnk24(int64_t a2, int64_t a3);
	// virtual bool CeiUnk25();
	// virtual int16_t *CeiUnk26(int16_t *a2, int16_t *a3);
	// virtual bool CeiUnk27();
	// virtual bool CeiReturnZero28();
	virtual void **CeiUnk29(int64_t *a2);
	virtual int64_t *CeiUnk30();
	virtual void CeiUnk31();
	
	virtual int64_t CbeUnk32();
	// virtual bool CbeReturnZero33();
	// virtual int64_t CbeUnk34(int64_t *a2);
	// virtual int64_t CbeReturnZero35();
	// virtual void CbeNullSub36();
	// virtual int64_t *CbeUnk37(int64_t *a2, int64_t *a3);
	// virtual void CbeUnk38(int64_t *a2);
	// virtual void *CbeUnk39();
	// virtual void *CbeUnk40();
	// virtual int64_t CbeReturnZero41();
	// virtual int64_t CbeReturnZero42();
	// virtual int64_t CbeReturnZero43();
	// virtual int64_t CbeReturnZero44();
	// virtual int64_t CbeReturnZero45();
	// virtual int64_t CbeReturnZero46();
	// virtual bool CbeUnk47();
	// virtual bool CbeUnk48();
	// virtual int64_t CbeUnk49();
	// virtual int64_t CbeUnk50();
	// virtual int64_t *CbeUnk51(int64_t *a2, int64_t **a3);
	// virtual void CbeUnk52();
	// virtual void CbeUnk53();
	// virtual void CbeUnk54();
	// virtual bool CbeUnk55();
	// virtual int64_t CbeUnk56();
	// virtual int64_t CbeUnk57(int64_t a2);
	// virtual int64_t CbeUnk58(int64_t a2);
	virtual void *CbeUnk59(void *a2);
	// virtual CCollisionProperty *GetCollisionProperty();
	// virtual bool CbeUnk61();
	// virtual bool CbeReturnZero62();
	// virtual void CbeUnk63(bool a2);
	// virtual void CbeUnk64();
	virtual void VPhysicsUpdate(void *pPhysics);
	// virtual int CbeUnk66(int64_t *a2, int a3);
	// virtual bool CbeUnk67();
	// virtual int64_t CbeUnk68(int64_t *a2);
	virtual void VPhysicsShadowCollision(int index, void *pEvent);
	virtual void CbeUnk70(int a2, int64_t a3);
	// virtual void CbeNullSub71();
	// virtual void CbeUnk72(float a2);
	// virtual bool CbeReturnZero73();
	// virtual void SetMoveType(MoveType_t moveType, MoveCollide_t moveCollide);
	// virtual bool CbeUnk75(uint8_t a2);
	// virtual Vector *CbeUnk76(Vector *a2);
	// virtual void CbeNullSub77();
	// virtual void CbeUnk78();
	// virtual int64_t CbeUnk79();
	// virtual int64_t CbeUnk80(void *a2);
	// virtual int64_t CbeUnk81(void *a2, bool a3);
	// virtual void CbeNullSub82();
	// virtual CBaseEntity *CbeUnk83();
	// virtual void CbeNullSub84();
	virtual int64_t MaybeChangeTeam(uint32_t teamNumber);
	// virtual bool InSameTeam(CBaseEntity *pEntity);
	// virtual void CbeUnk87(void *a2, uint32_t a3);
	// virtual int64_t CbeReturnTwo88();
	// virtual void *CbeReturnZero89();
	// virtual void ***CbeUnk90();
	// virtual int64_t CbeUnk91(char *a2, char *a3);
	// virtual int64_t CbeReturnZero92();
	// virtual bool CbeReturnZero93();
	// virtual bool CbeReturnZero94();
	// virtual bool CbeReturnZero95();
	// virtual void AddContext(const char *contextNam);
	// virtual char *CbeUnk97(char *a2);
	// virtual void CbeUnk98();
	// virtual void CbeNullSub99();
	// virtual bool IsOnGround();
	// virtual bool GetAutoAimRadius();
	// virtual int64_t CbeUnk102(int64_t a2);
	// virtual int64_t CbeUnk103(int64_t a2);
	// virtual bool MaybePassesDamageFilter(void *takeDamageInfo);
	// virtual bool CbeReturnOne105();
	// virtual int TakeHealth(float flHealth);
	// virtual float GetHealthFrac();
	virtual int64_t CbeUnk108(int64_t a2);
	// virtual int64_t CbeUnk109(void *a2);
	virtual uint8_t CbeUnk110(void *a2, int64_t a3);
	virtual void Event_Killed(void *cTakeDamageInfo);
	// virtual void Event_KilledOther(CBaseEntity *pVictim, void *cTakeDamageInfo);
	// virtual bool CbeReturnOne113();
	// virtual double CbeReturnZero114();
	// virtual int CbeUnk115(void *a2, int64_t a3);
	// virtual int ImpactTrace(void *pTrace, int iDamageType, char *pCustomImpactName);
	// virtual bool CbeReturnZero117();
	// virtual bool CbeUnk118(uint8_t **a2);
	// virtual bool CbeReturnZero119();
	// virtual bool CbeUnk120();
	// virtual void OnEntityEvent(EntityEvent_t, int64_t nContents);
	// virtual bool CbeUnk122(void *a2);
	// virtual const char *CbeReturnZero123();
	// virtual int64_t CbeUnk124(int64_t a2);
	// virtual int64_t *CbeUnk125(int64_t a2);
	// virtual int64_t *MaybeTouch(CBaseEntity *other);
	// virtual int64_t *CbeUnk127(int64_t a2);
	// virtual void CbeNullSub128();
	// virtual int64_t *CbeUnk129(int64_t a2);
	// virtual void CbeNullSub130();
	// virtual int64_t CbeReturnZero131();
	// virtual int64_t *CbeUnk132();
	// virtual int64_t *CbeUnk133();
	// virtual void CbeUnk134();
	// virtual void CbeUnk135(); possibly has a call to Physics_SimulateEntity inside it
	// virtual void CbeNullSub136();
	// virtual void CbeNullSub137();
	// virtual void CbeUnk138(void *a2, Vector *velocity);
	// virtual void CbeNullSub139();
	// virtual int64_t CbeUnk140(int64_t a2, int64_t a3, Vector *a4);
	// virtual bool CbeReturnOne141();
	virtual int32_t GetBloodColor();
	// virtual bool MaybeIsDead();
	// virtual bool IsAlive();
	// virtual bool CbeReturnZero145();
	// virtual int64_t CbeUnk146();
	// virtual bool CbeReturnZero147();
	// virtual bool CbeReturnZero148();
	virtual bool CbeUnk149();
	virtual int64_t CbeReturnZero150();
	virtual int64_t CbeReturnZero151();
	// virtual bool CbeReturnZero152();
	// virtual int64_t CbeReturnZero153();
	// virtual bool CbeReturnZero154();
	// virtual int64_t CbeReturnZero155();
	// virtual int64_t CbeReturnZero156();
	// virtual bool CbeReturnZero157();
	// virtual int GetMaxHealth();
	// virtual int SetHealth(int health);
	// virtual void ModifyOrAppendCriteria(void *aiCriteriaSet);
	// virtual int64_t CbeUnk161(char *a2);
	// virtual void CbeNullSub162();
	// virtual int64_t CbeReturnZero163();
	// virtual double CbeReturnZero164();
	// virtual void CbeNullSub165();
	// virtual Vector *MaybeGetViewOffset(Vector *a2);
	// virtual Vector *MaybeEyePosition(Vector *a2);
	// virtual Vector *MaybeLocalEyeAngles(Vector *a2);
	// virtual int64_t CbeUnk169(int64_t a2);
	// virtual void SetTimeScale(float timescale);
	// virtual Vector *CbeUnk171(Vector *a2, int64_t a3, bool a4);
	// virtual int64_t CbeUnk172(int64_t a2);
	// virtual CNetworkViewOffsetVector *CbeUnk173();
	// virtual Vector *MaybeGetAbsVelocity2(Vector *a2);
	// virtual bool MaybeHasBaseVelocity();
	// virtual void CbeNullSub176();
	// virtual void CbeUnk177(Vector *a2);
	// virtual int64_t CbeUnk178();
	virtual bool CbeTraceSomething179(Vector *a2, int64_t *a3);
	virtual bool CbeTraceSomething180(Vector *a2, CBaseEntity *a3, CBaseEntity **a4);
	// virtual bool CbeReturnOne181();
	// virtual CBaseEntity *CbeUnk182();
	// virtual bool CbeReturnZero183();
	// virtual void CbeNullSub184();
	// virtual int64_t CbeNullSub185(int64_t a2);
	// virtual int32_t *MaybeScriptEmitSound(char *soundname);
	// virtual bool CbeUnk187(int64_t a2, int32_t *a3);
	// virtual bool CbeUnk188(int64_t a2, Vector *a3);
	// virtual bool CbeUnk189(int32_t *a2, int64_t *a3);
	virtual void SetEffects(uint32_t nEffects);
	// virtual bool CbeReturnOne191();
	// virtual int64_t CbeReturnZero192();
	// virtual int64_t CbeReturnZero193();
	// virtual int32_t CbeUnk194();
	// virtual bool CbeNullSub195(uint32_t a2);
	// virtual void CbeNullSub196();
	// virtual void CbeNullSub197();
	// virtual bool CbeReturnZero198();
	// virtual double CbeReturnZero199();
	// virtual double CbeReturnZero200();
	// virtual double CbeReturnZero201();
	// virtual void CbeNullSub202();
	// virtual void CbeNullSub203();
	// virtual bool CbeReturnOne204();
	// virtual void CbeNullSub205();
	
	// virtual void CbmeUnk206();
	// virtual void CbmeNullSub207();
	// virtual const char *DamageDecal(int bitsDamageType, int gameMaterial);
	// virtual bool CbmeReturnOne209();
	// virtual void CbmeNullSub210();
	// virtual bool CbmeUnk211();
	// virtual void MaybeSetViewOffset(Vector *viewOffset);
	// virtual bool IsRagdoll();
	// virtual bool CbmeUnk214(int64_t a2, bool a3, int64_t a4, int a5, int64_t a6);
	// virtual void CbmeUnk215(int64_t a2);
	// virtual void CbmeUnk216(int64_t a2);
	// virtual void Extinguish();
	// virtual bool Dissolve(char *pMaterialName, float flStartTime, bool bNPCOnly, int nDissolveType, Vector *vDissolverOrigin, int iMagnitude);
	
	// virtual void CbagNullSub219();
	// virtual void CbagNullSub220();
	// virtual void CbagUnk221();
	// virtual bool CbagReturnZero222();
	// virtual int64_t CbagReturnZero223();
	// virtual int64_t CbagUnk224();
	// virtual void CbagNullSub225();
	// virtual void CbagNullSub226();
	// virtual void CbagNullSub227();
	// virtual void *CbagUnk228();
	// virtual void CbagNullSub229();
	// virtual int64_t CbagUnk230(float a2, float a3);
	// virtual void CbagUnk231(float a2, uint8_t a3);
	// virtual void CbagNullSub232();
	// virtual void CbagUnk233();
	// virtual bool CbagUnk234();
	// virtual void CbagNullSub235();
	// virtual void CbagUnk236(void *a2, int32_t *a3);
	// virtual bool CbagReturnOne237();
	// virtual Vector *CbagUnk238(Vector *a2, const char *a3);
	// virtual void CbagUnk239(void *a2);
	// virtual void CbagUnk240(void *a2, void *a3, char *a4);
	// virtual bool CbagReturnZero241();
	// virtual bool CbagReturnZero242();
	// virtual bool CbagUnk243(int64_t a2, bool a3);
	// virtual bool CbagUnk244();
	// virtual bool CbagReturnZero245();
	// virtual void CbagUnk246(Vector *a2, Vector *a3);
	// virtual void CbagNullSub247();
	// virtual bool CbagReturnZero248();
	// virtual void CbagNullSub249();
	// virtual int64_t CbagUnk250(int64_t a2, char *a3);
	
	// virtual bool CbfUnk251(void *a2);
	// virtual bool CbfUnk252(void *a2);
	// virtual bool CbfUnk253(void *a2, bool a3, bool a4);
	// virtual bool CbfReturnOne254();
	// virtual double CbfUnk255(const char *a2, float a3, void *a4, void *a5);
	// virtual double CbfUnk256(const char *a2, float a3);
	// virtual double CbfUnk257(const char *a2, void *a3, void *a4);
	// virtual int64_t CbfUnk258();
	// virtual int64_t CbfUnk259(int a2);
	// virtual void CbfNullSub260();
	// virtual bool CbfReturnOne261();
	
	virtual void **CbccUnk262();
	virtual void **CbccUnk263();
	virtual bool CbccUnk264(CBaseEntity *a2, CBaseEntity **a3);
	virtual bool CbccUnk265(Vector *a2);
	virtual int64_t CbccUnk266(void *a2);
	virtual void CbccUnk267(float duration, float delay);
	virtual bool CbccUnk268(Vector *a2);
	virtual int64_t CbccUnk269(void *a2);
	virtual void CbccUnk270(Vector *a2);
	virtual void CbccUnk271(Vector *a2);
	virtual void CbccUnk272(Vector *a2);
	virtual int64_t CbccUnk273(int64_t a2);
	virtual int64_t CbccUnk274(int64_t a2);
	virtual bool CbccReturnOne275();
	virtual void OnTakeDamage(void *cTakeDamageInfo);
	virtual void MaybeOnTakeDamage_Alive(void *a2, int32_t *a3);
	virtual void CbccUnk278();
	virtual void CbccNullSub279();
	virtual void CbccNullSub280();
	virtual Vector *CalcDeathForceVector(Vector *out, void *takeDamageInfo);
	virtual bool CbccReturnOne282();
	virtual void CbccUnk283();
	virtual bool CbccReturnOne284();
	virtual bool CbccUnk285(void *a2, Vector *a3, int64_t a4);
	virtual void CbccNullSub286();
	virtual bool CbccReturnZero287();
	virtual void CbccNullSub288();
	virtual void CbccNullSub289();
	virtual void CbccUnk290(void *a2);
	virtual void CbccUnk291(int a2, uint64_t *a3);
	virtual bool CbccReturnOne292();
	virtual bool CbccUnk293(void *a2);
	virtual Vector *CbccUnk294(Vector *a2);
	virtual int64_t CbccUnk295(int64_t *a2);
	
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
class CPlayer_ObserverServices : public CPlayerPawnComponent
{
public:
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
class CPlayer_UseServices : public CPlayerPawnComponent
{
	
};

// Alignment: 0
// Size: 0x40
class CPlayer_WaterServices : public CPlayerPawnComponent
{
};

// Alignment: 6
// Size: 0xb0
class CPlayer_WeaponServices : public CPlayerPawnComponent
{
public:
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
class CPlayer_ItemServices : public CPlayerPawnComponent
{
};

// Alignment: 0
// Size: 0x40
class CPlayer_AutoaimServices : public CPlayerPawnComponent
{
};

// Alignment: 0
// Size: 0x40
class CPlayer_FlashlightServices : public CPlayerPawnComponent
{
};

// Alignment: 14
// Size: 0x40
class fogplayerparams_t
{
public:
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
class audioparams_t
{
public:
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
class CPlayer_CameraServices : public CPlayerPawnComponent
{
public:
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
class fogparams_t
{
public:
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
class sky3dparams_t
{
public:
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
class CAI_Expresser
{
public:
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
class CBasePlayerPawn : public CBaseCombatCharacter
{
public:
	virtual void *MaybeGetSchema();
	virtual uint64_t *IheUnk0(char a2);
	// virtual int *IheUnk1(int *a2);
	
	virtual void *CeiUnk2();
	virtual void *CeiUnk3();
	virtual void Precache(int64_t *a2);
	// virtual int64_t InitialSpawn();
	virtual void CeiUnk6(int64_t *a2);
	// virtual void CeiUnk7();
	virtual void CeiUnk8(uint32_t a2, int64_t a3, int64_t a4);
	virtual void CeiUnk9();
	// virtual bool CeiUnk10(int a2, int a3);
	// virtual int64_t CeiReturnZero11();
	// virtual int64_t CeiReturnZero12();
	// virtual void CeiNullSub13();
	virtual bool CeiUnk14(int64_t a2);
	// virtual void CeiUnk15(void *a2, int64_t a3, int a4);
	virtual int64_t CeiUnk16(int64_t a2);
	virtual int64_t CeiUnk17(void **a2);
	// virtual bool CeiUnk18();
	virtual int64_t OnRestore();
	virtual int32_t CeiUnk20();
	// virtual int *CeiUnk21(int *a2);
	// virtual int64_t MaybeOnMemberChanged(int64_t memberOffset, int64_t a3, int64_t a4);
	// virtual int64_t CeiUnk23(int64_t a2);
	// virtual int64_t CeiUnk24(int64_t a2, int64_t a3);
	// virtual bool CeiUnk25();
	// virtual int16_t *CeiUnk26(int16_t *a2, int16_t *a3);
	// virtual bool CeiUnk27();
	// virtual bool CeiReturnZero28();
	// virtual void **CeiUnk29(int64_t *a2);
	virtual int64_t *CeiUnk30();
	virtual void CeiUnk31();
	
	virtual int64_t CbeUnk32();
	// virtual bool CbeReturnZero33();
	// virtual int64_t CbeUnk34(int64_t *a2);
	// virtual int64_t CbeReturnZero35();
	// virtual void CbeNullSub36();
	virtual int64_t *CbeUnk37(int64_t *a2, int64_t *a3);
	// virtual void CbeUnk38(int64_t *a2);
	// virtual void *CbeUnk39();
	// virtual void *CbeUnk40();
	// virtual int64_t CbeReturnZero41();
	// virtual int64_t CbeReturnZero42();
	// virtual int64_t CbeReturnZero43();
	// virtual int64_t CbeReturnZero44();
	// virtual int64_t CbeReturnZero45();
	// virtual int64_t CbeReturnZero46();
	// virtual bool CbeUnk47();
	// virtual bool CbeUnk48();
	// virtual int64_t CbeUnk49();
	// virtual int64_t CbeUnk50();
	// virtual int64_t *CbeUnk51(int64_t *a2, int64_t **a3);
	// virtual void CbeUnk52();
	// virtual void CbeUnk53();
	// virtual void CbeUnk54();
	virtual bool CbeUnk55();
	virtual int64_t CbeUnk56();
	// virtual int64_t CbeUnk57(int64_t a2);
	// virtual int64_t CbeUnk58(int64_t a2);
	virtual void *CbeUnk59(void *a2);
	// virtual CCollisionProperty *GetCollisionProperty();
	virtual bool CbeUnk61();
	// virtual bool CbeReturnZero62();
	// virtual void CbeUnk63(bool a2);
	virtual void CbeUnk64();
	virtual void VPhysicsUpdate(void *pPhysics);
	// virtual int CbeUnk66(int64_t *a2, int a3);
	// virtual bool CbeUnk67();
	// virtual int64_t CbeUnk68(int64_t *a2);
	virtual void VPhysicsShadowCollision(int index, void *pEvent);
	virtual void CbeUnk70(int a2, int64_t a3);
	// virtual void CbeNullSub71();
	// virtual void CbeUnk72(float a2);
	// virtual bool CbeReturnZero73();
	// virtual void SetMoveType(MoveType_t moveType, MoveCollide_t moveCollide);
	// virtual bool CbeUnk75(uint8_t a2);
	// virtual Vector *CbeUnk76(Vector *a2);
	// virtual void CbeNullSub77();
	// virtual void CbeUnk78();
	virtual int64_t CbeUnk79();
	virtual int64_t CbeUnk80(void *a2);
	virtual int64_t CbeUnk81(void *a2, bool a3);
	// virtual void CbeNullSub82();
	// virtual CBaseEntity *CbeUnk83();
	// virtual void CbeNullSub84();
	virtual int64_t MaybeChangeTeam(uint32_t teamNumber);
	// virtual bool InSameTeam(CBaseEntity *pEntity);
	// virtual void CbeUnk87(void *a2, uint32_t a3);
	// virtual int64_t CbeReturnTwo88();
	// virtual void *CbeReturnZero89();
	// virtual void ***CbeUnk90();
	// virtual int64_t CbeUnk91(char *a2, char *a3);
	// virtual int64_t CbeReturnZero92();
	// virtual bool CbeReturnZero93();
	// virtual bool CbeReturnZero94();
	// virtual bool CbeReturnZero95();
	// virtual void AddContext(const char *contextNam);
	// virtual char *CbeUnk97(char *a2);
	// virtual void CbeUnk98();
	// virtual void CbeNullSub99();
	// virtual bool IsOnGround();
	// virtual bool GetAutoAimRadius();
	// virtual int64_t CbeUnk102(int64_t a2);
	// virtual int64_t CbeUnk103(int64_t a2);
	// virtual bool MaybePassesDamageFilter(void *takeDamageInfo);
	// virtual bool CbeReturnOne105();
	virtual int TakeHealth(float flHealth);
	// virtual float GetHealthFrac();
	virtual int64_t CbeUnk108(int64_t a2);
	// virtual int64_t CbeUnk109(void *a2);
	virtual uint8_t CbeUnk110(void *a2, int64_t a3);
	virtual void Event_Killed(void *cTakeDamageInfo);
	virtual void Event_KilledOther(CBaseEntity *pVictim, void *cTakeDamageInfo);
	// virtual bool CbeReturnOne113();
	// virtual double CbeReturnZero114();
	// virtual int CbeUnk115(void *a2, int64_t a3);
	// virtual int ImpactTrace(void *pTrace, int iDamageType, char *pCustomImpactName);
	// virtual bool CbeReturnZero117();
	// virtual bool CbeUnk118(uint8_t **a2);
	// virtual bool CbeReturnZero119();
	// virtual bool CbeUnk120();
	// virtual void OnEntityEvent(EntityEvent_t, int64_t nContents);
	// virtual bool CbeUnk122(void *a2);
	virtual const char *CbeReturnZero123();
	// virtual int64_t CbeUnk124(int64_t a2);
	// virtual int64_t *CbeUnk125(int64_t a2);
	// virtual int64_t *MaybeTouch(CBaseEntity *other);
	// virtual int64_t *CbeUnk127(int64_t a2);
	// virtual void CbeNullSub128();
	// virtual int64_t *CbeUnk129(int64_t a2);
	// virtual void CbeNullSub130();
	// virtual int64_t CbeReturnZero131();
	// virtual int64_t *CbeUnk132();
	// virtual int64_t *CbeUnk133();
	virtual void CbeUnk134();
	// virtual void CbeUnk135(); possibly has a call to Physics_SimulateEntity inside it
	// virtual void CbeNullSub136();
	// virtual void CbeNullSub137();
	// virtual void CbeUnk138(void *a2, Vector *velocity);
	// virtual void CbeNullSub139();
	// virtual int64_t CbeUnk140(int64_t a2, int64_t a3, Vector *a4);
	// virtual bool CbeReturnOne141();
	virtual int32_t GetBloodColor();
	// virtual bool MaybeIsDead();
	virtual bool IsAlive();
	// virtual bool CbeReturnZero145();
	// virtual int64_t CbeUnk146();
	// virtual bool CbeReturnZero147();
	// virtual bool CbeReturnZero148();
	virtual bool CbeUnk149();
	virtual int64_t CbeReturnZero150();
	virtual int64_t CbeReturnZero151();
	// virtual bool CbeReturnZero152();
	// virtual int64_t CbeReturnZero153();
	// virtual bool CbeReturnZero154();
	// virtual int64_t CbeReturnZero155();
	// virtual int64_t CbeReturnZero156();
	// virtual bool CbeReturnZero157();
	// virtual int GetMaxHealth();
	// virtual int SetHealth(int health);
	virtual void ModifyOrAppendCriteria(void *aiCriteriaSet);
	// virtual int64_t CbeUnk161(char *a2);
	// virtual void CbeNullSub162();
	// virtual int64_t CbeReturnZero163();
	// virtual double CbeReturnZero164();
	// virtual void CbeNullSub165();
	virtual Vector *MaybeGetViewOffset(Vector *a2);
	virtual Vector *MaybeEyePosition(Vector *a2);
	virtual Vector *MaybeLocalEyeAngles(Vector *a2);
	virtual int64_t CbeUnk169(int64_t a2);
	// virtual void SetTimeScale(float timescale);
	virtual Vector *CbeUnk171(Vector *a2, int64_t a3, bool a4);
	// virtual int64_t CbeUnk172(int64_t a2);
	// virtual CNetworkViewOffsetVector *CbeUnk173();
	virtual Vector *MaybeGetAbsVelocity2(Vector *a2);
	// virtual bool MaybeHasBaseVelocity();
	// virtual void CbeNullSub176();
	// virtual void CbeUnk177(Vector *a2);
	virtual int64_t CbeUnk178();
	virtual bool CbeTraceSomething179(Vector *a2, int64_t *a3);
	virtual bool CbeTraceSomething180(Vector *a2, CBaseEntity *a3, CBaseEntity **a4);
	// virtual bool CbeReturnOne181();
	// virtual CBaseEntity *CbeUnk182();
	// virtual bool CbeReturnZero183();
	// virtual void CbeNullSub184();
	// virtual int64_t CbeNullSub185(int64_t a2);
	// virtual int32_t *MaybeScriptEmitSound(char *soundname);
	// virtual bool CbeUnk187(int64_t a2, int32_t *a3);
	// virtual bool CbeUnk188(int64_t a2, Vector *a3);
	// virtual bool CbeUnk189(int32_t *a2, int64_t *a3);
	virtual void SetEffects(uint32_t nEffects);
	// virtual bool CbeReturnOne191();
	// virtual int64_t CbeReturnZero192();
	// virtual int64_t CbeReturnZero193();
	// virtual int32_t CbeUnk194();
	virtual bool CbeNullSub195(uint32_t a2);
	// virtual void CbeNullSub196();
	// virtual void CbeNullSub197();
	// virtual bool CbeReturnZero198();
	// virtual double CbeReturnZero199();
	// virtual double CbeReturnZero200();
	// virtual double CbeReturnZero201();
	// virtual void CbeNullSub202();
	// virtual void CbeNullSub203();
	// virtual bool CbeReturnOne204();
	// virtual void CbeNullSub205();
	
	// virtual void CbmeUnk206();
	// virtual void CbmeNullSub207();
	// virtual const char *DamageDecal(int bitsDamageType, int gameMaterial);
	// virtual bool CbmeReturnOne209();
	// virtual void CbmeNullSub210();
	// virtual bool CbmeUnk211();
	// virtual void MaybeSetViewOffset(Vector *viewOffset);
	// virtual bool IsRagdoll();
	// virtual bool CbmeUnk214(int64_t a2, bool a3, int64_t a4, int a5, int64_t a6);
	// virtual void CbmeUnk215(int64_t a2);
	// virtual void CbmeUnk216(int64_t a2);
	// virtual void Extinguish();
	// virtual bool Dissolve(char *pMaterialName, float flStartTime, bool bNPCOnly, int nDissolveType, Vector *vDissolverOrigin, int iMagnitude);
	
	// virtual void CbagNullSub219();
	// virtual void CbagNullSub220();
	// virtual void CbagUnk221();
	// virtual bool CbagReturnZero222();
	// virtual int64_t CbagReturnZero223();
	virtual int64_t CbagUnk224();
	// virtual void CbagNullSub225();
	// virtual void CbagNullSub226();
	// virtual void CbagNullSub227();
	// virtual void *CbagUnk228();
	// virtual void CbagNullSub229();
	// virtual int64_t CbagUnk230(float a2, float a3);
	// virtual void CbagUnk231(float a2, uint8_t a3);
	// virtual void CbagNullSub232();
	// virtual void CbagUnk233();
	// virtual bool CbagUnk234();
	// virtual void CbagNullSub235();
	// virtual void CbagUnk236(void *a2, int32_t *a3);
	// virtual bool CbagReturnOne237();
	// virtual Vector *CbagUnk238(Vector *a2, const char *a3);
	virtual void CbagUnk239(void *a2);
	// virtual void CbagUnk240(void *a2, void *a3, char *a4);
	// virtual bool CbagReturnZero241();
	// virtual bool CbagReturnZero242();
	// virtual bool CbagUnk243(int64_t a2, bool a3);
	// virtual bool CbagUnk244();
	// virtual bool CbagReturnZero245();
	// virtual void CbagUnk246(Vector *a2, Vector *a3);
	// virtual void CbagNullSub247();
	// virtual bool CbagReturnZero248();
	// virtual void CbagNullSub249();
	// virtual int64_t CbagUnk250(int64_t a2, char *a3);
	
	// virtual bool CbfUnk251(void *a2);
	// virtual bool CbfUnk252(void *a2);
	// virtual bool CbfUnk253(void *a2, bool a3, bool a4);
	// virtual bool CbfReturnOne254();
	// virtual double CbfUnk255(const char *a2, float a3, void *a4, void *a5);
	// virtual double CbfUnk256(const char *a2, float a3);
	// virtual double CbfUnk257(const char *a2, void *a3, void *a4);
	// virtual int64_t CbfUnk258();
	// virtual int64_t CbfUnk259(int a2);
	// virtual void CbfNullSub260();
	// virtual bool CbfReturnOne261();
	
	virtual void **CbccUnk262();
	// virtual void **CbccUnk263();
	// virtual bool CbccUnk264(CBaseEntity *a2, CBaseEntity **a3);
	// virtual bool CbccUnk265(Vector *a2);
	// virtual int64_t CbccUnk266(void *a2);
	// virtual void CbccUnk267(float duration, float delay);
	// virtual bool CbccUnk268(Vector *a2);
	// virtual int64_t CbccUnk269(void *a2);
	virtual void CbccUnk270(Vector *a2);
	// virtual void CbccUnk271(Vector *a2);
	// virtual void CbccUnk272(Vector *a2);
	// virtual int64_t CbccUnk273(int64_t a2);
	// virtual int64_t CbccUnk274(int64_t a2);
	// virtual bool CbccReturnOne275();
	virtual void OnTakeDamage(void *cTakeDamageInfo);
	virtual void MaybeOnTakeDamage_Alive(void *a2, int32_t *a3);
	// virtual void CbccUnk278();
	// virtual void CbccNullSub279();
	// virtual void CbccNullSub280();
	// virtual Vector *CalcDeathForceVector(Vector *out, void *takeDamageInfo);
	// virtual bool CbccReturnOne282();
	virtual void CbccUnk283();
	// virtual bool CbccReturnOne284();
	virtual bool CbccUnk285(void *a2, Vector *a3, int64_t a4);
	// virtual void CbccNullSub286();
	// virtual bool CbccReturnZero287();
	// virtual void CbccNullSub288();
	// virtual void CbccNullSub289();
	// virtual void CbccUnk290(void *a2);
	// virtual void CbccUnk291(int a2, uint64_t *a3);
	// virtual bool CbccReturnOne292();
	// virtual bool CbccUnk293(void *a2);
	// virtual Vector *CbccUnk294(Vector *a2);
	// virtual int64_t CbccUnk295(int64_t *a2);
	
	virtual bool CbppUnk296();
	virtual int64_t CbppUnk297();
	virtual int64_t CbppUnk298();
	virtual int64_t CbppUnk299();
	virtual int64_t CbppReturnZero300();
	virtual void *CbppUnk301();
	virtual void *CbppUnk302();
	virtual void *CbppUnk303();
	virtual int64_t CbppReturnZero304();
	virtual int64_t CbppUnk305();
	virtual int64_t CbppUnk306();
	virtual bool CbppUnk307(int64_t a2, void *a3);
	virtual bool CbppUnk308(CBaseAnimGraph *a2, void *a3, void *a4);
	virtual void Spawn();
	virtual bool CbppUnk310();
	virtual void PreThink();
	virtual void PostThink();
	virtual void MaybeDamageEffect(void *a2, int64_t a3, void *a4);
	virtual void CbppUnk314(void *a2);
	virtual float CbppUnk315();
	virtual void CbppUnk316(int64_t a2, int64_t a3);
	virtual int64_t CbppReturnZero317();
	virtual Vector *CbppUnk318(Vector *a2, int a3);
	virtual Vector *CbppUnk319(Vector *a2, int a3);
	virtual int64_t CbppUnk320();
	virtual bool IsWalking();
	virtual bool StartHltvReplayEvent(void *clientReplayEventParams);
	virtual void CbppUnk323(int64_t a2);
	virtual void CbppUnk324();
	virtual int64_t CbppUnk325();
	virtual void DeathSound(void *takeDamageInfo);
	virtual void FallDamageSound();
	virtual void CbppUnk328(int maybeImpulse);
	virtual void CheatImpulseCommands(int iImpulse);
	virtual bool ClientCommand(void *cCommandArgs);
	virtual void CbppUnk331();
	virtual void MaybeForceClientDllUpdate();
	virtual void CbppUnk333(int64_t a2, uint32_t a3);
	virtual bool CbppUnk334(void *a2, const char *a3, char *a4, int64_t num, int64_t a6);
	virtual void ModifyOrAppendPlayerCriteria(void *aiCriteriaSet);
	virtual void CbppUnk336();
	virtual void CommitSuicide(Vector *vecForce, bool bExplode, bool bForce);
	virtual void CommitSuicide(bool bExplode, bool bForce);
	virtual bool CbppUnk339();
	virtual bool CbppUnk340();
	virtual bool IsBot();
	virtual int64_t CbppUnk342();
	virtual CAI_Expresser *GetAiExpresser();
	virtual void CbppNullSub344();
	virtual bool StartReplayMode(float flDelay, float fDuration, CEntityIndex iEntity);
	virtual void StopReplayMode();
	virtual uint32_t GetDelayTicks();
	virtual CEntityIndex *GetReplayEntity(CEntityIndex *a2);
	virtual int CbppUnk349(void *a2);
	
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
	uint8_t unknown1[0x4]; // 0x9c4
	Vector m_unknownVec0; // 0x9c8 used in CPlayer_MovementServices::Unk20
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
class CTouchExpansionComponent : public CEntityComponent
{
public:
	uint8_t unknown[0x18];
};

// Alignment: 6
// Size: 0x50
class CAttributeManager
{
public:
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
class CAttributeContainer : public CAttributeManager
{
public:
	// MNetworkEnable
	CEconItemView m_Item; 	// 0x50
};

// Alignment: 9
// Size: 0xba8
class CEconEntity : public CBaseFlex
{
public:
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
class CBasePlayerWeapon : public CEconEntity
{
public:
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
class CCSPlayer_ActionTrackingServices : public CPlayerPawnComponent
{
public:
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
class CCSPlayer_ViewModelServices : public CPlayerPawnComponent
{
public:
	// MNetworkEnable
	CHandle m_hViewModel[3]; 	// 0x40 CHandle< CBaseViewModel >
};

// Alignment: 2
// Size: 0x18
class EntitySpottedState_t
{
public:
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
class CountdownTimer
{
public:
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
class CCSPlayerPawnBase : public CBasePlayerPawn
{
public:
	virtual void *MaybeGetSchema();
	virtual uint64_t *IheUnk0(char a2);
	// virtual int *IheUnk1(int *a2);
	
	// virtual void *CeiUnk2();
	// virtual void *CeiUnk3();
	virtual void Precache(int64_t *a2);
	virtual int64_t InitialSpawn();
	virtual void CeiUnk6(int64_t *a2);
	// virtual void CeiUnk7();
	// virtual void CeiUnk8(uint32_t a2, int64_t a3, int64_t a4);
	virtual void CeiUnk9();
	virtual bool CeiUnk10(int a2, int a3);
	// virtual int64_t CeiReturnZero11();
	// virtual int64_t CeiReturnZero12();
	// virtual void CeiNullSub13();
	// virtual bool CeiUnk14(int64_t a2);
	// virtual void CeiUnk15(void *a2, int64_t a3, int a4);
	// virtual int64_t CeiUnk16(int64_t a2);
	// virtual int64_t CeiUnk17(void **a2);
	// virtual bool CeiUnk18();
	// virtual int64_t OnRestore();
	virtual int32_t CeiUnk20();
	// virtual int *CeiUnk21(int *a2);
	// virtual int64_t MaybeOnMemberChanged(int64_t memberOffset, int64_t a3, int64_t a4);
	// virtual int64_t CeiUnk23(int64_t a2);
	// virtual int64_t CeiUnk24(int64_t a2, int64_t a3);
	// virtual bool CeiUnk25();
	// virtual int16_t *CeiUnk26(int16_t *a2, int16_t *a3);
	// virtual bool CeiUnk27();
	// virtual bool CeiReturnZero28();
	// virtual void **CeiUnk29(int64_t *a2);
	virtual int64_t *CeiUnk30();
	virtual void CeiUnk31();
	
	virtual int64_t CbeUnk32();
	// virtual bool CbeReturnZero33();
	// virtual int64_t CbeUnk34(int64_t *a2);
	// virtual int64_t CbeReturnZero35();
	// virtual void CbeNullSub36();
	// virtual int64_t *CbeUnk37(int64_t *a2, int64_t *a3);
	// virtual void CbeUnk38(int64_t *a2);
	// virtual void *CbeUnk39();
	// virtual void *CbeUnk40();
	// virtual int64_t CbeReturnZero41();
	// virtual int64_t CbeReturnZero42();
	// virtual int64_t CbeReturnZero43();
	// virtual int64_t CbeReturnZero44();
	// virtual int64_t CbeReturnZero45();
	// virtual int64_t CbeReturnZero46();
	// virtual bool CbeUnk47();
	// virtual bool CbeUnk48();
	// virtual int64_t CbeUnk49();
	// virtual int64_t CbeUnk50();
	// virtual int64_t *CbeUnk51(int64_t *a2, int64_t **a3);
	// virtual void CbeUnk52();
	// virtual void CbeUnk53();
	// virtual void CbeUnk54();
	// virtual bool CbeUnk55();
	// virtual int64_t CbeUnk56();
	// virtual int64_t CbeUnk57(int64_t a2);
	// virtual int64_t CbeUnk58(int64_t a2);
	// virtual void *CbeUnk59(void *a2);
	// virtual CCollisionProperty *GetCollisionProperty();
	// virtual bool CbeUnk61();
	// virtual bool CbeReturnZero62();
	// virtual void CbeUnk63(bool a2);
	// virtual void CbeUnk64();
	// virtual void VPhysicsUpdate(void *pPhysics);
	// virtual int CbeUnk66(int64_t *a2, int a3);
	// virtual bool CbeUnk67();
	// virtual int64_t CbeUnk68(int64_t *a2);
	// virtual void VPhysicsShadowCollision(int index, void *pEvent);
	// virtual void CbeUnk70(int a2, int64_t a3);
	// virtual void CbeNullSub71();
	// virtual void CbeUnk72(float a2);
	// virtual bool CbeReturnZero73();
	// virtual void SetMoveType(MoveType_t moveType, MoveCollide_t moveCollide);
	// virtual bool CbeUnk75(uint8_t a2);
	// virtual Vector *CbeUnk76(Vector *a2);
	// virtual void CbeNullSub77();
	// virtual void CbeUnk78();
	// virtual int64_t CbeUnk79();
	// virtual int64_t CbeUnk80(void *a2);
	// virtual int64_t CbeUnk81(void *a2, bool a3);
	// virtual void CbeNullSub82();
	// virtual CBaseEntity *CbeUnk83();
	// virtual void CbeNullSub84();
	// virtual int64_t MaybeChangeTeam(uint32_t teamNumber);
	// virtual bool InSameTeam(CBaseEntity *pEntity);
	virtual void CbeUnk87(void *a2, uint32_t a3);
	// virtual int64_t CbeReturnTwo88();
	// virtual void *CbeReturnZero89();
	virtual void ***CbeUnk90();
	virtual int64_t CbeUnk91(char *a2, char *a3);
	// virtual int64_t CbeReturnZero92();
	// virtual bool CbeReturnZero93();
	// virtual bool CbeReturnZero94();
	// virtual bool CbeReturnZero95();
	// virtual void AddContext(const char *contextNam);
	// virtual char *CbeUnk97(char *a2);
	// virtual void CbeUnk98();
	// virtual void CbeNullSub99();
	// virtual bool IsOnGround();
	// virtual bool GetAutoAimRadius();
	// virtual int64_t CbeUnk102(int64_t a2);
	// virtual int64_t CbeUnk103(int64_t a2);
	// virtual bool MaybePassesDamageFilter(void *takeDamageInfo);
	// virtual bool CbeReturnOne105();
	// virtual int TakeHealth(float flHealth);
	// virtual float GetHealthFrac();
	// virtual int64_t CbeUnk108(int64_t a2);
	virtual int64_t CbeUnk109(void *a2);
	// virtual uint8_t CbeUnk110(void *a2, int64_t a3);
	// virtual void Event_Killed(void *cTakeDamageInfo);
	// virtual void Event_KilledOther(CBaseEntity *pVictim, void *cTakeDamageInfo);
	// virtual bool CbeReturnOne113();
	// virtual double CbeReturnZero114();
	// virtual int CbeUnk115(void *a2, int64_t a3);
	virtual int ImpactTrace(void *pTrace, int iDamageType, char *pCustomImpactName);
	// virtual bool CbeReturnZero117();
	// virtual bool CbeUnk118(uint8_t **a2);
	// virtual bool CbeReturnZero119();
	// virtual bool CbeUnk120();
	// virtual void OnEntityEvent(EntityEvent_t, int64_t nContents);
	// virtual bool CbeUnk122(void *a2);
	// virtual const char *CbeReturnZero123();
	// virtual int64_t CbeUnk124(int64_t a2);
	// virtual int64_t *CbeUnk125(int64_t a2);
	virtual int64_t *MaybeTouch(CBaseEntity *other);
	// virtual int64_t *CbeUnk127(int64_t a2);
	// virtual void CbeNullSub128();
	// virtual int64_t *CbeUnk129(int64_t a2);
	// virtual void CbeNullSub130();
	// virtual int64_t CbeReturnZero131();
	// virtual int64_t *CbeUnk132();
	// virtual int64_t *CbeUnk133();
	// virtual void CbeUnk134();
	// virtual void CbeUnk135(); possibly has a call to Physics_SimulateEntity inside it
	// virtual void CbeNullSub136();
	// virtual void CbeNullSub137();
	// virtual void CbeUnk138(void *a2, Vector *velocity);
	// virtual void CbeNullSub139();
	// virtual int64_t CbeUnk140(int64_t a2, int64_t a3, Vector *a4);
	// virtual bool CbeReturnOne141();
	// virtual int32_t GetBloodColor();
	// virtual bool MaybeIsDead();
	// virtual bool IsAlive();
	// virtual bool CbeReturnZero145();
	// virtual int64_t CbeUnk146();
	// virtual bool CbeReturnZero147();
	// virtual bool CbeReturnZero148();
	// virtual bool CbeUnk149();
	// virtual int64_t CbeReturnZero150();
	// virtual int64_t CbeReturnZero151();
	// virtual bool CbeReturnZero152();
	// virtual int64_t CbeReturnZero153();
	// virtual bool CbeReturnZero154();
	// virtual int64_t CbeReturnZero155();
	// virtual int64_t CbeReturnZero156();
	// virtual bool CbeReturnZero157();
	// virtual int GetMaxHealth();
	// virtual int SetHealth(int health);
	virtual void ModifyOrAppendCriteria(void *aiCriteriaSet);
	// virtual int64_t CbeUnk161(char *a2);
	// virtual void CbeNullSub162();
	// virtual int64_t CbeReturnZero163();
	// virtual double CbeReturnZero164();
	// virtual void CbeNullSub165();
	// virtual Vector *MaybeGetViewOffset(Vector *a2);
	// virtual Vector *MaybeEyePosition(Vector *a2);
	// virtual Vector *MaybeLocalEyeAngles(Vector *a2);
	// virtual int64_t CbeUnk169(int64_t a2);
	// virtual void SetTimeScale(float timescale);
	// virtual Vector *CbeUnk171(Vector *a2, int64_t a3, bool a4);
	// virtual int64_t CbeUnk172(int64_t a2);
	// virtual CNetworkViewOffsetVector *CbeUnk173();
	// virtual Vector *MaybeGetAbsVelocity2(Vector *a2);
	// virtual bool MaybeHasBaseVelocity();
	// virtual void CbeNullSub176();
	// virtual void CbeUnk177(Vector *a2);
	// virtual int64_t CbeUnk178();
	// virtual bool CbeTraceSomething179(Vector *a2, int64_t *a3);
	// virtual bool CbeTraceSomething180(Vector *a2, CBaseEntity *a3, CBaseEntity **a4);
	// virtual bool CbeReturnOne181();
	// virtual CBaseEntity *CbeUnk182();
	// virtual bool CbeReturnZero183();
	// virtual void CbeNullSub184();
	// virtual int64_t CbeNullSub185(int64_t a2);
	// virtual int32_t *MaybeScriptEmitSound(char *soundname);
	// virtual bool CbeUnk187(int64_t a2, int32_t *a3);
	// virtual bool CbeUnk188(int64_t a2, Vector *a3);
	// virtual bool CbeUnk189(int32_t *a2, int64_t *a3);
	// virtual void SetEffects(uint32_t nEffects);
	// virtual bool CbeReturnOne191();
	// virtual int64_t CbeReturnZero192();
	// virtual int64_t CbeReturnZero193();
	// virtual int32_t CbeUnk194();
	// virtual bool CbeNullSub195(uint32_t a2);
	// virtual void CbeNullSub196();
	// virtual void CbeNullSub197();
	// virtual bool CbeReturnZero198();
	// virtual double CbeReturnZero199();
	// virtual double CbeReturnZero200();
	// virtual double CbeReturnZero201();
	// virtual void CbeNullSub202();
	// virtual void CbeNullSub203();
	// virtual bool CbeReturnOne204();
	// virtual void CbeNullSub205();
	
	// virtual void CbmeUnk206();
	// virtual void CbmeNullSub207();
	// virtual const char *DamageDecal(int bitsDamageType, int gameMaterial);
	// virtual bool CbmeReturnOne209();
	// virtual void CbmeNullSub210();
	// virtual bool CbmeUnk211();
	// virtual void MaybeSetViewOffset(Vector *viewOffset);
	// virtual bool IsRagdoll();
	// virtual bool CbmeUnk214(int64_t a2, bool a3, int64_t a4, int a5, int64_t a6);
	// virtual void CbmeUnk215(int64_t a2);
	// virtual void CbmeUnk216(int64_t a2);
	// virtual void Extinguish();
	// virtual bool Dissolve(char *pMaterialName, float flStartTime, bool bNPCOnly, int nDissolveType, Vector *vDissolverOrigin, int iMagnitude);
	
	// virtual void CbagNullSub219();
	// virtual void CbagNullSub220();
	// virtual void CbagUnk221();
	// virtual bool CbagReturnZero222();
	// virtual int64_t CbagReturnZero223();
	// virtual int64_t CbagUnk224();
	// virtual void CbagNullSub225();
	// virtual void CbagNullSub226();
	// virtual void CbagNullSub227();
	// virtual void *CbagUnk228();
	// virtual void CbagNullSub229();
	// virtual int64_t CbagUnk230(float a2, float a3);
	// virtual void CbagUnk231(float a2, uint8_t a3);
	// virtual void CbagNullSub232();
	// virtual void CbagUnk233();
	// virtual bool CbagUnk234();
	// virtual void CbagNullSub235();
	// virtual void CbagUnk236(void *a2, int32_t *a3);
	// virtual bool CbagReturnOne237();
	// virtual Vector *CbagUnk238(Vector *a2, const char *a3);
	virtual void CbagUnk239(void *a2);
	// virtual void CbagUnk240(void *a2, void *a3, char *a4);
	// virtual bool CbagReturnZero241();
	// virtual bool CbagReturnZero242();
	// virtual bool CbagUnk243(int64_t a2, bool a3);
	virtual bool CbagUnk244();
	// virtual bool CbagReturnZero245();
	// virtual void CbagUnk246(Vector *a2, Vector *a3);
	// virtual void CbagNullSub247();
	// virtual bool CbagReturnZero248();
	// virtual void CbagNullSub249();
	// virtual int64_t CbagUnk250(int64_t a2, char *a3);
	
	// virtual bool CbfUnk251(void *a2);
	// virtual bool CbfUnk252(void *a2);
	// virtual bool CbfUnk253(void *a2, bool a3, bool a4);
	// virtual bool CbfReturnOne254();
	// virtual double CbfUnk255(const char *a2, float a3, void *a4, void *a5);
	// virtual double CbfUnk256(const char *a2, float a3);
	// virtual double CbfUnk257(const char *a2, void *a3, void *a4);
	// virtual int64_t CbfUnk258();
	// virtual int64_t CbfUnk259(int a2);
	// virtual void CbfNullSub260();
	// virtual bool CbfReturnOne261();
	
	// virtual void **CbccUnk262();
	// virtual void **CbccUnk263();
	// virtual bool CbccUnk264(CBaseEntity *a2, CBaseEntity **a3);
	// virtual bool CbccUnk265(Vector *a2);
	// virtual int64_t CbccUnk266(void *a2);
	virtual void CbccUnk267(float duration, float delay);
	// virtual bool CbccUnk268(Vector *a2);
	// virtual int64_t CbccUnk269(void *a2);
	// virtual void CbccUnk270(Vector *a2);
	// virtual void CbccUnk271(Vector *a2);
	// virtual void CbccUnk272(Vector *a2);
	// virtual int64_t CbccUnk273(int64_t a2);
	// virtual int64_t CbccUnk274(int64_t a2);
	// virtual bool CbccReturnOne275();
	// virtual void OnTakeDamage(void *cTakeDamageInfo);
	virtual void MaybeOnTakeDamage_Alive(void *a2, int32_t *a3);
	// virtual void CbccUnk278();
	// virtual void CbccNullSub279();
	// virtual void CbccNullSub280();
	// virtual Vector *CalcDeathForceVector(Vector *out, void *takeDamageInfo);
	// virtual bool CbccReturnOne282();
	// virtual void CbccUnk283();
	// virtual bool CbccReturnOne284();
	// virtual bool CbccUnk285(void *a2, Vector *a3, int64_t a4);
	// virtual void CbccNullSub286();
	// virtual bool CbccReturnZero287();
	// virtual void CbccNullSub288();
	// virtual void CbccNullSub289();
	virtual void CbccUnk290(void *a2);
	// virtual void CbccUnk291(int a2, uint64_t *a3);
	// virtual bool CbccReturnOne292();
	// virtual bool CbccUnk293(void *a2);
	// virtual Vector *CbccUnk294(Vector *a2);
	// virtual int64_t CbccUnk295(int64_t *a2);
	
	virtual bool CbppUnk296();
	virtual int64_t CbppUnk297();
	virtual int64_t CbppUnk298();
	// virtual int64_t CbppUnk299();
	// virtual int64_t CbppReturnZero300();
	virtual void *CbppUnk301();
	virtual void *CbppUnk302();
	virtual void *CbppUnk303();
	// virtual int64_t CbppReturnZero304();
	virtual int64_t CbppUnk305();
	virtual int64_t CbppUnk306();
	virtual bool CbppUnk307(int64_t a2, void *a3);
	virtual bool CbppUnk308(CBaseAnimGraph *a2, void *a3, void *a4);
	virtual void Spawn();
	// virtual bool CbppUnk310();
	virtual void PreThink();
	virtual void PostThink();
	// virtual void MaybeDamageEffect(void *a2, int64_t a3, void *a4);
	virtual void CbppUnk314(void *a2);
	// virtual float CbppUnk315();
	virtual void CbppUnk316(int64_t a2, int64_t a3);
	// virtual int64_t CbppReturnZero317();
	// virtual Vector *CbppUnk318(Vector *a2, int a3);
	// virtual Vector *CbppUnk319(Vector *a2, int a3);
	// virtual int64_t CbppUnk320();
	virtual bool IsWalking();
	virtual bool StartHltvReplayEvent(void *clientReplayEventParams);
	virtual void CbppUnk323(int64_t a2);
	// virtual void CbppUnk324();
	// virtual int64_t CbppUnk325();
	virtual void DeathSound(void *takeDamageInfo);
	virtual void FallDamageSound();
	virtual void CbppUnk328(int maybeImpulse);
	virtual void CheatImpulseCommands(int iImpulse);
	virtual bool ClientCommand(void *cCommandArgs);
	virtual void CbppUnk331();
	// virtual void MaybeForceClientDllUpdate();
	virtual void CbppUnk333(int64_t a2, uint32_t a3);
	virtual bool CbppUnk334(void *a2, const char *a3, char *a4, int64_t num, int64_t a6);
	virtual void ModifyOrAppendPlayerCriteria(void *aiCriteriaSet);
	// virtual void CbppUnk336();
	// virtual void CommitSuicide(Vector *vecForce, bool bExplode, bool bForce);
	// virtual void CommitSuicide(bool bExplode, bool bForce);
	// virtual bool CbppUnk339();
	virtual bool CbppUnk340();
	virtual bool IsBot();
	virtual int64_t CbppUnk342();
	// virtual CAI_Expresser *GetAiExpresser();
	// virtual void CbppNullSub344();
	// virtual bool StartReplayMode(float flDelay, float fDuration, CEntityIndex iEntity);
	// virtual void StopReplayMode();
	// virtual uint32_t GetDelayTicks();
	// virtual CEntityIndex *GetReplayEntity(CEntityIndex *a2);
	// virtual int CbppUnk349(void *a2);
	
	virtual int64_t CppbUnk350(void *a2, char *a3, char *a4, int64_t num, int64_t a6);
	virtual bool CppbUnk351(void *a2, char *a3, bool a4, char *a5, int64_t num);
	virtual int64_t CppbUnk352(void *a2, const char *a3, bool a4, char *a5, int64_t num);
	virtual void CppbNullSub353();
	virtual bool CppbUnk354();
	virtual bool CppbReturnZero355();
	virtual bool PostSpawnPointSelection();
	virtual int64_t CppbUnk357();
	virtual void CppbNullSub358();
	virtual void CppbUnk359(Vector *a2, Vector *a3, bool a4);
	virtual void CppbUnk360(int64_t a2, uint8_t a3);
	virtual void CppbUnk361(Vector *a2);
	virtual void CppbNullSub362();
	virtual void CppbUnk363(bool a2);
	virtual void CppbUnk364();
	virtual bool ShouldPickupItemSilently(CBaseCombatCharacter *pNewOwner);
	virtual void CppbUnk366(int64_t a2, int64_t a3, int64_t a4, bool a5);
	virtual void Blind(float holdTime, float fadeTime, float startingAlpha);
	virtual void CppbUnk368(void *a2);
	virtual void OnSwitchWeapons(void *pBaseWeapon);
	virtual void *CppbUnk370(int a2);
	virtual CBaseEntity *CppbUnk371();
	virtual void OnHealthshotUsed();
	virtual void CppbUnk373();
	virtual void CppbUnk374(uint8_t *a2);
	
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
	bool m_bHasFemaleVoice; // 0xaf8
	uint8_t unknown1[7];
	// MNetworkEnable
	EntitySpottedState_t m_entitySpottedState; // 0xb00	
	int32_t m_nSpotRules; // 0xb18	
	// MNetworkEnable
	float m_flTimeOfLastInjury; // 0xb1c	
	// MNetworkEnable
	RelativeDamagedDirection_t m_nRelativeDirectionOfLastInjury; // 0xb20	
	// MNetworkEnable
	CSPlayerState m_iPlayerState; // 0xb24	
	uint8_t unknown2[8];
	CountdownTimer m_chickenIdleSoundTimer; // 0xb30	
	CountdownTimer m_chickenJumpSoundTimer; // 0xb48	
	uint8_t unknown3[0xA0];
	Vector m_vecLastBookmarkedPosition; // 0xc00	
	float m_flLastDistanceTraveledNotice; // 0xc0c	
	float m_flAccumulatedDistanceTraveled; // 0xc10	
	float m_flLastFriendlyFireDamageReductionRatio; // 0xc14	
	bool m_bRespawning; // 0xc18	
	uint8_t unknown4[0x3]; // 0xc19
	int32_t m_iNumGunGameTRBombTotalPoints; // 0xc1c	
	bool m_bShouldProgressGunGameTRBombModeWeapon; // 0xc20	
	uint8_t unknown5[0x3]; // 0xc21
	int32_t m_nLastPickupPriority; // 0xc24	
	float m_flLastPickupPriorityTime; // 0xc28	
	// MNetworkEnable
	bool m_passiveItems[4]; // 0xc2c	
	// MNetworkEnable
	bool m_bIsScoped; // 0xc30	
	// MNetworkEnable
	bool m_bIsWalking; // 0xc31	
	// MNetworkEnable
	bool m_bResumeZoom; // 0xc32	
	// MNetworkEnable
	bool m_bIsDefusing; // 0xc33	
	// MNetworkEnable
	bool m_bIsGrabbingHostage; // 0xc34	
	// MNetworkEnable
	bool m_bHasExosuit; // 0xc35

	uint8_t unknown6[0x2]; // 0xc36

	// MNetworkEnable
	CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0xc38
	// MNetworkEnable
	float m_fImmuneToGunGameDamageTime; // 0xc3c
	// MNetworkEnable
	bool m_bGunGameImmunity; // 0xc40
	// MNetworkEnable
	bool m_bMadeFinalGunGameProgressiveKill; // 0xc41

	uint8_t unknown7[0x2]; // 0xc42

	// MNetworkEnable
	int32_t m_iGunGameProgressiveWeaponIndex; // 0xc44
	// MNetworkEnable
	int32_t m_iNumGunGameTRKillPoints; // 0xc48
	// MNetworkEnable
	int32_t m_iNumGunGameKillsWithCurrentWeapon; // 0xc4c
	// MNetworkEnable
	uint32_t m_unTotalRoundDamageDealt; // 0xc50
	// MNetworkEnable
	float m_fMolotovDamageTime; // 0xc54
	// MNetworkEnable
	bool m_bHasMovedSinceSpawn; // 0xc58
	// MNetworkEnable
	bool m_bCanMoveDuringFreezePeriod; // 0xc59
	// MNetworkEnable
	bool m_isCurrentGunGameLeader; // 0xc5a
	// MNetworkEnable
	bool m_isCurrentGunGameTeamLeader; // 0xc5b
	// MNetworkEnable
	float m_flGuardianTooFarDistFrac; // 0xc5c
	float m_flNextGuardianTooFarHurtTime; // 0xc60
	// MNetworkEnable
	float m_flDetectedByEnemySensorTime; // 0xc64
	// MNetworkEnable
	bool m_bIsSpawnRappelling; // 0xc68

	uint8_t unknown8[0x3]; // 0xc69

	// MNetworkEnable
	Vector m_vecSpawnRappellingRopeOrigin; // 0xc6c
	// MNetworkEnable
	int32_t m_nSurvivalTeam; // 0xc78
	// MNetworkEnable
	CHandle m_hSurvivalAssassinationTarget; // 0xc7c
	int32_t m_nCompletedSurvivalAssassinations; // 0xc80
	float m_flDealtDamageToEnemyMostRecentTimestamp; // 0xc84
	// MNetworkEnable
	float m_flHealthShotBoostExpirationTime; // 0xc88
	float m_flLastEquippedHelmetTime; // 0xc8c
	float m_flLastEquippedArmorTime; // 0xc90
	// MNetworkEnable
	int32_t m_nHeavyAssaultSuitCooldownRemaining; // 0xc94
	bool m_bResetArmorNextSpawn; // 0xc98

	uint8_t unknown9[0x3]; // 0xc99

	// MNetworkEnable
	float m_flLastExoJumpTime; // 0xc9c
	float m_flLastBumpMineBumpTime; // 0xca0

	uint8_t unknown10[0xc]; // 0xca4

	// MNetworkEnable
	float m_flEmitSoundTime; // 0xcb0
	bool m_bEscaped; // 0xcb4
	bool m_bIsVIP; // 0xcb5

	uint8_t unknown11[0x2]; // 0xcb6

	int32_t m_iNumSpawns; // 0xcb8
	int32_t m_iShouldHaveCash; // 0xcbc
	bool m_bJustKilledTeammate; // 0xcc0
	bool m_bPunishedForTK; // 0xcc1
	bool m_bInvalidSteamLogonDelayed; // 0xcc2

	uint8_t unknown12[0x1]; // 0xcc3

	int32_t m_iTeamKills; // 0xcc4
	float m_flLastAction; // 0xcc8
	float m_flNameChangeHistory[5]; // 0xccc
	float m_fLastGivenDefuserTime; // 0xce0
	float m_fLastGivenBombTime; // 0xce4
	// MNetworkEnable
	bool m_bHasNightVision; // 0xce8
	// MNetworkEnable
	bool m_bNightVisionOn; // 0xce9

	uint8_t unknown13[0x2]; // 0xcea

	float m_fNextRadarUpdateTime; // 0xcec
	float m_flLastMoneyUpdateTime; // 0xcf0
	char m_MenuStringBuffer[1024]; // 0xcf4
	CHandle m_pIntroCamera; // 0x10f4
	float m_fIntroCamTime; // 0x10f8
	int32_t m_nMyCollisionGroup; // 0x10fc
	// MNetworkEnable
	bool m_bInBombZone; // 0x1100
	// MNetworkEnable
	bool m_bInBuyZone; // 0x1101
	// MNetworkEnable
	bool m_bInNoDefuseArea; // 0x1102
	// MNetworkEnable
	bool m_bKilledByTaser; // 0x1103
	// MNetworkEnable
	int32_t m_iMoveState; // 0x1104
	CStrongHandle m_nPreviousModelIndex; // 0x1108
	float m_grenadeParameterStashTime; // 0x1110
	bool m_bGrenadeParametersStashed; // 0x1114

	uint8_t unknown14[0x3]; // 0x1115

	QAngle m_angStashedShootAngles; // 0x1118
	Vector m_vecStashedGrenadeThrowPosition; // 0x1124
	Vector m_vecStashedVelocity; // 0x1130
	QAngle m_angShootAngleHistory[2]; // 0x113c
	Vector m_vecThrowPositionHistory[2]; // 0x1154
	Vector m_vecVelocityHistory[2]; // 0x116c
	uint16_t m_nCharacterDefIndex; // 0x1184
	bool m_bDiedAirborne; // 0x1186

	uint8_t unknown15[0x1]; // 0x1187

	CEntityIndex m_iBombSiteIndex; // 0x1188
	// MNetworkEnable
	int32_t m_nWhichBombZone; // 0x118c
	bool m_bInBombZoneTrigger; // 0x1190
	bool m_bWasInBombZoneTrigger; // 0x1191
	bool m_bWasInHostageRescueZone; // 0x1192
	bool m_bWasInBuyZone; // 0x1193
	// MNetworkEnable
	bool m_bInHostageRescueZone; // 0x1194

	uint8_t unknown16[0x3]; // 0x1195

	// MNetworkEnable
	float m_flStamina; // 0x1198
	// MNetworkEnable
	int32_t m_iDirection; // 0x119c
	// MNetworkEnable
	int32_t m_iShotsFired; // 0x11a0
	// MNetworkEnable
	int32_t m_ArmorValue; // 0x11a4
	float m_flFlinchStack; // 0x11a8
	// MNetworkEnable
	float m_flVelocityModifier; // 0x11ac
	// MNetworkEnable
	float m_flGroundAccelLinearFracLastTime; // 0x11b0
	int32_t m_iHostagesKilled; // 0x11b4
	Vector m_vecTotalBulletForce; // 0x11b8
	// MNetworkEnable
	float m_flFlashDuration; // 0x11c4
	// MNetworkEnable
	float m_flFlashMaxAlpha; // 0x11c8
	// MNetworkEnable
	float m_flProgressBarStartTime; // 0x11cc
	// MNetworkEnable
	int32_t m_iProgressBarDuration; // 0x11d0
	// MNetworkEnable
	bool m_bWaitForNoAttack; // 0x11d4
	// MNetworkEnable
	bool m_bIsRespawningForDMBonus; // 0x11d5

	uint8_t unknown17[0x2]; // 0x11d6

	// MNetworkEnable
	float m_flLowerBodyYawTarget; // 0x11d8
	// MNetworkEnable
	bool m_bStrafing; // 0x11dc

	uint8_t unknown18[0x3]; // 0x11dd

	Vector m_lastStandingPos; // 0x11e0
	float m_ignoreLadderJumpTime; // 0x11ec
	CountdownTimer m_ladderSurpressionTimer; // 0x11f0
	Vector m_lastLadderNormal; // 0x1208
	Vector m_lastLadderPos; // 0x1214
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkBitCount "32"
	// MNetworkPriority "32"
	QAngle m_thirdPersonHeading; // 0x1220
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropOffset; // 0x122c
	// MNetworkEnable
	// MNetworkPriority "32"
	float m_flSlopeDropHeight; // 0x1230
	// MNetworkEnable
	// MNetworkPriority "32"
	Vector m_vHeadConstraintOffset; // 0x1234

	uint8_t unknown19[0x8]; // 0x1240

	int32_t m_iLastWeaponFireUsercmd; // 0x1248
	// MNetworkEnable
	// MNetworkEncoder
	// MNetworkBitCount "32"
	// MNetworkPriority "32"
	QAngle m_angEyeAngles; // 0x124c
	bool m_bVCollisionInitted; // 0x1258

	uint8_t unknown20[0x3]; // 0x1259

	Vector m_storedSpawnPosition; // 0x125c
	QAngle m_storedSpawnAngle; // 0x1268
	bool m_bIsSpawning; // 0x1274
	// MNetworkEnable
	bool m_bHideTargetID; // 0x1275

	uint8_t unknown21[0x2]; // 0x1276

	int32_t m_nNumDangerZoneDamageHits; // 0x1278
	// MNetworkEnable
	bool m_bHud_MiniScoreHidden; // 0x127c
	// MNetworkEnable
	bool m_bHud_RadarHidden; // 0x127d

	uint8_t unknown22[0x2]; // 0x127e

	// MNetworkEnable
	CEntityIndex m_nLastKillerIndex; // 0x1280
	// MNetworkEnable
	int32_t m_nLastConcurrentKilled; // 0x1284
	// MNetworkEnable
	int32_t m_nDeathCamMusic; // 0x1288
	// MNetworkEnable
	int32_t m_iAddonBits; // 0x128c
	// MNetworkEnable
	int32_t m_iPrimaryAddon; // 0x1290
	// MNetworkEnable
	int32_t m_iSecondaryAddon; // 0x1294
	int32_t m_nTeamDamageGivenForMatch; // 0x1298
	bool m_bTDGaveProtectionWarning; // 0x129c
	bool m_bTDGaveProtectionWarningThisRound; // 0x129d

	uint8_t unknown23[0x2]; // 0x129e

	float m_flLastTHWarningTime; // 0x12a0
	CUtlStringToken m_currentDeafnessFilter; // 0x12a4
	CUtlVector m_enemyPlayersKilledThisRound; // 0x12a8
	int32_t m_NumEnemiesKilledThisSpawn; 	// 0x12c0
	int32_t m_maxNumEnemiesKillStreak; 	// 0x12c4
	int32_t m_NumEnemiesKilledThisRound; 	// 0x12c8
	int32_t m_NumEnemiesAtRoundStart; 	// 0x12cc
	int32_t m_iRoundsWon; 	// 0x12d0
	bool m_bHasUsedDMBonusRespawn; 	// 0x12d4

	uint8_t unknown24[0x3]; // 0x12d5

	int32_t m_lastRoundResult; 	// 0x12d8
	bool m_wasNotKilledNaturally; 	// 0x12dc

	uint8_t unknown25[0x3]; // 0x12dd

	// MNetworkEnable
	uint32_t m_vecPlayerPatchEconIndices[5]; 	// 0x12e0
	int32_t m_iDeathFlags; 	// 0x12f4
	CHandle m_hPet; // 0x12f8
	float m_flLastKnownAccumulatedWeaponEncumbrance; 	// 0x12fc
	float m_flLastTimeComputedAccumulatedWeaponEncumbrance; 	// 0x1300

	uint8_t unknown26[0x1cc]; // 0x1304

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
	QAngle m_aimPunchAngle; // 0x14f0
	// MNetworkEnable
	// MNetworkBitCount "32"
	QAngle m_aimPunchAngleVel; // 0x14fc
	// MNetworkEnable
	int32_t m_aimPunchTickBase; 	// 0x1508
	// MNetworkEnable
	float m_aimPunchTickFraction; 	// 0x150c
	CUtlVector m_aimPunchCache; // 0x1510
	bool m_bHasDeathInfo; 	// 0x1528

	uint8_t unknown27[0x3]; // 0x1529

	float m_flDeathInfoTime; 	// 0x152c
	Vector m_vecDeathInfoOrigin; 	// 0x1530
	// MNetworkEnable
	bool m_bKilledByHeadshot; 	// 0x153c

	uint8_t unknown28[0x3]; // 0x153d

	int32_t m_LastHitBox; 	// 0x1540
	int32_t m_LastHealth; 	// 0x1544
	float m_flLastCollisionCeiling; 	// 0x1548
	float m_flLastCollisionCeilingChangeTime; 	// 0x154c
	CUtlString m_strVOPrefix; 	// 0x1550
	float m_flLandseconds; 	// 0x1558

	uint8_t unknown29[0x4]; // 0x155c

	void* m_pBot; // 0x1560
	bool m_bBotAllowActive; 	// 0x1568
	bool m_bCommittingSuicideOnTeamChange; 	// 0x1569
};

// Alignment: 25
// Size: 0x1b00
class CCSPlayerPawn : public CCSPlayerPawnBase
{
public:
	virtual void *MaybeGetSchema();
	virtual uint64_t *IheUnk0(char a2);
	// virtual int *IheUnk1(int *a2);
	
	// virtual void *CeiUnk2();
	virtual void *CeiUnk3();
	// virtual void Precache(int64_t *a2);
	// virtual int64_t InitialSpawn();
	virtual void CeiUnk6(int64_t *a2);
	// virtual void CeiUnk7();
	virtual void CeiUnk8(uint32_t a2, int64_t a3, int64_t a4);
	// virtual void CeiUnk9();
	// virtual bool CeiUnk10(int a2, int a3);
	// virtual int64_t CeiReturnZero11();
	// virtual int64_t CeiReturnZero12();
	// virtual void CeiNullSub13();
	// virtual bool CeiUnk14(int64_t a2);
	// virtual void CeiUnk15(void *a2, int64_t a3, int a4);
	// virtual int64_t CeiUnk16(int64_t a2);
	// virtual int64_t CeiUnk17(void **a2);
	// virtual bool CeiUnk18();
	// virtual int64_t OnRestore();
	// virtual int32_t CeiUnk20();
	// virtual int *CeiUnk21(int *a2);
	// virtual int64_t MaybeOnMemberChanged(int64_t memberOffset, int64_t a3, int64_t a4);
	// virtual int64_t CeiUnk23(int64_t a2);
	// virtual int64_t CeiUnk24(int64_t a2, int64_t a3);
	// virtual bool CeiUnk25();
	// virtual int16_t *CeiUnk26(int16_t *a2, int16_t *a3);
	// virtual bool CeiUnk27();
	// virtual bool CeiReturnZero28();
	// virtual void **CeiUnk29(int64_t *a2);
	virtual int64_t *CeiUnk30();
	virtual void CeiUnk31();
	
	virtual int64_t CbeUnk32();
	// virtual bool CbeReturnZero33();
	// virtual int64_t CbeUnk34(int64_t *a2);
	// virtual int64_t CbeReturnZero35();
	// virtual void CbeNullSub36();
	virtual int64_t *CbeUnk37(int64_t *a2, int64_t *a3);
	// virtual void CbeUnk38(int64_t *a2);
	// virtual void *CbeUnk39();
	// virtual void *CbeUnk40();
	// virtual int64_t CbeReturnZero41();
	// virtual int64_t CbeReturnZero42();
	// virtual int64_t CbeReturnZero43();
	// virtual int64_t CbeReturnZero44();
	// virtual int64_t CbeReturnZero45();
	// virtual int64_t CbeReturnZero46();
	// virtual bool CbeUnk47();
	// virtual bool CbeUnk48();
	// virtual int64_t CbeUnk49();
	// virtual int64_t CbeUnk50();
	// virtual int64_t *CbeUnk51(int64_t *a2, int64_t **a3);
	virtual void CbeUnk52();
	virtual void CbeUnk53();
	// virtual void CbeUnk54();
	// virtual bool CbeUnk55();
	// virtual int64_t CbeUnk56();
	// virtual int64_t CbeUnk57(int64_t a2);
	// virtual int64_t CbeUnk58(int64_t a2);
	// virtual void *CbeUnk59(void *a2);
	// virtual CCollisionProperty *GetCollisionProperty();
	// virtual bool CbeUnk61();
	// virtual bool CbeReturnZero62();
	// virtual void CbeUnk63(bool a2);
	// virtual void CbeUnk64();
	// virtual void VPhysicsUpdate(void *pPhysics);
	// virtual int CbeUnk66(int64_t *a2, int a3);
	// virtual bool CbeUnk67();
	// virtual int64_t CbeUnk68(int64_t *a2);
	// virtual void VPhysicsShadowCollision(int index, void *pEvent);
	// virtual void CbeUnk70(int a2, int64_t a3);
	// virtual void CbeNullSub71();
	// virtual void CbeUnk72(float a2);
	// virtual bool CbeReturnZero73();
	// virtual void SetMoveType(MoveType_t moveType, MoveCollide_t moveCollide);
	// virtual bool CbeUnk75(uint8_t a2);
	// virtual Vector *CbeUnk76(Vector *a2);
	// virtual void CbeNullSub77();
	virtual void CbeUnk78();
	// virtual int64_t CbeUnk79();
	// virtual int64_t CbeUnk80(void *a2);
	// virtual int64_t CbeUnk81(void *a2, bool a3);
	// virtual void CbeNullSub82();
	// virtual CBaseEntity *CbeUnk83();
	// virtual void CbeNullSub84();
	// virtual int64_t MaybeChangeTeam(uint32_t teamNumber);
	// virtual bool InSameTeam(CBaseEntity *pEntity);
	// virtual void CbeUnk87(void *a2, uint32_t a3);
	// virtual int64_t CbeReturnTwo88();
	// virtual void *CbeReturnZero89();
	// virtual void ***CbeUnk90();
	// virtual int64_t CbeUnk91(char *a2, char *a3);
	// virtual int64_t CbeReturnZero92();
	// virtual bool CbeReturnZero93();
	// virtual bool CbeReturnZero94();
	// virtual bool CbeReturnZero95();
	// virtual void AddContext(const char *contextNam);
	// virtual char *CbeUnk97(char *a2);
	// virtual void CbeUnk98();
	// virtual void CbeNullSub99();
	// virtual bool IsOnGround();
	// virtual bool GetAutoAimRadius();
	// virtual int64_t CbeUnk102(int64_t a2);
	// virtual int64_t CbeUnk103(int64_t a2);
	// virtual bool MaybePassesDamageFilter(void *takeDamageInfo);
	// virtual bool CbeReturnOne105();
	// virtual int TakeHealth(float flHealth);
	// virtual float GetHealthFrac();
	// virtual int64_t CbeUnk108(int64_t a2);
	// virtual int64_t CbeUnk109(void *a2);
	// virtual uint8_t CbeUnk110(void *a2, int64_t a3);
	virtual void Event_Killed(void *cTakeDamageInfo);
	virtual void Event_KilledOther(CBaseEntity *pVictim, void *cTakeDamageInfo);
	// virtual bool CbeReturnOne113();
	// virtual double CbeReturnZero114();
	// virtual int CbeUnk115(void *a2, int64_t a3);
	// virtual int ImpactTrace(void *pTrace, int iDamageType, char *pCustomImpactName);
	// virtual bool CbeReturnZero117();
	// virtual bool CbeUnk118(uint8_t **a2);
	// virtual bool CbeReturnZero119();
	// virtual bool CbeUnk120();
	// virtual void OnEntityEvent(EntityEvent_t, int64_t nContents);
	// virtual bool CbeUnk122(void *a2);
	// virtual const char *CbeReturnZero123();
	// virtual int64_t CbeUnk124(int64_t a2);
	// virtual int64_t *CbeUnk125(int64_t a2);
	// virtual int64_t *MaybeTouch(CBaseEntity *other);
	// virtual int64_t *CbeUnk127(int64_t a2);
	// virtual void CbeNullSub128();
	// virtual int64_t *CbeUnk129(int64_t a2);
	// virtual void CbeNullSub130();
	// virtual int64_t CbeReturnZero131();
	// virtual int64_t *CbeUnk132();
	// virtual int64_t *CbeUnk133();
	// virtual void CbeUnk134();
	// virtual void CbeUnk135(); possibly has a call to Physics_SimulateEntity inside it
	// virtual void CbeNullSub136();
	// virtual void CbeNullSub137();
	// virtual void CbeUnk138(void *a2, Vector *velocity);
	// virtual void CbeNullSub139();
	// virtual int64_t CbeUnk140(int64_t a2, int64_t a3, Vector *a4);
	// virtual bool CbeReturnOne141();
	// virtual int32_t GetBloodColor();
	// virtual bool MaybeIsDead();
	// virtual bool IsAlive();
	// virtual bool CbeReturnZero145();
	// virtual int64_t CbeUnk146();
	// virtual bool CbeReturnZero147();
	// virtual bool CbeReturnZero148();
	// virtual bool CbeUnk149();
	// virtual int64_t CbeReturnZero150();
	// virtual int64_t CbeReturnZero151();
	// virtual bool CbeReturnZero152();
	// virtual int64_t CbeReturnZero153();
	// virtual bool CbeReturnZero154();
	// virtual int64_t CbeReturnZero155();
	// virtual int64_t CbeReturnZero156();
	// virtual bool CbeReturnZero157();
	// virtual int GetMaxHealth();
	// virtual int SetHealth(int health);
	// virtual void ModifyOrAppendCriteria(void *aiCriteriaSet);
	// virtual int64_t CbeUnk161(char *a2);
	// virtual void CbeNullSub162();
	// virtual int64_t CbeReturnZero163();
	// virtual double CbeReturnZero164();
	// virtual void CbeNullSub165();
	// virtual Vector *MaybeGetViewOffset(Vector *a2);
	// virtual Vector *MaybeEyePosition(Vector *a2);
	// virtual Vector *MaybeLocalEyeAngles(Vector *a2);
	// virtual int64_t CbeUnk169(int64_t a2);
	// virtual void SetTimeScale(float timescale);
	// virtual Vector *CbeUnk171(Vector *a2, int64_t a3, bool a4);
	// virtual int64_t CbeUnk172(int64_t a2);
	// virtual CNetworkViewOffsetVector *CbeUnk173();
	// virtual Vector *MaybeGetAbsVelocity2(Vector *a2);
	// virtual bool MaybeHasBaseVelocity();
	// virtual void CbeNullSub176();
	// virtual void CbeUnk177(Vector *a2);
	// virtual int64_t CbeUnk178();
	// virtual bool CbeTraceSomething179(Vector *a2, int64_t *a3);
	// virtual bool CbeTraceSomething180(Vector *a2, CBaseEntity *a3, CBaseEntity **a4);
	// virtual bool CbeReturnOne181();
	// virtual CBaseEntity *CbeUnk182();
	// virtual bool CbeReturnZero183();
	// virtual void CbeNullSub184();
	// virtual int64_t CbeNullSub185(int64_t a2);
	// virtual int32_t *MaybeScriptEmitSound(char *soundname);
	// virtual bool CbeUnk187(int64_t a2, int32_t *a3);
	// virtual bool CbeUnk188(int64_t a2, Vector *a3);
	// virtual bool CbeUnk189(int32_t *a2, int64_t *a3);
	// virtual void SetEffects(uint32_t nEffects);
	// virtual bool CbeReturnOne191();
	// virtual int64_t CbeReturnZero192();
	// virtual int64_t CbeReturnZero193();
	// virtual int32_t CbeUnk194();
	// virtual bool CbeNullSub195(uint32_t a2);
	// virtual void CbeNullSub196();
	// virtual void CbeNullSub197();
	// virtual bool CbeReturnZero198();
	// virtual double CbeReturnZero199();
	// virtual double CbeReturnZero200();
	// virtual double CbeReturnZero201();
	// virtual void CbeNullSub202();
	// virtual void CbeNullSub203();
	// virtual bool CbeReturnOne204();
	// virtual void CbeNullSub205();
	
	// virtual void CbmeUnk206();
	// virtual void CbmeNullSub207();
	// virtual const char *DamageDecal(int bitsDamageType, int gameMaterial);
	// virtual bool CbmeReturnOne209();
	// virtual void CbmeNullSub210();
	// virtual bool CbmeUnk211();
	// virtual void MaybeSetViewOffset(Vector *viewOffset);
	// virtual bool IsRagdoll();
	// virtual bool CbmeUnk214(int64_t a2, bool a3, int64_t a4, int a5, int64_t a6);
	// virtual void CbmeUnk215(int64_t a2);
	// virtual void CbmeUnk216(int64_t a2);
	// virtual void Extinguish();
	// virtual bool Dissolve(char *pMaterialName, float flStartTime, bool bNPCOnly, int nDissolveType, Vector *vDissolverOrigin, int iMagnitude);
	
	// virtual void CbagNullSub219();
	// virtual void CbagNullSub220();
	// virtual void CbagUnk221();
	// virtual bool CbagReturnZero222();
	// virtual int64_t CbagReturnZero223();
	// virtual int64_t CbagUnk224();
	// virtual void CbagNullSub225();
	// virtual void CbagNullSub226();
	// virtual void CbagNullSub227();
	// virtual void *CbagUnk228();
	// virtual void CbagNullSub229();
	// virtual int64_t CbagUnk230(float a2, float a3);
	virtual void CbagUnk231(float a2, uint8_t a3);
	// virtual void CbagNullSub232();
	// virtual void CbagUnk233();
	// virtual bool CbagUnk234();
	// virtual void CbagNullSub235();
	// virtual void CbagUnk236(void *a2, int32_t *a3);
	// virtual bool CbagReturnOne237();
	// virtual Vector *CbagUnk238(Vector *a2, const char *a3);
	// virtual void CbagUnk239(void *a2);
	// virtual void CbagUnk240(void *a2, void *a3, char *a4);
	// virtual bool CbagReturnZero241();
	// virtual bool CbagReturnZero242();
	// virtual bool CbagUnk243(int64_t a2, bool a3);
	// virtual bool CbagUnk244();
	// virtual bool CbagReturnZero245();
	// virtual void CbagUnk246(Vector *a2, Vector *a3);
	// virtual void CbagNullSub247();
	// virtual bool CbagReturnZero248();
	// virtual void CbagNullSub249();
	// virtual int64_t CbagUnk250(int64_t a2, char *a3);
	
	// virtual bool CbfUnk251(void *a2);
	// virtual bool CbfUnk252(void *a2);
	// virtual bool CbfUnk253(void *a2, bool a3, bool a4);
	// virtual bool CbfReturnOne254();
	// virtual double CbfUnk255(const char *a2, float a3, void *a4, void *a5);
	// virtual double CbfUnk256(const char *a2, float a3);
	// virtual double CbfUnk257(const char *a2, void *a3, void *a4);
	// virtual int64_t CbfUnk258();
	// virtual int64_t CbfUnk259(int a2);
	// virtual void CbfNullSub260();
	// virtual bool CbfReturnOne261();
	
	// virtual void **CbccUnk262();
	// virtual void **CbccUnk263();
	// virtual bool CbccUnk264(CBaseEntity *a2, CBaseEntity **a3);
	// virtual bool CbccUnk265(Vector *a2);
	// virtual int64_t CbccUnk266(void *a2);
	// virtual void CbccUnk267(float duration, float delay);
	// virtual bool CbccUnk268(Vector *a2);
	// virtual int64_t CbccUnk269(void *a2);
	// virtual void CbccUnk270(Vector *a2);
	// virtual void CbccUnk271(Vector *a2);
	// virtual void CbccUnk272(Vector *a2);
	// virtual int64_t CbccUnk273(int64_t a2);
	// virtual int64_t CbccUnk274(int64_t a2);
	// virtual bool CbccReturnOne275();
	virtual void OnTakeDamage(void *cTakeDamageInfo);
	virtual void MaybeOnTakeDamage_Alive(void *a2, int32_t *a3);
	virtual void CbccUnk278();
	// virtual void CbccNullSub279();
	// virtual void CbccNullSub280();
	// virtual Vector *CalcDeathForceVector(Vector *out, void *takeDamageInfo);
	// virtual bool CbccReturnOne282();
	// virtual void CbccUnk283();
	// virtual bool CbccReturnOne284();
	// virtual bool CbccUnk285(void *a2, Vector *a3, int64_t a4);
	// virtual void CbccNullSub286();
	// virtual bool CbccReturnZero287();
	// virtual void CbccNullSub288();
	// virtual void CbccNullSub289();
	// virtual void CbccUnk290(void *a2);
	// virtual void CbccUnk291(int a2, uint64_t *a3);
	// virtual bool CbccReturnOne292();
	// virtual bool CbccUnk293(void *a2);
	// virtual Vector *CbccUnk294(Vector *a2);
	// virtual int64_t CbccUnk295(int64_t *a2);
	
	virtual bool CbppUnk296();
	virtual int64_t CbppUnk297();
	// virtual int64_t CbppUnk298();
	virtual int64_t CbppUnk299();
	// virtual int64_t CbppReturnZero300();
	// virtual void *CbppUnk301();
	// virtual void *CbppUnk302();
	// virtual void *CbppUnk303();
	// virtual int64_t CbppReturnZero304();
	// virtual int64_t CbppUnk305();
	// virtual int64_t CbppUnk306();
	// virtual bool CbppUnk307(int64_t a2, void *a3);
	// virtual bool CbppUnk308(CBaseAnimGraph *a2, void *a3, void *a4);
	virtual void Spawn();
	// virtual bool CbppUnk310();
	virtual void PreThink();
	virtual void PostThink();
	// virtual void MaybeDamageEffect(void *a2, int64_t a3, void *a4);
	// virtual void CbppUnk314(void *a2);
	// virtual float CbppUnk315();
	// virtual void CbppUnk316(int64_t a2, int64_t a3);
	// virtual int64_t CbppReturnZero317();
	// virtual Vector *CbppUnk318(Vector *a2, int a3);
	// virtual Vector *CbppUnk319(Vector *a2, int a3);
	// virtual int64_t CbppUnk320();
	// virtual bool IsWalking();
	// virtual bool StartHltvReplayEvent(void *clientReplayEventParams);
	// virtual void CbppUnk323(int64_t a2);
	// virtual void CbppUnk324();
	// virtual int64_t CbppUnk325();
	// virtual void DeathSound(void *takeDamageInfo);
	// virtual void FallDamageSound();
	virtual void CbppUnk328(int maybeImpulse);
	// virtual void CheatImpulseCommands(int iImpulse);
	virtual bool ClientCommand(void *cCommandArgs);
	// virtual void CbppUnk331();
	// virtual void MaybeForceClientDllUpdate();
	// virtual void CbppUnk333(int64_t a2, uint32_t a3);
	// virtual bool CbppUnk334(void *a2, const char *a3, char *a4, int64_t num, int64_t a6);
	// virtual void ModifyOrAppendPlayerCriteria(void *aiCriteriaSet);
	// virtual void CbppUnk336();
	virtual void CommitSuicide(Vector *vecForce, bool bExplode, bool bForce);
	virtual void CommitSuicide(bool bExplode, bool bForce);
	// virtual bool CbppUnk339();
	// virtual bool CbppUnk340();
	// virtual bool IsBot();
	// virtual int64_t CbppUnk342();
	// virtual CAI_Expresser *GetAiExpresser();
	// virtual void CbppNullSub344();
	// virtual bool StartReplayMode(float flDelay, float fDuration, CEntityIndex iEntity);
	// virtual void StopReplayMode();
	// virtual uint32_t GetDelayTicks();
	// virtual CEntityIndex *GetReplayEntity(CEntityIndex *a2);
	// virtual int CbppUnk349(void *a2);
	
	// virtual int64_t CppbUnk350(void *a2, char *a3, char *a4, int64_t num, int64_t a6);
	// virtual bool CppbUnk351(void *a2, char *a3, bool a4, char *a5, int64_t num);
	// virtual int64_t CppbUnk352(void *a2, const char *a3, bool a4, char *a5, int64_t num);
	// virtual void CppbNullSub353();
	virtual bool CppbUnk354();
	// virtual bool CppbReturnZero355();
	// virtual bool PostSpawnPointSelection();
	virtual int64_t CppbUnk357();
	// virtual void CppbNullSub358();
	// virtual void CppbUnk359(Vector *a2, Vector *a3, bool a4);
	// virtual void CppbUnk360(int64_t a2, uint8_t a3);
	// virtual void CppbUnk361(Vector *a2);
	// virtual void CppbNullSub362();
	virtual void CppbUnk363(bool a2);
	virtual void CppbUnk364();
	// virtual bool ShouldPickupItemSilently(CBaseCombatCharacter *pNewOwner);
	virtual void CppbUnk366(int64_t a2, int64_t a3, int64_t a4, bool a5);
	virtual void Blind(float holdTime, float fadeTime, float startingAlpha);
	// virtual void CppbUnk368(void *a2);
	virtual void OnSwitchWeapons(void *pBaseWeapon);
	virtual void *CppbUnk370(int a2);
	virtual CBaseEntity *CppbUnk371();
	virtual void OnHealthshotUsed();
	virtual void CppbUnk373();
	virtual void CppbUnk374(uint8_t *a2);
	
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

class CMoveDataSource1
{
public:
	// bool			m_bFirstRunOfFunctions : public 1;
	// bool			m_bGameCodeMovedPlayer : public 1;
	// bool			m_bNoAirControl : public 1;
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
class CMoveData
{
public:
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
	uint8_t unknown3[0x38];
	// these 2 vecs are used in FinishMove -> Unk21(this, ucmd, mv) -> void __fastcall sub_7FF8E0960610(CMoveData *mv)
	Vector m_unknownVec0; // 0x80
	Vector m_unknownVec1; // 0x8c
	Vector m_vecAbsOrigin; // 0x98
	uint8_t unknown5[0x4]; // 0xa4
	Vector m_vecTrailingVelocity; // 0xa8
	float m_flTrailingVelocityTime; // 0xb4
	uint8_t unknown6[0x4]; // 0xb8
	Vector m_vecOldAngles; // 0xbc
	float m_flMaxSpeed; // 0xc8
	float m_flClientMaxSpeed; // 0xcc
	bool m_bJumpedThisTick; // 0xd0 related to dev_cs_enable_consistent_jumps
	bool m_bSomethingWithGravity; // 0xd1 related to the new ShouldApplyGravity
	uint8_t unknown7[0x2]; // 0xd2 Probably padding
	Vector m_outWishVel; // 0xd4
};

// Size: 0x78
// TODO: rename to CGlobalVars, or inherit CGlobalVars from this
class CGlobalVarsBase
{
public:
	uint8_t unknown0[0x10];
	int maxClients;
	uint8_t unknown1[0xc];
	uint64_t (*MaybeCheckCurtime)(int isInSimulation);
	float frametime; // 0x28
	float curtime; // 0x2C
	uint8_t unknown2[0x10];
	int tickcount; // 0x40
	float interval_per_tick; // 0x44
	
	// now CGlobalVars maybe
	char *mapname; // 0x48
	uint8_t unknown3[0xc];
	bool mp_teamplay; // 0x5c
	uint8_t unknown4[0x1b];
};