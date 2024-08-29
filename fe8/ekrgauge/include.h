#define CONST_DATA 
typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long s64;
typedef volatile u8   vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8   vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;

typedef float  f32;
typedef double f64;

typedef u8  s88;
typedef u16 s816;
typedef u32 s832;
#define ABS(aValue) ((aValue) >= 0 ? (aValue) : -(aValue))

#  define STRUCT_PAD(from, to) unsigned char _pad_ ## from[(to) - (from)]

enum {
    // Battle-related magic constants

    // Maximum amount of hits that can happen in a battle (-1, because of the terminating "hit")
    BATTLE_HIT_MAX = 7,

    // Followup attack (double attack) attack speed difference threshold
    BATTLE_FOLLOWUP_SPEED_THRESHOLD = 4,

    // Maximum battle damage
    BATTLE_MAX_DAMAGE = 127,
};
enum {
    BG_0 = 0,
    BG_1,
    BG_2,
    BG_3,
};

struct SupportData;

// Config
enum { UNIT_LEVEL_MAX = 20 };
enum { UNIT_ITEM_COUNT = 5 };
enum { UNIT_DEFINITION_ITEM_COUNT = 4 };
enum { UNIT_SUPPORT_MAX_COUNT = 7 };

// Meaningful constants
enum { UNIT_EXP_DISABLED = 0xFF };
s8 IsSramWorking();
extern u8 gUnknown_02020188[];
struct CharacterData
{
    /* 00 */ u16 nameTextId;
    /* 02 */ u16 descTextId;
    /* 04 */ u8 number;
    /* 05 */ u8 defaultClass;
    /* 06 */ u16 portraitId;
    /* 08 */ u8 miniPortrait;
    /* 09 */ u8 affinity;
    /* 0A */ u8 _u0A;

    /* 0B */ s8 baseLevel;
    /* 0C */ s8 baseHP;
    /* 0D */ s8 basePow;
    /* 0E */ s8 baseSkl;
    /* 0F */ s8 baseSpd;
    /* 10 */ s8 baseDef;
    /* 11 */ s8 baseRes;
    /* 12 */ s8 baseLck;
    /* 13 */ s8 baseCon;

    /* 14 */ u8 baseRanks[8];

    /* 1C */ u8 growthHP;
    /* 1D */ u8 growthPow;
    /* 1E */ u8 growthSkl;
    /* 1F */ u8 growthSpd;
    /* 20 */ u8 growthDef;
    /* 21 */ u8 growthRes;
    /* 22 */ u8 growthLck;

    /* 23 */ u8 _u23;
    /* 24 */ u8 _u24;
    /* 25 */ u8 _u25;
    /* 26 */ u8 _u26;
    /* 27 */ u8 _u27;

    /* 28 */ u32 attributes;

    /* 2C */ const struct SupportData* pSupportData;
    /* 30 */ void* _pU30;
};

struct ClassData
{
    /* 00 */ u16 nameTextId;
    /* 02 */ u16 descTextId;
    /* 04 */ u8 number;
    /* 05 */ u8 promotion;
    /* 06 */ u8 SMSId;
    /* 07 */ u8 slowWalking;
    /* 08 */ u16 defaultPortraitId;
    /* 0A */ u8 _u0A;

    /* 0B */ s8 baseHP;
    /* 0C */ s8 basePow;
    /* 0D */ s8 baseSkl;
    /* 0E */ s8 baseSpd;
    /* 0F */ s8 baseDef;
    /* 10 */ s8 baseRes;
    /* 11 */ s8 baseCon;
    /* 12 */ s8 baseMov;

    /* 13 */ s8 maxHP;
    /* 14 */ s8 maxPow;
    /* 15 */ s8 maxSkl;
    /* 16 */ s8 maxSpd;
    /* 17 */ s8 maxDef;
    /* 18 */ s8 maxRes;
    /* 19 */ s8 maxCon;

    /* 1A */ s8 classRelativePower;

    /* 1B */ s8 growthHP;
    /* 1C */ s8 growthPow;
    /* 1D */ s8 growthSkl;
    /* 1E */ s8 growthSpd;
    /* 1F */ s8 growthDef;
    /* 20 */ s8 growthRes;
    /* 21 */ s8 growthLck;

    /* 22 */ u8 promotionHp;
    /* 23 */ u8 promotionPow;
    /* 24 */ u8 promotionSkl;
    /* 25 */ u8 promotionSpd;
    /* 26 */ u8 promotionDef;
    /* 27 */ u8 promotionRes;

    /* 28 */ u32 attributes;

    /* 2C */ u8 baseRanks[8];

    /* 34 */ const void* pBattleAnimDef;
    /* 38 */ const s8* pMovCostTable[3]; // standard, rain, snow

    /* 44 */ const s8* pTerrainAvoidLookup;
    /* 48 */ const s8* pTerrainDefenseLookup;
    /* 4C */ const s8* pTerrainResistanceLookup;

    //* 44 */ const s8* pTerrainBonusTables[3]; // def, avo, res

    /* 50 */ const void* _pU50;
};

struct Unit
{
    /* 00 */ const struct CharacterData* pCharacterData;
    /* 04 */ const struct ClassData* pClassData;

    /* 08 */ s8 level;
    /* 09 */ u8 exp;

    /* 0A */ u8 aiFlags;

    /* 0B */ s8 index;

    /* 0C */ u32 state;

    /* 10 */ s8 xPos;
    /* 11 */ s8 yPos;

    /* 12 */ s8 maxHP;
    /* 13 */ s8 curHP;
    /* 14 */ s8 pow;
    /* 15 */ s8 skl;
    /* 16 */ s8 spd;
    /* 17 */ s8 def;
    /* 18 */ s8 res;
    /* 19 */ s8 lck;

    /* 1A */ s8 conBonus;
    /* 1B */ u8 rescueOtherUnit;
    /* 1C */ u8 ballistaIndex;
    /* 1D */ s8 movBonus;

    /* 1E */ u16 items[UNIT_ITEM_COUNT];
    /* 28 */ u8 ranks[8];

    /* 30 */ u8 statusIndex : 4;
    /* 30 */ u8 statusDuration : 4;

    /* 31 */ u8 torchDuration : 4;
    /* 31 */ u8 barrierDuration : 4;

    /* 32 */ u8 supports[UNIT_SUPPORT_MAX_COUNT];
    /* 39 */ s8 supportBits;
    /* 3A */ u8 _u3A;
    /* 3B */ u8 _u3B;

    /* 3C */ struct SMSHandle* pMapSpriteHandle;

    /* 40 */ u16 ai3And4;
    /* 42 */ u8 ai1;
    /* 43 */ u8 ai1data;
    /* 44 */ u8 ai2;
    /* 45 */ u8 ai2data;
    /* 46 */ u8 _u46;
    /* 47 */ u8 _u47;
};
struct UnitDefinition
{
    /* 00 */ u8  charIndex;
    /* 01 */ u8  classIndex;
    /* 02 */ u8  leaderCharIndex;

    /* 03 */ u8  autolevel  : 1;
    /* 03 */ u8  allegiance : 2;
    /* 03 */ u8  level      : 5;

    /* 04 */ u16 xPosition  : 6; /* 04:0 to 04:5 */
    /* 04 */ u16 yPosition  : 6; /* 04:6 to 05:3 */
    /* 05 */ u16 genMonster : 1; /* 05:4 */
    /* 05 */ u16 itemDrop   : 1; /* 05:5 */
    /* 05 */ u16 sumFlag    : 1; /* 05:6 */
    /* 05 */ u16 extraData  : 9; /* 05:7 to 06:7 */
    /* 07 */ u16 redaCount  : 8;

    /* 08 */ const void* redas;

    /* 0C */ u8 items[UNIT_DEFINITION_ITEM_COUNT];

    /* 10 */ u8 ai[4];
};

extern struct Unit* gActiveUnit;

enum
{
    // Unit state constant masks

    US_NONE         = 0,

    US_HIDDEN       = (1 << 0),
    US_UNSELECTABLE = (1 << 1),
    US_DEAD         = (1 << 2),
    US_NOT_DEPLOYED = (1 << 3),
    US_RESCUING     = (1 << 4),
    US_RESCUED      = (1 << 5),
    US_HAS_MOVED    = (1 << 6), // Bad name?
    US_CANTOING     = US_HAS_MOVED, // Alias
    US_UNDER_A_ROOF = (1 << 7),
    US_BIT8 = (1 << 8), // has been seen?
    US_BIT9 = (1 << 9), // hidden by fog?
    US_HAS_MOVED_AI = (1 << 10),
    US_IN_BALLISTA  = (1 << 11),
    US_DROP_ITEM    = (1 << 12),
    US_GROWTH_BOOST = (1 << 13),
    US_SOLOANIM_1   = (1 << 14),
    US_SOLOANIM_2   = (1 << 15),
    US_BIT16        = (1 << 16),
    US_BIT17        = (1 << 17),
    US_BIT18        = (1 << 18),
    US_BIT19        = (1 << 19),
    US_BIT20        = (1 << 20),
    US_BIT21        = (1 << 21),
    US_BIT22        = (1 << 22),
    US_BIT23        = (1 << 23),
    // = (1 << 24),
    US_BIT25 = (1 << 25),
    US_BIT26 = (1 << 26),
    // = (1 << 27),
    // = (1 << 28),
    // = (1 << 29),
    // = (1 << 30),
    // = (1 << 31),

    // Helpers
    US_UNAVAILABLE = (US_DEAD | US_NOT_DEPLOYED | US_BIT16),
};

enum
{
    // Unit status identifiers

    UNIT_STATUS_NONE = 0,

    UNIT_STATUS_POISON = 1,
    UNIT_STATUS_SLEEP = 2,
    UNIT_STATUS_SILENCED = 3,
    UNIT_STATUS_BERSERK = 4,

    UNIT_STATUS_ATTACK = 5,
    UNIT_STATUS_DEFENSE = 6,
    UNIT_STATUS_CRIT = 7,
    UNIT_STATUS_AVOID = 8,

    UNIT_STATUS_SICK = 9,
    UNIT_STATUS_RECOVER = 10,

    UNIT_STATUS_PETRIFY = 11,
    UNIT_STATUS_12 = 12,
    UNIT_STATUS_13 = 13,
};

enum {
    FACTION_BLUE   = 0x00, // player units
    FACTION_GREEN  = 0x40, // ally npc units
    FACTION_RED    = 0x80, // enemy units
    FACTION_PURPLE = 0xC0, // link arena 4th team
};

enum
{
    // Character/Class attributes

    CA_NONE = 0,

    CA_MOUNTEDAID = (1 << 0),
    CA_CANTO = (1 << 1),
    CA_STEAL = (1 << 2),
    CA_THIEF = (1 << 3),
    CA_DANCE = (1 << 4),
    CA_PLAY = (1 << 5),
    CA_CRITBONUS = (1 << 6),
    CA_BALLISTAE = (1 << 7),
    CA_PROMOTED = (1 << 8),
    CA_SUPPLY = (1 << 9),
    CA_MOUNTED = (1 << 10),
    CA_WYVERN = (1 << 11),
    CA_PEGASUS = (1 << 12),
    CA_LORD = (1 << 13),
    CA_FEMALE = (1 << 14),
    CA_BOSS = (1 << 15),
    CA_LOCK_1 = (1 << 16),
    CA_LOCK_2 = (1 << 17),
    CA_LOCK_3 = (1 << 18), // Dragons or Monster depending of game
    CA_MAXLEVEL10 = (1 << 19),
    CA_UNSELECTABLE = (1 << 20),
    CA_TRIANGLEATTACK_PEGASI = (1 << 21),
    CA_TRIANGLEATTACK_ARMORS = (1 << 22),
    CA_BIT_23 = (1 << 23),
    CA_NEGATE_LETHALITY = (1 << 24),
    CA_ASSASSIN = (1 << 25),
    CA_MAGICSEAL = (1 << 26),
    CA_SUMMON = (1 << 27),
    CA_LOCK_4 = (1 << 28),
    CA_LOCK_5 = (1 << 29),
    CA_LOCK_6 = (1 << 30),
    CA_LOCK_7 = (1 << 31),

    // Helpers
    CA_REFRESHER = CA_DANCE | CA_PLAY,
    CA_FLYER = CA_WYVERN | CA_PEGASUS,
    CA_TRIANGLEATTACK_ANY = CA_TRIANGLEATTACK_ARMORS | CA_TRIANGLEATTACK_PEGASI,
};

enum
{
    // To check result of GetUnit[Item]UseBits

    UNIT_USEBIT_WEAPON = (1 << 0),
    UNIT_USEBIT_STAFF  = (1 << 1),
};

// TODO: MOVE ELSEWHERE
extern const struct ClassData gClassData[]; // gClassData
extern const struct CharacterData gCharacterData[]; // gCharacterData

void ClearUnits(void);
void ClearUnit(struct Unit* unit);
void CopyUnit(struct Unit* from, struct Unit* to);
struct Unit* GetFreeUnit(int faction);
struct Unit* GetFreeBlueUnit(const struct UnitDefinition* uDef);
int GetUnitFogViewRange(struct Unit* unit);
void SetUnitStatus(struct Unit* unit, int statusId);
void SetUnitStatusExt(struct Unit* unit, int status, int duration);
int GetUnitSMSId(struct Unit* unit);
s8 UnitAddItem(struct Unit* unit, int item);
void UnitClearInventory(struct Unit* unit);
void UnitRemoveInvalidItems(struct Unit* unit);
int GetUnitItemCount(struct Unit* unit);
s8 UnitHasItem(struct Unit* unit, int item);
int LoadUnits(const struct UnitDefinition* uDef);
void sub_8017A54(struct Unit* unit);
s8 CanClassWieldWeaponType(u8 classId, u8 wpnType);
struct Unit* LoadUnit(const struct UnitDefinition* uDef);
void UnitInitFromDefinition(struct Unit* unit, const struct UnitDefinition* uDef);
void UnitLoadItemsFromDefinition(struct Unit* unit, const struct UnitDefinition* uDef);
void UnitLoadStatsFromChracter(struct Unit* unit, const struct CharacterData* character);
void FixROMUnitStructPtr(struct Unit* unit);
void UnitLoadSupports(struct Unit* unit);
void UnitAutolevelWExp(struct Unit* unit, const struct UnitDefinition* uDef);
void UnitAutolevelCore(struct Unit* unit, u8 classId, int levelCount);
void UnitAutolevelPenalty(struct Unit* unit, u8 classId, int levelCount);
void UnitApplyBonusLevels(struct Unit* unit, int levelCount);
void UnitAutolevel(struct Unit* unit);
void UnitAutolevelRealistic(struct Unit* unit);
void UnitCheckStatCaps(struct Unit* unit);
struct Unit* GetUnitFromCharId(int charId);
struct Unit* GetUnitFromCharIdAndFaction(int charId, int faction);
s8 CanUnitRescue(struct Unit* actor, struct Unit* target);
void UnitRescue(struct Unit* actor, struct Unit* target);
void UnitDrop(struct Unit* actor, int xTarget, int yTarget);
s8 UnitGive(struct Unit* actor, struct Unit* target);
void UnitKill(struct Unit* unit);
void UnitChangeFaction(struct Unit* unit, int faction);
void UnitFinalizeMovement(struct Unit* unit);
void UnitGetDeathDropLocation(struct Unit* unit, int* xOut, int* yOut);
void UnitBeginAction(struct Unit* unit);
void UnitBeginCantoAction(struct Unit* unit);
void MoveActiveUnit(int x, int y);
void ClearActiveFactionGrayedStates(void);
void TickActiveFactionTurn(void);
void SetAllUnitNotBackSprite(void); // TODO: better name
void UnitUpdateUsedItem(struct Unit* unit, int itemSlot);
int GetUnitAid(struct Unit* unit);
int GetUnitMagBy2Range(struct Unit* unit);
s8 UnitHasMagicRank(struct Unit* unit);
void sub_8018A7C(struct Unit* unit, int x, int y);
int GetUnitKeyItemSlotForTerrain(struct Unit* unit, int terrain);
int GetUnitAidIconId(u32 attributes);
int GetUnitWeaponUsabilityBits(struct Unit* unit);
int GetCombinedEnemyWeaponUsabilityBits(void);
s8 CanUnitMove(void);
s8 IsPositionMagicSealed(int x, int y);
s8 IsUnitMagicSealed(struct Unit* unit);
int GetUnitLastItem(struct Unit* unit);
const s8* GetUnitMovementCost(struct Unit* unit);
int GetClassSMSId(int classId);
void UpdatePrevDeployStates(void);
void LoadUnitPrepScreenPositions(void);
void ClearTemporaryUnits(void);
s8 IsUnitSlotAvailable(int faction);
void sub_8018F80(void);
void sub_8018FC0(void);
u16 CountAvailableBlueUnits(void);
int CountRedUnits(void);
int CountGreenUnits(void);
void ClearCutsceneUnits(void);
void sub_8019108(void);
int GetUnitCurrentHp(struct Unit* unit);
int GetUnitMaxHp(struct Unit* unit);
int GetUnitPower(struct Unit* unit);
int GetUnitSkill(struct Unit* unit);
int GetUnitSpeed(struct Unit* unit);
int GetUnitDefense(struct Unit* unit);
int GetUnitResistance(struct Unit* unit);
int GetUnitLuck(struct Unit* unit);
int GetUnitPortraitId(struct Unit* unit);
int GetUnitMiniPortraitId(struct Unit* unit);
int GetUnitLeaderCharId(struct Unit* unit);
void SetUnitLeaderCharId(struct Unit* unit, int charId);
void SetUnitHp(struct Unit* unit, int value);
void AddUnitHp(struct Unit* unit, int amount);
char* GetUnitRescueName(struct Unit* unit);
char* GetUnitStatusName(struct Unit* unit);
struct Unit* GetUnit(int id);
const struct ClassData* GetClassData(int classId);
const struct CharacterData* GetCharacterData(int charId);
void UnitRemoveItem(struct Unit* unit, int slot);
s8 CanUnitCrossTerrain(struct Unit* unit, int terrain);

#define UNIT_IS_VALID(aUnit) ((aUnit) && (aUnit)->pCharacterData)

#define UNIT_FACTION(aUnit) ((aUnit)->index & 0xC0)

#define UNIT_CATTRIBUTES(aUnit) ((aUnit)->pCharacterData->attributes | (aUnit)->pClassData->attributes)

#define UNIT_NAME_ID(aUnit) ((aUnit)->pCharacterData->nameTextId)

#define UNIT_MHP_MAX(aUnit) (UNIT_FACTION(unit) == FACTION_RED ? 120 : 60)
#define UNIT_POW_MAX(aUnit) ((aUnit)->pClassData->maxPow)
#define UNIT_SKL_MAX(aUnit) ((aUnit)->pClassData->maxSkl)
#define UNIT_SPD_MAX(aUnit) ((aUnit)->pClassData->maxSpd)
#define UNIT_DEF_MAX(aUnit) ((aUnit)->pClassData->maxDef)
#define UNIT_RES_MAX(aUnit) ((aUnit)->pClassData->maxRes)
#define UNIT_LCK_MAX(aUnit) (30)
#define UNIT_CON_MAX(aUnit) ((aUnit)->pClassData->maxCon)
#define UNIT_MOV_MAX(aUnit) (15)

#define UNIT_CON_BASE(aUnit) ((aUnit)->pClassData->baseCon + (aUnit)->pCharacterData->baseCon)
#define UNIT_MOV_BASE(aUnit) ((aUnit)->pClassData->baseMov)

#define UNIT_CON(aUnit) (UNIT_CON_BASE(aUnit) + (aUnit)->conBonus)
#define UNIT_MOV(aUnit) ((aUnit)->movBonus + UNIT_MOV_BASE(aUnit))

#define UNIT_IS_GORGON_EGG(aUnit) (((aUnit)->pClassData->number == CLASS_GORGONEGG) || ((aUnit)->pClassData->number == CLASS_GORGONEGG2))
#define UNIT_IS_PHANTOM(aUnit) ((aUnit)->pClassData->number == CLASS_PHANTOM)

#define UNIT_ARENA_LEVEL(aUnit) (((aUnit)->state >> 17) & 0x7)

#define UNIT_SUPPORT_DATA(aUnit) ((aUnit)->pCharacterData->pSupportData)

// NOTE: if this ends up being only used in [Get|Set]UnitLeaderCharId, having this as a macro may end up being unnecessary
#define UNIT_LEADER_CHARACTER(aUnit) ((aUnit)->supports[UNIT_SUPPORT_MAX_COUNT-1])

void InitChapterMap(int chapterId);
void InitChapterPreviewMap(int chapterId);
void sub_8019624(void);
void sub_8019778(void);
void BmMapFill(u8** map, int value);
void BmMapFillEdges(u8** map, u8 value);
void UnpackChapterMap(void* into, int chapterId);
void UnpackChapterMapGraphics(int chapterId);
void UnpackChapterMapPalette(void);
void InitBaseTilesBmMap(void);
void RefreshTerrainBmMap(void);
int GetTrueTerrainAt(int x, int y);
void DisplayBmTile(u16* bg, int xOut, int yOut, int xMap, int yMap);
void nullsub_8(void);
void DisplayMovementViewTile(u16* out, int xMap, int yMap, int xOut, int yOut);
void RenderBmMap(void);
void RenderBmMapOnBg2(void);
void UpdateBmMapDisplay(void);
void RefreshEntityBmMaps(void);
char* GetTerrainName(int terrainId);
int GetTerrainHealAmount(int terrainId);
s8 GetTerrainHealsStatus(int terrainId);
void sub_801A278(void);
void RevertMapChange(int id);
struct Vec2 { short x, y; };
struct Vec2u { u16 x, y; };
extern struct Vec2 gBmMapSize;
extern u8** gBmMapUnit;
extern u8** gBmMapTerrain;
extern u8** gBmMapMovement;
extern u8** gBmMapRange;
extern u8** gBmMapFog;
extern u8** gBmMapHidden;
extern u8** gBmMapOther;

extern u8*   gTilesetTerrainLookup;
extern u16** gBmMapBaseTiles;

enum
{
    // Magic values for gBmMapMovement

    MAP_MOVEMENT_MAX = 120,
    MAP_MOVEMENT_EXTENDED = 124,
};

enum
{
    // For use with gBmMapHidden

    HIDDEN_BIT_UNIT = (1 << 0),
    HIDDEN_BIT_TRAP = (1 << 1),
};


struct UnkMovMapFill
{
    /* 00 */ s8 xPos;
    /* 01 */ s8 yPos;
    /* 02 */ u8 connexion;
    /* 03 */ u8 leastMoveCost;
};

struct MovMapFillState
{
    /* 00 */ struct UnkMovMapFill* pUnk00;
    /* 04 */ struct UnkMovMapFill* pUnk04;
    /* 08 */ s8 hasUnit;
    /* 09 */ u8 movement;
    /* 0A */ u8 unitId;
    /* 0B */ u8 maxMovementValue;
};

void GenerateUnitMovementMap(struct Unit* unit);
void GenerateUnitMovementMapExt(struct Unit* unit, s8 movement);
void GenerateUnitExtendedMovementMap(struct Unit* unit);
void GenerateExtendedMovementMapOnRange(int x, int y, const s8 mct[]);
void GenerateExtendedMovementMap(int x, int y, const s8 mct[]);
void GenerateMovementMapOnWorkingMap(struct Unit* unit, int x, int y, int movement);
void SetWorkingMoveCosts(const s8 mct[]);
void GenerateMovementMap(int x, int y, int movement, int unitId);
void sub_801A570(int connexion, int x, int y);
void GenerateBestMovementScript(int x, int y, u8 output[]);
void UnitApplyWorkingMovementScript(struct Unit* unit, int x, int y);
void MarkMovementMapEdges(void);
void MarkWorkingMapEdges(void);
void MapAddInRange(int x, int y, int range, int value);
void MapSetInRange(int x, int y, int range, int value);
void GenerateUnitCompleteAttackRange(struct Unit* unit);
void GenerateUnitStandingReachRange(struct Unit* unit, int reach);
void GenerateUnitCompleteStaffRange(struct Unit* unit);
void GenerateDangerZoneRange(s8 s8DisplayStaffRange);
void GenerateMagicSealMap(int value);
void SetWorkingBmMap(u8** map);
void MapAddInBoundedRange(short x, short y, short minRange, short maxRange);
s8* GetWorkingMoveCosts(void);

extern u8** gWorkingBmMap;
extern u8 gWorkingTerrainMoveCosts[];

