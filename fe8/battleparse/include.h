#define NULL 0
#define CONST_DATA
#define IWRAM_DATA
#define EWRAM_DATA
#define EWRAM_OVERLAY(id)
#define SHOULD_BE_STATIC
#define SHOULD_BE_CONST
#  define STRUCT_PAD(from, to) unsigned char _pad_ ## from[(to) - (from)]

enum {POS_L, POS_R};
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef long s64;

#define false 0
#define true 1

#define UNIT_LEVEL_MAX 20
#define UNIT_ITEM_COUNT 5
#define UNIT_DEFINITION_ITEM_COUNT 4
#define UNIT_SUPPORT_MAX_COUNT 7

struct SupportData
{
    /* 00 */ u8 characters[UNIT_SUPPORT_MAX_COUNT];
    /* 07 */ u8 supportExpBase[UNIT_SUPPORT_MAX_COUNT];
    /* 0E */ u8 supportExpGrowth[UNIT_SUPPORT_MAX_COUNT];
    /* 15 */ u8 supportCount;
};

struct CharacterData
{
    /* 00 */ u16 nameTextId;
    /* 02 */ u16 descTextId;
    /* 04 */ u8 number;
    /* 05 */ u8 defaultClass;
    /* 06 */ u16 portraitId;
    /* 08 */ u8 miniPortrait;
    /* 09 */ u8 affinity;
    /* 0A */ u8 sort_order;

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
    /* 25 */ u8 _u25[2]; // Unique animation IDs in FE7
    /* 27 */ u8 _u27;

    /* 28 */ u32 attributes;

    /* 2C */ const struct SupportData* pSupportData;
    /* 30 */ u8 visit_group;

    /* 31 */ u8 _pad_[0x34 - 0x31];
};

struct BattleAnimDef {
    u16 wtype;
    u16 index;
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
    /* 0A */ u8 sort_order;

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

    /* 34 */ const struct BattleAnimDef * pBattleAnimDef;
    /* 38 */ const s8 * pMovCostTable[3]; // standard, rain, snow

    /* 44 */ const s8 * pTerrainAvoidLookup;
    /* 48 */ const s8 * pTerrainDefenseLookup;
    /* 4C */ const s8 * pTerrainResistanceLookup;

    /* 50 */ const void * _pU50;
};
struct SMSHandle
{
    /* 00 */ struct SMSHandle * pNext;

    /* 04 */ short xDisplay;
    /* 06 */ short yDisplay;

    /* 08 */ u16 oam2Base;

    /* 0A */ u8 _u0A;
    /* 0B */ s8 config;
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
    /* 70 */ s8 levelPrevious;
    /* 71 */ s8 expPrevious;

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
#define BATTLE_HIT_MAX 7

struct BattleHit {
    /* 00:18 */ unsigned attributes : 19;
    /* 19:23 */ unsigned info       : 5;
    /* 24:31 */ signed   hpChange   : 8;
};

extern struct BattleHit gBattleHitArray[BATTLE_HIT_MAX];
extern u16 gAnimRoundData[];
extern u16 gEfxHpLut[];

extern struct Unit *gpEkrTriangleUnits[2];
enum gEkrDistanceType_index {
    EKR_DISTANCE_CLOSE,
    EKR_DISTANCE_FAR,
    EKR_DISTANCE_FARFAR,
    EKR_DISTANCE_MONOCOMBAT,
    EKR_DISTANCE_PROMOTION,

    EKR_DISTANCE_MAX
};
extern s16 gEkrDistanceType;
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
extern struct BattleUnit *gpEkrBattleUnitLeft;
extern struct BattleUnit *gpEkrBattleUnitRight;
int GetItemIndex(int item);
extern s16 gEkrGaugeHp[2];
extern s16 gEkrPairMaxHP[2];
extern s16 gBanimSomeHp[2];
extern s16 gEkrPairHit[2];
extern s16 gEkrPairDmgPair[2];
extern s16 gEkrPairCritPair[2];
extern s16 gEkrPairExpPrevious[2];
extern s16 gEkrPairExpGain[2];
extern s16 gEkrPairTerrainID[2];
enum {
    BATTLE_HIT_INFO_BEGIN        = (1 << 0),
    BATTLE_HIT_INFO_FINISHES     = (1 << 1),
    BATTLE_HIT_INFO_KILLS_TARGET = (1 << 2),
    BATTLE_HIT_INFO_RETALIATION  = (1 << 3),
    BATTLE_HIT_INFO_END          = (1 << 4),
};
extern s16 gEkrInitialPosition[2];
extern int gEkrMainBgmPlaying;
extern s16 gPalIndexEfxHpBarUnk[2];
extern s16 gEkrInitialHitSide;
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
s8 UnitHasMagicRank(struct Unit* unit);
extern const u16 gUnknown_080DAE8C[];
extern const u16 gUnknown_080DAE96[];
extern const u16 gUnknown_080DAEA0[];
extern const u16 gUnknown_080DAEAA[];
extern const u16 gUnknown_080DAEB4[];
extern const u16 gUnknown_080DAEBE[];
extern const u16 gUnknown_080DAEC8[];
extern const u16 gUnknown_080DAED2[];
extern const u16 gUnknown_080DAEDC[];
extern const u16 gUnknown_080DAEE6[];
int sub_80716B0(int a);
s16 GetEfxHp(int index);