extern struct UnkMovMapFill gUnknown_030049B0[];
extern struct UnkMovMapFill gUnknown_03004C50[];

extern struct MovMapFillState gMovMapFillState;


struct PlaySt_30 {
    s32 total_gold;

    u32 unk_4_00 : 20;
    u32 unk_4_14 : 12;

    u32 unk_8_1: 8;
    u32 unk_8_2: 20; // Used by bmdifficulty (Valni/Lagdou)
    u32 unk_8_3: 4;

    u32 unk_C_00 : 6;
    u32 combatRank : 3;
    u32 expRank : 3;
    u32 unk_3D_04 : 3;
    u32 fundsRank : 3;
    u32 tacticsRank : 3;
    u32 survivalRank : 3;
    u32 unk_F_00 : 8;
};

struct PlaySt_OptionBits {
    // option bits
    u32 unitColor:1; // 1
    u32 disableTerrainDisplay:1; // 1
    u32 unitDisplayType:2; // 2
    u32 autoCursor:1; // 1
    u32 textSpeed:2;
    u32 gameSpeed:1; // 1

    u32 disableBgm:1; // 1
    u32 disableSoundEffects:1; // 1
    u32 windowColor:2;
    u32 unk41_5:1; // 1
    u32 unk41_6:1; // unk
    u32 disableAutoEndTurns:1; // 1
    u32 noSubtitleHelp:1; // 1

    u32 disableGoalDisplay:1; // unk
    u32 animationType:2; // 2
    u32 battleForecastType:2; // 2
    u32 controller:1; // 1
    u32 rankDisplay:1; // unk

    u32 debugControlRed:2; // 2 (!)
    u32 debugControlGreen:2; // 2
    u32 unk43_4:5; // unk

    u8  unk44[0x48 - 0x44];
};

struct PlaySt { // Chapter Data Struct
    /* 00 */ u32 time_saved;
    /* 04 */ u32 time_chapter_started;

    /* 08 */ u32 partyGoldAmount;
    /* 0C */ u8  gameSaveSlot;

    /* 0D */ u8  chapterVisionRange; // 0 means no fog
    /* 0E */ s8  chapterIndex;

    /* 0F */ u8  faction; // 0x00 = Player phase, 0x40 = NPC phase, 0x80 = Enemy phase (0xC0 = link arena 4th team?)

    /* 10 */ u16 chapterTurnNumber;

    /* 12 */ u8  xCursor, yCursor; // map cursor position

    /* 14 */ u8  chapterStateBits; // +0x04 = postgame, +0x10 = in prep screen, +0x40 = difficult mode, +0x80 = link arena?
    /* 15 */ u8  chapterWeatherId;
    /* 16 */ u16 chapterTotalSupportGain;

    /* 18 */ u8 playthroughIdentifier;
    /* 19 */ u8 unk19;
    /* 1A */ u8 lastUnitSortType;

    /* 1B */ u8  chapterModeIndex; // 1 for tutorial (ch0-8), 2 for Eirika route, 3 for Ephraim route

    // character identifiers indexed by weapon type.
    // has to do with allowing unusable weapons to be used
    /* 1C */ u8  unk1C[2];
    /* 1E */ u8 unk1E;
    /* 1F */ u8 unk1F;

    /* 20 */ char playerName[0x2B - 0x20]; // unused outside of link arena (was tactician name in FE7); Size unknown

    /* 2B */ u8 unk_2B_00 : 0x01;
             u8 unk_2B_01 : 0x07;

    u32 unk_2C_1 : 1;
    u32 unk_2C_01 : 3;
    u32 unk_2C_04 : 9;
    u32 unk_2C_0D : 10;
    u32 unk_2C_2 : 5;
    u32 unk_2C_3 : 4;

    struct PlaySt_30 unk_30;

    struct PlaySt_OptionBits config;

    u16 unk48;

    u8 unk4A_1 : 1;
    u8 save_menu_type : 3;
    u8 tutorial_exec_type : 4;
    u8 tutorial_counter;
};

extern struct PlaySt gPlaySt;

#define TILEMAP_INDEX(aX, aY) (0x20 * (aY) + (aX))
#define TILEMAP_LOCATED(aMap, aX, aY) (TILEMAP_INDEX((aX), (aY)) + (aMap))

#define TILEREF(aChar, aPal) ((aChar) + ((aPal) << 12))

#define OAM2_PRIORITY(aValue) (((aValue) & 0x3) << 10)

#define BG_SYNC_BIT(aBg) (1 << (aBg))

enum
{
    BG0_SYNC_BIT = BG_SYNC_BIT(0),
    BG1_SYNC_BIT = BG_SYNC_BIT(1),
    BG2_SYNC_BIT = BG_SYNC_BIT(2),
    BG3_SYNC_BIT = BG_SYNC_BIT(3),
};

#define ApplyPalettes(aSrc, aPalId, aPalCount) CopyToPaletteBuffer((aSrc), 0x20 * (aPalId), 0x20 * (aPalCount))
#define ApplyPalette(aSrc, aPalId) ApplyPalettes((aSrc), (aPalId), 1)

struct Proc;

typedef void* ProcPtr;
typedef void(*ProcFunc)(ProcPtr proc);
struct ProcCmd
{
    short opcode;
    short dataImm;
    const void* dataPtr;
};

#define PROC_HEADER                                                                        \
    const struct ProcCmd* proc_script; /* pointer to proc script */                        \
    const struct ProcCmd* proc_scrCur; /* pointer to currently executing script command */ \
    ProcFunc proc_endCb; /* callback to run upon delegint the process */                   \
    ProcFunc proc_idleCb; /* callback to run once each frame. */                           \
                          /* disables script execution when not null */                    \
    const char* proc_name;                                                                 \
    ProcPtr proc_parent; /* pointer to parent proc. If this proc is a root proc, */        \
                         /* this member is an integer which is the root index. */          \
    ProcPtr proc_child; /* pointer to most recently added child */                         \
    ProcPtr proc_next; /* next sibling */                                                  \
    ProcPtr proc_prev; /* previous sibling */                                              \
    s16 proc_sleepTime;                                                                    \
    u8 proc_mark;                                                                          \
    u8 proc_flags;                                                                         \
    u8 proc_lockCnt; /* wait semaphore. Process execution */                               \
                     /* is blocked when this is nonzero. */                                \


struct ProcFindIterator
{
    /* 00 */ struct Proc* proc;
    /* 04 */ const struct ProcCmd* script;
    /* 08 */ int count;
};

ProcPtr Proc_Start(const struct ProcCmd* script, ProcPtr parent);
ProcPtr Proc_StartBlocking(const struct ProcCmd* script, ProcPtr parent);
void Proc_End(ProcPtr proc);
void Proc_Run(ProcPtr proc);
void Proc_Break(ProcPtr proc);
ProcPtr Proc_Find(const struct ProcCmd* script);
void Proc_Goto(ProcPtr proc, int label);
void Proc_EndEach(const struct ProcCmd *script);
void Proc_BreakEach(const struct ProcCmd* script);

struct Text
{
    u16 unk0;
    u8 x;
    u8 colorId;
    u8 unk4;
    s8 unk5;
    u8 unk6;
    u8 unk7;
};

struct BattleUnit {
    /* 00 */ struct Unit unit;

    /* 48 */ u16 weapon;
    /* 4A */ u16 weaponBefore;
    /* 4C */ u32 weaponAttributes;
    /* 50 */ u8 weaponType;
    /* 51 */ u8 weaponSlotIndex;

    /* 52 */ s8 canCounter;

    /* 53 */ s8 wTriangleHitBonus;
    /* 54 */ s8 wTriangleDmgBonus;

    /* 55 */ u8 terrainId;
    /* 56 */ s8 terrainDefense;
    /* 57 */ s8 terrainAvoid;
    /* 58 */ s8 terrainResistance;
    /* 59 */ /* pad */

    /* 5A */ short battleAttack;
    /* 5C */ short battleDefense;
    /* 5E */ short battleSpeed;
    /* 60 */ short battleHitRate;
    /* 62 */ short battleAvoidRate;
    /* 64 */ short battleEffectiveHitRate;
    /* 66 */ short battleCritRate;
    /* 68 */ short battleDodgeRate;
    /* 6A */ short battleEffectiveCritRate;
    /* 6C */ short battleSilencerRate;

    /* 6E */ s8 expGain;
    /* 6F */ s8 statusOut;
    /* 70 */ u8 levelPrevious;
    /* 71 */ u8 expPrevious;

    /* 72 */ s8 hpInitial;

    /* 73 */ s8 changeHP;
    /* 74 */ s8 changePow;
    /* 75 */ s8 changeSkl;
    /* 76 */ s8 changeSpd;
    /* 77 */ s8 changeDef;
    /* 78 */ s8 changeRes;
    /* 79 */ s8 changeLck;
    /* 7A */ s8 changeCon;

    /* 7B */ s8 wexpMultiplier;
    /* 7C */ s8 nonZeroDamage;
    /* 7D */ s8 weaponBroke;

    /* 7E */ s8 hasItemEffectTarget;
    /* 7F */ /* pad */
};

extern struct BattleUnit gBattleActor;
extern struct BattleUnit gBattleTarget;
void UpdateStatArrowSprites(int a, int b, int c);
u16 Sqrt(u32 num);
int sub_8012DCC(int, int, int, int, int);

struct PrepUnitSwapProc {
    PROC_HEADER;
    /* 2C */ struct Unit *unit0;
    /* 30 */ s16 x0_tile;
    /* 32 */ s16 y0_tile;
    /* 34 */ s16 unk34;
    /* 36 */ s16 unk36;
    /* 38 */ u8 _pad_38[0x3C - 0x38];
    /* 3E */ s16 unk3C;
    /* 3E */ s16 unk3E;
    /* 40 */ u8 _pad_40[0x44 - 0x40];
    /* 44 */ int unk44;
};

extern short gSinLookup[];
#define SIN(aAngle) (gSinLookup[(aAngle&0xFF)])
#define COS(aAngle) (gSinLookup[0x40 + (aAngle&0xFF)])
void WriteOAMRotScaleData(int index, s16 pa, s16 pb, s16 pc, s16 pd);
void PutSpriteExt(int layer, int xOam1, int yOam0, const u16* object, int oam2);
extern const u16 gUnknown_0859AEC8[];

int Div(int, int);

struct BmSt // Game State Struct
{
    /* 00 */ u8  mainLoopEndedFlag;

    /* 01 */ s8  gameLogicSemaphore;
    /* 02 */ s8  gameGfxSemaphore;

    /* 03 */ u8  _unk04;

    /* 04 */ u8  gameStateBits;

    /* 05 */ u8  _unk05;

    /* 06 */ u16 prevVCount;

    /* 08 */ u32 _unk08;

    /* 0C */ struct Vec2 camera;
    /* 10 */ struct Vec2 cameraPrevious;
    /* 14 */ struct Vec2 playerCursor;
    /* 18 */ struct Vec2 unk18;
    /* 1C */ struct Vec2 unk1C;
    /* 20 */ struct Vec2 playerCursorDisplay;
    /* 24 */ struct Vec2u mapRenderOrigin;
    /* 28 */ struct Vec2 unk28;

    /* 2C */ u16 itemUnk2C;
    /* 2E */ u16 itemUnk2E;

    /* 30 */ u8 _pad30[0x38 - 0x30];

    /* 38 */ u8 altBlendACa;
    /* 39 */ u8 altBlendACb;
    /* 3A */ u8 altBlendBCa;
    /* 3B */ u8 altBlendBCb;
    /* 3C */ u8 unk3C;
    /* 3D */ u8 unk3D;
    /* 3E */ u8 unk3E;
    /* 3F */ s8 unk3F;
};

extern struct BmSt gBmSt;
void PutSprite(int layer, int x, int y, const u16* object, int oam2);
extern u16 gObject_16x16[];
void sub_8027B60(int, int, int, struct Unit*);
void Proc_Break(ProcPtr proc);

struct PhaseIntroSquaresProc {
    PROC_HEADER;
    /* 29 */ u8 _pad_29[0x4C - 0x29];
    /* 4C */ s16 unk4C;
    /* 4E */ s16 unk4E;
};

enum
{
    INTERPOLATE_LINEAR,
    INTERPOLATE_SQUARE,
    INTERPOLATE_CUBIC,
    INTERPOLATE_POW4,
    INTERPOLATE_RSQUARE,
    INTERPOLATE_RCUBIC,
};

int Interpolate(int method, int lo, int hi, int x, int end);

struct PhaseIntroBlendBoxProc {
    PROC_HEADER;
    /* 29 */ u8 _pad_29[0x4C - 0x29];
    /* 4C */ s16 unk4C;
    /* 4E */ s16 unk4E;
};
void BG_EnableSyncByMask(int bg);
extern u16 gBG1TilemapBuffer[];

enum
{
    BGCHR_WINDOW_FRAME = 0,

    BGCHR_TEXT_DEFAULT = 0x80,

    BGCHR_0_TEXT_POPUP = 0x100,
    BGCHR_DEBUGTEXT_DEFAULT = 0x2C0,

    BGCHR_LIMITVIEW = 0x280,

    BGCHR_ICON_BEGIN = 0x280,
    BGCHR_ICON_END   = 0x300,

    BGCHR_STATUSHEAL = 0x280,

    BGCHR_TILESET_A = 0x400,
    BGCHR_TILESET_B = 0x600,

    BGCHR_PHASE_CHANGE_SQUARES = 0x100,
    BGCHR_PHASE_CHANGE_NAME = 0x140,

    BGCHR_CHAPTERINTRO_80 = 0x80,
    BGCHR_CHAPTERINTRO_100 = 0x100,
    BGCHR_CHAPTERINTRO_MOTIF = 0x400,
    BGCHR_CHAPTERINTRO_FOG = 0x500,

    BGCHR_GAMEOVER_TEXT = 0x80,
    BGCHR_GAMEOVER_100 = 0x100,
    BGCHR_BMFX_IMG = 0x100,
    BGCHR_STEALSELECT_FACE = 0x200,

    BGCHR_BATTLEPREVIEW_FRAME = 0x200,

    BGCHR_MANIM_1 = 1,
    BGCHR_MANIM_140 = 0x140,
    BGCHR_MANIM_200 = 0x200,
};

enum
{
    BGPAL_TEXT_DEFAULT    = 0,
    BGPAL_WINDOW_FRAME    = 1,
    BGPAL_TALK            = 2,
    BGPAL_TALK_BUBBLE     = 3,
    BGPAL_ICONS           = 4, // .. 5
    BGPAL_TILESET         = 6, // .. 15

    BGPAL_DEBUGTEXT       = 0,

    BGPAL_EQUIP_INFO_ICON = 3,

    BGPAL_STATUSHEAL = 3,

    BGPAL_BATTLEPREVIEW_ICONALT = 3,

    BGPAL_LIMITVIEW = 4, // .. 5

    BGPAL_PHASE_CHANGE = 5,

    BGPAL_CHAPTERINTRO_0 = 0,
    BGPAL_CHAPTERINTRO_1 = 1,
    BGPAL_CHAPTERINTRO_FOG = 4,
    BGPAL_CHAPTERINTRO_MOTIF = 5,

    BGPAL_GAMEOVER_TEXT = 0,
    BGPAL_GAMEOVER_4 = 4,
    BGPAL_EVENTWARP_IMG = 5,
    BGPAL_WHILTECIRCLE_FADE = 2,
    

    BGPAL_STEALSELECT_FACE = 5,

    BGPAL_BATTLEPREVIEW_FRAME = 1, // .. 2

    BGPAL_UI_STATBAR = 6,

    BGPAL_MANIM_1 = 1, // .. 2
    BGPAL_MANIM_4 = 4,
    BGPAL_MANIM_5 = 5,
};
#define TILE_HFLIP 0x0400

void Decompress(const void* src, void* dst);

#define VRAM      0x6000000
#define VRAM_SIZE 0x18000

#define BG_VRAM           VRAM
#define BG_VRAM_SIZE      0x10000

// TODO: move elsewhere
#define CHR_SIZE 0x20
#define CHR_LINE 0x20

#define BG_CHR_ADDR(n)   (void *)(BG_VRAM + (CHR_SIZE * (n)))

void BG_SetPosition(u16 a, u16 b, u16 c);
void CopyToPaletteBuffer(const void* src, int b, int size);
void Proc_Goto(ProcPtr proc, int label);

ProcPtr APProc_Create(const void* apDefinition, int xPos, int yPos, int tileBase, int anim, u16 aObjNode);
enum
{
    FACING_LEFT  = 0,
    FACING_RIGHT = 1,
    FACING_DOWN  = 2,
    FACING_UP    = 3,
};

// keys
#define A_BUTTON        0x0001
#define B_BUTTON        0x0002
#define SELECT_BUTTON   0x0004
#define START_BUTTON    0x0008
#define DPAD_RIGHT      0x0010
#define DPAD_LEFT       0x0020
#define DPAD_UP         0x0040
#define DPAD_DOWN       0x0080
#define R_BUTTON        0x0100
#define L_BUTTON        0x0200
#define KEYS_MASK       0x03FF
#define KEY_INTR_ENABLE 0x0400
#define KEY_OR_INTR     0x0000
#define KEY_AND_INTR    0x8000
#define DPAD_ANY        0x00F0
#define JOY_EXCL_DPAD   0x030F

struct KeyStatusBuffer
{
    /* 00 */ u8 repeatDelay;     // initial delay before generating auto-repeat presses
    /* 01 */ u8 repeatInterval;  // time between auto-repeat presses
    /* 02 */ u8 repeatTimer;     // (decreased by one each frame, reset to repeatDelay when Presses change and repeatInterval when reaches 0)
    /* 04 */ u16 heldKeys;       // keys that are currently held down
    /* 06 */ u16 repeatedKeys;   // auto-repeated keys
    /* 08 */ u16 newKeys;        // keys that went down this frame
    /* 0A */ u16 prevKeys;       // keys that were held down last frame
    /* 0C */ u16 LastPressState;
    /* 0E */ s816 ABLRPressed; // 1 for Release (A B L R Only), 0 Otherwise
    /* 10 */ u16 newKeys2;
    /* 12 */ u16 TimeSinceStartSelect; // Time since last Non-Start Non-Select Button was pressed
};

extern struct KeyStatusBuffer *gKeyStatusPtr;
int GetStringTextWidth(const char *str);
void DrawUiFrame2(int x, int y, int width, int height, int style);
void ResetIconGraphics_();
void ResetIconGraphics();
void LoadIconPalettes(u32 Dest);
void LoadIconPalette(u32 Index, u32 Dest);
int sub_80035EC();
u16 GetIconGfxTileIndex(u32 Index);
int GetIconGfxIndex(int Index);
u16 GetIconTileIndex(int Index); // NONMATCHING
void DrawIcon(u16* BgOut, int IconIndex, int OamPalBase);
void ClearIconGfx(u32 Index);
void LoadIconObjectGraphics(int Index, int b);
void DrawTextInline(struct Text* text, u16* dest, int colorId, int x, int tileWidth, const char* string);
extern struct ProcCmd const ProcScr_NotifyBox[];


extern struct ProcCmd ProcScr_Popup2[];
const char *GetStringFromIndex(int);
int GetItemIconId(int item);
void BMapDispSuspend(void);



// ASCII encoding of 'Smsh' in reverse
// This is presumably short for SMASH, the developer of MKS4AGB.
#define ID_NUMBER 0x68736D53

#define C_V 0x40 // center value for PAN, BEND, and TUNE

#define SOUND_MODE_REVERB_VAL   0x0000007F
#define SOUND_MODE_REVERB_SET   0x00000080
#define SOUND_MODE_MAXCHN       0x00000F00
#define SOUND_MODE_MAXCHN_SHIFT 8
#define SOUND_MODE_MASVOL       0x0000F000
#define SOUND_MODE_MASVOL_SHIFT 12
#define SOUND_MODE_FREQ_05734   0x00010000
#define SOUND_MODE_FREQ_07884   0x00020000
#define SOUND_MODE_FREQ_10512   0x00030000
#define SOUND_MODE_FREQ_13379   0x00040000
#define SOUND_MODE_FREQ_15768   0x00050000
#define SOUND_MODE_FREQ_18157   0x00060000
#define SOUND_MODE_FREQ_21024   0x00070000
#define SOUND_MODE_FREQ_26758   0x00080000
#define SOUND_MODE_FREQ_31536   0x00090000
#define SOUND_MODE_FREQ_36314   0x000A0000
#define SOUND_MODE_FREQ_40137   0x000B0000
#define SOUND_MODE_FREQ_42048   0x000C0000
#define SOUND_MODE_FREQ         0x000F0000
#define SOUND_MODE_FREQ_SHIFT   16
#define SOUND_MODE_DA_BIT_9     0x00800000
#define SOUND_MODE_DA_BIT_8     0x00900000
#define SOUND_MODE_DA_BIT_7     0x00A00000
#define SOUND_MODE_DA_BIT_6     0x00B00000
#define SOUND_MODE_DA_BIT       0x00B00000
#define SOUND_MODE_DA_BIT_SHIFT 20

struct WaveData
{
    u16 type;
    u16 status;
    u32 freq;
    u32 loopStart;
    u32 size; // number of samples
    s8 data[1]; // samples
};

#define TONEDATA_TYPE_CGB    0x07
#define TONEDATA_TYPE_FIX    0x08
#define TONEDATA_TYPE_SPL    0x40 // key split
#define TONEDATA_TYPE_RHY    0x80 // rhythm

#define TONEDATA_P_S_PAN    0xc0
#define TONEDATA_P_S_PAM    TONEDATA_P_S_PAN

struct ToneData
{
    u8 type;
    u8 key;
    u8 length; // sound length (compatible sound)
    u8 pan_sweep; // pan or sweep (compatible sound ch. 1)
    struct WaveData *wav;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
};

struct CgbChannel
{
    u8 sf; // 0x0
    u8 ty; // 0x1
    u8 rightVolume; // 0x2
    u8 leftVolume; // 0x3
    u8 at; // 0x4
    u8 de; // 0x5
    u8 su; // 0x6
    u8 re; // 0x7
    u8 ky; // 0x8
    u8 ev; // 0x9
    u8 eg; // 0xA
    u8 ec; // 0xB
    u8 echoVolume; // 0xC
    u8 echoLength; // 0xD
    u8 d1; // 0xE
    u8 d2; // 0xF
    u8 gt; // 0x10
    u8 mk; // 0x11
    u8 ve; // 0x12
    u8 pr; // 0x13
    u8 rp; // 0x14
    u8 d3[3]; // 0x15, 0x16, 0x17
    u8 d5; // 0x18
    u8 sg; // 0x19
    u8 n4; // 0x1A
    u8 pan; // 0x1B
    u8 panMask; // 0x1C
    u8 mo; // 0x1D
    u8 le; // 0x1E
    u8 sw; // 0x1F
    u32 fr; // 0x20
    u32 *wp;
    u32 cp;
    u32 tp;
    u32 pp;
    u32 np;
    u8 d4[8];
};

struct MusicPlayerTrack;

struct SoundChannel
{
    u8 status;
    u8 type;
    u8 rightVolume;
    u8 leftVolume;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
    u8 ky;
    u8 ev;
    u8 er;
    u8 el;
    u8 echoVolume;
    u8 echoLength;
    u8 d1;
    u8 d2;
    u8 gt;
    u8 mk;
    u8 ve;
    u8 pr;
    u8 rp;
    u8 d3[3];
    u32 ct;
    u32 fw;
    u32 freq;
    struct WaveData *wav;
    u32 cp;
    struct MusicPlayerTrack *track;
    u32 pp;
    u32 np;
    u32 d4;
    u16 xpi;
    u16 xpc;
};

#define MAX_DIRECTSOUND_CHANNELS 12

#define PCM_DMA_BUF_SIZE 1584 // size of Direct Sound buffer

struct SoundInfo
{
    // This field is normally equal to ID_NUMBER but it is set to other
    // values during sensitive operations for locking purposes.
    // This field should be volatile but isn't. This could potentially cause
    // race conditions.
    u32 ident;

    vu8 pcmDmaCounter;

    // Direct Sound
    u8 reverb;
    u8 maxChans;
    u8 masterVolume;
    u8 freq;

    u8 mode;
    u8 c15;
    u8 pcmDmaPeriod; // number of V-blanks per PCM DMA
    u8 maxLines;
    u8 gap[3];
    s32 pcmSamplesPerVBlank;
    s32 pcmFreq;
    s32 divFreq;
    struct CgbChannel *cgbChans;
    u32 func;
    u32 intp;
    void (*CgbSound)(void);
    void (*CgbOscOff)(u8);
    u32 (*MidiKeyToCgbFreq)(u8, u8, u8);
    u32 MPlayJumpTable;
    u32 plynote;
    u32 ExtVolPit;
    u8 gap2[16];
    struct SoundChannel chans[MAX_DIRECTSOUND_CHANNELS];
    s8 pcmBuffer[PCM_DMA_BUF_SIZE * 2];
};

struct SongHeader
{
    u8 trackCount;
    u8 blockCount;
    u8 priority;
    u8 reverb;
    struct ToneData *tone;
    u8 *part[1];
};

struct PokemonCrySong
{
    u8 trackCount;
    u8 blockCount;
    u8 priority;
    u8 reverb;
    struct ToneData *tone;
    u8 *part[2];
    u8 gap;
    u8 part0; // 0x11
    u8 tuneValue; // 0x12
    u8 gotoCmd; // 0x13
    u32 gotoTarget; // 0x14
    u8 part1; // 0x18
    u8 tuneValue2; // 0x19
    u8 cont[2]; // 0x1A
    u8 volCmd; // 0x1C
    u8 volumeValue; // 0x1D
    u8 unkCmd0D[2]; // 0x1E
    u32 unkCmd0DParam; // 0x20
    u8 xreleCmd[2]; // 0x24
    u8 releaseValue; // 0x26
    u8 panCmd;
    u8 panValue; // 0x28
    u8 tieCmd; // 0x29
    u8 tieKeyValue; // 0x2A
    u8 tieVelocityValue; // 0x2B
    u8 unkCmd0C[2]; // 0x2C
    u16 unkCmd0CParam; // 0x2E
    u8 end[2]; // 0x30
};

#define MPT_FLG_VOLSET 0x01
#define MPT_FLG_VOLCHG 0x03
#define MPT_FLG_PITSET 0x04
#define MPT_FLG_PITCHG 0x0C
#define MPT_FLG_START  0x40
#define MPT_FLG_EXIST  0x80

struct MusicPlayerTrack
{
    u8 flags;
    u8 wait;
    u8 patternLevel;
    u8 repN;
    u8 gateTime;
    u8 key;
    u8 velocity;
    u8 runningStatus;
    u8 keyM;
    u8 pitM;
    s8 keyShift;
    s8 keyShiftX;
    s8 tune;
    u8 pitX;
    s8 bend;
    u8 bendRange;
    u8 volMR;
    u8 volML;
    u8 vol;
    u8 volX;
    s8 pan;
    s8 panX;
    s8 modM;
    u8 mod;
    u8 modT;
    u8 lfoSpeed;
    u8 lfoSpeedC;
    u8 lfoDelay;
    u8 lfoDelayC;
    u8 priority;
    u8 echoVolume;
    u8 echoLength;
    struct SoundChannel *chan;
    struct ToneData tone;
    u8 gap[10];
    u16 unk_3A;
    u32 unk_3C;
    u8 *cmdPtr;
    u8 *patternStack[3];
};

#define MUSICPLAYER_STATUS_TRACK 0x0000ffff
#define MUSICPLAYER_STATUS_PAUSE 0x80000000

#define MAX_MUSICPLAYER_TRACKS 16

#define TEMPORARY_FADE  0x0001
#define FADE_IN         0x0002
#define FADE_VOL_MAX    64
#define FADE_VOL_SHIFT  2

struct MusicPlayerInfo
{
    struct SongHeader *songHeader;
    u32 status;
    u8 trackCount;
    u8 priority;
    u8 cmd;
    u8 unk_B;
    u32 clock;
    u8 gap[8];
    u8 *memAccArea;
    u16 tempoD;
    u16 tempoU;
    u16 tempoI;
    u16 tempoC;
    u16 fadeOI;
    u16 fadeOC;
    u16 fadeOV;
    struct MusicPlayerTrack *tracks;
    struct ToneData *tone;
    u32 ident;
    u32 func;
    u32 intp;
};

struct MusicPlayer
{
    struct MusicPlayerInfo *info;
    struct MusicPlayerTrack *track;
    u8 unk_8;
    u16 unk_A;
};

struct Song
{
    struct SongHeader *header;
    u16 ms;
    u16 me;
};

extern const struct MusicPlayer gMPlayTable[];
extern const struct Song gSongTable[];



extern u8 gMPlayMemAccArea[];

//u8 gPokemonCrySong[52];
//u8 gPokemonCrySongs[52 * MAX_POKEMON_CRIES];

#define MAX_POKEMON_CRIES 2

extern struct PokemonCrySong gPokemonCrySong;
extern struct PokemonCrySong gPokemonCrySongs[];

extern struct MusicPlayerInfo gPokemonCryMusicPlayers[];
extern struct MusicPlayerTrack gPokemonCryTracks[];

extern char SoundMainRAM[];

extern void *gMPlayJumpTable[];

typedef void (*XcmdFunc)(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
extern const XcmdFunc gXcmdTable[];

extern struct CgbChannel gCgbChans[];

extern const u8 gScaleTable[];
extern const u32 gFreqTable[];
extern const u16 gPcmSamplesPerVBlankTable[];

extern const u8 gCgbScaleTable[];
extern const s16 gCgbFreqTable[];
extern const u8 gNoiseTable[];

extern const struct PokemonCrySong gPokemonCrySongTemplate;

extern const struct ToneData voicegroup_pokemon_cry;

extern char gNumMusicPlayers[];
extern char gMaxLines[];

#define NUM_MUSIC_PLAYERS ((u16)gNumMusicPlayers)
#define MAX_LINES ((u32)gMaxLines)

u32 umul3232H32(u32 multiplier, u32 multiplicand);
void SoundMain(void);
void SoundMainBTM(void);
void TrackStop(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track);
void MPlayMain(void);
void RealClearChain(void *x);

void MPlayContinue(struct MusicPlayerInfo *mplayInfo);
void MPlayStart(struct MusicPlayerInfo *mplayInfo, struct SongHeader *songHeader);
void m4aMPlayStop(struct MusicPlayerInfo *mplayInfo);
void FadeOutBody(struct MusicPlayerInfo *mplayInfo);
void TrkVolPitSet(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track);
void MPlayFadeOut(struct MusicPlayerInfo *mplayInfo, u16 speed);
void ClearChain(void *x);
void Clear64byte(void *addr);
void SoundInit(struct SoundInfo *soundInfo);
void MPlayExtender(struct CgbChannel *cgbChans);
void m4aSoundMode(u32 mode);
void MPlayOpen(struct MusicPlayerInfo *mplayInfo, struct MusicPlayerTrack *track, u8 a3);
void CgbSound(void);
void CgbOscOff(u8);
u32 MidiKeyToCgbFreq(u8, u8, u8);
void DummyFunc(void);
void MPlayJumpTableCopy(void **mplayJumpTable);
void SampleFreqSet(u32 freq);
void m4aSoundVSyncOn(void);
void m4aSoundVSyncOff(void);

void ClearModM(struct MusicPlayerTrack *track);
void m4aMPlayModDepthSet(struct MusicPlayerInfo *mplayInfo, u16 trackBits, u8 modDepth);
void m4aMPlayLFOSpeedSet(struct MusicPlayerInfo *mplayInfo, u16 trackBits, u8 lfoSpeed);

struct MusicPlayerInfo *SetPokemonCryTone(struct ToneData *tone);
void SetPokemonCryVolume(u8 val);
void SetPokemonCryPanpot(s8 val);
void SetPokemonCryPitch(s16 val);
void SetPokemonCryLength(u16 val);
void SetPokemonCryRelease(u8 val);
void SetPokemonCryProgress(u32 val);
int IsPokemonCryPlaying(struct MusicPlayerInfo *mplayInfo);
void SetPokemonCryChorus(s8 val);
void SetPokemonCryStereo(u32 val);
void SetPokemonCryPriority(u8 val);

// sound command handler functions
void ply_fine(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_goto(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_patt(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_pend(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_rept(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_memacc(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_prio(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_tempo(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_keysh(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_voice(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_vol(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_pan(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_bend(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_bendr(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_lfos(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_lfodl(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_mod(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_modt(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_tune(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_port(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xcmd(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_endtie(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_note(struct MusicPlayerInfo *, struct MusicPlayerTrack *);

// extended sound command handler functions
void ply_xxx(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xwave(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xtype(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xatta(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xdeca(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xsust(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xrele(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xiecv(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xiecl(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xleng(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xswee(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xcmd_0C(struct MusicPlayerInfo *, struct MusicPlayerTrack *);
void ply_xcmd_0D(struct MusicPlayerInfo *, struct MusicPlayerTrack *);


void Sound_PlaySong80024D4(int songId, struct MusicPlayerInfo *player);
void Sound_PlaySong80024E4(int songId, int speed, struct MusicPlayerInfo *player);


struct DispCnt
{
    u16 mode:3;
    u16 cgbMode:1;  // reserved, do not use
    u16 bmpFrameNum:1;
    u16 hblankIntervalFree:1;
    u16 obj1dMap:1;
    u16 forcedBlank:1;
    u16 bg0_on:1;
    u16 bg1_on:1;
    u16 bg2_on:1;
    u16 bg3_on:1;
    u16 obj_on:1;
    u16 win0_on:1;
    u16 win1_on:1;
    u16 objWin_on:1;
};

struct DispStat
{
    u16 vblankFlag:1;
    u16 hblankFlag:1;
    u16 vcountFlag:1;
    u16 vblankIrqEnable:1;
    u16 hblankIrqEnable:1;
    u16 vcountIrqEnable:1;
    u16 dummy:2;
    u8 vcountCompare;
};

struct BgCnt
{
    u16 priority:2;
    u16 charBaseBlock:2;
    u16 dummy:2;
    u16 mosaic:1;
    u16 colorMode:1;
    u16 screenBaseBlock:5;
    u16 areaOverflowMode:1;
    u16 screenSize:2;
};

struct WinCnt
{
    u8 win0_enableBg0 : 1;
    u8 win0_enableBg1 : 1;
    u8 win0_enableBg2 : 1;
    u8 win0_enableBg3 : 1;
    u8 win0_enableObj : 1;
    u8 win0_enableBlend : 1;
    u8 : 2;

    u8 win1_enableBg0 : 1;
    u8 win1_enableBg1 : 1;
    u8 win1_enableBg2 : 1;
    u8 win1_enableBg3 : 1;
    u8 win1_enableObj : 1;
    u8 win1_enableBlend : 1;
    u8 : 2;

    u8 wout_enableBg0 : 1;
    u8 wout_enableBg1 : 1;
    u8 wout_enableBg2 : 1;
    u8 wout_enableBg3 : 1;
    u8 wout_enableObj : 1;
    u8 wout_enableBlend : 1;
    u8 : 2;

    u8 wobj_enableBg0 : 1;
    u8 wobj_enableBg1 : 1;
    u8 wobj_enableBg2 : 1;
    u8 wobj_enableBg3 : 1;
    u8 wobj_enableObj : 1;
    u8 wobj_enableBlend : 1;
    u8 : 2;
};

struct BlendCnt
{
    u16 target1_bg0_on:1;
    u16 target1_bg1_on:1;
    u16 target1_bg2_on:1;
    u16 target1_bg3_on:1;
    u16 target1_obj_on:1;
    u16 target1_bd_on:1;
    u16 effect:2;
    u16 target2_bg0_on:1;
    u16 target2_bg1_on:1;
    u16 target2_bg2_on:1;
    u16 target2_bg3_on:1;
    u16 target2_obj_on:1;
    u16 target2_bd_on:1;
};

struct PlttData
{
    u16 r:5; // red
    u16 g:5; // green
    u16 b:5; // blue
    u16 unused_15:1;
} /*__attribute__((packed))*/;

struct OamData
{
    /*0x00*/ u32 y:8;
    /*0x01*/ u32 affineMode:2;  // 0x1, 0x2 = 0x3
             u32 objMode:2;     // 0x4, 0x8 = 0xC
             u32 mosaic:1;      // 0x10
             u32 bpp:1;         // 0x20
             u32 shape:2;       // 0x40, 0x80

    /*0x02*/ u32 x:9;
             u32 matrixNum:5; // bits 3/4 are h-flip/v-flip if not in affine mode
             u32 size:2;

    /*0x04*/ u16 tileNum:10;
             u16 priority:2;
             u16 paletteNum:4;
    /*0x06*/ u16 affineParam;
};

#define ST_OAM_OBJ_NORMAL 0
#define ST_OAM_OBJ_BLEND  1
#define ST_OAM_OBJ_WINDOW 2

#define ST_OAM_AFFINE_OFF    0
#define ST_OAM_AFFINE_NORMAL 1
#define ST_OAM_AFFINE_ERASE  2
#define ST_OAM_AFFINE_DOUBLE 3

#define ST_OAM_AFFINE_ON_MASK     1
#define ST_OAM_AFFINE_DOUBLE_MASK 2

#define ST_OAM_4BPP 0
#define ST_OAM_8BPP 1

#define ST_OAM_SQUARE      0
#define ST_OAM_H_RECTANGLE 1
#define ST_OAM_V_RECTANGLE 2

struct BgAffineSrcData
{
    s32 texX;
    s32 texY;
    s16 scrX;
    s16 scrY;
    s16 sx;
    s16 sy;
    u16 alpha;
};

struct BgAffineDstData
{
    s16 pa;
    s16 pb;
    s16 pc;
    s16 pd;
    s32 dx;
    s32 dy;
};

struct ObjAffineSrcData
{
    s16 xScale;
    s16 yScale;
    u16 rotation;
};

// Multi-player SIO Control Structure
struct SioMultiCnt
{
    u16 baudRate:2;    // baud rate
    u16 si:1;          // SI terminal
    u16 sd:1;          // SD terminal
    u16 id:2;          // ID
    u16 error:1;       // error flag
    u16 enable:1;      // SIO enable
    u16 unused_11_8:4;
    u16 mode:2;        // communication mode (should equal 2)
    u16 intrEnable:1;  // IRQ enable
    u16 unused_15:1;
    u16 data;          // data
};

#define ST_SIO_MULTI_MODE 2 // Multi-player communication mode

// baud rate
#define ST_SIO_9600_BPS   0 //   9600 bps
#define ST_SIO_38400_BPS  1 //  38400 bps
#define ST_SIO_57600_BPS  2 //  57600 bps
#define ST_SIO_115200_BPS 3 // 115200 bps

struct WaitCnt
{
    u16 sramWait:2;
    u16 rom0_1stAcc:2;
    u16 rom0_2ndAcc:1;
    u16 rom1_1stAcc:2;
    u16 rom1_2ndAcc:1;
    u16 rom2_1stAcc:2;
    u16 rom2_2ndAcc:1;
    u16 phiTerminalClock:2;
    u16 dummy:1;
    u16 prefetchBufEnable:1;
    u16 gamePakType:1;
};

struct BgCoords
{
    u16 x;
    u16 y;
};

struct Struct03003080
{
    /*0x00*/ struct DispCnt dispcnt;
    /*0x04*/ struct DispStat dispstat;
    /*0x08*/ u8 filler8[4];
    /*0x0C*/ struct BgCnt bg0cnt;
    /*0x10*/ struct BgCnt bg1cnt;
    /*0x14*/ struct BgCnt bg2cnt;
    /*0x18*/ struct BgCnt bg3cnt;
    /*0x1C*/ struct BgCoords bgoffset[4];
    /*0x2C*/ u8 win0_right, win0_left;
    /*0x2C*/ u8 win1_right, win1_left;
    /*0x30*/ u8 win0_bottom, win0_top;
    /*0x30*/ u8 win1_bottom, win1_top;
    /*0x34*/ struct WinCnt wincnt;
    /*0x38*/ u16 mosaic;
             u8 filler3A[2];
    /*0x3C*/ struct BlendCnt bldcnt;
    /*0x40*/ u8 filler40[4];
    /*0x44*/ u8 blendCoeffA;
    /*0x45*/ u8 blendCoeffB;
    /*0x46*/ u8 blendY;
    /*0x48*/ u16 bg2pa;
    /*0x4A*/ u16 bg2pb;
    /*0x4C*/ u16 bg2pc;
    /*0x4E*/ u16 bg2pd;
    /*0x50*/ u32 bg2x;
    /*0x54*/ u32 bg2y;
    /*0x58*/ u16 bg3pa;
    /*0x5A*/ u16 bg3pb;
    /*0x5C*/ u16 bg3pc;
    /*0x5E*/ u16 bg3pd;
    /*0x60*/ u32 bg3x;
    /*0x64*/ u32 bg3y;
    /*0x68*/ s8 colorAddition;
};

extern struct Struct03003080 gLCDControlBuffer;
void SetBackgroundTileDataOffset(int bg, int offset);
void SetBackgroundMapDataOffset(int bg, int offset);
void SetBackgroundScreenSize(int bg, int size);
void CopyDataWithPossibleUncomp(const void* src, void* dst);
int FilterR0ForRawCopy(const void* data);
extern u16 Img_ChapterIntroFog[];
extern u16 Img_GameOverText[];
extern u16 Pal_GameOverText2[];
extern u16 Pal_GameOverText1[];
extern u16 Tsa_GameOverFx[];
void DisplayUiHand(int x, int y);
void DisplayUiHand_unused(int x, int y);
void DisplayFrozenUiHand(int x, int y);
int GetUiHandPrevDisplayX(void);
int GetUiHandPrevDisplayY(void);
void ClearBg0Bg1(void);
void DrawUiItemHover(int x, int y, int width);
void ClearUiItemHover(int x, int y, int width);
void DrawUiItemHoverExt(int bg, int base, int x, int y, int width);
void ClearUiItemHoverExt(int bg, int base, int x, int y, int width);
void UnpackUnkUiFrame(void* vram, int palId, int palCount);
void DisplayUiHandExt(int x, int y, unsigned objTileOffset);
void DisplayFrozenUiHandExt(int x, int y, unsigned objTileOffset);
void LoadLegacyUiFrameGraphics(void);
void LoadUiFrameGraphics(void);
void LoadUiFrameGraphicsTo(unsigned vramOffset, int palId);
void ClearOAMBuffer();
void TileMap_FillRect(u16 *dest, int width, int height, int fillValue);
void sub_80D74B0();
void TileMap_CopyRect(u16* src, u16* dst, int width, int height);
void CallARM_FillTileRect(u16* tilemap, const void* tsa, int tileref);
extern u16 gBG0TilemapBuffer[];
void PutScreenFogEffect(void);
void PutScreenFogEffectOverlayed(void);
void SetPrimaryHBlankHandler(void (*hblankHandler)(void));
void SetSecondaryHBlankHandler(void(*)(void));
void GameOverScreenHBlank(void);
void SetBlendAlpha(u16 effect, u8 coeffA, u8 coeffB, u8 blendY);
void SetBlendTargetA(int, int, int, int, int); // SetColorEffectFirstTarget
void SetBlendTargetB(int, int, int, int, int);
void sub_8001710(void);
void sub_800172C(u16 *src, int b, int c, int d);
void sub_80017B4(int a, int b, int c, int d);
extern u16 gPaletteBuffer[];
void EnablePaletteSync(void);
void DisablePaletteSync(void);
extern u16 Img_LightRune[];
extern u16 Pal_LightRune[];
extern u16 Tsa_LightRune[];
extern u16 gBmFrameTmap0[];
void BG_Fill(void *dest, int b);
#define PlaySoundEffect(id) \
    if (!gPlaySt.config.disableSoundEffects) \
        m4aSongNumStart((id))
void m4aSongNumStart(u16 n);
void SetSpecialColorEffectsParameters(u16 effect, u8 coeffA, u8 coeffB, u8 blendY);

enum {
    BGPAL_LIGHTRUNE_IMG = 2,
    BGCHR_LIGHTRUNE_IMG = 0x100,
};

struct ProcMapEffectAnimFx {
    PROC_HEADER;

    /* 29 */ u8 _pad_29[0x4C - 0x29];
    /* 4C */ s16 counter;
};
void SMS_UpdateFromGameData();
extern const u8 gUnknown_080D7B64[];

enum popup_opcode_index {
    POPUP_OP_END,              /* 00 */
    POPUP_OP_SPACE,            /* 01 */
    POPUP_OP_ITEM_NAME,        /* 02 */
    POPUP_OP_ITEM_STR_CAP,     /* 03 */
    POPUP_OP_ITEM_STR,         /* 04 */
    POPUP_OP_UNIT_NAME,        /* 05 */
    POPUP_OP_MSG,              /* 06 */
    POPUP_OP_STR,              /* 07 */
    POPUP_OP_COLOR,            /* 08 */
    POPUP_OP_ITEM_ICON,        /* 09 */
    POPUP_OP_WTYPE_ICON,       /* 0A */
    POPUP_OP_NUM,              /* 0B */
    POPUP_OP_SOUND,            /* 0C */
};

struct PopupInstruction {
    u8 opcode;
    u32 data;
};

#define POPUP_END               {POPUP_OP_END, 0}
#define POPUP_SPACE(len)        {POPUP_OP_SPACE, len}
#define POPUP_ITEM_NAME         {POPUP_OP_ITEM_NAME, 0}
#define POPUP_ITEM_STR_CAP      {POPUP_OP_ITEM_STR_CAP, 0}
#define POPUP_ITEM_STR          {POPUP_OP_ITEM_STR, 0}
#define POPUP_UNIT_NAME         {POPUP_OP_UNIT_NAME, 0}
#define POPUP_MSG(msg)          {POPUP_OP_MSG, msg}
#define POPUP_STR(ptr)          {POPUP_OP_STR, (ptr)}
#define POPUP_COLOR(color)      {POPUP_OP_COLOR, color}
#define POPUP_ITEM_ICON         {POPUP_OP_ITEM_ICON, 0}
#define POPUP_WTYPE_ICON        {POPUP_OP_WTYPE_ICON, 0}
#define POPUP_NUM               {POPUP_OP_NUM, 0}
#define POPUP_SOUND(soundId)    {POPUP_OP_SOUND, soundId}

struct PopupProc {
	PROC_HEADER;

	/* 2C */ const struct PopupInstruction *pDefinition;
	/* 30 */ int clock;

	/* 34 */ s8 xTileParam;
	/* 35 */ s8 yTileParam;

	/* 36 */ u8 winStyle;

	/* 37 */ u8 xTileReal;
	/* 38 */ u8 yTileReal;

	/* 39 */ u8 xTileSize;
	/* 3A */ u8 yTileSize;

	/* 3B */ u8 textColorId;

	/* 3C */ u16 _pad3C;

	/* 3E */ u16 iconId;
	/* 40 */ u16 iconObjTileId;
	/* 42 */ u8  iconPalId;
	/* 43 */ u8  _pad43;
	/* 44 */ u8  iconX;
	/* 45 */ u8  _pad45;

	/* 46 */ u16 xGfxSize;

	/* 48 */ u16 soundId;
};

struct PopupIconUpdateProc {
    PROC_HEADER;
    /* 2C */ int unk_2C;
    /* 30 */ int unk_30;
    /* 34 */ u8 _pad_34[0x4A - 0x34];
    /* 4A */ u16 unk_4A;
};

struct GotItemPopupProc {
    PROC_HEADER;
    /* 29 */ u8 _pad_29[0x54 - 0x29];
    /* 54 */ struct Unit* unit;
    /* 58 */ int item;
};

void SetPopupUnit(struct Unit* unit);
void SetPopupItem(u16 item);
void SetPopupNumber(u32 num);

ProcPtr NewPopupCore(const struct PopupInstruction *inst,
                 int clock,
                 int winStyle,
                 int iconObjTileId,
                 int pal_base, /* proc->iconPalId - 0x10 */
                 ProcPtr parent);
ProcPtr NewPopup_Simple(const struct PopupInstruction *inst,
                       int clock,
                       int winStyle,
                       ProcPtr parent);
void NewPopup_VerySimple(u32 msg, u32 sound_index, ProcPtr parent);

void NewPopup_ItemGot_unused(struct Unit* unit, u16 item, ProcPtr parent);
void NewPopup_ItemGot(ProcPtr parent, struct Unit *unit, u16 item);
void NewPopup_GeneralItemGot(struct Unit *unit, u16 item, ProcPtr parent);
void NewPopup_GoldGot(ProcPtr parent, struct Unit *unit, int value);
void NewPopup_ItemStealing(u16 item, ProcPtr parent);
void NewPopup_WeaponBroke(u16 item, ProcPtr parent);

void NewPopup2_PlanA(ProcPtr parent, int IconIndex, char *str);
void NewPopup2_PlanB(ProcPtr proc, int icon_index, char *str0, int num, char *str1);
void NewPopup2_PlanC(ProcPtr parent, int item, int msg);
void NewPopup2_PlanD(ProcPtr parent, int item, int msg0, int msg1);
void NewPopup2_DropItem(ProcPtr parent, int item);
void NewPopup2_SendItem(ProcPtr parent, int item);
int ParsePopupInstAndGetLen(struct PopupProc *proc);
void GeneratePopupText(const struct PopupInstruction *inst, struct Text th);
extern struct ProcCmd sProcScr_PopupUpdateIcon[];
void Font_InitForUIDefault();

struct VectorBmfx {
    u8 x;
    u8 y;
    u16 _0;
};

struct ProcBmFx {
    PROC_HEADER;

    /* 29 */ u8 _pad_29[0x4C - 0x29];

    /* 4C */ s16 counter;

    /* 4E */ u8 _pad_4E[0x64 - 0x4E];

    /* 64 */ s16 xPos;
    /* 66 */ s16 yPos;
};
extern struct ProcCmd ProcScr_EventWrapAnim[];
extern const struct VectorBmfx Vectors_DanceringFx[14];

struct BattleStats {
    /* 00 */ u16 config;

    /* 02 */ u8 range;

    /* 04 */ short damage;
    /* 06 */ short attack;
    /* 08 */ short defense;
    /* 0A */ short hitRate;
    /* 0C */ short critRate;
    /* 0E */ short silencerRate;

    /* 10 */ struct Unit* taUnitA;
    /* 14 */ struct Unit* taUnitB;
};

enum {
    // For use with BattleStats:config

    BATTLE_CONFIG_REAL = (1 << 0),
    BATTLE_CONFIG_SIMULATE = (1 << 1),
    BATTLE_CONFIG_BIT2 = (1 << 2),
    BATTLE_CONFIG_BALLISTA = (1 << 3),
    BATTLE_CONFIG_BIT4 = (1 << 4),
    BATTLE_CONFIG_ARENA = (1 << 5),
    BATTLE_CONFIG_REFRESH = (1 << 6),
    BATTLE_CONFIG_MAPANIMS = (1 << 7),
    BATTLE_CONFIG_PROMOTION = (1 << 8),
    BATTLE_CONFIG_DANCERING = (1 << 9),
};
extern struct BattleStats gBattleStats;


struct BattleHit {
    /* 00:18 */ unsigned attributes : 19;
    /* 19:23 */ unsigned info       : 5;
    /* 24:31 */ signed   hpChange   : 8;
};

enum {
    BATTLE_HIT_ATTR_CRIT      = (1 << 0),
    BATTLE_HIT_ATTR_MISS      = (1 << 1),
    BATTLE_HIT_ATTR_FOLLOWUP  = (1 << 2),
    BATTLE_HIT_ATTR_RETALIATE = (1 << 3),
    BATTLE_HIT_ATTR_BRAVE     = (1 << 4),
    BATTLE_HIT_ATTR_5         = (1 << 5), // unused?
    BATTLE_HIT_ATTR_POISON    = (1 << 6),
    BATTLE_HIT_ATTR_DEVIL     = (1 << 7),
    BATTLE_HIT_ATTR_HPSTEAL   = (1 << 8),
    BATTLE_HIT_ATTR_HPHALVE   = (1 << 9),
    BATTLE_HIT_ATTR_TATTACK   = (1 << 10), // triangle attack!
    BATTLE_HIT_ATTR_SILENCER  = (1 << 11),
    BATTLE_HIT_ATTR_12        = (1 << 12), // unused?
    BATTLE_HIT_ATTR_PETRIFY   = (1 << 13),
    BATTLE_HIT_ATTR_SURESHOT  = (1 << 14),
    BATTLE_HIT_ATTR_GREATSHLD = (1 << 15),
    BATTLE_HIT_ATTR_PIERCE    = (1 << 16),
    BATTLE_HIT_ATTR_17        = (1 << 17), // unused?
    BATTLE_HIT_ATTR_18        = (1 << 18), // unused?
};

enum {
    BATTLE_HIT_INFO_BEGIN        = (1 << 0),
    BATTLE_HIT_INFO_FINISHES     = (1 << 1),
    BATTLE_HIT_INFO_KILLS_TARGET = (1 << 2),
    BATTLE_HIT_INFO_RETALIATION  = (1 << 3),
    BATTLE_HIT_INFO_END          = (1 << 4),
};

enum {
    // Special item slot identifiers understood by SetBattleUnitWeapon and other functions

    BU_ISLOT_AUTO           = -1,
    BU_ISLOT_5              = UNIT_ITEM_COUNT + 0,
    BU_ISLOT_ARENA_PLAYER   = UNIT_ITEM_COUNT + 1,
    BU_ISLOT_ARENA_OPPONENT = UNIT_ITEM_COUNT + 2,
    BU_ISLOT_BALLISTA       = UNIT_ITEM_COUNT + 3,
};
extern struct BattleHit gBattleHitArray[BATTLE_HIT_MAX];
extern struct BattleHit* gBattleHitIterator;

struct ActionData
{
    // unknown stuff (sometimes RNs are pushed here) (maybe an union?)
    /* 00 */ u16 _u00[3];
    /* 06 */ u16 item;

    /* 08 */ u16 unk08;
    /* 0A */ u16 unk0A;

    /* 0C */ u8 subjectIndex;
    /* 0D */ u8 targetIndex;

    /* 0E */ u8 xMove;
    /* 0F */ u8 yMove;

    /* 10 */ u8 moveCount;

    /* 11 */ u8 unitActionType;

    // maybe from this onwards it's an union?

    /* 12 */ u8 itemSlotIndex;

    /* 13 */ u8 xOther;
    /* 14 */ u8 yOther;

    /* 15 */ u8 trapType;

    /* 16 */ u8 suspendPointType;

    /* 18 */ struct BattleHit* scriptedBattleHits;

    /* 1C */ u8 _pad_1C[0x38 - 0x1C];
};

extern struct ActionData gActionData;
extern struct ProcCmd ProcScr_DanceringAnim[];

extern u16 Img_EventWarp[];
extern u16 Pal_EventWarp[];
extern u16 Tsa_EventWarp[];

#define SetDispEnable(bg0, bg1, bg2, bg3, obj) \
    gLCDControlBuffer.dispcnt.bg0_on = (bg0); \
    gLCDControlBuffer.dispcnt.bg1_on = (bg1); \
    gLCDControlBuffer.dispcnt.bg2_on = (bg2); \
    gLCDControlBuffer.dispcnt.bg3_on = (bg3); \
    gLCDControlBuffer.dispcnt.obj_on = (obj)

#define SetWinEnable(win0, win1, objwin) \
    gLCDControlBuffer.dispcnt.win0_on = (win0); \
    gLCDControlBuffer.dispcnt.win1_on = (win1); \
    gLCDControlBuffer.dispcnt.objWin_on = (objwin)

#define SetWin0Box(left, top, right, bottom) \
    gLCDControlBuffer.win0_left = (left); \
    gLCDControlBuffer.win0_top = (top); \
    gLCDControlBuffer.win0_right = (right); \
    gLCDControlBuffer.win0_bottom = (bottom)

#define SetWin1Box(left, top, right, bottom) \
    gLCDControlBuffer.win1_left = (left); \
    gLCDControlBuffer.win1_top = (top); \
    gLCDControlBuffer.win1_right = (right); \
    gLCDControlBuffer.win1_bottom = (bottom)

#define SetWin0Layers(bg0, bg1, bg2, bg3, obj) \
    gLCDControlBuffer.wincnt.win0_enableBg0 = (bg0); \
    gLCDControlBuffer.wincnt.win0_enableBg1 = (bg1); \
    gLCDControlBuffer.wincnt.win0_enableBg2 = (bg2); \
    gLCDControlBuffer.wincnt.win0_enableBg3 = (bg3); \
    gLCDControlBuffer.wincnt.win0_enableObj = (obj)

#define SetWin1Layers(bg0, bg1, bg2, bg3, obj) \
    gLCDControlBuffer.wincnt.win1_enableBg0 = (bg0); \
    gLCDControlBuffer.wincnt.win1_enableBg1 = (bg1); \
    gLCDControlBuffer.wincnt.win1_enableBg2 = (bg2); \
    gLCDControlBuffer.wincnt.win1_enableBg3 = (bg3); \
    gLCDControlBuffer.wincnt.win1_enableObj = (obj)

#define SetWObjLayers(bg0, bg1, bg2, bg3, obj) \
    gLCDControlBuffer.wincnt.wobj_enableBg0 = (bg0); \
    gLCDControlBuffer.wincnt.wobj_enableBg1 = (bg1); \
    gLCDControlBuffer.wincnt.wobj_enableBg2 = (bg2); \
    gLCDControlBuffer.wincnt.wobj_enableBg3 = (bg3); \
    gLCDControlBuffer.wincnt.wobj_enableObj = (obj)

#define SetWOutLayers(bg0, bg1, bg2, bg3, obj) \
    gLCDControlBuffer.wincnt.wout_enableBg0 = (bg0); \
    gLCDControlBuffer.wincnt.wout_enableBg1 = (bg1); \
    gLCDControlBuffer.wincnt.wout_enableBg2 = (bg2); \
    gLCDControlBuffer.wincnt.wout_enableBg3 = (bg3); \
    gLCDControlBuffer.wincnt.wout_enableObj = (obj)

extern struct VectorBmfx Vectors_EventWarp1[17];
extern struct VectorBmfx Vectors_EventWarp2[17];


#define PAL_COLOR(palid, colornum) gPaletteBuffer[(palid) * 0x10 + (colornum)]
#define PAL_BG_COLOR(palid, colornum) PAL_COLOR(palid, colornum)
#define PAL_OBJ_COLOR(palid, colornum) PAL_COLOR((palid) + 0x10, colornum)
#define RGB(r, g, b) ((r) | ((g) << 5) | ((b) << 10))

struct ProcWhiteCircleFx {
    PROC_HEADER;

    /* 2C */ int xPos;
    /* 30 */ int yPos;

    /* 34 */ u8 _pad_34[0x4C - 0x34];

    /* 4C */ s16 counter;
};
struct Proc {
    /* 00 */ PROC_HEADER;

    /* 2C */ int x, y;
    /* 34 */ int unk34;
    /* 38 */ int unk38;
    /* 3C */ int unk3C;
    /* 40 */ int unk40;

    /* 44 */ u8 pad38[0x4A - 0x44];

    /* 4A */ short unk4A;

    // Is this part of that?
    /* 4C */ short unk4C; 
    /* 4E */ short unk4E;
    /* 50 */ short unk50;

    /* 52 */ u16 unk52;

    /* 54 */ void *ptr;
    /* 58 */ int unk58;
    /* 5C */ int unk5C;
    /* 60 */ int unk60;
    /* 64 */ short unk64;
    /* 66 */ short unk66;
    /* 68 */ short unk68;
    /* 6A */ short unk6A;
};

int NextRN(void);
void InitRN(s32 unk1);
void StoreRNState(u16* seeds);
void LoadRNState(const u16* seeds);
int NextRN_100(void);
int NextRN_N(int max);
s8 Roll1RN(int threshold);
s8 Roll2RN(int threshold);
void SetLCGRNValue(s32 Seed);
unsigned AdvanceGetLCGRNValue(void);
u32 GetGameClock(void);
void SetGameClock(int newTime);
extern u16  gObject_8x8[];
extern u16  gObject_16x16[];
extern u16  gObject_32x32[];
extern u16  gObject_64x64[]; // Unused
extern u16  gObject_8x16[];
extern u16  gObject_16x32[];
extern u16  gObject_32x64[]; // Unused
extern u16  gObject_16x8[];
extern u16  gObject_16x8_VFlipped[]; // Unused
extern u16  gObject_32x16[];
extern u16  gObject_64x32[];
extern u16  gObject_32x8[];
extern u16  gObject_8x32[];
extern u16  gObject_32x8_VFlipped[]; // Unused
extern u16  gObject_8x16_HFlipped[];
extern u16  gObject_8x8_HFlipped[];
extern u16  gObject_8x8_VFlipped[]; // Unused
extern u16  gObject_8x8_HFlipped_VFlipped[]; // Unused
extern u16  gObject_16x16_VFlipped[];

#define RESET_EWRAM      0x01
#define RESET_IWRAM      0x02
#define RESET_PALETTE    0x04
#define RESET_VRAM       0x08
#define RESET_OAM        0x10
#define RESET_SIO_REGS   0x20
#define RESET_SOUND_REGS 0x40
#define RESET_REGS       0x80
#define RESET_ALL        0xFF

void SoftReset(u32 resetFlags);

void RegisterRamReset(u32 resetFlags);

void VBlankIntrWait(void);

u16 Sqrt(u32 num);

u16 ArcTan2(s16 x, s16 y);

#define CPU_SET_SRC_FIXED 0x01000000
#define CPU_SET_16BIT     0x00000000
#define CPU_SET_32BIT     0x04000000

void CpuSet(const void *src, void *dest, u32 control);

#define CPU_FAST_SET_SRC_FIXED 0x01000000

void CpuFastSet(const void *src, void *dest, u32 control);

void BgAffineSet(struct BgAffineSrcData *src, struct BgAffineDstData *dest, s32 count);

void ObjAffineSet(struct ObjAffineSrcData *src, void *dest, s32 count, s32 offset);

void LZ77UnCompWram(const void *src, void *dest);

void LZ77UnCompVram(const void *src, void *dest);

void RLUnCompWram(const void *src, void *dest);

void RLUnCompVram(const void *src, void *dest);


#define CPU_FILL(value, dest, size, bit)                                          \
{                                                                                 \
    vu##bit tmp = (vu##bit)(value);                                               \
    CpuSet((void *)&tmp,                                                          \
           dest,                                                                  \
           CPU_SET_##bit##BIT | CPU_SET_SRC_FIXED | ((size)/(bit/8) & 0x1FFFFF)); \
}

#define CpuFill16(value, dest, size) CPU_FILL(value, dest, size, 16)
#define CpuFill32(value, dest, size) CPU_FILL(value, dest, size, 32)

#define CPU_COPY(src, dest, size, bit) CpuSet(src, dest, CPU_SET_##bit##BIT | ((size)/(bit/8) & 0x1FFFFF))

#define CpuCopy16(src, dest, size) CPU_COPY(src, dest, size, 16)
#define CpuCopy32(src, dest, size) CPU_COPY(src, dest, size, 32)

#define CpuFastFill(value, dest, size)                               \
{                                                                    \
    vu32 tmp = (vu32)(value);                                        \
    CpuFastSet((void *)&tmp,                                         \
               dest,                                                 \
               CPU_FAST_SET_SRC_FIXED | ((size)/(32/8) & 0x1FFFFF)); \
}

#define CpuFastFill16(value, dest, size) CpuFastFill(((value) << 16) | (value), (dest), (size))

#define CpuFastCopy(src, dest, size) CpuFastSet(src, dest, ((size)/(32/8) & 0x1FFFFF))
u8 sub_80A3898(void*);
#define DmaSet(dmaNum, src, dest, control)        \
{                                                 \
    vu32 *dmaRegs = (vu32 *)REG_ADDR_DMA##dmaNum; \
    dmaRegs[0] = (vu32)(src);                     \
    dmaRegs[1] = (vu32)(dest);                    \
    dmaRegs[2] = (vu32)(control);                 \
    dmaRegs[2];                                   \
}

#define DMA_FILL(dmaNum, value, dest, size, bit)                                              \
{                                                                                             \
    vu##bit tmp = (vu##bit)(value);                                                           \
    DmaSet(dmaNum,                                                                            \
           &tmp,                                                                              \
           dest,                                                                              \
           (DMA_ENABLE | DMA_START_NOW | DMA_##bit##BIT | DMA_SRC_FIXED | DMA_DEST_INC) << 16 \
         | ((size)/(bit/8)));                                                                 \
}

#define DmaFill16(dmaNum, value, dest, size) DMA_FILL(dmaNum, value, dest, size, 16)
#define DmaFill32(dmaNum, value, dest, size) DMA_FILL(dmaNum, value, dest, size, 32)

// Note that the DMA clear macros cause the DMA control value to be calculated
// at runtime rather than compile time. The size is divided by the DMA transfer
// unit size (2 or 4 bytes) and then combined with the DMA control flags using a
// bitwise OR operation.

#define DMA_CLEAR(dmaNum, dest, size, bit)  \
{                                           \
    vu##bit *_dest = (vu##bit *)(dest);     \
    u32 _size = size;                       \
    DmaFill##bit(dmaNum, 0, _dest, _size);  \
}

#define DmaClear16(dmaNum, dest, size) DMA_CLEAR(dmaNum, dest, size, 16)
#define DmaClear32(dmaNum, dest, size) DMA_CLEAR(dmaNum, dest, size, 32)

#define DMA_COPY(dmaNum, src, dest, size, bit)                                              \
    DmaSet(dmaNum,                                                                          \
           src,                                                                             \
           dest,                                                                            \
           (DMA_ENABLE | DMA_START_NOW | DMA_##bit##BIT | DMA_SRC_INC | DMA_DEST_INC) << 16 \
         | ((size)/(bit/8)))

#define DmaCopy16(dmaNum, src, dest, size) DMA_COPY(dmaNum, src, dest, size, 16)
#define DmaCopy32(dmaNum, src, dest, size) DMA_COPY(dmaNum, src, dest, size, 32)

#define DmaStop(dmaNum)                                         \
{                                                               \
    vu16 *dmaRegs = (vu16 *)REG_ADDR_DMA##dmaNum;               \
    dmaRegs[5] &= ~(DMA_START_MASK | DMA_DREQ_ON | DMA_REPEAT); \
    dmaRegs[5] &= ~DMA_ENABLE;                                  \
    dmaRegs[5];                                                 \
}

#define DmaCopyLarge(dmaNum, src, dest, size, block, bit) \
{                                                         \
    const void *_src = src;                               \
    void *_dest = (void *)(dest);                         \
    u32 _size = size;                                     \
    while (1)                                             \
    {                                                     \
        DmaCopy##bit(dmaNum, _src, _dest, (block));       \
        _src += (block);                                  \
        _dest += (block);                                 \
        _size -= (block);                                 \
        if (_size <= (block))                             \
        {                                                 \
            DmaCopy##bit(dmaNum, _src, _dest, _size);     \
            break;                                        \
        }                                                 \
    }                                                     \
}

#define DmaClearLarge(dmaNum, dest, size, block, bit) \
{                                                     \
	void *_dest = dest;                               \
    u32 _size = size;                                 \
    while (1)                                         \
    {                                                 \
        DmaFill##bit(dmaNum, 0, _dest, (block));      \
        _dest += (block);                             \
        _size -= (block);                             \
        if (_size <= (block))                         \
        {                                             \
            DmaFill##bit(dmaNum, 0, _dest, _size);    \
            break;                                    \
        }                                             \
    }                                                 \
}

#define DmaCopyLarge16(dmaNum, src, dest, size, block) DmaCopyLarge(dmaNum, src, dest, size, block, 16)
#define DmaCopyLarge32(dmaNum, src, dest, size, block) DmaCopyLarge(dmaNum, src, dest, size, block, 32)

#define DmaClearLarge16(dmaNum, dest, size, block) DmaClearLarge(dmaNum, dest, size, block, 16)
#define DmaClearLarge32(dmaNum, dest, size, block) DmaClearLarge(dmaNum, dest, size, block, 32)

#define DmaCopyDefvars(dmaNum, src, dest, size, bit) \
{                                                    \
    const void *_src = src;                          \
    void *_dest = (void *)(dest);                    \
    u32 _size = size;                                \
    DmaCopy##bit(dmaNum, _src, _dest, _size);        \
}

#define DmaCopy16Defvars(dmaNum, src, dest, size) DmaCopyDefvars(dmaNum, src, dest, size, 16)
#define DmaCopy32Defvars(dmaNum, src, dest, size) DmaCopyDefvars(dmaNum, src, dest, size, 32)

#define DmaFillLarge(dmaNum, fillval, dest, size, block, bit) \
{                                                             \
    void *_dest = (void *)(dest);                             \
    u32 _size = (u32)(size);                                  \
    while (1)                                                 \
    {                                                         \
        DmaFill##bit(dmaNum, fillval, _dest, (block));        \
        _dest += (block);                                     \
        _size -= (block);                                     \
        if (_size <= (block))                                 \
        {                                                     \
            DmaFill##bit(dmaNum, fillval, _dest, _size);      \
            break;                                            \
        }                                                     \
    }                                                         \
}

#define DmaFill16Large(dmaNum, fillval, dest, size, block) DmaFillLarge(dmaNum, fillval, dest, size, block, 16)
#define DmaFill32Large(dmaNum, fillval, dest, size, block) DmaFillLarge(dmaNum, fillval, dest, size, block, 32)

#define DmaFillDefvars(dmaNum, fillval, dest, size, bit) \
{                                                        \
    void *_dest = (void *)(dest);                        \
    u32 _size = (u##bit)(size);                          \
    DmaFill##bit(dmaNum, fillval, _dest, _size);         \
}

#define DmaFill16Defvars(dmaNum, fillval, dest, size) DmaFillDefvars(dmaNum, fillval, dest, size, 16)
#define DmaFill32Defvars(dmaNum, fillval, dest, size) DmaFillDefvars(dmaNum, fillval, dest, size, 32)

// from pokeemerald
// Maximum amount of data we will transfer in one operation
#define MAX_DMA_BLOCK_SIZE 0x1000

#define MAX_DMA_REQUESTS 128

#define DMA_REQUEST_COPY32 1
#define DMA_REQUEST_FILL32 2
#define DMA_REQUEST_COPY16 3
#define DMA_REQUEST_FILL16 4

#define Dma3CopyLarge_(src, dest, size, bit)               \
{                                                          \
    const void *_src = src;                                \
    void *_dest = dest;                                    \
    u32 _size = size;                                      \
    while (1)                                              \
    {                                                      \
        if (_size <= MAX_DMA_BLOCK_SIZE)                   \
        {                                                  \
            DmaCopy##bit(3, _src, _dest, _size);           \
            break;                                         \
        }                                                  \
        DmaCopy##bit(3, _src, _dest, MAX_DMA_BLOCK_SIZE);  \
        _src += MAX_DMA_BLOCK_SIZE;                        \
        _dest += MAX_DMA_BLOCK_SIZE;                       \
        _size -= MAX_DMA_BLOCK_SIZE;                       \
    }                                                      \
}

#define Dma3CopyLarge16_(src, dest, size) Dma3CopyLarge_(src, dest, size, 16)
#define Dma3CopyLarge32_(src, dest, size) Dma3CopyLarge_(src, dest, size, 32)

#define Dma3FillLarge_(value, dest, size, bit)             \
{                                                          \
    void *_dest = dest;                                    \
    u32 _size = size;                                      \
    while (1)                                              \
    {                                                      \
        if (_size <= MAX_DMA_BLOCK_SIZE)                   \
        {                                                  \
            DmaFill##bit(3, value, _dest, _size);          \
            break;                                         \
        }                                                  \
        DmaFill##bit(3, value, _dest, MAX_DMA_BLOCK_SIZE); \
        _dest += MAX_DMA_BLOCK_SIZE;                       \
        _size -= MAX_DMA_BLOCK_SIZE;                       \
    }                                                      \
}

#define Dma3FillLarge16_(value, dest, size) Dma3FillLarge_(value, dest, size, 16)
#define Dma3FillLarge32_(value, dest, size) Dma3FillLarge_(value, dest, size, 32)
extern const u16* sUiFrameModelTilemapLookup[];

struct SecureSaveHeader {
    /* 00 */ u8 magic[0x6];
    /* 06 */ u8 _pad[0x8 - 0x6];
    /* 08 */ u32 _00040624;
    /* 0C */ u16 _200A;

    /* 0E */ u8 flag0E_0 : 1;
             u8 flag0E_1 : 1;
             u8 flag0E_2 : 1;
             u8 flag0E_3 : 1;
             u8 flag0E_4 : 1;
             u8 flag0E_5 : 1;
             u8 flag0E_6 : 1;
             u8 flag0E_7 : 1;

    /* 0F */ u8 unk0F_0 : 1;
             u8 unk0F_1 : 7;

    /* 10 */ u16 unk10;
    /* 10 */ u16 unk12;
    /* 14 */ u8 unk14[0x20 - 0x14];
    /* 20 */ u8 unk20[0x40 - 0x20];
    /* 40 */ u8 unk40[0x60 - 0x40];
    /* 60 */ u16 sec_sum;
    /* 62 */ u8 unk62;
    /* 63 */ u8 unk63;
};

struct SramChunk {
    /* 00 */ u32 unk00;
    /* 04 */ u16 unk04;
    /* 06 */ u8 unk06;
    /* 07 */ s8 _pad_07;
    /* 08 */ u16 sram_offset;
    /* 0A */ u16 unk0A;
    /* 0C */ u8 _pad_0C[0x10 - 0xC];
};

struct SramHeader {
    struct SecureSaveHeader SecHead;
    struct SramChunk chunks[0x7];
};

/* used in sub_80A341C */
struct bmsave_unkstruct0 {
    u8 unk[0x14];
};

struct bmsave_unkstruct_089ED10C {
    u16 unk00;
    u16 unk02;
    u8 _pad_04[0x10 - 0x04];
};



void *sub_80847F8();
u8 LoadAndVerifySecureHeaderSW(struct SecureSaveHeader *buf);

extern const struct CharacterData gCharacterData[]; // gCharacterData

void SaveSecureHeader(struct SecureSaveHeader *header);
void SetSramFastFunc(void);
void WriteSramFast(const u8 *src, u8 *dest, u32 size);
extern void (*ReadSramFast)(const u8 *src, u8 *dest, u32 size);
extern u32 (*VerifySramFast)(const u8 *src, u8 *dest, u32 size);
u32 WriteAndVerifySramFast(const u8 *src, u8 *dest, u32 size);
extern struct SramHeader *gpSaveDataStart;
u16 SecureHeaderCalc(u16 *src, int size);
void sub_80A3984(void*);
struct Struct089ED67C {
    /* 00 */ u8 _pad00[0x0C];
    /* 0C */ s8 (*func)();
    /* 10 */ u8 _pad10[0x18 - 0x10];
};

extern const struct Struct089ED67C gUnknown_089ED67C[];

struct EventEngineProc {
    PROC_HEADER;

    /* 2C */ void (*pCallback)(struct EventEngineProc*);

    /* 30 */ const u16* pEventStart;
    /* 34 */ const u16* pEventIdk;
    /* 38 */ const u16* pEventCurrent;

    /* 3C */ u16 evStateBits;
    /* 3E */ u16 evStallTimer;

    /* 40 */ s8 overwrittenTextSpeed;
    /* 41 */ u8 execType;
    /* 42 */ u8 activeTextType;
    /* 43 */ u8 chapterIndex;

    /* 44 */ u16 mapSpritePalIdOverride;

    /* 46 */ // pad

    /* 48 */ const void* pUnitLoadData;
    /* 4C */ s16 unitLoadCount;

    /* 4E */ u8  idk4E;
    /* 4F */ u8 _pad_4F[0x54 - 0x4F];
    /* 54 */ struct Unit *unit;
};

enum EventExecType {
    EV_EXEC_WORLDMAP  = 0, // for world map events
    EV_EXEC_CUTSCENE  = 1, // for overall chapter cutscene events?
    EV_EXEC_GAMEPLAY  = 2, // for gameplay-triggered events? (battle quotes, villages tile changes, chests, game over)
    EV_EXEC_QUIET     = 3, // for events that should just execute events? (no fade, no clearing stuff, etc)
    EV_EXEC_UNK4      = 4, // not used?
    EV_EXEC_UNK5      = 5  // not used?
};

enum EventStateFlags {
    EV_STATE_NONE      = 0,

    EV_STATE_ABORT     = (1 << 0x0), // queued event engine calls will wait
    EV_STATE_0002      = (1 << 0x1), // prevents "ENDA events" to play. Needs further investigation
    EV_STATE_SKIPPING  = (1 << 0x2), // currently skipping events (trigger with start)
    EV_STATE_0008      = (1 << 0x3), // ??? seems to be dialogue related
    EV_STATE_NOSKIP    = (1 << 0x4), // prevents skipping with start, set by EVBIT_MODIFY
    EV_STATE_0020      = (1 << 0x5), // set by EVBIT_MODIFY
    EV_STATE_0040      = (1 << 0x6), // set by EVBIT_MODIFY
    EV_STATE_NOFADE    = (1 << 0x7), // don't fade at end of events
    EV_STATE_FADEDIN   = (1 << 0x8), // faded into white/back
    EV_STATE_UNITCAM   = (1 << 0x9), // camera follows unit movement
    EV_STATE_CHANGECH  = (1 << 0xA), // moving to another chapter (?)
    EV_STATE_CHANGEGM  = (1 << 0xB), // changing "game mode" (GAMECTRL field 0x29 was changed?)
    EV_STATE_GFXLOCKED = (1 << 0xC)  // set when the game graphics have been locked through events (codes 0x23/0x24)

    // I don't think there's more, but I could be wrong
};

// This will probably be used in evtcmd_gmap/evtscr for defining the event code handler arrays or something
typedef u8(*EventFuncType)(struct EventEngineProc*);

// ??? _MarkSomethingInMenu(???);
// ??? EventEngine_OnUpdate(???);
// ??? EventEngine_OnEnd(???);
// ??? EnqueueEventCall(???);
// ??? CallNextQueuedEvent(???);
void CallEvent(const u16* events, u8 execType);
struct EventEngineProc* EventEngine_Create(const u16* events, u8 idk);
// ??? EventEngine_CreateBattle(???);
s8 EventEngineExists(void);
// ??? BattleEventEngineExists(???);
// ??? DeleteEventEngines(???);
// ??? sub_800D1E4(???);
// ??? SetEventSlotC(???);
// ??? sub_800D204(???);
int sub_800D208(void);
// ??? CallBattleQuoteEvent(???);
// ??? CallBattleQuoteEventInBattle(???);
// ??? CallTileChangeEvent(???);
// ??? CallChestOpeningEvent(???);
// ??? CallMapSupportEvent(???);
// ??? CallSupportViewerEvent(???);
void CallRetreatPromptEvent(void);;
// ??? CallSuspendPromptEvent(???);
void CallGameOverEvent(void);
// ??? sub_800D3E4(???);
// ??? EventEngine_StartSkip(???);
// ??? sub_800D488(???);
// ??? SetEventTriggerState(???);
// ??? GetEventTriggerState(???);
// ??? sub_800D4D4(???);
// ??? sub_800D524(???);
// ??? SlotQueuePush(???);
// ??? SlotQueuePop(???);
void SetEventSlotCounter(unsigned value);
unsigned GetEventSlotCounter(void);

void Sound_FadeOutBGM(int speed);
enum
{
    CHAPTER_FLAG_0          = (1 << 0),
    CHAPTER_FLAG_1          = (1 << 1),
    CHAPTER_FLAG_POSTGAME   = (1 << 2),
    CHAPTER_FLAG_3          = (1 << 3),
    CHAPTER_FLAG_PREPSCREEN = (1 << 4),
    CHAPTER_FLAG_5          = (1 << 5),
    CHAPTER_FLAG_DIFFICULT  = (1 << 6),
    CHAPTER_FLAG_7          = (1 << 7)
};
int GetPlayerLeaderUnitId(void);
enum {
    US_BIT29 = (1 << 29),
    US_BIT30 = (1 << 30),
};
void MU_EndAll();
void sub_800915C(int, int, int, int, int, int, int, ProcPtr);
void sub_8001F48(int);
void Sound_FadeOutSE(int speed);
int sub_80AEA24(int);
struct Proc8085618 {
    PROC_HEADER;
    /* 29 */ u8 _pad_29[0x4C - 0x29];
    /* 4C */ s8 unk4C;
};
extern struct ProcCmd gUnknown_089EE030[];
void sub_8026C1C(struct Unit*, int);
extern struct ProcCmd gUnknown_089EE068[];


void sub_8081E78();
void sub_808285C();
void sub_8082730(int, int, int);
struct Proc89EE088 {
    PROC_HEADER;
    /* 29 */ u8 _pad_29[0x2C - 0x29];
    /* 2C */ u32 count;
};

struct Proc89EE068 {
    PROC_HEADER;
    /* 29 */ u8 _pad_29[0x54 - 0x29];
    /* 54 */ ProcPtr unk_proc;
};

struct Struct20121CC {
    int data[0x42];
};
extern struct Struct20121CC gUnknown_020121CC;
struct Unit *sub_80C4088();
void sub_80C409C(struct Unit *);
s8 IsCharacterForceDeployed_(u16);
s8 CheckSomethingSomewhere();
unsigned int GetChapterThing(void);
#define UNIT_CHAR_ID(aUnit) ((aUnit)->pCharacterData->number)
struct ProcAtMenu {
	/* 00 */ PROC_HEADER;
	/* 29 */ u8 unit_count;
	/* 2A */ u8 max_counter; // Total unit number can be on battle
	/* 2B */ u8 cur_counter; // Total unit number to be on battle
	/* 2C */ u8 unk_2C;
	/* 2D */ u8 cur_cmd;
	/* 2E */ u8 unk_2E;
	/* 2F */ u8 unk_2F;
	/* 30 */ u8 unk_30;
	/* 31 */ u8 unk_31;
	/* 32 */ u8 unk_32;
	/* 33 */ u8 state;
	/* 34 */ u8 unk_34;
	/* 35 */ u8 unk_35;
	/* 36 */ s88 end_prep;
	/* 38 */ u8 unk_38[0x3C - 0x38];
	/* 3C */ u32 yDiff; // y Pos offset of Unit SMS
	/* 40 */ u32 xDiff;
};
u8 sub_80A095C(int);
void StartPrepScreenMenu();
void PrepScreenMenu_OnPickUnits(struct ProcAtMenu* proc);
void PrepScreenMenu_OnItems(struct ProcAtMenu* proc);
void PrepScreenMenu_OnSupport(struct ProcAtMenu* proc);
void PrepScreenMenu_OnSave(struct ProcAtMenu* proc);
int PrepScreenMenu_OnStartPress(struct ProcAtMenu* proc);
int Prep_HasUnitDeployed();
void sub_8095284(ProcPtr proc);
int PrepScreenMenu_OnBPress(struct ProcAtMenu* proc);
void PrepScreenMenu_OnCheckMap(struct ProcAtMenu* proc);
// ??? sub_80952CC(???);
// ??? __malloc_unlock_1(???);
void sub_80952D4();
void sub_80952EC(u8 val);
void sub_8095314(u8 val);
int sub_8095354(int index);
void sub_8095364(int index, int val);
int sub_8095374();
void sub_8095384(int val);
int sub_8095394();
void sub_80953C0(int val);
enum prep_atmenu_item_index {
    PREP_MAINMENU_UNIT = 0,
    PREP_MAINMENU_ITEM = 1,
    PREP_MAINMENU_SAVE = 2,
    PREP_MAINMENU_UNK3 = 3,
    PREP_MAINMENU_SUPPORT = 4,
    PREP_MAINMENU_CHECKMAP = 7,
};
enum {
    // TODO: maybe use names that also reflect meaning for dialogue colors (this is ui colors)

    TEXT_COLOR_NORMAL = 0,
    TEXT_COLOR_GRAY   = 1,
    TEXT_COLOR_BLUE   = 2,
    TEXT_COLOR_GOLD   = 3,
    TEXT_COLOR_GREEN  = 4,
    TEXT_COLOR_BLACK  = 5,
};
void AtMenu_AddPrepScreenSupportMenuItem(struct ProcAtMenu *proc);
s8 CanPrepScreenCheckMap();
void AtMenu_InitPrepScreenMenu(struct ProcAtMenu*);
u8 CanPrepScreenSave();
void SetPrepScreenMenuOnBPress(const void*);
void SetPrepScreenMenuOnStartPress(const void*);
void SetPrepScreenMenuPosition(int x, int y);
void SetPrepScreenMenuSelectedItem(int);
void PrepScreenMenu_OnPickUnits(struct ProcAtMenu* proc);
void PrepScreenMenu_OnItems(struct ProcAtMenu* proc);
void PrepScreenMenu_OnSupport(struct ProcAtMenu* proc);
void PrepScreenMenu_OnSave(struct ProcAtMenu* proc);
int PrepScreenMenu_OnStartPress(struct ProcAtMenu* proc);
int Prep_HasUnitDeployed();
void sub_8095284(ProcPtr proc);
int PrepScreenMenu_OnBPress(struct ProcAtMenu* proc);
void PrepScreenMenu_OnCheckMap(struct ProcAtMenu* proc);
// ??? sub_80952CC(???);
// ??? __malloc_unlock_1(???);
void Reset203E87C();
void Reset203E87C_WithVal(u8 val);
void Modify203E87C(u8 val);
struct Unit *Get20121CC_ByIndex(int index);
void Set20121CC_ByIndex(int index, struct Unit *);
int Get20121CC_0x40();
void Set20121CC_0x40(int);
int Get20121CC_0x41Maybe();
void Set20121CC_0x41Maybe(int);
s8 IsCharacterForceDeployed(int char_id);
// ??? CalcForceDeployedUnitCounts(???);
// ??? SomeLeftoverFunctionThatReturns0(???);
s8 IsUnitInCurrentRoster(struct Unit *unit);
void AtMenu_AddPrepScreenSupportMenuItem(struct ProcAtMenu *proc);
s8 CanPrepScreenCheckMap();
void AtMenu_InitPrepScreenMenu(struct ProcAtMenu*);
int GetLastStatScreenUid(void);
extern u8 gUnknown_020111CC[];
void InitUnitStack(void* buff);
void PushUnit(struct Unit* unit);
void LoadPlayerUnitsFromUnitStack();
void LoadPlayerUnitsFromUnitStack2();
int GetChapterAllyUnitCount();
s8 IsUnitInCurrentRoster(struct Unit *unit);
#define NULL (void*)0
s8 SomeLeftoverFunctionThatReturns0(struct Unit *unit);
int GetItemIndex(int item);
void SMS_ClearUsageTable(void);
int GetUnitSMSId(struct Unit* unit);
void SMS_RegisterUsage(int);
void SMS_FlushIndirect(void);
extern struct ProcCmd ProcScr_SlidingWallBg[];
void sub_8086BB8(ProcPtr, u8*, int);
void EndBG3Slider(void);

struct Font
{
    /*0x00*/ u8 *vramDest;
             // pointer to table of glyph structs
             // In ASCII fonts, there is just one byte per character, so the glyph
             // for a given character is obtained by indexing this array.
             // In Shift-JIS fonts, each character is 2 bytes. Each element in
             // this array is a linked list. byte2 - 0x40 is the index of the head
             // of the list, and the list is traversed until a matching byte1 is found.
    /*0x04*/ struct Glyph **glyphs;
    /*0x08*/ void (*drawGlyph)(struct Text *, struct Glyph *);
    /*0x0C*/ void *(*getVramTileOffset)(struct Text *);
    /*0x10*/ u16 unk10;
    /*0x12*/ u16 unk12;
    /*0x14*/ u16 paletteNum;
    /*0x16*/ u8 isAscii;
};

#define OBJ_VRAM0      (void *)(VRAM + 0x10000)
void InitSomeOtherGraphicsRelatedStruct(struct Font *font, void *vramDest, int c);
extern u8 Pal_UIFont[];
void Text_Init3(struct Text *th);
// ??? SetupDebugFontForBG(???);
void PrintDebugStringToBG(u16 *bg, const char *asciiStr);
// ??? sub_800384C(???);
// ??? sub_8003870(???);
// ??? sub_80038B4(???);
// ??? ClearSmallStringBuffer(???);
void StoreNumberStringToSmallBuffer(int n);
void StoreNumberStringOrDashesToSmallBuffer(int n);
// ??? sub_800394C(???);
// ??? StoreNumberHexStringToSmallBuffer(???);
// ??? sub_80039B4(???);
void PrintStringToDBG(const char *str);
// ??? FlushDBGToBG2(???);
// ??? sub_8003ABC(???);
// ??? SetupDebugFontForOBJ(???);
// ??? PrintDebugStringAsOBJ(???);
// ??? sub_8003BFC(???);
// ??? sub_8003C20(???);
// ??? sub_8003C44(???);
// ??? GetSomeByte(???);
void SetSomeByte(int);

// ??? SetupDebugFontForBG(???);
void PrintDebugStringToBG(u16 *bg, const char *asciiStr);
// ??? sub_800384C(???);
// ??? sub_8003870(???);
// ??? sub_80038B4(???);
// ??? ClearSmallStringBuffer(???);
void StoreNumberStringToSmallBuffer(int n);
void StoreNumberStringOrDashesToSmallBuffer(int n);
// ??? sub_800394C(???);
// ??? StoreNumberHexStringToSmallBuffer(???);
// ??? sub_80039B4(???);
void PrintStringToDBG(const char *str);
// ??? FlushDBGToBG2(???);
// ??? sub_8003ABC(???);
void SetupDebugFontForOBJ(int a, int objPalNum);
// ??? PrintDebugStringAsOBJ(???);
// ??? sub_8003BFC(???);
// ??? sub_8003C20(???);
// ??? sub_8003C44(???);
int GetLang(void);
void SetLang(int);
void ResetText(void);
void InitTextFont(struct Font *a, void *b, int c, int d);
void SetTextFontGlyphs(int a);
void ResetTextFont(void);
void SetTextFont(struct Font *a);
void InitText(struct Text *a, int tileWidth);
void InitTextDb(struct Text *th, int tileWidth);
void ClearText(struct Text* a);
void ClearTextPart(struct Text *th, int b, int c);
// ??? Text_GetChrOffset(???);
int Text_GetCursor(struct Text *th);
void Text_SetCursor(struct Text *th, int x);
void Text_Skip(struct Text *th, int x);
void Text_SetColor(struct Text *th, int colorId);
int Text_GetColor(struct Text *th);
void Text_SetParams(struct Text* th, int x, int colorId);
void PutText(struct Text* th, u16* dest);
void PutBlankText(struct Text *th, u16 *dest);
int GetStringTextLen(const char *str);
const char *GetCharTextLen(const char *str, u32 *pWidth);
int GetStringTextCenteredPos(int x, const char* str);
void GetStringTextBox(const char* str, int* outWidth, int* outHeight);
char *GetStringLineEnd(char *str);
void Text_DrawString(struct Text *th, const char* str);
void Text_DrawNumber(struct Text *th, int n);
void Text_DrawNumberOrSpace(struct Text *th, int n);
void Text_DrawNumberOrBlank(struct Text *th, int n);
const char *Text_DrawCharacter(struct Text *a, const char *b);
void *GetTextDrawDest(struct Text *a);
// ??? GetColorLut(???);
// ??? DrawTextGlyph(???);
// ??? DrawTextGlyphNoClear(???);
void InitSystemTextFont(void);
void InitTalkTextFont(void);
void SetTextDrawNoClear(void);
void PutDrawText(struct Text* text, u16* dest, int colorId, int x, int tileWidth, const char* string);
void Text_InsertDrawString(struct Text *th, int x, int colorId, const char *str);
void Text_InsertDrawNumberOrBlank(struct Text *th, int x, int colorId, int n);
void Text_DrawStringASCII(struct Text *text, const char *str);
const char *Text_DrawCharacterAscii(struct Text *text, const char *str);
const char *GetCharTextLenASCII(const char *str, u32 *width);
int GetStringTextLenASCII(const char *str);
// ??? nop_8004598(???);
void InitSpriteTextFont(struct Font *font, void *vramDest, int c);
void InitSpriteText(struct Text *th);
void SpriteText_DrawBackground(struct Text*);
void SpriteText_Clear(struct Text *th);
void SpriteText_DrawBackgroundExt(struct Text *th, u32 b);
void *GetSpriteTextDrawDest(struct Text *);
void DrawSpriteTextGlyph(struct Text *, struct Glyph *);
// ??? TextPrint_OnLoop(???);
// ??? StartTextPrint(???);
// ??? IsTextPrinting(???);
// ??? EndTextPrinting(???);
// ??? GreenText_OnLoop(???);
void StartGreenText(ProcPtr parent);
void EndGreenText(void);
// ??? DrawSpecialCharGlyph_old(???);
// ??? DrawSpecialCharGlyph(???);
// ??? AddSpecialChar(???);
// ??? GetSpecialCharChr(???);
void PutSpecialChar(u16 * tm, int color, int id);
// ??? PutNumberExt(???);
void PutNumber(u16 *a, int b, int c);
void PutNumberOrBlank(u16* a, int b, int c);
void PutNumberTwoChr(u16 *a, int b, int c);
void PutNumberSmall(u16* a, int b, int c);
void PutNumberBonus(int a, u16 *b);
// ??? SpecialCharTest(???);
void PutTime(u16 * tm, int color, int time, s8 always_display_punctuation);
void PutTwoSpecialChar(u16 * tm, int color, int id_a, int id_b);
void PutNumber2Digit(u16 *tm, int color, int number);
void PutNumber2DigitSmall(u16 *tm, int color, int number);
void PutNumber2DigitExt(u16 *tm, int color, int number, int id_zero);
// ??? sub_8004D7C(???);
// ??? sub_8004DB8(???);
// ??? sub_8004DF8(???);
void SetupDebugFontForBG(int bg, int tileDataOffset);


struct ChapterMap {
    u8  obj1Id;
    u8  obj2Id;
    u8  paletteId;
    u8  tileConfigId;
    u8  mainLayerId;
    u8  objAnimId;
    u8  paletteAnimId;
    u8  changeLayerId;
};

struct ROMChapterData {
    /* 00 */ const char* internalName;

    /* 04 */ struct ChapterMap map;

    /* 0C */ u8  initialFogLevel;
    /* 0D */ s88  hasPrepScreen; // left over from FE7

    /* 0E */ u8 chapTitleId;
    /* 0F */ u8 chapTitleIdInHectorStory; // left over from FE7

    /* 10 */ u8 initialPosX;
    /* 11 */ u8 initialPosY;
    /* 12 */ u8 initialWeather;
    /* 13 */ u8 battleTileSet;

    // This may need a type change.
    /* 14 */ u16 easyModeLevelMalus      : 4;
    /* 14 */ u16 difficultModeLevelBonus : 4;
    /* 14 */ u16 normalModeLevelMalus    : 4;

    /* 16 */ u16 mapBgmIdBluePhase;
    /* 18 */ u16 mapBgmIdRedPhase;
    /* 1A */ u16 mapBgmIdGreenPhase;
    /* 1C */ u16 mapBgmIdBluePhaseInHectorStory; // left over from FE7
    /* 1E */ u16 mapBgmIdRedPhaseInHectorStory; // left over from FE7
    /* 20 */ u16 mapBgmIdGreenPhaseInHectorStory; // left over from FE7
    /* 22 */ u16 mapBgmIdBlueGreenPhaseAlt;
    /* 24 */ u16 mapBgmIdRedPhaseAlt;
    /* 26 */ u16 mapPrologueBgmIdInLynStory; // left over from FE7
    /* 28 */ u16 mapPrologueBgmId;
    /* 2A */ u16 mapPrologueBgmIdInHectorStory; // left over from FE7

    /* 2C */ u8 mapCrackedWallHeath;

    /* 2D */ u8 turnsForTacticsRankAInEliwoodStoryNormal; // left over from FE7
    /* 2E */ u8 turnsForTacticsRankAInEliwoodStoryHard; // left over from FE7
    /* 2F */ u8 turnsForTacticsRankAInHectorStoryNormal; // left over from FE7
    /* 30 */ u8 turnsForTacticsRankAInHectorStoryHard; // left over from FE7
    /* 31 */ u8 turnsForTacticsRankBInEliwoodStoryNormal; // left over from FE7
    /* 32 */ u8 turnsForTacticsRankBInEliwoodStoryHard; // left over from FE7
    /* 33 */ u8 turnsForTacticsRankBInHectorStoryNormal; // left over from FE7
    /* 34 */ u8 turnsForTacticsRankBInHectorStoryHard; // left over from FE7
    /* 35 */ u8 turnsForTacticsRankCInEliwoodStoryNormal; // left over from FE7
    /* 36 */ u8 turnsForTacticsRankCInEliwoodStoryHard; // left over from FE7
    /* 37 */ u8 turnsForTacticsRankCInHectorStoryNormal; // left over from FE7
    /* 38 */ u8 turnsForTacticsRankCInHectorStoryHard; // left over from FE7
    /* 39 */ u8 turnsForTacticsRankDInEliwoodStoryNormal; // left over from FE7
    /* 3A */ u8 turnsForTacticsRankDInEliwoodStoryHard; // left over from FE7
    /* 3B */ u8 turnsForTacticsRankDInHectorStoryNormal; // left over from FE7
    /* 3C */ u8 turnsForTacticsRankDInHectorStoryHard; // left over from FE7

    /* 3D */ u8 unk3D; // padding?

    /* 3E */ u16 gainedExpForExpRankAInEliwoodStoryNormal; // left over from FE7
    /* 40 */ u16 gainedExpForExpRankAInEliwoodStoryHard; // left over from FE7
    /* 42 */ u16 gainedExpForExpRankAInHectorStoryNormal; // left over from FE7
    /* 44 */ u16 gainedExpForExpRankAInHectorStoryHard; // left over from FE7
    /* 46 */ u16 gainedExpForExpRankBInEliwoodStoryNormal; // left over from FE7
    /* 48 */ u16 gainedExpForExpRankBInEliwoodStoryHard; // left over from FE7
    /* 4A */ u16 gainedExpForExpRankBInHectorStoryNormal; // left over from FE7
    /* 4C */ u16 gainedExpForExpRankBInHectorStoryHard; // left over from FE7
    /* 4E */ u16 gainedExpForExpRankCInEliwoodStoryNormal; // left over from FE7
    /* 50 */ u16 gainedExpForExpRankCInEliwoodStoryHard; // left over from FE7
    /* 52 */ u16 gainedExpForExpRankCInHectorStoryNormal; // left over from FE7
    /* 54 */ u16 gainedExpForExpRankCInHectorStoryHard; // left over from FE7
    /* 56 */ u16 gainedExpForExpRankDInEliwoodStoryNormal; // left over from FE7
    /* 58 */ u16 gainedExpForExpRankDInEliwoodStoryHard; // left over from FE7
    /* 5A */ u16 gainedExpForExpRankDInHectorStoryNormal; // left over from FE7
    /* 5C */ u16 gainedExpForExpRankDInHectorStoryHard; // left over from FE7

    /* 5E */ u16 unk5E; // padding?

    /* 60 */ u32 goldForFundsRankInEliwoodStoryNormal; // left over from FE7
    /* 64 */ u32 goldForFundsRankInEliwoodStoryHard; // left over from FE7
    /* 68 */ u32 goldForFundsRankInHectorStoryNormal; // left over from FE7
    /* 6C */ u32 goldForFundsRankInHectorStoryHard; // left over from FE7

    /* 70 */ u16 chapTitleTextId;
    /* 72 */ u16 chapTitleTextIdInHectorStory; // left over from FE7

    /* 74 */ u8 mapEventDataId;
    /* 75 */ u8 gmapEventId;

    /* 76 */ u16 divinationTextIdBeginning; // left over from FE7
    /* 78 */ u16 divinationTextIdInEliwoodStory; // left over from FE7
    /* 7A */ u16 divinationTextIdInHectorStory; // left over from FE7
    /* 7C */ u16 divinationTextIdEnding; // left over from FE7
    /* 7E */ u8 divinationPortrait; // left over from FE7
    /* 7F */ u8 divinationFee; // left over from FE7

    /* 80 */ u8 prepScreenNumber;
    /* 81 */ u8 prepScreenNumberInHectorStory; // left over from FE7
    /* 82 */ u8 merchantPosX;
    /* 83 */ u8 merchantPosXInHectorStory; // left over from FE7
    /* 84 */ u8 merchantPosY;
    /* 85 */ u8 merchantPosYInHectorStory; // left over from FE7

    /* 86 */ u8 victorySongEnemyThreshold;
    /* 87 */ s88 fadeToBlack;

    /* 88 */ u16 statusObjectiveTextId;
    /* 8A */ u16 goalWindowTextId;
    /* 8C */ u8 goalWindowDataType;
    /* 8D */ u8 goalWindowEndTurnNumber;
    /* 8E */ u8 protectCharacterIndex;

    /* 8F */ u8 destPosX;
    /* 90 */ u8 destPosY;

    /* 91 */ u8 unk91; // ?
    /* 92 */ u8 unk92; // ?
    /* 93 */ u8 unk93; // ?
};
const struct ROMChapterData* GetROMChapterStruct(unsigned chIndex);
void sub_8095284(ProcPtr proc);
int PrepScreenMenu_OnBPress(struct ProcAtMenu* proc);
void PrepScreenMenu_OnCheckMap(struct ProcAtMenu* proc);
// ??? sub_80952CC(???);
// ??? __malloc_unlock_1(???);
void Reset203E87C();
void Reset203E87C_WithVal(u8 val);
void Modify203E87C(u8 val);
struct Unit *GetUnitFromPrepList(int index);
void RegisterPrepUnitList(int index, struct Unit *);
int PrepGetUnitAmount();
void PrepSetUnitAmount(int);
int PrepGetLatestCharId();
void PrepSetLatestCharId(int);
s8 IsCharacterForceDeployed(int char_id);
// ??? CalcForceDeployedUnitCounts(???);
s8 SomeLeftoverFunctionThatReturns0(struct Unit *unit);
s8 IsUnitInCurrentRoster(struct Unit *unit);
void AtMenu_AddPrepScreenSupportMenuItem(struct ProcAtMenu *proc);
s8 CanPrepScreenCheckMap();
void InitPrepScreenMainMenu(struct ProcAtMenu*);
extern struct Text gUnknown_020111A4[5];
extern u16 gBG2TilemapBuffer[];
extern u16 gUnknown_08A181E8[];
void SetupBackgrounds(u16 *bgConfig);
void LoadDialogueBoxGfx(void* dest, int pal);
void LoadObjUIGfx(void);
int CalcForceDeployedUnitCounts();
s8 SomeLeftoverFunctionThatReturns0(struct Unit *unit);
s8 IsUnitInCurrentRoster(struct Unit *unit);
void AtMenu_AddPrepScreenSupportMenuItem(struct ProcAtMenu *proc);
s8 CanPrepScreenCheckMap();
void InitPrepScreenMainMenu(struct ProcAtMenu*);
int GetLatestUnitIndexInPrepListByUId();
int GetLatestUnitIndexInPrepListByCharId();
void ReorderPlayerUnitsBasedOnDeployment();
void SortPlayerUnitsForPrepScreen();
void RemoveSomeUnitItems();
void MakePrepUnitList();
int UnitGetIndexInPrepList(int pid);
void PrepUpdateSMS();
int PrepGetDeployedUnitAmt(void);
void PrepAutoCapDeployUnits(struct ProcAtMenu* proc);
void EndSlidingWallEffectMaybe();
void EndBG3Slider_(void);
void Prep_DrawChapterGoal(int VRAM_offset, int pal);
extern struct Text gPrepMenuDescTexts[5];
extern struct Text gUnknown_02011184[3];
extern struct Text gUnknown_0201117C[4];
extern u8 CONST_DATA gUnknown_08A1A4C8[];
extern u8 CONST_DATA gUnknown_08A1D510[];
extern u16 CONST_DATA gUnknown_08A1B154[]; // TODO - palette data from sallycursor
void sub_8095C50(int tile, int pal);
extern u16 CONST_DATA gUnknown_08A1D4C8[];
void SetDefaultColorEffects(void);
ProcPtr PrepReDrawSpecialChar(ProcPtr parent);
extern const u16 gUiFramePaletteB[];
extern u8 CONST_DATA gUnknown_08A1B658[];
extern u8 CONST_DATA gUnknown_08A1B698[];
extern u8 gGenericBuffer[]; // gGenericBuffer
ProcPtr sub_80AD1AC(ProcPtr);
void sub_80AD1D0(int);
int sub_809710C();
int sub_8095024();
void ParsePrepMenuDescTexts(int msg);
void DrawPrepMenuDescTexts();
#define TRUE 1
void sub_8095C00(int msg, ProcPtr parent);
int sub_80950C4(int);
void DrawUiFrame2(int x, int y, int width, int height, int style);
extern struct Text gPrepMainMenuTexts[9];
extern int gUnknown_08A196BC[]; /* msg lists */
void sub_809735C();
void sub_8095F54(struct ProcAtMenu *proc);

void sub_80AD51C(int, int, int, u16);
void CloseHelpBox(void);
int sub_8095094(int, int);
void sub_80029E8(int songId, int b, int c, int d, ProcPtr parent);
void StartHelpBox(int x, int y, int mid);
void CleanupPrepMenuScreen(ProcPtr);
int sub_80950C4(int);
void sub_8096C20(void);
void sub_8001F48(int); 
void nullsub_20(ProcPtr);
void EndPrepScreen(void);
void sub_8042EA8();
void sub_801240C();
void sub_8095C2C(struct ProcAtMenu *proc);
void sub_808E79C(ProcPtr proc);
ProcPtr sub_8099F68(ProcPtr);
extern CONST_DATA struct ProcCmd gUnknown_08A18E8C[];
void sub_80A0944(int, ProcPtr);
void sub_803410C(ProcPtr);
void ISuspectThisToBeMusicRelated_8002730(int volume, int b, int c, ProcPtr parent);
void BMapVSync_End(void);
void BMapDispSuspend(void);
void AddSkipThread2(void); // bm?
void SubSkipThread2(void); // bm?
void BMapDispResume(void);
extern CONST_DATA struct ProcCmd ProcScr_AtMenu[];
#define PROC_TREE_VSYNC ((ProcPtr) 0)
#define PROC_TREE_1     ((ProcPtr) 1)
#define PROC_TREE_2     ((ProcPtr) 2)
#define PROC_TREE_3     ((ProcPtr) 3)
#define PROC_TREE_4     ((ProcPtr) 4)
#define PROC_TREE_5     ((ProcPtr) 5)
#define PROC_TREE_6     ((ProcPtr) 6)
#define PROC_TREE_7     ((ProcPtr) 7)
#define PROC_IS_ROOT(aProc) ((uintptr_t)aProc <= (u32)PROC_TREE_7)
void sub_808F270(void); // ??? (text related)
void ResetDialogueScreen(void);
void APProc_DeleteAll(void);
int APProc_Exists(void);
u8 GetThread2SkipStack(void);
void sub_802F598(struct Unit* unit, int itemIdx, s8 unk);
void BeginBattleAnimations(void);

struct Proc08A184B4 {
    PROC_HEADER;
    /* 29 */ u8 _pad29_[0x4C - 0x29];
    /* 4C */ s16 game_lock;
};

void EndAllProcChildren(ProcPtr p);

extern CONST_DATA struct ProcCmd gUnknown_08A184B4[];
extern CONST_DATA u16 *gUnknown_08A18614[];
extern CONST_DATA u16 gUnknown_08A18582[];
extern CONST_DATA u16 *gUnknown_08A185AC[];
extern CONST_DATA u16 gUnknown_08A18590[];
extern CONST_DATA u16 gUnknown_08A1859E[];
void sub_8096930(int xOam1, int yOam0, u16 oam2);
void sub_8096870(int xOam1, int yOam0, int a3, u16 oam2);


struct Proc8A186B4 {
    PROC_HEADER;
    /* 29 */ u8 _pad29_[0x2A - 0x29];
    /* 2A */ u8 unk2A;
    /* 2B */ u8 unk2B;
    /* 29 */ u8 _pad2C_[0x2F - 0x2C];
    /* 2F */ u8 unk2F;
    /* 30 */ u8 unk30;
    /* 31 */ u8 unk31;
    /* 32 */ u8 unk32;
    /* 33 */ u8 unk33;
    /* 34 */ u8 unk34;
    /* 35 */ u8 unk35;
    /* 36 */ u16 unk36;
    /* 38 */ ProcPtr apProc;
};

extern CONST_DATA u16 gUnknown_08A18E62[];
void sub_80966C8(int xOam1, int yOam0, u16 oam2);
void sub_80966F0(int xOam1, int yOam0, int a3, u16 oam2);
void sub_80967B0(int xOam1, int yOam0, int a3, u16 oam2);
void sub_8096870(int xOam1, int yOam0, int a3, u16 oam2);
void sub_8096930(int xOam1, int yOam0, u16 oam2);
extern CONST_DATA u16 gUnknown_08A18E76[];
extern CONST_DATA u16 gUnknown_08A18E4E[];
extern u16 CONST_DATA gUnknown_08A1B194[];
int sub_80C0960(int chIndex);;
void DrawDecNumber(u16* a, int b, int c);
extern u16 gUnknown_02022CB0[];
ProcPtr ResetPrepScreenHandCursor(ProcPtr);
void sub_80AD4A0(int, int);
void ShowPrepScreenHandCursor(int, int, int, u16);
void DisplayFrozenUiHand(int x, int y);
extern CONST_DATA struct ProcCmd ProcScr_PrepScreenMapMenu[];
extern CONST_DATA struct ProcCmd ProcScr_PrepScreenMenuDummyItem[];

struct ProcPrepMenuItem {
	/* 00 */ PROC_HEADER;
	/* 29 */ u8 pad_29[0x2C - 0x29];
	/* 2C */ void (*effect)(ProcPtr);
	/* 30 */ int msg_rtext;
	/* 34 */ u32 msg;
	/* 38 */ u8 color;
	/* 39 */ u8 index;
	/* 3A */ u8 pad_3A[0x3C - 0x3A];
	/* 3C */ struct Text text;
};

struct ProcPrepMenu {
    PROC_HEADER;
    /* 29 */ s8 do_help;
    /* 2A */ u8 cur_index;
    /* 2B */ u8 max_index;
    /* 2C */ void (*unk2C)(ProcPtr);
    /* 30 */ int msg_rtext;
    /* 34 */ s16 xPos;
    /* 36 */ s16 yPos;
    /* 38 */ struct ProcPrepMenuItem* cmds[0x8];
    /* 58 */ u8 (*on_PressB)(ProcPtr);
    /* 5C */ u8 (*on_PressStart)(ProcPtr);
    /* 60 */ u8 (*on_End)(ProcPtr);
};
void sub_80972D4();


struct AiState
{
    /* 00 */ u8 units[116];
    /* 74 */ u8* unitIt;
    /* 78 */ u8 orderState;
    /* 79 */ u8 decideState;
    /* 7A */ s8 dangerMapFilled; // s8
    /* 7B */ u8 flags;
    /* 7C */ u8 unk7C;
    /* 7D */ u8 combatWeightTableId;
    /* 7E */ u8 unk7E;
    /* 7F */ u8 unk7F;
    /* 80 */ u32 specialItemFlags;
    /* 84 */ u8 unk84;
    /* 85 */ u8 bestBlueMov;
    /* 86 */ u8 unk86[8];
};

struct AiDecision
{
    /* 00 */ u8 actionId;

    /* 01 */ u8 unitId;
    /* 02 */ u8 xMove;
    /* 03 */ u8 yMove;
    /* 04 */ u8 unk04;
    /* 05 */ u8 unk05;
    /* 06 */ u8 targetId;
    /* 07 */ u8 itemSlot;
    /* 08 */ u8 xTarget;
    /* 09 */ u8 yTarget;

    /* 0A */ s8 actionPerformed;
};

enum
{
    AI_FLAGS_NONE = 0,

    AI_FLAG_0 = (1 << 0),
    AI_FLAG_1 = (1 << 1),
    AI_FLAG_BERSERKED = (1 << 2),
    AI_FLAG_3 = (1 << 3),
};

enum
{
    AI_UNIT_FLAG_0 = (1 << 0),
    AI_UNIT_FLAG_1 = (1 << 1),
    AI_UNIT_FLAG_2 = (1 << 2),
    AI_UNIT_FLAG_3 = (1 << 3),
    AI_UNIT_FLAG_4 = (1 << 4),
    AI_UNIT_FLAG_5 = (1 << 5),
    AI_UNIT_FLAG_6 = (1 << 6),
};

enum
{
    AI_ACTION_NONE = 0, // move only
    AI_ACTION_COMBAT = 1,
    AI_ACTION_ESCAPE = 2,
    AI_ACTION_STEAL = 3,
    AI_ACTION_PILLAGE = 4,
    AI_ACTION_STAFF = 5,
    AI_ACTION_USEITEM = 6,
    AI_ACTION_REFRESH = 7,
    AI_ACTION_TALK = 8,
    AI_ACTION_RIDEBALLISTA = 9,
    AI_ACTION_EXITBALLISTA = 10,
    AI_ACTION_DKNIGHTMARE = 11,
    AI_ACTION_DKSUMMON = 12,
    AI_ACTION_PICK = 13,
};

enum
{
    AI_COMPARE_GT,
    AI_COMPARE_GE,
    AI_COMPARE_EQ,
    AI_COMPARE_LE,
    AI_COMPARE_LT,
    AI_COMPARE_NE,
};


extern struct AiState gAiState;
extern struct AiDecision gAiDecision;

extern void(*AiDecideMainFunc)(void);

extern struct ProcCmd CONST_DATA gProcScr_CpPhase[];
extern struct ProcCmd CONST_DATA gProcScr_BerserkCpPhase[];
extern struct ProcCmd CONST_DATA gProcScr_CpOrder[];
extern struct ProcCmd CONST_DATA gProcScr_BerserkCpOrder[];
extern struct ProcCmd CONST_DATA gProcScr_CpDecide[];
extern struct ProcCmd CONST_DATA gProcScr_CpPerform[];

void AiClearDecision(void);
void AiSetDecision(s16 xMove, s16 yMove, u8 actionId, u8 targetId, u8 itemSlot, u8 xTarget, u8 yTarget);
void AiUpdateDecision(u8 actionId, u8 targetId, u8 itemSlot, u8 xTarget, u8 yTarget);
void AiDecideMain(void);


struct ItemStatBonuses
{
    /* 00 */ s8 hpBonus;
    /* 01 */ s8 powBonus;
    /* 02 */ s8 sklBonus;
    /* 03 */ s8 spdBonus;
    /* 04 */ s8 defBonus;
    /* 05 */ s8 resBonus;
    /* 06 */ s8 lckBonus;
    /* 07 */ s8 movBonus;
    /* 08 */ s8 conBonus;
};

struct ItemData
{
    /* 00 */ u16 nameTextId;
    /* 02 */ u16 descTextId;
    /* 04 */ u16 useDescTextId;

    /* 06 */ u8  number;
    /* 07 */ u8  weaponType;

    /* 08 */ u32 attributes;

    /* 0C */ const struct ItemStatBonuses* pStatBonuses;
    /* 10 */ const u8* pEffectiveness;

    /* 14 */ u8  maxUses;

    /* 15 */ u8  might;
    /* 16 */ u8  hit;
    /* 17 */ u8  weight;
    /* 18 */ u8  crit;

    /* 19 */ u8 encodedRange;

    /* 1A */ u16 costPerUse;
    /* 1C */ u8  weaponRank;
    /* 1D */ u8  iconId;
    /* 1E */ u8  useEffectId;
    /* 1F */ u8  weaponEffectId;
    /* 20 */ u8  weaponExp;
};

enum {
    // Item attributes

    IA_NONE           = 0,

    IA_WEAPON         = (1 << 0),
    IA_MAGIC          = (1 << 1),
    IA_STAFF          = (1 << 2),
    IA_UNBREAKABLE    = (1 << 3),
    IA_UNSELLABLE     = (1 << 4),
    IA_BRAVE          = (1 << 5),
    IA_MAGICDAMAGE    = (1 << 6),
    IA_UNCOUNTERABLE  = (1 << 7),
    IA_REVERTTRIANGLE = (1 << 8),
    IA_HAMMERNE       = (1 << 9), // Defined as Hammerne effect in FE6 Nightmare module, but as ??? in FE7 & FE8.
    IA_LOCK_3         = (1 << 10), // Dragons or Monster depending of game
    IA_LOCK_1         = (1 << 11),
    IA_LOCK_2         = (1 << 12),
    IA_LOCK_0         = (1 << 13), // King in FE6
    IA_NEGATE_FLYING  = (1 << 14),
    IA_NEGATE_CRIT    = (1 << 15),
    IA_UNUSABLE       = (1 << 16),
    IA_NEGATE_DEFENSE = (1 << 17),
    IA_LOCK_4         = (1 << 18),
    IA_LOCK_5         = (1 << 19),
    IA_LOCK_6         = (1 << 20),
    IA_LOCK_7         = (1 << 21),

    // Helpers
    IA_REQUIRES_WEXP = (IA_WEAPON | IA_STAFF),
    IA_LOCK_ANY = (IA_LOCK_0 | IA_LOCK_1 | IA_LOCK_2 | IA_LOCK_3 | IA_LOCK_4 | IA_LOCK_5 | IA_LOCK_6 | IA_LOCK_7 | IA_UNUSABLE)
};

enum {
    ITYPE_SWORD = 0,
    ITYPE_LANCE = 1,
    ITYPE_AXE   = 2,
    ITYPE_BOW   = 3,
    ITYPE_STAFF = 4,
    ITYPE_ANIMA = 5,
    ITYPE_LIGHT = 6,
    ITYPE_DARK  = 7,
    ITYPE_BLLST = 8,
    ITYPE_ITEM  = 9,
    ITYPE_DRAGN = 10,

    ITYPE_11    = 11,
    ITYPE_12    = 12,
};

enum {
    WPN_EFFECT_NONE    = 0,
    WPN_EFFECT_POISON  = 1,
    WPN_EFFECT_HPDRAIN = 2,
    WPN_EFFECT_HPHALVE = 3,
    WPN_EFFECT_DEVIL   = 4,
    WPN_EFFECT_PETRIFY = 5,
};

enum {
    // Unit ranges are a (sometimes) weirdly hardcoded.
    // A flagset value is used to represent the combined ranges of a unit's usable items
    // That's what those "reaches" bits are for.

    REACH_NONE   = 0,

    REACH_RANGE1 = (1 << 0),
    REACH_RANGE2 = (1 << 1),
    REACH_RANGE3 = (1 << 2),
    REACH_TO10   = (1 << 3),
    REACH_TO15   = (1 << 4),
    REACH_MAGBY2 = (1 << 5),
};

enum {
    // Weapon level identifiers

    WPN_LEVEL_0 = 0,
    WPN_LEVEL_E = 1,
    WPN_LEVEL_D = 2,
    WPN_LEVEL_C = 3,
    WPN_LEVEL_B = 4,
    WPN_LEVEL_A = 5,
    WPN_LEVEL_S = 6,
};

enum {
    // Weapon exp needed to have a given weapon level

    WPN_EXP_0 = 0,
    WPN_EXP_E = 1,
    WPN_EXP_D = 31,
    WPN_EXP_C = 71,
    WPN_EXP_B = 121,
    WPN_EXP_A = 181,
    WPN_EXP_S = 251,
};

#define ITEM_INDEX(aItem) ((aItem) & 0xFF)
#define ITEM_USES(aItem) ((aItem) >> 8)

struct Text;

char* GetItemNameWithArticle(int item, s8 capitalize);

int GetItemHpBonus(int item);
int GetItemPowBonus(int item);
int GetItemSklBonus(int item);
int GetItemSpdBonus(int item);
int GetItemDefBonus(int item);
int GetItemResBonus(int item);
int GetItemLckBonus(int item);
int MakeNewItem(int item);
s8 CanUnitUseWeapon(struct Unit* unit, int item);
s8 CanUnitUseWeaponNow(struct Unit* unit, int item);
s8 CanUnitUseStaff(struct Unit* unit, int item);
s8 CanUnitUseStaffNow(struct Unit* unit, int item);
void DrawItemMenuLine(struct Text* text, int item, s8 isGrayed, u16* mapOut);
void DrawItemMenuLineLong(struct Text* text, int item, s8 isGrayed, u16* mapOut);
void DrawItemMenuLineNoColor(struct Text* text, int item, u16* mapOut);
void DrawItemStatScreenLine(struct Text* text, int item, int nameColor, u16* mapOut);
u16 GetItemAfterUse(int item);
u32 GetUnitEquippedWeapon(struct Unit* unit);
int GetUnitEquippedWeaponSlot(struct Unit* unit);
s8 IsItemCoveringRange(int item, int range);
void EquipUnitItemSlot(struct Unit* unit, int itemSlot);
s8 IsItemEffectiveAgainst(u16 item, struct Unit* unit);
s8 IsUnitEffectiveAgainst(struct Unit* actor, struct Unit* target);
char* GetItemDisplayRangeString(int item);
int GetWeaponLevelFromExp(int wexp);
char* GetItemDisplayRankString(int item);
int GetDisplayRankStringFromExp(int wexp);
char* GetWeaponTypeDisplayString(int wpnType);
void GetWeaponExpProgressState(int wexp, int* outValue, int* outMax);
s8 IsItemDanceRing(int item);
s8 IsItemDisplayUsable(struct Unit* unit, int item);
s8 CanUnitUse_unused(struct Unit* unit, int item);
int GetUnitItemHealAmount(struct Unit* unit, int item);
int GetUnitItemSlot(struct Unit* unit, int itemIndex);
s8 IsItemStealable(int item);
s8 IsItemHammernable(int item);
int GetItemReachBits(int item);
int GetUnitWeaponReachBits(struct Unit* unit, int itemSlot);
int GetUnitItemUseReachBits(struct Unit* unit, int itemSlot);
int GetUnitStaffReachBits(struct Unit* unit);
int GetConvoyItemCostSum(void);
int GetUnitItemCostSum(void);
int GetPartyTotalGoldValue(void);
void SetItemUnsealedForCharacter(int item, u8 unk);
s8 IsItemUnsealedForUnit(struct Unit* unit, int item);
int GetItemIndex(int item);
char* GetItemName(int item);
int GetItemDescId(int item);
int GetItemUseDescId(int item);
int GetItemType(int item);
int GetItemAttributes(int item);
int GetItemUses(int item);
int GetItemMaxUses(int item);
int GetItemMight(int item);
int GetItemHit(int item);
int GetItemWeight(int item);
int GetItemCrit(int item);
int GetItemCost(int item);
int GetItemMinRange(int item);
int GetItemMaxRange(int item);
int GetItemEncodedRange(int item);
int GetItemRequiredExp(int item);
const u8* GetItemEffectiveness(int item);
const struct ItemStatBonuses* GetItemStatBonuses(int item);
int GetItemIconId(int item);
int GetItemWeaponEffect(int item);
int GetItemUseEffect(int item);
int GetItemCostPerUse(int item);
int GetItemMaxCost(int item);
int GetItemAwardedExp(int item);
const struct ItemData* GetItemData(int item);

struct Trap* GetRiddenBallistaAt(int xPos, int yPos);
int GetBallistaItemAt(int xPos, int yPos);
int GetSomeBallistaItemAt(int xPos, int yPos);
struct Trap* AddBallista(int xPos, int yPos, int ballistaType);
void RideBallista(struct Unit* unit);
void TryRemoveUnitFromBallista(struct Unit* unit);
s8 IsBallista(struct Trap* trap);
int sub_8037AC0(struct Trap* trap);
int sub_8037AEC(struct Trap* trap);
int GetBallistaItemUses(struct Trap* trap);
// ??? ClearBallistaOccupied(???);
// ??? SetBallistaOccupied(???);

struct SceneState
{
    /* 00 */ const char* nextChar;
    /* 04 */ u32 unk04;
    /* 08 */ u8 defaultColor;
    /* 09 */ u8 unkLine09;
    /* 0A */ u8 unkLine0A;
    /* 0B */ u8 unkLine0B;
    /* 0C */ u8 unk0C;
    /* 0D */ u8 unk0D;
    /* 0E */ u8 unkWidth0E;
    /* 0F */ s8 speakingFaceSlot;
    /* 10 */ s8 unkFaceSlot10;
    /* 11 */ u8 selectedFaceSlot;
    /* 12 */ s8 instantScroll;
    /* 13 */ s8 charDisplayDelay;
    /* 14 */ s8 charDisplayClock;
    /* 15 */ u8 unk15;
    /* 16 */ u8 unk16;
    /* 17 */ u8 unk17;
    /* 18 */ ProcPtr faces[8];
    /* 38 */ u32 unk38;
    /* 3C */ u32 userNumber;
    /* 40 */ char userNumberString[0x20];
    /* 60 */ char userString[0x20];
    /* 80 */ u16 config;
    /* 82 */ u8 unk82;
    /* 83 */ u8 unk83;
};

enum
{
    MENU_ITEM_MAX = 11,       //!< max menu item count
    MENU_OVERRIDE_MAX = 0x10, //!< max menu overrides
};


// type decls

struct MenuDef;
struct MenuItemDef;

struct MenuProc;
struct MenuItemProc;

struct MenuRect { s8 x, y, w, h; };

typedef u8(*MenuAvailabilityFunc)(const struct MenuItemDef*, int);
typedef u8(*MenuSelectFunc)(struct MenuProc*, struct MenuItemProc*);

struct MenuItemDef
{
    /* 00 */ const char* name;

    /* 04 */ u16 nameMsgId, helpMsgId;
    /* 08 */ u8 color, overrideId;

    /* 0C */ u8(*isAvailable)(const struct MenuItemDef*, int number);

    /* 10 */ int(*onDraw)(struct MenuProc*, struct MenuItemProc*);

    /* 14 */ u8(*onSelected)(struct MenuProc*, struct MenuItemProc*);
    /* 18 */ u8(*onIdle)(struct MenuProc*, struct MenuItemProc*);

    /* 1C */ int(*onSwitchIn)(struct MenuProc*, struct MenuItemProc*);
    /* 20 */ int(*onSwitchOut)(struct MenuProc*, struct MenuItemProc*);
};

struct MenuDef
{
    /* 00 */ struct MenuRect rect;
    /* 04 */ u8 style;
    /* 08 */ const struct MenuItemDef* menuItems;

    /* 0C */ void(*onInit)(struct MenuProc*);
    /* 10 */ void(*onEnd)(struct MenuProc*);
    /* 14 */ void(*_u14)(struct MenuProc*);
    /* 18 */ u8(*onBPress)(struct MenuProc*, struct MenuItemProc*);
    /* 1C */ u8(*onRPress)(struct MenuProc*);
    /* 20 */ u8(*onHelpBox)(struct MenuProc*, struct MenuItemProc*);
};

struct MenuProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ struct MenuRect rect;
    /* 30 */ const struct MenuDef* def;

    /* 34 */ struct MenuItemProc* menuItems[MENU_ITEM_MAX];

    /* 60 */ u8 itemCount;
    /* 61 */ u8 itemCurrent;
    /* 62 */ u8 itemPrevious;
    /* 63 */ u8 state;

    /* 64 */ u8 backBg : 2;
    /* 64 */ u8 frontBg : 2;

    /* 66 */ u16 tileref;
    /* 68 */ u16 unk68;
};
struct MenuItemProc
{
    /* 00 */ PROC_HEADER;

    /* 2A */ short xTile;
    /* 2C */ short yTile;

    /* 30 */ const struct MenuItemDef* def;

    /* 34 */ struct Text text;

    /* 3C */ s8 itemNumber;
    /* 3D */ u8 availability;
};

struct SuspendSavePackedUnit {     /* Suspend Data */
    /* 00 */ u8 pid;
    /* 01 */ u8 jid;
    /* 02 */ u8 ai1;
    /* 03 */ u8 rescue;
    /* 04 */ u32 state;

    /* 08 */ u16 item1;
    /* 0A */ u16 item2;
    /* 0C */ u16 item3;
    
    /* 0E */ s8 maxHP;
    /* 0F */ s8 curHP;
    /* 10 */ u8 exp;
    /* 11 */ u8 aiFlags;
    /* 12 */ u8 ranks[8];
    /* 1A */ u8 supports[UNIT_SUPPORT_MAX_COUNT];
    /* 21 */ u8 ai1data;
    /* 22 */ u8 ai2;
    /* 23 */ u8 ai2data;

    /* 24 */ u32 level      : 5;
             u32 xPos       : 6;
             u32 yPos       : 6;
             u32 pow        : 5;
             u32 skl        : 5;
             u32 spd        : 5;
    /* 28 */ u32 def        : 5;
             u32 res        : 5;
             u32 lck        : 5;
             u32 conBonus   : 5;

             u32 statusIndex_l      : 3;
             u32 statusDuration     : 3;
             u32 torchDuration      : 3;
             u32 barrierDuration    : 3;
    
    /* 2C */ u32 movBonus   : 4;
             u32 item4      : 14;
             u32 item5      : 14;
    
    /* 30 */ u8 ballistaIndex;
    
    /* 31 */ u8 _u46;
    /* 32 */ u16 ai3And4;
    /* 34 */
};

struct UnitUsageStats {
	/* 000 */ unsigned lossAmt     : 8;
	/* 008 */ unsigned favval      : 16;
	/* 024 */ unsigned actAmt      : 8;
	/* 032 */ unsigned statViewAmt : 8;
	/* 040 */ unsigned deathLoc    : 6;
	/* 046 */ unsigned deathTurn   : 10;
	/* 056 */ unsigned deployAmt   : 6;
	/* 062 */ unsigned moveAmt     : 10;
	/* 072 */ unsigned deathCause  : 4;
	/* 076 */ unsigned expGained   : 12;
	/* 088 */ unsigned winAmt      : 10;
	/* 098 */ unsigned battleAmt   : 12;
	/* 110 */ unsigned killerPid   : 9;
	/* 119 */ unsigned deathSkirm  : 1;
	/* 120 */ /* 8bit pad */
};

struct ChapterStats {
    /* 00 */ u16 chapter_index : 0x07;
             u16 chapter_turn  : 0x09;
             u16 chapter_time  : 0x10;
};

struct Dungeon {
    /* 00 */ u32 expEarned:16;

    /* 02 */ u32 unitsUsed:8;

    /* 03 */ u32 turnCount:9;
    /* 04 */ u32 mapTime:18;

    /* 06 */ u32 enemiesDefeated:16;

    /* 08 */ u32 clearCount:7;
    /* 09 */ u32 postgameEnemiesDefeated:10;
    /* 0A */ u32 postgameClearCount:4;
    /* 0B */ u32 unk_0B_0:4; // ??
    /* 0B */ u32 unk_0B_4:4; // ??
};

struct Trap
{
    /* 00 */ u8 xPos;
    /* 01 */ u8 yPos;

    /* 02 */ u8 type;

    /* 03 */ u8 extra; // extra data (meaning varies based on trap type)
    /* 04 */ s8 data[4]; // more extra data (see above enum for per trap type entry allocations)
};

struct GameSavePackedUnit {       /* Save Data */
    /* 00 */ u32 jid      : 7;
             u32 level      : 5;
             u32 exp        : 7;
             u32 xPos       : 6;
             u32 yPos       : 6;

             u32 flag       : 13;

             u32 max_hp     : 6;
             u32 pow        : 5;
             u32 skl        : 5;
             u32 spd        : 5;
             u32 def        : 5;
             u32 res        : 5;
             u32 lck        : 5;
             u32 con_bonus  : 5;
             u32 mov_bonus  : 5;
             u32 item1      : 14;
             u32 item2      : 14;
             u32 item3      : 14;
             u32 item4      : 14;
             u32 item5      : 14;
    
    /* 14 */ u8 pid;
    /* 15 */ u8 wpnRanks[0x8];
    /* 1D */ u8 supports[UNIT_SUPPORT_MAX_COUNT];
    /* 24 */
};

struct GMUnit {
    /* 00 */ u8 state;
    /* 01 */ u8 location;
    /* 02 */ s16 id; // character or class ID
};

struct GMNode {
    /* 00 */ u8 state;
};


enum
{
    // For use with GMapData:state

    GMAP_STATE_BIT0 = (1 << 0),
    GMAP_STATE_BIT1 = (1 << 1),
    GMAP_STATE_BIT2 = (1 << 2),
    GMAP_STATE_BIT3 = (1 << 3),
    GMAP_STATE_BIT4 = (1 << 4),
    GMAP_STATE_BIT5 = (1 << 5),
    GMAP_STATE_BIT6 = (1 << 6),
    GMAP_STATE_BIT7 = (1 << 7),
};


extern struct GMapData gGMData;

struct GmRouteProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ u32 chr;
    /* 30 */ u8 pal;
    /* 31 */ u8 flags;
    /* 32 */ u8 unk_32;
    /* 33 */ u8 unk_33;
    /* 34 */ u8 bgA;
    /* 35 */ u8 bgB;
    /* 36 */ s8 x1;
    /* 37 */ s8 y1;
    /* 38 */ s8 x2;
    /* 39 */ s8 y2;
    /* 3A */ u8 bgPriority;
    /* 3C */ s16 unk_3c;
    /* 3E */ s16 unk_3e;
    /* 40 */ struct OpenPaths * pOpenPaths;
};

struct Unknown_3001DA8
{
    /* 00 */ s8 unk_00;
    /* 01 */ s8 unk_01;
    /* 02 */ s8 unk_02;
    /* 03 */ s8 unk_03;
    /* 04 */ s8 unk_04;
    /* 05 */ s8 unk_05;
};

struct GMapScreenVSyncProc
{
    /* 00 */ PROC_HEADER;
    /* 2C */ u8 * unk_2c;
    /* 30 */ u16 * unk_30;
    /* 34 */ u8 * unk_34;
    /* 38 */ s16 unk_38;
    /* 3C */ struct Unknown_3001DA8 * unk_3c;
    /* 40 */ u16 unk_40;
    /* 44 */ void * unk_44;
};

struct GmScreenProc
{
    /* 00 */ PROC_HEADER;
    /* 29 */ u8 unk_29_0 : 1;
    /* 2A */ u8 unk_2a;
    /* 2B */ s8 unk_2b;
    /* 2C */ s8 unk_2c;
    /* 2D */ s8 unk_2d;
    /* 2E */ s8 unk_2e;
    /* 2F */ u8 unk_2f;
    /* 30 */ u8 unk_30;
    /* 31 */ u8 unk_31;
    /* 32 */ u8 unk_32;
    /* 33 */ u8 unk_33;
    /* 34 */ s16 unk_34;
    /* 36 */ s16 unk_36;
    /* 38 */ u16 unk_38;
    /* 3A */ u16 unk_3a;
    /* 3C */ u8 * unk_3c;
    /* 40 */ u16 * unk_40;
    /* 44 */ u8 * unk_44;
    /* 48 */ struct GMapScreenVSyncProc * unk_48;
    /* 4C */ struct GmRouteProc * unk_4c;
};

struct GmNodeIconDisplayProc
{
    /* 00 */ PROC_HEADER;
    /* 2C */ u32 chr;
    /* 30 */ u8 pal;
    /* 31 */ u8 unk_31;
    /* 32 */ u8 unk_32_0 : 1;
    /* 32 */ u8 unk_32_1 : 1;
    /* 33 */ u8 nodeId;
    /* 34 */ u32 unk_34[1];
    /* 38 */ struct APHandle * ap;
    /* 3C */ struct GmScreenProc * pScreenProc;
};

enum
{
    GMAPUNIT_FLAG_DISPLAY   = (1 << 0),
    GMAPUNIT_FLAG_BLEND     = (1 << 1),
    GMAPUNIT_FLAG_UPDATEGFX = (1 << 2),
};

struct GMapUnitProc
{
    /* 00 */ PROC_HEADER;
    /* 2A */ u16 flags;
    /* 2C */ u16 unk_2c; // AP obj priority node
    /* 2E */ u16 unk_2e;
    /* 30 */ int unk_30; // base tile index for SMS gfx?
    /* 34 */ s8 index; // within container proc
    /* 35 */ u8 faction;
    /* 36 */ u8 pal;
    /* 37 */ s8 animId;
    /* 38 */ u16 unk_38; // class initially
    /* 3A */ u16 unk_3a; // class initially
    /* 3C */ u16 x;
    /* 3E */ u16 y;
    /* 40 */ struct APHandle * ap;
};

struct GMapUnitContainerProc
{
    /* 00 */ PROC_HEADER;
    /* 2C */ int unk_2c;
    /* 30 */ u8 unk_30;
    /* 34 */ struct GMapUnitProc * pMapUnitProcs[7];
};

struct WorldMapMainProc
{
    /* 00 */ PROC_HEADER;

    /* 29 */ u8 unk_29_0 : 1;
    /* 29 */ u8 unk_29_1 : 1;
    /* 29 */ u8 unk_29_2 : 1;
    /* 29 */ u8 unk_29_3 : 1;
    /* 29 */ u8 unk_29_4 : 1;
    /* 29 */ u8 unk_29_5 : 1;
    /* 29 */ u8 unk_29_6 : 1;
    /* 29 */ u8 unk_29_7 : 1;

    /* 2A */ u8 unk_2a;
    /* 2C */ int unk_2c;
    /* 30 */ STRUCT_PAD(0x30, 0x3a);

    /* 3A */ u16 unk_3a;
    /* 3C */ u16 unk_3c; // pad?
    /* 3E */ u8 unk_3e;
    /* 3F */ u8 unk_3f;
    /* 40 */ s8 unk_40;
    /* 41 */ s8 unk_41;
    /* 44 */ struct GmScreenProc * unk_44; // GmapScreen
    /* 48 */ struct GmNodeIconDisplayProc * unk_48; // GmNodeIconDisplay
    /* 4C */ struct GMapUnitContainerProc * unk_4c; // Gmap Unit Container
    /* 50 */ ProcPtr unk_50; // Gmap Cursor
    /* 54 */ ProcPtr unk_54; // Gmap MU
};

struct GMapMovementPathData
{
    /* 00 */ int elapsedTime;
    /* 04 */ s16 x;
    /* 06 */ s16 y;
};

struct GMapPathData
{
    /* 00 */ u8 * gfxData;
    /* 04 */ u8 start;
    /* 05 */ u8 end;
    /* 08 */ const struct GMapMovementPathData * movementPath;
};

extern const struct GMapPathData gWMPathData[];

enum
{
    GMAP_NODE_PLACEMENT_PROGRESSION  = 0,
    GMAP_NODE_PLACEMENT_FRELIA       = 1,
    GMAP_NODE_PLACEMENT_MONSTERSPAWN = 2,
    GMAP_NODE_PLACEMENT_DUNGEON      = 3,
};

enum
{
    GMAP_ENCOUNTERS_NONE      = 1,
    GMAP_ENCOUNTERS_MONSTERS  = 2,
    GMAP_ENCOUNTERS_DUNGEON   = 3,
};

struct GMapNodeData
{
    /* 00 */ u8 placementFlag;
    /* 01 */ s8 encounters;
    /* 02 */ u8 iconPreClear;
    /* 03 */ u8 iconPostClear;
    /* 04 */ u8 unk_04;  // chapter ID start
    /* 05 */ u8 unk_05;  // chapter ID end
    /* 06 */ s16 unk_06; // event condition flag
    /* 08 */ s8 unk_08[4]; // next destination id
    /* 0C */ u16 * armory;
    /* 10 */ u16 * vendor;
    /* 14 */ u16 * secretShop;
    /* 18 */ s16 x;
    /* 1A */ s16 y;
    /* 1C */ u16 nameTextId;
    /* 1E */ u8 shipTravelFlag;
    /* 1F */ STRUCT_PAD(0x1F, 0x20);
};

extern const struct GMapNodeData gWMNodeData[];

struct NodeIcon
{
    /* 00 */ u16 sheetTileId;
    /* 02 */ STRUCT_PAD(0x2, 0x4);
    /* 04 */ u16 * pSpriteData;
    /* 08 */ s8 xCenter;
    /* 09 */ s8 yCenter;
    /* 0A */ s8 width;
    /* 0B */ s8 height;
    /* 0C */ s8 xFlagOrigin;
    /* 0D */ s8 yFlagOrigin;
    /* 0E */ STRUCT_PAD(0xe, 0xf);
};

extern const struct NodeIcon gWMNodeIconData[];

extern struct ProcCmd gProcScr_WorldMapMain[];

void MapRoute_80BC2DC(struct GmRouteProc * proc);
ProcPtr StartGMapRoute(ProcPtr parent, struct OpenPaths * pPaths, int c, int d);

#define EVT_SUB_CMD(scr) (*((const u8 *)(scr)) & 0xF)
#define EVT_SUB_CMD_LO(scr) (*((const u16 *)(scr)) & 0x7)
#define EVT_SUB_CMD_HI(scr) ((*((const u16 *)(scr)) & 0xF) >> 0x3)

#define EVT_CMD_LEN(scr) ((*((const u16 *)(scr)) >> 0x4) & 0xF)
#define EVT_CMD_ARGV(scr) ((const s16 *)(scr) + 1)
#define EVT_CMD_ARG32_BE(scr) ((u16)EVT_CMD_ARGV(scr)[1] | ((u16)EVT_CMD_ARGV(scr)[2] << 0x10))
#define EVT_CMD_ARG32_LE(scr) (*((u32 *)(EVT_CMD_ARGV(scr) + 1)))

#define EVENT_IS_SKIPPING(aEventEngineProc) (((aEventEngineProc)->evStateBits >> 2) & 1)

#define EVENT_SLOT_COUNT 0xE
extern unsigned gEventSlots[EVENT_SLOT_COUNT];
extern u32 gEventSlotCounter;
struct Struct03000430 {
    u8 unk00;
    u8 unk01;
    u8 unk02;
    u8 unk03;
};

struct Struct03000428 {
    struct Struct03000430 sub;
    u8 unk04;
    u8 unk05;
};
extern struct Struct03000428 gUnknown_03000428;
extern struct Struct03000430 gUnknown_03000430;

ProcPtr StartTalk(int x, int y, const char* str);

enum EventCommandReturnCode {
    EVC_ADVANCE_CONTINUE = 0,
    EVC_STOP_CONTINUE    = 1,

    EVC_ADVANCE_YIELD    = 2,
    EVC_STOP_YIELD       = 3,
    
    EVC_UNK4             = 4,
    EVC_END              = 5,
    EVC_ERROR            = 6
};


struct Unit * GetUnitStructFromEventParameter(s16 pid);

struct Anim {
    /* 00 */ u16 state;
    /* 02 */ short xPosition;
    /* 04 */ short yPosition;
    /* 06 */ short timer;
    /* 08 */ u16 oam2Base;
    /* 0A */ u16 drawLayerPriority;
    /* 0C */ u16 state2;
    /* 0E */ u16 nextRoundId;
    /* 10 */ u16 state3;
    /* 12 */ u8 currentRoundType;
    /* 13 */ u8 unk13;

    /* 14 */ u8 commandQueueSize;
    /* 15 */ u8 commandQueue[7];

    /* 1C */ u32 oamBase;

    /* 20 */ const u32 * pScrCurrent;
    /* 24 */ const u32 * pScrStart;
    /* 28 */ const void * pImgSheet;
    /* 2C */ void* pImgSheetBuf;
    /* 30 */ const void * pSpriteDataPool; // aka "OAM data"

    /* 34 */ struct Anim * pPrev;
    /* 38 */ struct Anim * pNext;

    /* 3C */ const void * pSpriteData;
    /* 40 */ const void * pUnk40;
    /* 44 */ const void * pUnk44;
};

extern struct ProcCmd gUnknown_085D58F0[];

int CheckRoundMiss(s16);

#define EFX_BG_WIDTH 66
#define EFX_TILEMAP_LOC(aMap, aX, aY) (aMap + (aX) + EFX_BG_WIDTH * (aY))

struct ProcEfx {
    PROC_HEADER;

    /* 29 */ u8 hitted;
    /* 2A */ u8 type;
    /* 2B */ STRUCT_PAD(0x2B, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 unk2E;
    /* 30 */ s16 unk30;
    /* 32 */ u16 unk32;
    /* 34 */ STRUCT_PAD(0x34, 0x44);
    /* 44 */ u32 unk44;
    /* 48 */ u32 unk48;
    /* 4C */ u32 unk4C;
    /* 50 */ u32 unk50;
    /* 54 */ s16 * unk54;
    /* 58 */ s16 ** unk58;
    /* 5C */ struct Anim * anim;
    STRUCT_PAD(0x60, 0x64);
    ProcPtr unk_64;
};

struct ProcEfxBG {
    PROC_HEADER;

    /* 29 */ u8 unk29;
    STRUCT_PAD(0x2A, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 terminator;
    /* 30 */ s16 unk30;
    STRUCT_PAD(0x32, 0x44);
    /* 44 */ u32 frame;
    /* 48 */ const u16 * frame_config;
    /* 4C */ u16 ** tsal;
    /* 50 */ u16 ** tsar;
    /* 54 */ u16 ** img;
    /* 58 */ u16 ** pal;
    /* 5C */ struct Anim * anim;
};

struct ProcEfxBGCOL {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 timer2;
    /* 30 */ s16 terminator;
    STRUCT_PAD(0x32, 0x44);
    /* 44 */ u32 frame;
    /* 48 */ const u16 * frame_config;
    /* 4C */ void * pal;
    STRUCT_PAD(0x50, 0x5C);
    /* 5C */ struct Anim * anim;
};

struct ProcEfxRST
{
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 unk2E;
    /* 30 */ s16 unk30;
    STRUCT_PAD(0x32, 0x5C);
    /* 5C */ struct Anim * anim;
    STRUCT_PAD(0x60, 0x64);
    /* 64 */ ProcPtr unk64;
};

struct ProcEfxOBJ {
    PROC_HEADER;

    /* 29 */ u8 unk29;
    /* 2A */ u8 unk2A;
    STRUCT_PAD(0x2B, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 terminator;
    /* 30 */ u16 unk30;
    /* 32 */ u16 unk32;
    /* 34 */ u16 unk34;
    /* 36 */ u16 unk36;
    /* 38 */ u16 unk38;
    /* 3A */ u16 unk3A;
    /* 3C */ u16 unk3C;
    /* 3E */ u16 unk3E;
    /* 40 */ u16 unk40;
    /* 42 */ u16 unk42;
    /* 44 */ int unk44;
    /* 48 */ int unk48;
    STRUCT_PAD(0x4C, 0x5C);
    /* 5C */ struct Anim * anim;
    /* 60 */ struct Anim * anim2;
    /* 64 */ struct Anim * anim3;
};

struct ProcEkrDispUP {
    PROC_HEADER;

    /* 29 */ u8 unk29;
    /* 2A */ u8 unk2A;
    /* 2B */ u8 _pad_2B[0x32 - 0x2B];
    /* 32 */ u16 unk32;
    /* 34 */ u8 _pad_32[0x3A - 0x34];
    /* 3A */ u16 unk3A;
    /* 3C */ u8 _pad_3C[0x4C - 0x3C];
    /* 4C */ u32 unk4C;
    /* 50 */ u32 unk50;
};

extern struct ProcEkrDispUP *gpProcEkrDispUP;

struct Unknown_030053E0 {
    u16 u00;
    u16 u02;
    u16 u04;
    u16 u06;
    u16 u08;
    u16 u0a;
    u16 u0c;
    u16 u0e;
    u16 u10;
    u16 u12;
    u16 *buf;
    u8 *u18;
    u8 *u1c;
    u8 *u20;
    void (*u24)(void);
};
extern struct Unknown_030053E0 gUnknown_030053E0;

struct Unknown_030053A0 {
    /* 00 */ u8 u00;
    /* 01 */ u8 u01;
    /* 02 */ u16 u02;
    /* 04 */ u16 u04;
    /* 06 */ u16 u06;
    /* 08 */ u16 u08;
    /* 0A */ u16 u0a;
    /* 0C */ u16 u0c;
    /* 0E */ u16 u0e;
    /* 10 */ u16 u10;
    /* 14 */ struct Anim * anim1;
    /* 18 */ struct Anim * anim2;
    /* 1C */ void * u1c;
    /* 20 */ void * u20;
    /* 24 */ void * u24;
    /* 28 */ void * u28;
    /* 2C */ void * _u2c;
    /* 30 */ struct Unknown_030053E0 * u30;
};

extern struct Unknown_030053A0 gUnknown_030053A0;

struct Unknown_0201FADC {
    /* 00 */ u16 things[8];
    /* 10 */ u16 _pad_10;
    /* 14 */ ProcPtr p1;
    /* 18 */ ProcPtr p2;
    /* 1c */ u32 u1c;
    /* 20 */ u8 * u20;
    /* 24 */ u32 _pad_24;
};

extern struct Unknown_0201FADC gUnknown_0201FADC;

struct ProcEfxFlashing {
    PROC_HEADER;

    /* 29 */ u8 unk29;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ s16 timer;
    /* 2E */ s16 terminator;
    /* 30 */ s16 terminator2;

    STRUCT_PAD(0x32, 0x5C);

    /* 5C */ struct Anim * anim;
};

struct ProcEfxHPBarColorChange {
    PROC_HEADER;

    /* 29 */ u8 unk29;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ s16 timer1;
    /* 2E */ s16 timer2;
    /* 30 */ s16 terminator2;

    STRUCT_PAD(0x32, 0x44);

    /* 44 */ u32 frame1;
    /* 48 */ const u16 * frame_lut1;
    /* 4C */ u32 frame2;
    /* 50 */ const u16 * frame_lut2;
    /* 54 */ u32 unk54;
    /* 58 */ u32 unk58;
    /* 5C */ struct Anim * anim;
};


extern struct ProcEfxHPBarColorChange * gpProcEfxHPBarColorChange;

struct ProcEfxHPBar {
    PROC_HEADER;

    /* 29 */ u8 death;
    /* 2A */ u8 _pad_2A[0x2C - 0x2A];
    /* 2C */ s16 pos;
    /* 2E */ s16 cur;
    /* 30 */ u8 _pad_30[0x48 - 0x30];
    /* 48 */ int diff;
    /* 4C */ int pre;
    /* 50 */ int post;
    /* 54 */ int timer;
    /* 58 */ int finished;
    /* 5C */ struct Anim * anim5C;
    /* 60 */ struct Anim * anim60;
    /* 64 */ struct Anim * anim64;
};

void ekrDispUPMain(struct ProcEkrDispUP * proc);

struct ProcEfxDead {
    PROC_HEADER;

    /* 29 */ STRUCT_PAD(0x29, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 terminator;
    /* 30 */ STRUCT_PAD(0x30, 0x5C);
    /* 5C */ struct Anim * anim1;
    /* 60 */ struct Anim * anim2;
};

void NewEfxDeadEvent(struct Anim * anim1, struct Anim * anim2);
void sub_8052DFC(struct ProcEfxDead * proc);
void sub_8052E7C(struct ProcEfxDead * proc);
void sub_8052EAC(struct ProcEfxDead * proc);
void sub_8052F24(struct ProcEfxDead * proc);
void sub_8052F84(struct ProcEfxDead * proc);
void NewEfxDead(struct Anim * anim1, struct Anim * anim2);
void sub_8052FEC(struct ProcEfxDead * proc);
void sub_8053080(struct ProcEfxDead * proc);
void NewEfxDeadPika(struct Anim * anim1, struct Anim * anim2);
void EfxDeadPikaMain(struct ProcEfxDead * proc);
void NewEfxDeadAlpha(struct Anim * anim1, struct Anim * anim2);
void EfxDeadAlphaMain(struct ProcEfxDead * proc);
void NewEfxDeadDragonAlpha(struct Anim * anim1, struct Anim * anim2);
void EfxDeadDragonAlphaMain(struct ProcEfxDead * proc);

struct ProcEfxStatusUnit {
    PROC_HEADER;
    /* 29 */ u8 invalid;
    /* 2A */ u8 _pad_2A[0x2C - 0x2A];
    /* 2C */ u16 timer;
    /* 2E */ u8 _pad_2D[0x32 - 0x2E];
    /* 32 */ s16 red;
    /* 34 */ s16 green;
    /* 36 */ s16 blue;
    /* 38 */ u8 _pad_38[0x44 - 0x38];
    /* 44 */ u32 frame;
    /* 48 */ const u16 *frame_lut;
    /* 4C */ u32 debuff;
    /* 50 */ u32 debuf_bak;

    /* 54 */ u8 _pad_54[0x5C - 0x54];
    /* 5C */ struct Anim * anim;
};

extern struct ProcEfxStatusUnit *gpProcEfxStatusUnits[2];

void NewEfxStatusUnit(struct Anim * anim);
void EndEfxStatusUnits(struct Anim *anim);
void DeleteEach6C_efxStatusUnit(void);
void DisableEfxStatusUnits(struct Anim * anim);
void EnableEfxStatusUnits(struct Anim * anim);
void SetUnitEfxDebuff(struct Anim * anim, int debuff);
u32 GettUnitEfxDebuff(struct Anim * anim);
void EfxStatusUnitSomePalModify(struct Anim * anim, int, int, int);
void EfxStatusUnitMain(struct ProcEfxStatusUnit * proc);
void EfxStatusUnitEnd(struct ProcEfxStatusUnit * proc);

struct ProcEfxWeaponIcon {
    PROC_HEADER;

    /* 29 */ STRUCT_PAD(0x29, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ STRUCT_PAD(0x2E, 0x44);
    /* 44 */ u32 frame;
    /* 48 */ const u16 *frame_lut;
    /* 4C */ u32 unk4C;
    /* 50 */ u32 invalid;
    /* 54 */ int eff1;
    /* 58 */ int eff2;
};

extern struct ProcEfxWeaponIcon *gpProcEfxWeaponIcon;

void NewEfxWeaponIcon(s16 a, s16 b);
void EndProcEfxWeaponIcon(void);
void DisableEfxWeaponIcon(void);
void EnableEfxWeaponIcon(void);
void sub_8054F10(struct ProcEfxWeaponIcon * proc);
void sub_8054F78(struct ProcEfxWeaponIcon * proc);

struct ProcEfxSpellCast {
    PROC_HEADER;

    /* 29 */ u8 done;
    /* 2A */ STRUCT_PAD(0x2A, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 terminator;
};

extern struct ProcEfxSpellCast * gpProcEfxSpellCast;

void NewEfxSpellCast(void);
void RegisterEfxSpellCastEnd(void);
void EndEfxSpellCast(void);
void sub_8055038(struct ProcEfxSpellCast * proc);
void sub_805509C(struct ProcEfxSpellCast * proc);
void sub_80550DC(struct ProcEfxSpellCast * proc);

struct ProcEfxSkill {
    PROC_HEADER;

    /* 29 */ STRUCT_PAD(0x29, 0x2C);

    /* 2C */ s16 timer;

    /* 2E */ STRUCT_PAD(0x2E, 0x3A);

    /* 3A */ s16 caught_debuff;

    /* 3C */ STRUCT_PAD(0x3C, 0x44);

    /* 44 */ u32 frame;
    /* 48 */ const u16 * time_lut;
    /* 4C */ u16 ** tsa_lut;
    /* 50 */ u16 ** tsa_cur;
    /* 54 */ u16 ** img_lut;
    /* 58 */ u16 ** pal_lut;
    /* 5C */ struct Anim * anim;
};

void NewEfxSkillType01BG(struct Anim * anim);
void EfxSkillType01BGMain(struct ProcEfxSkill * proc);
void NewEfxSkillCommonBG(struct Anim * anim, u8 val);
void sub_806E610(struct ProcEfxSkill * proc);
void sub_806E638(struct ProcEfxSkill * proc);
void sub_806E6E0(struct ProcEfxSkill * proc);
void sub_806E79C(struct ProcEfxSkill * proc);
void sub_806E868(struct ProcEfxSkill * proc);
void sub_806E8A4(struct ProcEfxSkill * proc);

extern CONST_DATA u16 Img_EfxSkill1[];
extern CONST_DATA u16 Img_EfxSkill2[];
extern CONST_DATA u16 Img_EfxSkill3[];
extern CONST_DATA u16 Img_EfxSkill4[];
extern CONST_DATA u16 Img_EfxSkill5[];
extern CONST_DATA u16 Img_EfxSkill6[];
extern CONST_DATA u16 Img_EfxSkill7[];
extern CONST_DATA u16 Img_EfxSkill8[];
extern CONST_DATA u16 Img_EfxSkill9[];
extern CONST_DATA u16 Img_EfxSkillA[];
extern CONST_DATA u16 Img_EfxSkillB[];
extern CONST_DATA u16 Img_EfxSkillC[];
extern CONST_DATA u16 Img_EfxSkillD[];
extern CONST_DATA u16 Img_EfxSkillE[];
extern CONST_DATA u16 Img_EfxSkillF[];
extern CONST_DATA u16 Img_EfxSkill10[];

extern CONST_DATA u16 Pal_EfxSkill1[];
extern CONST_DATA u16 Pal_EfxSkill2[];
extern CONST_DATA u16 Pal_EfxSkill3[];
extern CONST_DATA u16 Pal_EfxSkill4[];
extern CONST_DATA u16 Pal_EfxSkill5[];
extern CONST_DATA u16 Pal_EfxSkill6[];
extern CONST_DATA u16 Pal_EfxSkill7[];
extern CONST_DATA u16 Pal_EfxSkill8[];
extern CONST_DATA u16 Pal_EfxSkill9[];
extern CONST_DATA u16 Pal_EfxSkillA[];
extern CONST_DATA u16 Pal_EfxSkillB[];
extern CONST_DATA u16 Pal_EfxSkillC[];
extern CONST_DATA u16 Pal_EfxSkillD[];
extern CONST_DATA u16 Pal_EfxSkillE[];
extern CONST_DATA u16 Pal_EfxSkillF[];
extern CONST_DATA u16 Pal_EfxSkill10[];

extern CONST_DATA u16 Tsa_EfxSkill1[];
extern CONST_DATA u16 Tsa_EfxSkill2[];
extern CONST_DATA u16 Tsa_EfxSkill3[];
extern CONST_DATA u16 Tsa_EfxSkill4[];
extern CONST_DATA u16 Tsa_EfxSkill5[];
extern CONST_DATA u16 Tsa_EfxSkill6[];
extern CONST_DATA u16 Tsa_EfxSkill7[];
extern CONST_DATA u16 Tsa_EfxSkill8[];
extern CONST_DATA u16 Tsa_EfxSkill9[];
extern CONST_DATA u16 Tsa_EfxSkillA[];
extern CONST_DATA u16 Tsa_EfxSkillB[];
extern CONST_DATA u16 Tsa_EfxSkillC[];
extern CONST_DATA u16 Tsa_EfxSkillD[];
extern CONST_DATA u16 Tsa_EfxSkillE[];
extern CONST_DATA u16 Tsa_EfxSkillF[];
extern CONST_DATA u16 Tsa_EfxSkill10[];

void sub_806E8F0(void);
void sub_806E904(void);
void sub_806E920(void);

extern const u16 FrameLut_EfxSkill[];

struct ProcEfxDamageMojiEffectOBJ {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 terminator;
    STRUCT_PAD(0x30, 0x5C);
    /* 5C */ struct Anim * anim;
    /* 60 */ struct ProcEkrSubAnimeEmulator *sub_proc;
};

struct ProcEfxSRankSCR2 {
    PROC_HEADER;
    STRUCT_PAD(0x29, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 terminator;
    STRUCT_PAD(0x30, 0x44);
    /* 44 */ u32 unk44;
    STRUCT_PAD(0x48, 0x5C);
    /* 5C */ struct ProcEfx *seff_scr1;
};

struct ProcEkrHensei {
    PROC_HEADER;

    /* 29 */ STRUCT_PAD(0x29, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 terminator;
};

extern u16 gEfxPal[];
// extern ??? gUnknown_02016828
extern u16 gObjBuf_EkrSideHitDmgCrit[];
extern u16 gUnk_Banim_02016DC8[];
// extern ??? gUnknown_02016E48
// extern ??? gUnknown_02017048
// extern ??? gUnknown_02017248
// extern ??? gUnknown_02017448
// extern ??? gUnknown_020176F0
extern u16 gDecodedEkrHitDmgCritBuf[];
extern u32 gEkrBattleEndFlag;
extern u32 gEkrHPBarCount;
extern u32 gEfxSpellAnimExists;
extern u32 gUnknown_02017730;
extern u32 gUnknown_02017734;
extern u32 gEkrDeadEventExist;
extern u32 gUnknown_0201773C;
extern u32 gUnknown_02017740;
extern u32 gEkrInitPosReal;
extern u32 gUnknown_02017748;
extern u32 gEfxBgSemaphore;
extern u32 gUnknown_02017750;
extern u32 gUnknown_02017754;
extern u32 gUnknown_02017758;
extern u32 gUnknown_0201775C;
struct Vec2 gEkrBg2QuakeVec;
extern s16 gUnknown_02017764[2];
extern s16 gUnknown_02017768[2];

extern s16 gEkrHitEfxBool[];     /* [0] for left and [1] for right, if in hit routine, 1, otherwise 0 */
extern u8 gEkrBuf1[];
extern u16 gEkrBarfxBuf[];
extern u16 gEkrTsaBuffer[0x1000 / 2];
extern u8 gEkrBuf2[];

extern s16 gEkrDistanceType;

struct OpAnimSt {
    /* 00 */ s16 x;
    /* 02 */ s16 y;
    /* 04 */ s16 unk04;
    /* 06 */ s16 unk06;
    /* 08 */ s16 unk08;
    /* 0A */ s16 unk0A;
    /* 0C */ u16 pal;
};

extern struct OpAnimSt gOpAnimSt;

struct ProcOpAnim {
    PROC_HEADER;

    /* 2A */ u16 timer;
    /* 2C */ s16 unk2C;
    /* 2E */ s16 unk2E;
    /* 30 */ s16 unk30;
    /* 32 */ s16 unk32;
    /* 34 */ u16 unk34;
    /* 36 */ u16 unk36;
    /* 38 */ u16 unk38;
    /* 3A */ u16 unk3A;
    /* 3C */ u16 unk3C;
    /* 3E */ u16 unk3E;
    /* 40 */ u16 unk40;
    /* 42 */ u16 unk42;
    /* 44 */ s16 unk44;
    /* 46 */ u8 unk46;
    /* 47 */ u8 unk47;
    /* 48 */ u16 * unk48;
    /* 4C */ u16 * unk4C;
};

struct LinkArenaStMaybe
{
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    STRUCT_PAD(0x02, 0x03);
    /* 03 */ u8 unk_03;
    /* 04 */ u8 unk_04;
    /* 05 */ u8 unk_05;
    STRUCT_PAD(0x06, 0x0A);
    /* 0A */ u8 unk_0A;
    /* 0B */ u8 unk_0B;
    /* 0C */ struct Text texts[11];
    STRUCT_PAD(0x64, 0x9C);
    u8 unk_9C[5];
    u8 unk_A1[4][15];
    STRUCT_PAD(0xDD, 0xEC);
    struct LinkArenaStMaybe_ec
    {
        u8 unk_0_0 : 1;
        u8 unk_0_1 : 1;
        u8 unk_0_2 : 1;
    } unk_ec;
};

extern struct LinkArenaStMaybe gLinkArenaSt;

#define SIO_MAX_PACKET 0x80

#define SIO_MAX_PENDING_SEND 0x20
#define SIO_MAX_PENDING_RECV 0x10

struct SioMessage
{
    /* 00 */ u8 kind;
    /* 01 */ u8 sender;
    /* 02 */ u16 param;
};

struct SioData
{
    /* 00 */ struct SioMessage head;
    /* 04 */ u16 len;
    /* 06 */ u8 bytes[SIO_MAX_PACKET];
    /* 86 */ STRUCT_PAD(0x86, 0x88);
};

struct SioPending
{
    /* 00 */ u8 unk_00;
    /* 01 */ STRUCT_PAD(0x01, 0x04);
    /* 04 */ struct SioData packet;
    /* 8C */ // end
};

struct SioSt
{
    /* 0000 */ u8 unk_000;
    /* 0001 */ u8 unk_001;
    /* 0002 */ u16 lastSioCnt;
    /* 0004 */ u16 unk_004;
    /* 0006 */ s8 selfId;
    /* 0007 */ u8 unk_007;
    /* 0008 */ u8 recvFlags;
    /* 0009 */ u8 unk_009;
    /* 000A */ u8 unk_00A;
    /* 000B */ u8 playerStatus[4];
    /* 000F */ u8 unk_00F;
    /* 0010 */ u8 unk_010;
    /* 0011 */ u8 unk_011;
    /* 0012 */ u16 lastRecv[4];
    /* 001A */ u8 timeoutClock[4];
    /* 001E */ u8 unk_01E;
    /* 001F */ u8 unk_01F;
    /* 0020 */ u8 unk_020;
    /* 0021 */ u8 unk_021;
    /* 0022 */ u16 unk_022;
    /* 0024 */ u16 selfSeq;
    /* 0026 */ u16 seq[4];
    /* 002E */ u8 unk_02E;
    /* 002F */ STRUCT_PAD(0x02F, 0x030); // implicit
    /* 0030 */ u16 unk_030;
    /* 0032 */ u16 buf[SIO_MAX_PACKET];
    /* 0132 */ STRUCT_PAD(0x132, 0x134); // implicit
    /* 0134 */ struct SioPending pendingSend[SIO_MAX_PENDING_SEND];
    /* 0594 */ struct SioPending pendingRecv[SIO_MAX_PENDING_RECV];
    /* 1B74 */ u8 nextPendingSend;
    /* 1B75 */ u8 nextPendingWrite;
    /* 1B76 */ u8 nextPendingRead;
    /* 1B77 */ u8 nextPendingRecv;
    /* 1B78 */ u16 unk_1B78;
    /* 1B7A */ u16 unk_1B7A;
    /* 1B7C */ u16 unk_1B7C;
    /* 1B7E */ u16 unk_1B7E;
};

extern struct SioSt * gSioSt;

struct SioUnknown_0203DD90_Unk2C
{
    /* 00 */ u8 unitId;
    /* 04 */ int newScore;
};

struct SioUnknown_0203DD90
{
    u8 unk_00; // ?
    u8 unk_01; // current phase
    u8 unk_02; // current cursor unit idx
    u8 unk_03; // current cursor unit idx (again?)
    u8 unk_04; // current selected unit idx (attacker)
    u8 unk_05; // current selected combat target unit id
    u8 unk_06; // weapon index maybe?
    u8 unk_07; // ?
    // 07-09 -- ??
    STRUCT_PAD(0x08, 0x09);
    u8 unk_09; // ?
    /* 0A */ u8 unk_0A[4]; // num units alive per team?
    /* 0E */ u8 unk_0E; // ?
    /* 0F */ u8 unk_0F[4]; // player ids?
    /* 14 */ int currentScore[4]; // scores
    /* 24 */ u16 unk_24[4]; // leader face IDs
    /* 2C */ struct SioUnknown_0203DD90_Unk2C unk_2c[4];
};

extern struct SioUnknown_0203DD90 gUnk_Sio_0203DD90;

extern u32 gUnknown_0201FB0C;
extern u32 gUnknown_02017744;
extern short gUnknown_0203E120;
extern short gUnknown_0203E100;
extern u8 gUnknown_08802274[];
extern u8 gUnknown_08802348[];
extern u8 gUnknown_08802428[];
extern u16 gUnknown_02022FE8[];
extern short gEkrGaugeHpBak[2];
extern short gEkrGaugeHp[2];
extern short gUnknown_0203E1C8[2];
extern short gUnknown_0203E104[];
extern u16 gUnknown_088026E4[];

struct EkrGaugeStruct1 {
    u8 _pad_00[0x3C - 0x0];
    void *unk3C;
};

//extern int gUnk_Banim_02016E48;
extern u8 gUnk_Banim_02016E48[0x200];
// extern int gUnk_Banim_02017248;
extern u8 gUnk_Banim_02017248[0x200];
extern u16 gBanimMaxHP[];
//extern u8 gUnk_Banim_02016DC8[];
extern s16 gBanimWtaBonus[2];

// extern int gUnk_Banim_02017048;
extern u8 gUnk_Banim_02017048[0x200];
extern u8 gUnk_Banim_02017448[0x200];

extern u8 gUnknown_085B9424[];
extern u8 gUnknown_085B940C[];
extern u8 gUnknown_085B93D0[];
extern u8 gUnknown_085B949C[];
extern u8 gUnknown_085B94F0[];
extern u8 gUnknown_085B9544[];

s16 EkrEfxIsUnitHittedNow(int);
void BanimUpdateSpriteRotScale(void*, const void*, int, int, int);
void sub_8070D04(u16 * tm, u16 width, u16 height, int pal, int chr);
void sub_8050E40(void *_src, void *_dst);
void sub_8071068(u16 * tm, int arg1, int arg2);

void EfxTmCpyBG(const void * ptr1, void * ptr2, u16 width, u16 height, int pal, int chr);

struct ProcEkrGauge {
    PROC_HEADER;

    /* 29 */ u8 battle_init;
    /* 2A */ u8 valid;
    /* 2B */ u8 _pad_2B[0x32 - 0x2B];
    /* 32 */ s16 unk32;
    /* 34 */ u8 _pad_34[0x3A - 0x34];
    /* 3A */ s16 unk3A;
    /* 3C */ u8 _pad_3C[0x44 - 0x3C];
    /* 44 */ u32 unk44;
    /* 48 */ int unk48;
    /* 4C */ int unk4C;
    /* 50 */ int unk50;
    /* 54 */
};

struct AnimSpriteData {
    /* 00 */ u32 header;

    union {
        struct {
            /* 04 */ u16 pa;
            /* 06 */ u16 pb;
            /* 08 */ u16 pc;
            /* 0A */ u16 pd;
        } affine;

        struct {
            /* 04 */ u16 oam2;
            /* 06 */ short x;
            /* 08 */ short y;
        } object;
    } as;
};


int DivRem(int, int);
void FillBGRect(u16 * tm, u16 width, u16 height, int pal, int chr);
void RegisterDataMove(const void *a, void *b, int c);
void AnimDisplay(struct Anim * anim);
void sub_8051238(struct EkrGaugeStruct1 *buf, int a, int b);
