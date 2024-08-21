#define NULL 0
#define CONST_DATA
#define IWRAM_DATA
#define EWRAM_DATA
#define EWRAM_OVERLAY(id)
#define SHOULD_BE_STATIC
#define SHOULD_BE_CONST
#  define STRUCT_PAD(from, to) unsigned char _pad_ ## from[(to) - (from)]
typedef unsigned char  u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;
typedef signed char   i8;
typedef signed short  i16;
typedef signed int  i32;
typedef signed long  i64;

typedef i8  fi8;
typedef i16 fi16;
typedef u8  fu8;
typedef u16 fu16;

typedef i8 bool8;

#ifndef bool
typedef i8 bool;
#endif
#define VRAM      0x6000000
#define VRAM_SIZE 0x18000
// TODO: move types below

typedef void (* Func)(void);

struct Vec2i
{
    i16 x, y;
};

struct Vec2u
{
    u16 x, y;
};

typedef int  iptr;
typedef unsigned int uptr;

enum { FALSE, TRUE };

#define ALIGNED(n) __attribute__((aligned(n)))
#define NAKEDFUNC __attribute__((naked))

#define ARRAY_COUNT(array) (sizeof(array) / sizeof((array)[0]))

#define ABS(val) ((val) >= 0 ? (val) : -(val))

#define RECT_DISTANCE(xa, ya, xb, yb) (ABS((xa) - (xb)) + ABS((ya) - (yb)))

// For translate-able strings.
#define JTEXT(orig) (orig)
#define TEXT(orig, english) (orig)

void WriteSramFast(const u8 * src, u8 * dest, u32 size);
void SetSramFastFunc(void);
u32 WriteAndVerifySramFast(const u8 *src, u8 *dest, u32 size);

extern u32 (*VerifySramFast)(const u8 *src, u8 *dest, u32 size);
extern void (*ReadSramFast)(const u8 *src, u8 *dest, u32 size);

enum
{
    PID_NONE = 0x00,
    PID_ROY = 0x01,
    PID_CLARINE = 0x02,
    PID_FAE = 0x03,
    PID_SIN = 0x04,
    PID_SUE = 0x05,
    PID_DAYAN = 0x06,
    PID_DAYAN_ALT = 0x07,
    PID_BARTHE = 0x08,
    PID_BORS = 0x09,
    PID_GWENDOLYN = 0x0A,
    PID_DOUGLAS = 0x0B,
    PID_DOUGLAS_ALT = 0x0C,
    PID_WOLT = 0x0D,
    PID_DOROTHY = 0x0E,
    PID_KLEIN = 0x0F,
    PID_SAUL = 0x10,
    PID_ELEN = 0x11,
    PID_YODER = 0x12,
    PID_YODER_ALT = 0x13,
    PID_CHAD = 0x14,
    PID_KAREL = 0x15,
    PID_FIR = 0x16,
    PID_RUTGER = 0x17,
    PID_DIECK = 0x18,
    PID_OGIER = 0x19,
    PID_GARRET = 0x1A,
    PID_ALEN = 0x1B,
    PID_LANCE = 0x1C,
    PID_PERCEVAL = 0x1D,
    PID_IGRENE = 0x1E,
    PID_MARCUS = 0x1F,
    PID_ASTOLFO = 0x20,
    PID_WARD = 0x21,
    PID_LOT = 0x22,
    PID_BARTRE = 0x23,
    PID_BARTRE_ALT = 0x24,
    PID_LUGH = 0x25,
    PID_LILINA = 0x26,
    PID_HUGH = 0x27,
    PID_NIIME = 0x28,
    PID_NIIME_ALT = 0x29,
    PID_RAIGH = 0x2A,
    PID_LARUM = 0x2B,
    PID_JUNO = 0x2C,
    PID_JUNO_ALT = 0x2D,
    PID_THEA = 0x2E,
    PID_THEA_NPC = 0x2F,
    PID_THEA_NPC_ALT = 0x30,
    PID_SHANNA = 0x31,
    PID_ZEISS = 0x32,
    PID_GALLE = 0x33,
    PID_ELFFIN = 0x34,
    PID_CATH = 0x35,
    PID_SOPHIA = 0x36,
    PID_MELADY = 0x37,
    PID_GONZALEZ = 0x38,
    PID_GONZALEZ_ALT = 0x39,
    PID_NOAH = 0x3A,
    PID_TREC = 0x3B,
    PID_ZELOT = 0x3C,
    PID_ECHIDNA = 0x3D,
    PID_ECHIDNA_ALT = 0x3E,
    PID_CECILIA = 0x3F,
    PID_GEESE = 0x40,
    PID_GEESE_ALT = 0x41,
    PID_MERLINUS = 0x42,
    PID_ELIWOOD = 0x43,
    PID_GUINIVERE = 0x44,
    PID_CHAPTER1_BANDIT = 0x45,
    PID_UNKNOWN_46 = 0x46,
    PID_UNKNOWN_47 = 0x47,
    PID_CHAPTER1_ARCHER = 0x48,
    PID_UNKNOWN_49 = 0x49,
    PID_CHAPTER1_4A = 0x4A,
    PID_CHAPTER2_4B = 0x4B,
    PID_UNKNOWN_4C = 0x4C,
    PID_UNKNOWN_4D = 0x4D,
    PID_UNKNOWN_4E = 0x4E,
    PID_UNKNOWN_4F = 0x4F,
    PID_UNKNOWN_50 = 0x50,
    PID_UNKNOWN_51 = 0x51,
    PID_UNKNOWN_52 = 0x52,
    PID_UNKNOWN_53 = 0x53,
    PID_UNKNOWN_54 = 0x54,
    PID_UNKNOWN_55 = 0x55,
    PID_UNKNOWN_56 = 0x56,
    PID_UNKNOWN_57 = 0x57,
    PID_UNKNOWN_58 = 0x58,
    PID_NARCIAN = 0x59,
    PID_UNKNOWN_5A = 0x5A,
    PID_UNKNOWN_5B = 0x5B,
    PID_UNKNOWN_5C = 0x5C,
    PID_UNKNOWN_5D = 0x5D,
    PID_UNKNOWN_5E = 0x5E,
    PID_UNKNOWN_5F = 0x5F,
    PID_UNKNOWN_60 = 0x60,
    PID_UNKNOWN_61 = 0x61,
    PID_MURDOCK = 0x62,
    PID_BRUNNYA = 0x63,
    PID_ZEPHIEL = 0x64,
    PID_IDUNN = 0x65,
    PID_IDUNN_DRAGON = 0x66,
    PID_JAHN = 0x67,
    PID_UNKNOWN_68 = 0x68,
    PID_UNKNOWN_69 = 0x69,
    PID_UNKNOWN_6A = 0x6A,
    PID_UNKNOWN_6B = 0x6B,
    PID_CHAPTER2_GENERIC = 0x6C,
    PID_CHAPTER2_SOLDIER_JAVELIN = 0x6D,
    PID_CHAPTER2_MERCENARY = 0x6E,
    PID_CHAPTER3_BERN = 0x6F,
    PID_CHAPTER3_LANCER = 0x70,
    PID_CHAPTER4_LAUS = 0x71,
    PID_CHAPTER4_PIRATE = 0x72,
    PID_CHAPTER5_BANDIT = 0x73,
    PID_UNKNOWN_74 = 0x74,
    PID_UNKNOWN_75 = 0x75,
    PID_UNKNOWN_76 = 0x76,
    PID_UNKNOWN_77 = 0x77,
    PID_UNKNOWN_78 = 0x78,
    PID_UNKNOWN_79 = 0x79,
    PID_UNKNOWN_7A = 0x7A,
    PID_UNKNOWN_7B = 0x7B,
    PID_UNKNOWN_7C = 0x7C,
    PID_UNKNOWN_7D = 0x7D,
    PID_UNKNOWN_7E = 0x7E,
    PID_UNKNOWN_7F = 0x7F,
    PID_UNKNOWN_80 = 0x80,
    PID_UNKNOWN_81 = 0x81,
    PID_UNKNOWN_82 = 0x82,
    PID_UNKNOWN_83 = 0x83,
    PID_UNKNOWN_84 = 0x84,
    PID_UNKNOWN_85 = 0x85,
    PID_UNKNOWN_86 = 0x86,
    PID_UNKNOWN_87 = 0x87,
    PID_UNKNOWN_88 = 0x88,
    PID_UNKNOWN_89 = 0x89,
    PID_UNKNOWN_8A = 0x8A,
    PID_UNKNOWN_8B = 0x8B,
    PID_UNKNOWN_8C = 0x8C,
    PID_UNKNOWN_8D = 0x8D,
    PID_UNKNOWN_8E = 0x8E,
    PID_UNKNOWN_8F = 0x8F,
    PID_UNKNOWN_90 = 0x90,
    PID_UNKNOWN_91 = 0x91,
    PID_UNKNOWN_92 = 0x92,
    PID_UNKNOWN_93 = 0x93,
    PID_UNKNOWN_94 = 0x94,
    PID_UNKNOWN_95 = 0x95,
    PID_UNKNOWN_96 = 0x96,
    PID_UNKNOWN_97 = 0x97,
    PID_UNKNOWN_98 = 0x98,
    PID_UNKNOWN_99 = 0x99,
    PID_UNKNOWN_9A = 0x9A,
    PID_UNKNOWN_9B = 0x9B,
    PID_UNKNOWN_9C = 0x9C,
    PID_UNKNOWN_9D = 0x9D,
    PID_UNKNOWN_9E = 0x9E,
    PID_UNKNOWN_9F = 0x9F,
    PID_UNKNOWN_A0 = 0xA0,
    PID_UNKNOWN_A1 = 0xA1,
    PID_UNKNOWN_A2 = 0xA2,
    PID_UNKNOWN_A3 = 0xA3,
    PID_CITIZEN_A4 = 0xA4,
    PID_UNKNOWN_A5 = 0xA5,
    PID_UNKNOWN_A6 = 0xA6,
    PID_UNKNOWN_A7 = 0xA7,
    PID_UNKNOWN_A8 = 0xA8,
    PID_UNKNOWN_A9 = 0xA9,
    PID_UNKNOWN_AA = 0xAA,
    PID_UNKNOWN_AB = 0xAB,
    PID_UNKNOWN_AC = 0xAC,
    PID_UNKNOWN_AD = 0xAD,
    PID_UNKNOWN_AE = 0xAE,
    PID_UNKNOWN_AF = 0xAF,
    PID_COMMON_MANAKETE = 0xB0,
    PID_UNKNOWN_B1 = 0xB1,
    PID_UNKNOWN_B2 = 0xB2,
    PID_UNKNOWN_B3 = 0xB3,
    PID_UNKNOWN_B4 = 0xB4,
    PID_UNKNOWN_B5 = 0xB5,
    PID_UNKNOWN_B6 = 0xB6,
    PID_UNKNOWN_B7 = 0xB7,
    PID_UNKNOWN_B8 = 0xB8,
    PID_UNKNOWN_B9 = 0xB9,
    PID_UNKNOWN_BA = 0xBA,
    PID_UNKNOWN_BB = 0xBB,
    PID_UNKNOWN_BC = 0xBC,
    PID_UNKNOWN_BD = 0xBD,
    PID_UNKNOWN_BE = 0xBE,
    PID_UNKNOWN_BF = 0xBF,
    PID_UNKNOWN_C0 = 0xC0,
    PID_UNKNOWN_C1 = 0xC1,
    PID_UNKNOWN_C2 = 0xC2,
    PID_UNKNOWN_C3 = 0xC3,
    PID_UNKNOWN_C4 = 0xC4,
    PID_UNKNOWN_C5 = 0xC5,
    PID_UNKNOWN_C6 = 0xC6,
    PID_UNKNOWN_C7 = 0xC7,
    PID_UNKNOWN_C8 = 0xC8,
    PID_UNKNOWN_C9 = 0xC9,
    PID_UNKNOWN_CA = 0xCA,
    PID_UNKNOWN_CB = 0xCB,
    PID_UNKNOWN_CC = 0xCC,
    PID_CITIZEN_CD = 0xCD,
    PID_UNKNOWN_CE = 0xCE,
    PID_HECTOR = 0xCF,
    PID_BORS_TUTORIAL = 0xD0,
    PID_TUTORIAL_SOLDIER = 0xD1,
    PID_TUTORIAL_ARCHER = 0xD2,
    PID_UNKNOWN_D3 = 0xD3,
    PID_UNKNOWN_D4 = 0xD4,
    PID_UNKNOWN_D5 = 0xD5,
    PID_UNKNOWN_D6 = 0xD6,
    PID_UNKNOWN_D7 = 0xD7,
    PID_KLEIN_SQUAD = 0xD8,
    PID_THEA_SQUAD = 0xD9,
    PID_UNKNOWN_DA = 0xDA,
    PID_UNKNOWN_DB = 0xDB,
    PID_UNKNOWN_DC = 0xDC,
    PID_UNKNOWN_DD = 0xDD,
    PID_UNKNOWN_DE = 0xDE,
    PID_UNKNOWN_DF = 0xDF,
    PID_CHAPTER1_PILLAGER = 0xE0,
    PID_ARENA_OPPONENT = 0xE1,
    PID_WALL = 0xE2,

    MAX_PIDS,
};

#define REG(type, addr) (*((type volatile *) (addr)))

#define REG_DISPCNT     REG(u16, 0x04000000)
#define REG_DISPSTAT    REG(u16, 0x04000004)
#define REG_VCOUNT      REG(u16, 0x04000006)
#define REG_BG0CNT      REG(u16, 0x04000008)
#define REG_BG1CNT      REG(u16, 0x0400000A)
#define REG_BG2CNT      REG(u16, 0x0400000C)
#define REG_BG3CNT      REG(u16, 0x0400000E)
#define REG_BG0HOFS     REG(u16, 0x04000010)
#define REG_BG0VOFS     REG(u16, 0x04000012)
#define REG_BG1HOFS     REG(u16, 0x04000014)
#define REG_BG1VOFS     REG(u16, 0x04000016)
#define REG_BG2HOFS     REG(u16, 0x04000018)
#define REG_BG2VOFS     REG(u16, 0x0400001A)
#define REG_BG3HOFS     REG(u16, 0x0400001C)
#define REG_BG3VOFS     REG(u16, 0x0400001E)
#define REG_BG2PA       REG(i16, 0x04000020)
#define REG_BG2PB       REG(i16, 0x04000022)
#define REG_BG2PC       REG(i16, 0x04000024)
#define REG_BG2PD       REG(i16, 0x04000026)
#define REG_BG2X        REG(i32, 0x04000028)
#define REG_BG2Y        REG(i32, 0x0400002C)
#define REG_BG3PA       REG(i16, 0x04000030)
#define REG_BG3PB       REG(i16, 0x04000032)
#define REG_BG3PC       REG(i16, 0x04000034)
#define REG_BG3PD       REG(i16, 0x04000036)
#define REG_BG3X        REG(i32, 0x04000038)
#define REG_BG3Y        REG(i32, 0x0400003C)
#define REG_WIN0H       REG(u16, 0x04000040)
#define REG_WIN1H       REG(u16, 0x04000042)
#define REG_WIN0V       REG(u16, 0x04000044)
#define REG_WIN1V       REG(u16, 0x04000046)
#define REG_WININ       REG(u16, 0x04000048)
#define REG_WINOUT      REG(u16, 0x0400004A)
#define REG_MOSAIC      REG(u16, 0x0400004C)
#define REG_BLDCNT      REG(u16, 0x04000050)
#define REG_BLDALPHA    REG(u16, 0x04000052)
#define REG_BLDCA       REG(u8,  0x04000052 + 0)
#define REG_BLDCB       REG(u8,  0x04000052 + 1)
#define REG_BLDY        REG(u8,  0x04000054)

#define REG_SOUND1CNT_L REG(u16, 0x04000060)
#define REG_NR10        REG(u8,  0x04000060)
#define REG_SOUND1CNT_H REG(u16, 0x04000062)
#define REG_NR11        REG(u8,  0x04000062)
#define REG_NR12        REG(u8,  0x04000063)
#define REG_SOUND1CNT_X REG(u16, 0x04000064)
#define REG_NR13        REG(u8,  0x04000064)
#define REG_NR14        REG(u8,  0x04000065)
#define REG_SOUND2CNT_L REG(u16, 0x04000068)
#define REG_NR21        REG(u8,  0x04000068)
#define REG_NR22        REG(u8,  0x04000069)
#define REG_SOUND2CNT_H REG(u16, 0x0400006C)
#define REG_NR23        REG(u8,  0x0400006C)
#define REG_NR24        REG(u8,  0x0400006D)
#define REG_SOUND3CNT_L REG(u16, 0x04000070)
#define REG_NR30        REG(u8,  0x04000070)
#define REG_SOUND3CNT_H REG(u16, 0x04000072)
#define REG_NR31        REG(u8,  0x04000072)
#define REG_NR32        REG(u8,  0x04000073)
#define REG_SOUND3CNT_X REG(u16, 0x04000074)
#define REG_NR33        REG(u8,  0x04000074)
#define REG_NR34        REG(u8,  0x04000075)
#define REG_SOUND4CNT_L REG(u16, 0x04000078)
#define REG_NR41        REG(u8,  0x04000078)
#define REG_NR42        REG(u8,  0x04000079)
#define REG_SOUND4CNT_H REG(u16, 0x0400007C)
#define REG_NR43        REG(u8,  0x0400007C)
#define REG_NR44        REG(u8,  0x0400007D)
#define REG_SOUNDCNT_L  REG(u16, 0x04000080)
#define REG_NR50        REG(u8,  0x04000080)
#define REG_NR51        REG(u8,  0x04000081)
#define REG_SOUNDCNT_H  REG(u16, 0x04000082)
#define REG_SOUNDCNT_X  REG(u16, 0x04000084)
#define REG_NR52        REG(u8,  0x04000084)
#define REG_SOUNDBIAS   REG(u16, 0x04000088)
#define REG_SOUNDBIAS_L REG(u8,  0x04000088)
#define REG_SOUNDBIAS_H REG(u8,  0x04000089)
#define REG_WAVE_RAM0   REG(u32, 0x04000090)
#define REG_WAVE_RAM1   REG(u32, 0x04000094)
#define REG_WAVE_RAM2   REG(u32, 0x04000098)
#define REG_WAVE_RAM3   REG(u32, 0x0400009C)
#define REG_FIFO_A      REG(u32, 0x040000A0)
#define REG_FIFO_B      REG(u32, 0x040000A4)

#define REG_DMA0SAD     REG(u32, 0x040000B0)
#define REG_DMA0DAD     REG(u32, 0x040000B4)
#define REG_DMA0CNT     REG(u32, 0x040000B8)
#define REG_DMA0CNT_L   REG(u16, 0x040000B8)
#define REG_DMA0CNT_H   REG(u16, 0x040000BA)

#define REG_DMA1SAD     REG(u32, 0x040000BC)
#define REG_DMA1DAD     REG(u32, 0x040000C0)
#define REG_DMA1CNT     REG(u32, 0x040000C4)
#define REG_DMA1CNT_L   REG(u16, 0x040000C4)
#define REG_DMA1CNT_H   REG(u16, 0x040000C6)

#define REG_DMA2SAD     REG(u32, 0x040000C8)
#define REG_DMA2DAD     REG(u32, 0x040000CC)
#define REG_DMA2CNT     REG(u32, 0x040000D0)
#define REG_DMA2CNT_L   REG(u16, 0x040000D0)
#define REG_DMA2CNT_H   REG(u16, 0x040000D2)

#define REG_DMA3SAD     REG(u32, 0x040000D4)
#define REG_DMA3DAD     REG(u32, 0x040000D8)
#define REG_DMA3CNT     REG(u32, 0x040000DC)
#define REG_DMA3CNT_L   REG(u16, 0x040000DC)
#define REG_DMA3CNT_H   REG(u16, 0x040000DE)

#define REG_TM0CNT      REG(u32, 0x04000100)
#define REG_TM0CNT_L    REG(u16, 0x04000100)
#define REG_TM0CNT_H    REG(u16, 0x04000102)
#define REG_TM1CNT      REG(u32, 0x04000104)
#define REG_TM1CNT_L    REG(u16, 0x04000104)
#define REG_TM1CNT_H    REG(u16, 0x04000106)
#define REG_TM2CNT      REG(u32, 0x04000108)
#define REG_TM2CNT_L    REG(u16, 0x04000108)
#define REG_TM2CNT_H    REG(u16, 0x0400010A)
#define REG_TM3CNT      REG(u32, 0x0400010C)
#define REG_TM3CNT_L    REG(u16, 0x0400010C)
#define REG_TM3CNT_H    REG(u16, 0x0400010E)

#define REG_SIOCNT      REG(u16, 0x04000128)
#define REG_SIODATA8    REG(u16, 0x0400012A)
#define REG_SIODATA32   REG(u32, 0x04000120)
#define REG_SIOMLT_SEND REG(u16, 0x0400012A)
#define REG_SIOMLT_RECV REG(u64, 0x04000120)
#define REG_SIOMULTI0   REG(u16, 0x04000120)
#define REG_SIOMULTI1   REG(u16, 0x04000122)
#define REG_SIOMULTI2   REG(u16, 0x04000124)
#define REG_SIOMULTI3   REG(u16, 0x04000126)

#define REG_KEYINPUT    REG(u16, 0x04000130)
#define REG_KEYCNT      REG(u16, 0x04000132)

#define REG_RCNT        REG(u16, 0x04000134)

#define REG_IE          REG(u16, 0x04000200)
#define REG_IF          REG(u16, 0x04000202)
#define REG_IME         REG(u16, 0x04000208)

#define REG_WAITCNT     REG(u16, 0x04000204)

// DISPCNT

enum
{
    BG_MODE_REGULAR        = 0,
    BG_MODE_MIXED          = 1,
    BG_MODE_AFFINE         = 2,
    BG_MODE_BITMAP         = 3,
    BG_MODE_BITMAP_INDEXED = 4,
    BG_MODE_BITMAP_SMALL   = 5,
};

enum
{
    OBJ_MAPPING_2D = 0,
    OBJ_MAPPING_1D = 1,
};

enum
{
    #define DISPCNT_BG_MODE(n) (((n) & 7) << 0)
    #define DISPCNT_BITMAP_FRAME(n) (((n) & 1) << 4)
    #define DISPCNT_OBJ_MAPPING(n) (((n) & 1) << 6)

    DISPCNT_BG_MODE_REGULAR        = DISPCNT_BG_MODE(BG_MODE_REGULAR),
    DISPCNT_BG_MODE_MIXED          = DISPCNT_BG_MODE(BG_MODE_MIXED),
    DISPCNT_BG_MODE_AFFINE         = DISPCNT_BG_MODE(BG_MODE_AFFINE),
    DISPCNT_BG_MODE_BITMAP         = DISPCNT_BG_MODE(BG_MODE_BITMAP),
    DISPCNT_BG_MODE_BITMAP_INDEXED = DISPCNT_BG_MODE(BG_MODE_BITMAP_INDEXED),
    DISPCNT_BG_MODE_BITMAP_SMALL   = DISPCNT_BG_MODE(BG_MODE_BITMAP_SMALL),
    DISPCNT_BITMAP_FRAME_0         = DISPCNT_BITMAP_FRAME(0),
    DISPCNT_BITMAP_FRAME_1         = DISPCNT_BITMAP_FRAME(1),
    DISPCNT_HBLANK_INTERVAL_FREE   = 1 << 5,
    DISPCNT_OBJ_MAPPING_2D         = DISPCNT_OBJ_MAPPING(OBJ_MAPPING_2D),
    DISPCNT_OBJ_MAPPING_1D         = DISPCNT_OBJ_MAPPING(OBJ_MAPPING_1D),
    DISPCNT_FORCE_BLANK            = 1 << 7,
    DISPCNT_BG0_ENABLE             = 1 << 8,
    DISPCNT_BG1_ENABLE             = 1 << 9,
    DISPCNT_BG2_ENABLE             = 1 << 10,
    DISPCNT_BG3_ENABLE             = 1 << 11,
    DISPCNT_OBJ_ENABLE             = 1 << 12,
    DISPCNT_WIN0_ENABLE            = 1 << 13,
    DISPCNT_WIN1_ENABLE            = 1 << 14,
    DISPCNT_OBJWIN_ENABLE          = 1 << 15,
};

// DISPSTAT

enum
{
    #define DISPSTAT_VCOUNT_COMPARE(n) (((n) & 0xFF) << 8)

    DISPSTAT_VBLANK            = 1 << 0,
    DISPSTAT_HBLANK            = 1 << 1,
    DISPSTAT_VCOUNT            = 1 << 2,
    DISPSTAT_VBLANK_INT_ENABLE = 1 << 3,
    DISPSTAT_HBLANK_INT_ENABLE = 1 << 4,
    DISPSTAT_VCOUNT_INT_ENABLE = 1 << 5,
};

// BGCNT

enum
{
    BG_COLORDEPTH_4BPP = 0,
    BG_COLORDEPTH_8BPP = 1,
};

enum
{
    BG_SIZE_256x256 = 0,
    BG_SIZE_512x256 = 1,
    BG_SIZE_256x512 = 2,
    BG_SIZE_512x512 = 3,
};

enum
{
    BG_AFFINE_SIZE_128x128   = 0,
    BG_AFFINE_SIZE_256x256   = 1,
    BG_AFFINE_SIZE_512x512   = 2,
    BG_AFFINE_SIZE_1024x1024 = 3,
};

enum
{
    #define BGCNT_PRIORITY(n)    (((n) & 3)  << 0) // Values 0 - 3. Lower priority BGs will be drawn on top of higher priority BGs.
    #define BGCNT_CHR_BLOCK(n)   (((n) & 3)  << 2) // Values 0 - 3. Base block for tile pixel data.
    #define BGCNT_COLORDEPTH(n)  (((n) & 1)  << 7) // 4 or 8 bits per pixel
    #define BGCNT_TM_BLOCK(n)    (((n) & 31) << 8) // Values 0 - 31. Base block for tile map.
    #define BGCNT_SIZE(n)        (((n) & 3) << 14) // Internal screen size size of text mode BG.
    #define BGCNT_AFFINE_SIZE(n) (((n) & 3) << 14) // Internal screen size size of affine mode BG.

    BGCNT_MOSAIC                = 1 << 6,
    BGCNT_COLORDEPTH_4BPP       = BGCNT_COLORDEPTH(BG_COLORDEPTH_4BPP),
    BGCNT_COLORDEPTH_8BPP       = BGCNT_COLORDEPTH(BG_COLORDEPTH_8BPP),
    BGCNT_WRAP                  = 1 << 13,
    BGCNT_SIZE_256x256          = BGCNT_SIZE(BG_SIZE_256x256),
    BGCNT_SIZE_512x256          = BGCNT_SIZE(BG_SIZE_512x256),
    BGCNT_SIZE_256x512          = BGCNT_SIZE(BG_SIZE_256x512),
    BGCNT_SIZE_512x512          = BGCNT_SIZE(BG_SIZE_512x512),
    BGCNT_AFFINE_SIZE_128x128   = BGCNT_AFFINE_SIZE(BG_AFFINE_SIZE_128x128),
    BGCNT_AFFINE_SIZE_256x256   = BGCNT_AFFINE_SIZE(BG_AFFINE_SIZE_256x256),
    BGCNT_AFFINE_SIZE_512x512   = BGCNT_AFFINE_SIZE(BG_AFFINE_SIZE_512x512),
    BGCNT_AFFINE_SIZE_1024x1024 = BGCNT_AFFINE_SIZE(BG_AFFINE_SIZE_1024x1024),
};

// BLDCNT

enum
{
    BLEND_EFFECT_NONE = 0,
    BLEND_EFFECT_ALPHA = 1,
    BLEND_EFFECT_BRIGHTEN = 2,
    BLEND_EFFECT_DARKEN = 3,
};

enum
{
    #define BLDCNT_TARGETA(bg0, bg1, bg2, bg3, obj) ((bg0) + ((bg1) << 1) + ((bg2) << 2) + ((bg3) << 3) + ((obj) << 4))
    #define BLDCNT_TARGETB(bg0, bg1, bg2, bg3, obj) (((bg0) << 8) + ((bg1) << 9) + ((bg2) << 10) + ((bg3) << 11) + ((obj) << 12))
    #define BLDCNT_EFFECT(n) (((n) & 3) << 6)

    BLDCNT_TARGETA_BG0    = 1 << 0,
    BLDCNT_TARGETA_BG1    = 1 << 1,
    BLDCNT_TARGETA_BG2    = 1 << 2,
    BLDCNT_TARGETA_BG3    = 1 << 3,
    BLDCNT_TARGETA_OBJ    = 1 << 4,
    BLDCNT_TARGETA_BD     = 1 << 5,
    BLDCNT_EFFECT_NONE    = BLDCNT_EFFECT(BLEND_EFFECT_NONE),
    BLDCNT_EFFECT_ALPHA   = BLDCNT_EFFECT(BLEND_EFFECT_ALPHA),
    BLDCNT_EFFECT_LIGHTEN = BLDCNT_EFFECT(BLEND_EFFECT_BRIGHTEN),
    BLDCNT_EFFECT_DARKEN  = BLDCNT_EFFECT(BLEND_EFFECT_DARKEN),
    BLDCNT_TARGETB_BG0    = 1 << 8,
    BLDCNT_TARGETB_BG1    = 1 << 9,
    BLDCNT_TARGETB_BG2    = 1 << 10,
    BLDCNT_TARGETB_BG3    = 1 << 11,
    BLDCNT_TARGETB_OBJ    = 1 << 12,
    BLDCNT_TARGETB_BD     = 1 << 13,
};

// BLDALPHA

#define BLDALPHA_BLEND(ca, cb) (((cb) << 8) | (ca))

// SOUNDCNT_H

enum
{
    SOUND_CGB_MIX_QUARTER = 0x0000,
    SOUND_CGB_MIX_HALF    = 0x0001,
    SOUND_CGB_MIX_FULL    = 0x0002,
    SOUND_A_MIX_HALF      = 0x0000,
    SOUND_A_MIX_FULL      = 0x0004,
    SOUND_B_MIX_HALF      = 0x0000,
    SOUND_B_MIX_FULL      = 0x0008,
    SOUND_ALL_MIX_FULL    = 0x000E,
    SOUND_A_RIGHT_OUTPUT  = 0x0100,
    SOUND_A_LEFT_OUTPUT   = 0x0200,
    SOUND_A_TIMER_0       = 0x0000,
    SOUND_A_TIMER_1       = 0x0400,
    SOUND_A_FIFO_RESET    = 0x0800,
    SOUND_B_RIGHT_OUTPUT  = 0x1000,
    SOUND_B_LEFT_OUTPUT   = 0x2000,
    SOUND_B_TIMER_0       = 0x0000,
    SOUND_B_TIMER_1       = 0x4000,
    SOUND_B_FIFO_RESET    = 0x8000,
};

// SOUNDCNT_X

enum
{
    SOUND_1_ON          = 0x0001,
    SOUND_2_ON          = 0x0002,
    SOUND_3_ON          = 0x0004,
    SOUND_4_ON          = 0x0008,
    SOUND_MASTER_ENABLE = 0x0080,
};

// DMA
#define DMA_DEST_INC      0x0000
#define DMA_DEST_DEC      0x0020
#define DMA_DEST_FIXED    0x0040
#define DMA_DEST_RELOAD   0x0060
#define DMA_SRC_INC       0x0000
#define DMA_SRC_DEC       0x0080
#define DMA_SRC_FIXED     0x0100
#define DMA_REPEAT        0x0200
#define DMA_16BIT         0x0000
#define DMA_32BIT         0x0400
#define DMA_DREQ_ON       0x0800
#define DMA_START_NOW     0x0000
#define DMA_START_VBLANK  0x1000
#define DMA_START_HBLANK  0x2000
#define DMA_START_SPECIAL 0x3000
#define DMA_START_MASK    0x3000
#define DMA_INTR_ENABLE   0x4000
#define DMA_ENABLE        0x8000

// timer
#define TIMER_1CLK        0x00
#define TIMER_64CLK       0x01
#define TIMER_256CLK      0x02
#define TIMER_1024CLK     0x03
#define TIMER_INTR_ENABLE 0x40
#define TIMER_ENABLE      0x80

// serial
#define SIO_ID             0x0030 // Communication ID

#define SIO_8BIT_MODE      0x0000 // Normal 8-bit communication mode
#define SIO_32BIT_MODE     0x1000 // Normal 32-bit communication mode
#define SIO_MULTI_MODE     0x2000 // Multi-player communication mode
#define SIO_UART_MODE      0x3000 // UART communication mode

#define SIO_9600_BPS       0x0000 // baud rate   9600 bps
#define SIO_38400_BPS      0x0001 //            38400 bps
#define SIO_57600_BPS      0x0002 //            57600 bps
#define SIO_115200_BPS     0x0003 //           115200 bps

#define SIO_MULTI_SI       0x0004 // Multi-player communication SI terminal
#define SIO_MULTI_SD       0x0008 //                            SD terminal
#define SIO_MULTI_BUSY     0x0080

#define SIO_ERROR          0x0040 // Detect error
#define SIO_START          0x0080 // Start transfer
#define SIO_ENABLE         0x0080 // Enable SIO

#define SIO_INTR_ENABLE    0x4000

#define SIO_MULTI_SI_SHIFT 2
#define SIO_MULTI_SI_MASK  0x1
#define SIO_MULTI_DI_SHIFT 3
#define SIO_MULTI_DI_MASK  0x1

enum
{
    KEY_BUTTON_A      = (1 << 0),
    KEY_BUTTON_B      = (1 << 1),
    KEY_BUTTON_SELECT = (1 << 2),
    KEY_BUTTON_START  = (1 << 3),
    KEY_DPAD_RIGHT    = (1 << 4),
    KEY_DPAD_LEFT     = (1 << 5),
    KEY_DPAD_UP       = (1 << 6),
    KEY_DPAD_DOWN     = (1 << 7),
    KEY_BUTTON_R      = (1 << 8),
    KEY_BUTTON_L      = (1 << 9),

    KEY_ANY           = (1 << 10) - 1,
    KEY_DPAD_ANY      = KEY_DPAD_RIGHT + KEY_DPAD_LEFT + KEY_DPAD_UP + KEY_DPAD_DOWN,
    KEY_BUTTON_ANY    = KEY_ANY &~ KEY_DPAD_ANY,
};

#define KEY_INTR_ENABLE 0x0400
#define KEY_OR_INTR     0x0000
#define KEY_AND_INTR    0x8000

// interrupt flags
#define INTR_FLAG_VBLANK  (1 <<  0)
#define INTR_FLAG_HBLANK  (1 <<  1)
#define INTR_FLAG_VCOUNT  (1 <<  2)
#define INTR_FLAG_TIMER0  (1 <<  3)
#define INTR_FLAG_TIMER1  (1 <<  4)
#define INTR_FLAG_TIMER2  (1 <<  5)
#define INTR_FLAG_TIMER3  (1 <<  6)
#define INTR_FLAG_SERIAL  (1 <<  7)
#define INTR_FLAG_DMA0    (1 <<  8)
#define INTR_FLAG_DMA1    (1 <<  9)
#define INTR_FLAG_DMA2    (1 << 10)
#define INTR_FLAG_DMA3    (1 << 11)
#define INTR_FLAG_KEYPAD  (1 << 12)
#define INTR_FLAG_GAMEPAK (1 << 13)

// WAITCNT
#define WAITCNT_SRAM_4          (0 << 0)
#define WAITCNT_SRAM_3          (1 << 0)
#define WAITCNT_SRAM_2          (2 << 0)
#define WAITCNT_SRAM_8          (3 << 0)
#define WAITCNT_SRAM_MASK       (3 << 0)

#define WAITCNT_WS0_N_4         (0 << 2)
#define WAITCNT_WS0_N_3         (1 << 2)
#define WAITCNT_WS0_N_2         (2 << 2)
#define WAITCNT_WS0_N_8         (3 << 2)
#define WAITCNT_WS0_N_MASK      (3 << 2)

#define WAITCNT_WS0_S_2         (0 << 4)
#define WAITCNT_WS0_S_1         (1 << 4)

#define WAITCNT_WS1_N_4         (0 << 5)
#define WAITCNT_WS1_N_3         (1 << 5)
#define WAITCNT_WS1_N_2         (2 << 5)
#define WAITCNT_WS1_N_8         (3 << 5)
#define WAITCNT_WS1_N_MASK      (3 << 5)

#define WAITCNT_WS1_S_4         (0 << 7)
#define WAITCNT_WS1_S_1         (1 << 7)

#define WAITCNT_WS2_N_4         (0 << 8)
#define WAITCNT_WS2_N_3         (1 << 8)
#define WAITCNT_WS2_N_2         (2 << 8)
#define WAITCNT_WS2_N_8         (3 << 8)
#define WAITCNT_WS2_N_MASK      (3 << 8)

#define WAITCNT_WS2_S_8         (0 << 10)
#define WAITCNT_WS2_S_1         (1 << 10)

#define WAITCNT_PHI_OUT_NONE    (0 << 11)
#define WAITCNT_PHI_OUT_4MHZ    (1 << 11)
#define WAITCNT_PHI_OUT_8MHZ    (2 << 11)
#define WAITCNT_PHI_OUT_16MHZ   (3 << 11)
#define WAITCNT_PHI_OUT_MASK    (3 << 11)

#define WAITCNT_PREFETCH_ENABLE (1 << 14)

#define WAITCNT_AGB (0 << 15)
#define WAITCNT_CGB (1 << 15)
void EraseSaveData();

typedef void * ProcPtr;
typedef void (* ProcFunc)(ProcPtr proc);

struct ProcScr
{
    short cmd;
    short imm;
    void const * ptr;
};

enum
{
    PROC_CMD_END,
    PROC_CMD_NAME,
    PROC_CMD_CALL,
    PROC_CMD_REPEAT,
    PROC_CMD_ONEND,
    PROC_CMD_START_CHILD,
    PROC_CMD_START_CHILD_BLOCKING,
    PROC_CMD_START_BUGGED,
    PROC_CMD_WHILE_EXISTS,
    PROC_CMD_END_EACH,
    PROC_CMD_BREAK_EACH,
    PROC_CMD_LABEL,
    PROC_CMD_GOTO,
    PROC_CMD_GOTO_SCR,
    PROC_CMD_SLEEP,
    PROC_CMD_MARK,
    PROC_CMD_BLOCK,
    PROC_CMD_END_IF_DUP,
    PROC_CMD_SET_FLAG2,
    PROC_CMD_13,
    PROC_CMD_WHILE,
    PROC_CMD_15,
    PROC_CMD_CALL_2,
    PROC_CMD_END_DUPS,
    PROC_CMD_CALL_ARG,
    PROC_CMD_19,
};

#define PROC_END                          { PROC_CMD_END, 0, 0 }
#define PROC_NAME(nameStr)                { PROC_CMD_NAME, 0, (nameStr) }
#define PROC_CALL(func)                   { PROC_CMD_CALL, 0, (func) }
#define PROC_REPEAT(func)                 { PROC_CMD_REPEAT, 0, (func) }
#define PROC_ONEND(func)                  { PROC_CMD_ONEND, 0, (func) }
#define PROC_START_CHILD(procscr)         { PROC_CMD_START_CHILD, 0, (procscr) }
#define PROC_START_CHILD_LOCKING(procscr) { PROC_CMD_START_CHILD_BLOCKING, 1, (procscr) }
#define PROC_START_BUGGED(procscr)        { PROC_CMD_START_BUGGED, 0, (procscr) }
#define PROC_WHILE_EXISTS(procscr)        { PROC_CMD_WHILE_EXISTS, 0, (procscr) }
#define PROC_END_EACH(procscr)            { PROC_CMD_END_EACH, 0, (procscr) }
#define PROC_BREAK_EACH(procscr)          { PROC_CMD_BREAK_EACH, 0, (procscr) }
#define PROC_LABEL(label)                 { PROC_CMD_LABEL, (label), 0 }
#define PROC_GOTO(label)                  { PROC_CMD_GOTO, (label), 0 }
#define PROC_GOTO_SCR(procscr)            { PROC_CMD_GOTO_SCR, 0, (procscr) }
#define PROC_SLEEP(duration)              { PROC_CMD_SLEEP, (duration), 0 }
#define PROC_MARK(mark)                   { PROC_CMD_MARK, (mark), 0 }
#define PROC_BLOCK                        { PROC_CMD_BLOCK, 0, 0 }
#define PROC_END_IF_DUP                   { PROC_CMD_END_IF_DUP, 0, 0 }
#define PROC_SET_FLAG2                    { PROC_CMD_SET_FLAG2, 0, 0 }
#define PROC_13                           { PROC_CMD_13, 0, 0 }
#define PROC_WHILE(func)                  { PROC_CMD_WHILE, 0, (func) }
#define PROC_15                           { PROC_CMD_15, 0, 0 }
#define PROC_CALL_2(func)                 { PROC_CMD_CALL_2, 0, (func) }
#define PROC_END_DUPS                     { PROC_CMD_END_DUPS, 0, 0 }
#define PROC_CALL_ARG(func, arg)          { PROC_CMD_CALL_ARG, (arg), (func) }
#define PROC_19                           { PROC_CMD_19, 0, 0 }

#define PROC_HEADER_EXT(parent_type)                                                                    \
    /* 00 */ struct ProcScr const * proc_script; /* pointer to proc script */                           \
    /* 04 */ struct ProcScr const * proc_script_pc; /* pointer to currently executing script command */ \
    /* 08 */ ProcFunc proc_end_func; /* callback to run upon delegint the process */                    \
    /* 0C */ ProcFunc proc_repeat_func; /* callback to run once each frame. */                          \
                                        /* disables script execution when not null */                   \
    /* 10 */ char const * proc_name;                                                                    \
    /* 14 */ parent_type * proc_parent; /* pointer to parent proc. If this proc is a root proc, */      \
                                  /* this member is an integer which is the root index. */              \
    /* 18 */ ProcPtr proc_child; /* pointer to most recently added child */                             \
    /* 1C */ ProcPtr proc_next; /* next sibling */                                                      \
    /* 20 */ ProcPtr proc_prev; /* previous sibling */                                                  \
    /* 24 */ i16 proc_sleep_clock;                                                                      \
    /* 26 */ u8 proc_mark;                                                                              \
    /* 27 */ u8 proc_flags;                                                                             \
    /* 28 */ u8 proc_lock_cnt; /* wait semaphore. Process execution */                                  \
                               /* is blocked when this is nonzero. */                                   \

#define PROC_HEADER PROC_HEADER_EXT(void)

struct GenericProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ int x, y;
    /* 34 */ int unk34;
    /* 38 */ int unk38;
    /* 3C */ int unk3C;
    /* 40 */ int unk40;

    /* 44 */ u8 pad_38[0x4A - 0x44];

    /* 4A */ short unk4A;

    // Is this part of that?
    /* 4C */ short unk4C; 
    /* 4E */ short unk4E;
    /* 50 */ short unk50;

    /* 52 */ u16 unk52;

    /* 54 */ void * ptr;
    /* 58 */ int unk58;
    /* 5C */ int unk5C;
    /* 60 */ int unk60;
    /* 64 */ short unk64;
    /* 66 */ short unk66;
    /* 68 */ short unk68;
    /* 6A */ short unk6A;
};

#define PROC_TREE_VSYNC ((ProcPtr) 0)
#define PROC_TREE_1     ((ProcPtr) 1)
#define PROC_TREE_2     ((ProcPtr) 2)
#define PROC_TREE_3     ((ProcPtr) 3)
#define PROC_TREE_4     ((ProcPtr) 4)
#define PROC_TREE_5     ((ProcPtr) 5)
#define PROC_TREE_6     ((ProcPtr) 6)
#define PROC_TREE_7     ((ProcPtr) 7)

enum
{
    PROC_MARK_1 = 1,
    PROC_MARK_2 = 2,
    PROC_MARK_MU = 4,
    PROC_MARK_5 = 5,
    PROC_MARK_6 = 6,
    PROC_MARK_7 = 7,
    PROC_MARK_8 = 8,
    PROC_MARK_10 = 10,
    PROC_MARK_GAMECTRL = 11,
};

extern ProcPtr gProcTreeRootArray[8];

void InitProcs(void);
ProcPtr SpawnProc(struct ProcScr const * scr, ProcPtr parent);
ProcPtr SpawnProcLocking(struct ProcScr const * scr, ProcPtr parent);
void Proc_End(ProcPtr proc);
void Proc_Run(ProcPtr proc);
void Proc_Break(ProcPtr proc);
ProcPtr FindProc(struct ProcScr const * script);
ProcPtr FindActiveProc(struct ProcScr const * script);
ProcPtr FindMarkedProc(int mark);
void Proc_Goto(ProcPtr proc, int label);
void Proc_GotoScript(ProcPtr proc, struct ProcScr const * script);
void Proc_Mark(ProcPtr proc, int mark);
void Proc_SetEndFunc(ProcPtr proc, ProcFunc func);
void Proc_ForAll(ProcFunc func);
void Proc_ForEach(struct ProcScr const * script, ProcFunc func);
void Proc_ForEachMarked(int mark, ProcFunc func);
void Proc_LockEachMarked(int mark);
void Proc_ReleaseEachMarked(int mark);
void Proc_EndEachMarked(int mark);
void Proc_EndEach(struct ProcScr const * script);
void Proc_BreakEach(struct ProcScr const * script);
void Proc_ForSubtree(ProcPtr proc, ProcFunc func);
void Proc_PrintSubtreeInfo(ProcPtr proc);
void Proc_SetRepeatFunc(ProcPtr proc, ProcFunc func);
void Proc_Lock(ProcPtr proc);
void Proc_Release(ProcPtr proc);

#define Proc_Exists(script) (FindProc((script)) ? TRUE : FALSE)

struct Glyph
{
    struct Glyph const * next;

    u8 sjis_byte_1;
    u8 width;
    u32 bitmap[16];
};

struct Text
{
    /* 00 */ u16 chr_position;
    /* 02 */ u8 x;
    /* 03 */ u8 color;
    /* 04 */ u8 tile_width;
    /* 05 */ bool8 db_enabled;
    /* 06 */ u8 db_id;
    /* 07 */ bool8 is_printing;
};

struct Font
{
    /* 00 */ u8 * draw_dest;
    /* 04 */ struct Glyph const * const * glyphs;
    /* 08 */ void (* draw_glyph)(struct Text * text, struct Glyph const * glyph);
    /* 0C */ u8 * (* get_draw_dest)(struct Text * text);
    /* 10 */ u16 tileref;
    /* 12 */ u16 chr_counter;
    /* 14 */ u16 palid;
    /* 16 */ u8 lang;
};

struct TextInitInfo
{
    /* 00 */ struct Text * text;
    /* 04 */ u8 width;
};

enum
{
    LANG_JAPANESE,
    LANG_ENGLISH,
};

enum
{
    TEXT_GLYPHS_SYSTEM,
    TEXT_GLYPHS_TALK,
};

enum
{
    TEXT_COLOR_0123 = 0,
    TEXT_COLOR_0456 = 1,
    TEXT_COLOR_0789 = 2,
    TEXT_COLOR_0ABC = 3,
    TEXT_COLOR_0DEF = 4,
    TEXT_COLOR_0030 = 5,
    TEXT_COLOR_4DEF = 6,
    TEXT_COLOR_456F = 7,
    TEXT_COLOR_47CF = 8,
    TEXT_COLOR_MASK = 9,

    TEXT_COLOR_COUNT,

    TEXT_COLOR_SYSTEM_WHITE = TEXT_COLOR_0123,
    TEXT_COLOR_SYSTEM_GRAY  = TEXT_COLOR_0456,
    TEXT_COLOR_SYSTEM_BLUE  = TEXT_COLOR_0789,
    TEXT_COLOR_SYSTEM_GOLD  = TEXT_COLOR_0ABC,
    TEXT_COLOR_SYSTEM_GREEN = TEXT_COLOR_0DEF,

    // TEXT_COLOR_TALK_...
};

enum
{
    TEXT_SPECIAL_BIGNUM_0,
    TEXT_SPECIAL_BIGNUM_1,
    TEXT_SPECIAL_BIGNUM_2,
    TEXT_SPECIAL_BIGNUM_3,
    TEXT_SPECIAL_BIGNUM_4,
    TEXT_SPECIAL_BIGNUM_5,
    TEXT_SPECIAL_BIGNUM_6,
    TEXT_SPECIAL_BIGNUM_7,
    TEXT_SPECIAL_BIGNUM_8,
    TEXT_SPECIAL_BIGNUM_9,
    TEXT_SPECIAL_SMALLNUM_0,
    TEXT_SPECIAL_SMALLNUM_1,
    TEXT_SPECIAL_SMALLNUM_2,
    TEXT_SPECIAL_SMALLNUM_3,
    TEXT_SPECIAL_SMALLNUM_4,
    TEXT_SPECIAL_SMALLNUM_5,
    TEXT_SPECIAL_SMALLNUM_6,
    TEXT_SPECIAL_SMALLNUM_7,
    TEXT_SPECIAL_SMALLNUM_8,
    TEXT_SPECIAL_SMALLNUM_9,
    TEXT_SPECIAL_DASH,
    TEXT_SPECIAL_PLUS,
    TEXT_SPECIAL_SLASH,
    TEXT_SPECIAL_TILDE,
    TEXT_SPECIAL_S,
    TEXT_SPECIAL_A,
    TEXT_SPECIAL_B,
    TEXT_SPECIAL_C,
    TEXT_SPECIAL_D,
    TEXT_SPECIAL_E,
    TEXT_SPECIAL_G,
    TEXT_SPECIAL_K, // NOTE: this is an E? used as statscreen exp label and equip marker
    TEXT_SPECIAL_COLON,
    TEXT_SPECIAL_DOT,
    TEXT_SPECIAL_HP_A,
    TEXT_SPECIAL_HP_B,
    TEXT_SPECIAL_LV_A,
    TEXT_SPECIAL_LV_B,
    TEXT_SPECIAL_ARROW,
    TEXT_SPECIAL_HEART,
    TEXT_SPECIAL_100_A,
    TEXT_SPECIAL_100_B,
    TEXT_SPECIAL_PERCENT,
    // TODO: rest

    TEXT_SPECIAL_NOTHING = 0xFF,
};

int GetLang(void);
void ResetText(void);
void InitTextFont(struct Font * font, void * draw_dest, int chr, int palid);
void SetTextFontGlyphs(int glyphSet);
void ResetTextFont(void);
void SetTextFont(struct Font * font);
void InitText(struct Text * text, int width);
void InitTextDb(struct Text * text, int width);
void InitTextList(struct TextInitInfo const * info);
void ClearText(struct Text * text);
void ClearTextPart(struct Text * text, int tile_off, int tile_width);
int Text_GetChrOffset(struct Text * text);
int Text_GetCursor(struct Text * text);
void Text_SetCursor(struct Text * text, int x);
void Text_Skip(struct Text * text, int x);
void Text_SetColor(struct Text * text, int color);
int Text_GetColor(struct Text * text);
void Text_SetParams(struct Text * text, int x, int color);
void PutText(struct Text * text, u16 * tm);
void PutBlankText(struct Text * text, u16 * tm);
int GetStringTextLen(char const * str);
char const * GetCharTextLen(char const * str, int * out_width);
int GetStringTextCenteredPos(int areaLength, char const * str);
void GetStringTextBox(char const * str, int * out_width, int * out_height);
char const * GetStringLineEnd(char const * str);
void Text_DrawString(struct Text * text, char const * str);
void Text_DrawNumber(struct Text * text, int number);
void Text_DrawNumberOrBlank(struct Text * text, int number);
char const * Text_DrawCharacter(struct Text * text, char const * str);
void InitSystemTextFont(void);
void InitTalkTextFont(void);
void SetTextDrawNoClear(void);
void PutDrawText(struct Text * text, u16 * tm, int color, int x, int tile_width, char const * str);
void Text_InsertDrawString(struct Text * text, int x, int color, const char * str);
void Text_InsertDrawNumberOrBlank(struct Text * text, int x, int color, int number);
void InitSpriteTextFont(struct Font * font, u8 * draw_dest, int palid);
void InitSpriteText(struct Text * text);
void SpriteText_DrawBackground(struct Text * text);
void SpriteText_DrawBackgroundExt(struct Text * text, u32 line);
char const * StartTextPrint(struct Text * text, char const * str, int interval, int char_per_tick);
bool IsTextPrinting(struct Text * text);
void EndTextPrinting(void);
void StartGreenText(ProcPtr parent);
void EndGreenText(void);
void PutSpecialChar(u16 * tm, int color, int id);
void PutNumberExt(u16 * tm, int color, int number, int id_zero);
void PutNumber(u16 * tm, int color, int number);
void PutNumberOrBlank(u16 * tm, int color, int number);
void PutNumberTwoChr(u16 * tm, int color, int number);
void PutNumberSmall(u16 * tm, int color, int number);
void PutNumberBonus(int number, u16 * tm);
void PutNumber2DigitExt(u16 * tm, int color, int number, int id_zero);
void PutNumber2Digit(u16 * tm, int color, int number);
void PutNumber2DigitSmall(u16 * tm, int color, int number);
void PutTime(u16 * tm, int color, int time, bool always_display_punctuation);
void PutTwoSpecialChar(u16 * tm, int color, int id_a, int id_b);

extern struct Font gDefaultFont;
extern struct Font *gActiveFont;

enum
{
    INTERPOLATE_LINEAR,
    INTERPOLATE_SQUARE,
    INTERPOLATE_CUBIC,
    INTERPOLATE_POW4,
    INTERPOLATE_RSQUARE,
    INTERPOLATE_RCUBIC,
};

struct PalFadeSt
{
    /* 00 */ u16 fromColors[0x10];
    /* 20 */ u16 const * toColors;
    /* 24 */ u16 * pal;
    /* 28 */ u16 clock;
    /* 2A */ u16 clockEnd;
    /* 2C */ u16 clockStop;
};

int Interpolate(int method, int lo, int hi, int x, int end);
void func_fe6_08013BEC(void);
bool StringEquals(char const * strA, char const * strB);
void StringCopy(char * dst, char const * src);
void Decompress_Unused_08013C74(void const * src, void * dst);
void Decompress(void const * src, void * dst);
int GetDataSize(void const * data);
void Register2dChrMove(u8 const * img, u8 * vram, int width, int height);
void Copy2dChr(void const * src, u8 * dst, int width, int height);
void ApplyBitmap(u8 const * src, void * dst, int width, int height);
void PutAppliedBitmap(u16 * tm, int tileref, int width, int height);
void func_fe6_08013E8C(u16 * tm, u8 const * src, int tileref, int len);
// func_fe6_08013EBC
// func_fe6_08013EC4
// func_fe6_08013ED8
// func_fe6_08013EE4
// func_fe6_08013F04
// func_fe6_08013F7C
// DarkenPals
// func_fe6_0801412C
// func_fe6_08014130
void StartSpacialSeTest(void);
void func_fe6_080141DC(void);
void StartPalFadeToBlack(int palid, int duration, ProcPtr parent);
void StartPalFadeToWhite(int palid, int duration, ProcPtr parent);
struct PalFadeSt * StartPalFade(u16 const * colors, int pal, int duration, ProcPtr parent);
void EndPalFade(void);
void SetPalFadeStop(struct PalFadeSt * st, int val);
void SetBlackPal(int palid);
void SetWhitePal(int palid);
void SetAllBlackPals(void);
void SetAllWhitePals(void);
bool FadeExists(void);
void StartFadeToBlack(int q4_speed);
void StartFadeFromBlack(int q4_speed);
void StartLockingFadeToBlack(int q4_speed, ProcPtr parent);
void StartLockingFadeFromBlack(int q4_speed, ProcPtr parent);
void StartLockingFadeToWhite(int q4_speed, ProcPtr parent);
void StartLockingFadeFromWhite(int q4_speed, ProcPtr parent);
void StartMidFadeToBlack(void);
void StartSlowFadeToBlack(void);
void StartFastFadeToBlack(void);
void StartMidFadeFromBlack(void);
void StartSlowFadeFromBlack(void);
void StartFastFadeFromBlack(void);
void StartMidLockingFadeToBlack(ProcPtr parent);
void StartSlowLockingFadeToBlack(ProcPtr parent);
void StartFastLockingFadeToBlack(ProcPtr parent);
void StartMidLockingFadeFromBlack(ProcPtr parent);
void StartSlowLockingFadeFromBlack(ProcPtr parent);
void StartFastLockingFadeFromBlack(ProcPtr parent);
void StartSlowLockingFadeToWhite(ProcPtr parent);
void StartSlowLockingFadeFromWhite(ProcPtr parent);
// func_fe6_08014778
// func_fe6_08014790
// func_fe6_080147A8
// func_fe6_080147C0
// func_fe6_080147D8
// func_fe6_080147F0
// func_fe6_08014804
// func_fe6_08014818
// func_fe6_0801482C
// func_fe6_08014840
// func_fe6_08014858
// func_fe6_08014870
// func_fe6_08014888
// func_fe6_080148A0
// func_fe6_080148B8
// func_fe6_080148CC
// func_fe6_080148E0
// func_fe6_080148F8
// func_fe6_0801490C
// func_fe6_08014920
// func_fe6_08014934
// func_fe6_08014948
// func_fe6_0801495C
// func_fe6_08014970
// func_fe6_08014984
// func_fe6_08014998
void WhileFadeExists(ProcPtr proc);
// func_fe6_080149CC
void func_fe6_080149E0(int kind, int speed, ProcPtr parent, Func endFunc);
// func_fe6_08014A28
// func_fe6_08014A38
// func_fe6_08014A44
// func_fe6_08014A68
void func_fe6_08014AB8(void);
// func_fe6_08014ACC
void func_fe6_08014ADC(void);
void func_fe6_08014AF8(void);
void func_fe6_08014B68(void);
void StartTemporaryLock(ProcPtr proc, int arg_1);
int NumberToString(int number, char * buf);
struct Text * PutStringCentered(u16 * tm, int color, int width, char const * str);
struct Text * PutString(u16 * tm, int color, char const * str);
void func_fe6_08014D50(void);
// func_fe6_08014D60
void func_fe6_08014D9C(u16 const * colors, int pal_offset, int pal_size, int interval, ProcPtr parent);
void func_fe6_08014DB4(u16 const * colors, int pal_offset, int pal_size, int interval, ProcPtr parent);
// func_fe6_08014DCC
void func_fe6_08014E30(u16 * tm, int x, int y, u16 tileref, int width, int height);
// func_fe6_08014E98
void func_fe6_08014F70(u16 * tm, int x, int y, u16 tileref, int width, int height, u16 const * src, int arg_7);
void func_fe6_0801501C(u16 * tm, int x, int y, u16 tileref, int width, int height, u8 const * src, int arg_7);
// func_fe6_080150DC
void CallDelayed(void (* func)(void), int delay);
void CallDelayedArg(void (* func)(int), int arg, int delay);
// func_fe6_080151E4
// func_fe6_080151F8
void func_fe6_08015208(u16 * out, int size, int value);
void StartPartialGameLock(ProcPtr proc);
void func_fe6_08015260(u8 const * src, u8 * dst, int size);
void func_fe6_08015298(u8 const * src, u8 * dst, int width, int height);
void func_fe6_080152C4(u16 const * src, u16 * dst, int size, u16 tileref);
u16 * GetTmOffsetById(int bgid, int x, int y);
void func_fe6_08015344(void);
int Screen2Pan(int x);
void PlaySeSpacial(int song, int x);
void PlaySeDelayed(int song, int delay);
void func_fe6_0801548C(short song);
void func_fe6_0801549C(short speed);
// func_fe6_080154AC
// func_fe6_08015504
void PutDrawTextCentered(struct Text * text, int x, int y, char const * str, int width);
void VecMulMat(int const * vec, int const * mat, int* ovec);
void MatMulMat(int const * lmat, int const * rmat, int* omat);
void MatIdent(int* mat);
void MatCopy(int const * src, int* dst);
void MatRotA(int* mat, short angle);
void MatRotB(int* mat, short angle);
void MatRotC(int* mat, short angle);
void func_fe6_08015858(void);
int VecDotVec(int const * lvec, int const * rvec);
void VecCrossVec(int const * lvec, int const * rvec, int* ovec);
int func_fe6_080158B8(int arg_0, int arg_1, int arg_2, int arg_3);

extern u16 CONST_DATA Pal_AllBlack[];
extern u16 CONST_DATA Pal_AllWhite[];
extern u16 CONST_DATA Pal_AllRed[];
extern u16 CONST_DATA Pal_AllGreen[];
extern u16 CONST_DATA Pal_AllBlue[];
extern u16 CONST_DATA Pal_085C4F2C[];
extern CONST_DATA char gGlobalSaveInfoName[]; /* gSaveHeaderKeygen */

enum { MAX_SAVED_GAME_CLEARS = 12 };

struct GlobalSaveInfo
{
    /* 00 */ char name[0x8];
    /* 08 */ u32 magic_11217;
    /* 0C */ u16 magic_200A;
    
    /* 0E */ u8 unk_0E_0 : 1;
    /* 0E */ u8 unk_0E_1 : 1;
    /* 0E */ u8 unk_0E_2 : 1;
    /* 0E */ u8 unk_0E_3 : 1;
    /* 0E */ u8 unk_0E_4 : 4;

    /* 0F */ u8 unk0F;

    /* 10 */ u8 playThrough[MAX_SAVED_GAME_CLEARS];
    /* 1C */ u16 cksum16;
    /* 1E */ u8 unk1E;
    /* 1F */ u8 unk1F;
};
struct SaveBlockInfo
{
    /* 00 */ u32 magic_a;
    /* 04 */ u16 magic_b;
    /* 06 */ u8 kind;
    /* 08 */ u16 offset;
    /* 0A */ u16 size;
    /* 0C */ u32 checksum32;
};

extern u8 *gpSramEntry;
enum
{
    SAVE_ID_GAME0,
    SAVE_ID_GAME1,
    SAVE_ID_GAME2,
    SAVE_ID_SUSPEND0,
    SAVE_ID_SUSPEND1,
    SAVE_ID_5,
    SAVE_ID_6,
    SAVE_ID_MAX
};

struct SramHeader {
    struct GlobalSaveInfo meta;
    struct SaveBlockInfo chunks[SAVE_ID_MAX];
};


bool VerifySaveBlockInfo(struct SaveBlockInfo *chunk);
bool LoadGlobalSaveInfo(struct GlobalSaveInfo *saveInfo);
bool CheckSaveChunkChapterValid();
bool func_fe6_08086558();
bool CheckSaveChunkChapterValid(int index);
bool IsSramWorking();

enum
{
    BM_FLAG_0 = (1 << 0),
    BM_FLAG_1 = (1 << 1),
    BM_FLAG_2 = (1 << 2),
    BM_FLAG_3 = (1 << 3),
    BM_FLAG_4 = (1 << 4),
    BM_FLAG_5 = (1 << 5),
    BM_FLAG_LINKARENA = (1 << 6),
};

enum
{
    PARTIAL_ACTION_RESCUE_TRANSFER = (1 << 0),
    PARTIAL_ACTION_TRADED = (1 << 1),
    PARTIAL_ACTION_SUPPLY = (1 << 2),
};

enum
{
    PLAY_FLAG_STATSCREENPAGE0 = (1 << 0),
    PLAY_FLAG_STATSCREENPAGE1 = (1 << 1),
    PLAY_FLAG_2               = (1 << 2),
    PLAY_FLAG_3               = (1 << 3),
    PLAY_FLAG_4               = (1 << 4),
    PLAY_FLAG_COMPLETE               = (1 << 5),
    PLAY_FLAG_HARD            = (1 << 6),
    PLAY_FLAG_7               = (1 << 7),

    PLAY_FLAG_STATSCREENPAGE_SHIFT = 0,
    PLAY_FLAG_STATSCREENPAGE_MASK = PLAY_FLAG_STATSCREENPAGE0 | PLAY_FLAG_STATSCREENPAGE1,
};

enum
{
    WEATHER_NONE,

    WEATHER_SNOW,
    WEATHER_SNOWSTORM,
    WEATHER_NIGHT,
    WEATHER_RAIN,
    WEATHER_FLAMES,
    WEATHER_SANDSTORM,
    WEATHER_CLOUDS,
};

enum
{
    MAP_CURSOR_DEFAULT,
    MAP_CURSOR_REGULAR,
    MAP_CURSOR_RED_MOVING,
    MAP_CURSOR_STRETCHED,
    MAP_CURSOR_RED_STATIC,
};

enum
{
    L_BMMAIN_INIT,
    L_BMMAIN_CHANGEPHASE,
    L_BMMAIN_2,
    L_BMMAIN_DURINGPHASE,
    L_BMMAIN_4,
    L_BMMAIN_5,
    L_BMMAIN_6,
    L_BMMAIN_STARTPHASE,
    L_BMMAIN_8,
};

struct BmSt
{
    /* 00 */ bool8 main_loop_ended;
    /* 01 */ i8 lock;
    /* 02 */ i8 lock_display;
    /* 03 */ u8 pad_03;
    /* 04 */ u8 flags;
    /* 05 */ // pad
    /* 06 */ u16 main_loop_end_scanline;
    /* 08 */ int pad_08;
    /* 0C */ struct Vec2i camera;
    /* 10 */ struct Vec2i camera_previous;
    /* 14 */ struct Vec2i cursor;
    /* 18 */ struct Vec2i cursor_previous;
    /* 1C */ struct Vec2i cursor_sprite_target;
    /* 20 */ struct Vec2i cursor_sprite;
    /* 24 */ struct Vec2i map_render_anchor;
    /* 28 */ struct Vec2i camera_max;
    /* 2C */ u16 inventory_item_overflow;
    /* 2E */ u16 convoy_item_overflow;
    /* 30 */ bool8 unk_30;
    /* 31 */ bool8 unk_31;
    /* 32 */ short unk_32;
    /* 34 */ short unk_34;
    /* 36 */ i8 unk_36;
    /* 37 */ i8 unk_37;
    /* 38 */ u8 alt_blend_a_ca;
    /* 39 */ u8 alt_blend_a_cb;
    /* 3A */ u8 alt_blend_b_ca;
    /* 3B */ u8 alt_blend_b_cb;
    /* 3C */ u8 unk_3C;
    /* 3D */ u8 partial_actions_taken;
    /* 3E */ u8 unk_3E;
    /* 3F */ i8 unk_3F;
};
enum glb_pos
{
    POS_L = 0,
    POS_R = 1,
    POS_INVALID = -1
};
struct PlaySt
{
    /* 00 */ u32 unk_00; // a time value
    /* 04 */ u32 unk_04; // a time value

    /* 08 */ int gold;
    /* 0C */ u8 save_slot;
    /* 0D */ u8 vision;
    /* 0E */ i8 chapter;
    /* 0F */ u8 faction;
    /* 10 */ u16 turn;
    /* 12 */ u8 x_cursor, y_cursor;
    /* 14 */ u8 flags;
    /* 15 */ u8 weather;
    /* 16 */ u16 support_gain;
    /* 18 */ u8 playthrough_id;
    /* 19 */ u8 ending_id : 4;
    /* 1A */ u8 last_sort_id;
    /* 1B */ u8 unk_1B;

    /* 1C */ // option bits
    /* bit  0 */ u32 unk_1C_1 : 1;
    /* bit  1 */ u32 unk_1C_2 : 1;
    /* bit  2 */ u32 unk_1C_3 : 2;
    /* bit  4 */ u32 config_no_auto_cursor : 1;
    /* bit  5 */ u32 config_talk_speed : 2;
    /* bit  7 */ u32 config_walk_speed : 1;
    /* bit  8 */ u32 config_bgm_disable : 1;
    /* bit  9 */ u32 config_se_disable : 1;
    /* bit 10 */ u32 config_window_theme : 2;
    /* bit 12 */ u32 unk_1D_5 : 1;
    /* bit 13 */ u32 unk_1D_6 : 1;
    /* bit 14 */ u32 config_no_auto_end_turn : 1;
    /* bit 15 */ u32 config_no_subtitle_help : 1;
    /* bit 16 */ u32 config_battle_anim : 2;
    /* bit 18 */ u32 config_battle_preview_kind : 2;
    /* bit 20 */ u32 unk_1E_5 : 1;
    /* bit 21 */ u32 unk_1E_6 : 1;
    /* bit 22 */ u32 debug_control_red : 2;
    /* bit 24 */ u32 debug_control_green : 2;
    /* bit 26 */ u32 unk_1F_3 : 6;
};

void OnVBlank(void);
void OnMain(void);
void LockGame(void);
void UnlockGame(void);
u8 GetGameLock(void);
void InitBmBgLayers(void);
void ApplySystemObjectsGraphics(void);
void ApplySystemGraphics(void);
void HandleMapCursorInput(u16 keys);
void HandleMoveMapCursor(int step);
void HandleMoveCameraWithMapCursor(int step);
u16 GetCameraAdjustedX(int x);
u16 GetCameraAdjustedY(int y);
u16 GetCameraCenteredX(int x);
u16 GetCameraCenteredY(int y);
void PutMapCursor(int x, int y, int kind);
void SetMapCursorPosition(int x, int y);
void PutSysArrow(int x, int y, u8 isDown);
void PutSysAButton(int x, int y, int palid);
bool CameraMoveWatchPosition(ProcPtr proc, int x, int y);
bool IsCameraNotWatchingPosition(int x, int y);
bool CameraMove_08016290(ProcPtr proc);
void Unused_08016344(int x, int y, int duration);
int GetActiveMapSong(void);
void StartMapSongBgm(void);

extern struct ProcScr CONST_DATA ProcScr_BmMain[];
extern struct ProcScr CONST_DATA ProcScr_CamMove[];

extern struct BmSt EWRAM_DATA gBmSt;
extern struct PlaySt EWRAM_DATA gPlaySt;


enum { UNIT_WEAPON_EXP_COUNT = 8 };
enum { UNIT_SUPPORT_COUNT = 10 };
enum { UNIT_LEVEL_MAX = 20 };

enum
{
    UNIT_AMOUNT_BLUE = 62,
    UNIT_AMOUNT_RED = 50,
    UNIT_AMOUNT_GREEN = 20,
    UNIT_AMOUNT_PURPLE = 5,
};

enum
{
    UNIT_ATTR_MOUNTED = (1 << 0),
    UNIT_ATTR_RE_MOVE = (1 << 1),
    UNIT_ATTR_STEAL = (1 << 2),
    UNIT_ATTR_THIEF = (1 << 3),
    UNIT_ATTR_DANCE = (1 << 4),
    UNIT_ATTR_PLAY = (1 << 5),
    UNIT_ATTR_CRITBONUS = (1 << 6),
    UNIT_ATTR_BALLISTA = (1 << 7),
    UNIT_ATTR_PROMOTED = (1 << 8),
    UNIT_ATTR_SUPPLY = (1 << 9),
    UNIT_ATTR_MOUNT_ICON = (1 << 10),
    UNIT_ATTR_WYVERN_ICON = (1 << 11),
    UNIT_ATTR_PEGASUS_ICON = (1 << 12),
    UNIT_ATTR_LORD = (1 << 13),
    UNIT_ATTR_FEMALE = (1 << 14),
    UNIT_ATTR_BOSS = (1 << 15),
    UNIT_ATTR_LOCK_ROY = (1 << 16),
    UNIT_ATTR_LOCK_MYRM = (1 << 17),
    UNIT_ATTR_LOCK_DRAGON = (1 << 18),
    UNIT_ATTR_LOCK_ZEPHIEL = (1 << 19),
    UNIT_ATTR_TRIANGLE_ATTACK_PEGASI = (1 << 21),
    UNIT_ATTR_TRIANGLE_ATTACK_ARMORS = (1 << 22),
    UNIT_ATTR_ALT_PINFO = (1 << 23),
    UNIT_ATTR_MAJOR_BOSS = (1 << 24),

    // Helpers
    UNIT_ATTR_REFRESHER = UNIT_ATTR_DANCE + UNIT_ATTR_PLAY,
    UNIT_ATTR_TRIANGLE_ATTACK_ANY = UNIT_ATTR_TRIANGLE_ATTACK_PEGASI + UNIT_ATTR_TRIANGLE_ATTACK_ARMORS,
};

enum
{
    UNIT_FLAG_HIDDEN       = 1 << 0,
    UNIT_FLAG_TURN_ENDED   = 1 << 1,
    UNIT_FLAG_DEAD         = 1 << 2,
    UNIT_FLAG_NOT_DEPLOYED = 1 << 3,
    UNIT_FLAG_RESCUING     = 1 << 4,
    UNIT_FLAG_RESCUED      = 1 << 5,
    UNIT_FLAG_HAD_ACTION   = 1 << 6,
    UNIT_FLAG_UNDER_ROOF   = 1 << 7,
    UNIT_FLAG_SEEN         = 1 << 8,
    UNIT_FLAG_CONCEALED    = 1 << 9,
    UNIT_FLAG_AI_PROCESSED = 1 << 10,

    UNIT_FLAG_SOLOANIM_1   = 1 << 14,
    UNIT_FLAG_SOLOANIM_2   = 1 << 15,

    // Helpers

    UNIT_FLAG_UNAVAILABLE = UNIT_FLAG_DEAD | UNIT_FLAG_NOT_DEPLOYED,
};

enum
{
    UNIT_STATUS_NONE,

    UNIT_STATUS_POISON,
    UNIT_STATUS_SLEEP,
    UNIT_STATUS_SILENCED,
    UNIT_STATUS_BERSERK,
};

enum
{
    UNIT_USEBIT_WEAPON = (1 << 0),
    UNIT_USEBIT_STAFF = (1 << 1),
};

enum
{
    ITEMSLOT_INV0,
    ITEMSLOT_INV1,
    ITEMSLOT_INV2,
    ITEMSLOT_INV3,
    ITEMSLOT_INV4,

    ITEMSLOT_INV_COUNT,

    ITEMSLOT_OVERFLOW = ITEMSLOT_INV_COUNT + 0,
    ITEMSLOT_ARENA_PLAYER = ITEMSLOT_INV_COUNT + 1,
    ITEMSLOT_ARENA_OPPONENT = ITEMSLOT_INV_COUNT + 2,
    ITEMSLOT_BALLISTA = ITEMSLOT_INV_COUNT + 3,
};

struct PInfo
{
    /* 00 */ u16 msg_name;
    /* 02 */ u16 msg_desc;
    /* 04 */ u8 id;
    /* 05 */ u8 jid_default;
    /* 06 */ u16 fid;
    /* 08 */ u8 chibi_id;
    /* 09 */ u8 affinity;
    /* 0A */ u8 unk_0A;

    /* 0B */ i8 base_level;
    /* 0C */ i8 base_hp;
    /* 0D */ i8 base_pow;
    /* 0E */ i8 base_skl;
    /* 0F */ i8 base_spd;
    /* 10 */ i8 base_def;
    /* 11 */ i8 base_res;
    /* 12 */ i8 base_lck;
    /* 13 */ i8 bonus_con;

    /* 14 */ u8 wexp[UNIT_WEAPON_EXP_COUNT];

    /* 1C */ u8 growth_hp;
    /* 1D */ u8 growth_pow;
    /* 1E */ u8 growth_skl;
    /* 1F */ u8 growth_spd;
    /* 20 */ u8 growth_def;
    /* 21 */ u8 growth_res;
    /* 22 */ u8 growth_lck;

    /* 23 */ u8 banim_pal_a;
    /* 24 */ u8 banim_pal_b;
    /* 25 */ // pad

    /* 28 */ u32 attributes;

    /* 2C */ struct SupportInfo const * support_info;
};

struct JInfo
{
    /* 00 */ u16 msg_name;
    /* 02 */ u16 msg_desc;
    /* 04 */ u8 id;
    /* 05 */ u8 jid_promote;
    /* 06 */ u8 map_sprite;
    /* 07 */ u8 walk_speed;
    /* 08 */ u16 fid;
    /* 0A */ u8 unk_0A;

    /* 0B */ i8 base_hp;
    /* 0C */ i8 base_pow;
    /* 0D */ i8 base_skl;
    /* 0E */ i8 base_spd;
    /* 0F */ i8 base_def;
    /* 10 */ i8 base_res;
    /* 11 */ i8 base_con;
    /* 12 */ i8 base_mov;

    /* 13 */ i8 max_hp;
    /* 14 */ i8 max_pow;
    /* 15 */ i8 max_skl;
    /* 16 */ i8 max_spd;
    /* 17 */ i8 max_def;
    /* 18 */ i8 max_res;
    /* 19 */ i8 max_con;

    /* 1A */ i8 power_level;

    /* 1B */ i8 growth_hp;
    /* 1C */ i8 growth_pow;
    /* 1D */ i8 growth_skl;
    /* 1E */ i8 growth_spd;
    /* 1F */ i8 growth_def;
    /* 20 */ i8 growth_res;
    /* 21 */ i8 growth_lck;
    /* 22 */ // pad

    /* 24 */ u32 attributes;

    /* 28 */ u8 wexp[UNIT_WEAPON_EXP_COUNT];

    /* 30 */ void const * banim_info;

    /* 34 */ i8 const * mov_table;
    /* 38 */ i8 const * avo_terrain_table;
    /* 3C */ i8 const * def_terrain_table;
    /* 40 */ i8 const * res_terrain_table;

    /* 44 */ void const * unk_44;
};

struct Unit
{
    /* 00 */ struct PInfo const * pinfo;
    /* 04 */ struct JInfo const * jinfo;
    /* 08 */ i8 level;
    /* 09 */ u8 exp;
    /* 0A */ u8 ai_flags;
    /* 0B */ i8 id;
    /* 0C */ u16 flags;
    /* 0E */ i8 x;
    /* 0F */ i8 y;
    /* 10 */ i8 max_hp;
    /* 11 */ i8 hp;
    /* 12 */ i8 pow;
    /* 13 */ i8 skl;
    /* 14 */ i8 spd;
    /* 15 */ i8 def;
    /* 16 */ i8 res;
    /* 17 */ i8 lck;
    /* 18 */ i8 bonus_con;
    /* 19 */ u8 rescue;
    /* 1A */ i8 bonus_mov;
    /* 1B */ // pad?
    /* 1C */ u16 items[ITEMSLOT_INV_COUNT];
    /* 26 */ u8 wexp[UNIT_WEAPON_EXP_COUNT];
    /* 2E */ u8 status : 4;
    /* 2E */ u8 status_duration : 4;
    /* 2F */ u8 torch : 4;
    /* 2F */ u8 barrier : 4;
    /* 30 */ u8 supports[UNIT_SUPPORT_COUNT];
    /* 3A */ // pad?
    /* 3C */ struct UnitSprite * map_sprite;
    /* 40 */ u16 ai_config;
    /* 42 */ u8 ai_a;
    /* 43 */ u8 ai_a_pc;
    /* 44 */ u8 ai_b;
    /* 45 */ u8 ai_b_pc;
    /* 46 */ u8 unk_46;
    /* 47 */ // pad?
    /* 48 */ // end
};

struct UnitInfo
{
    /* 00 */ u8 pid;
    /* 01 */ u8 jid;
    /* 02 */ u8 pid_lead;
    /* 03 */ u8 autolevel : 1;
    /* 03 */ u8 faction_id : 2;
    /* 03 */ u8 level : 5;
    /* 04 */ u8 x_load, y_load;
    /* 06 */ u8 x_move, y_move;
    /* 08 */ u8 items[4];
    /* 0C */ u8 ai[4];
};

void InitUnits(void);
void ClearUnit(struct Unit * unit);
void CopyUnit(struct Unit * src, struct Unit * dst);
struct Unit * GetFreeUnit(int faction);
int GetUnitCurrentHp(struct Unit * unit);
int GetUnitMaxHp(struct Unit * unit);
int GetUnitPower(struct Unit * unit);
int GetUnitSkill(struct Unit * unit);
int GetUnitSpeed(struct Unit * unit);
int GetUnitDefense(struct Unit * unit);
int GetUnitResistance(struct Unit * unit);
int GetUnitLuck(struct Unit * unit);
int GetUnitFid(struct Unit * unit);
int GetUnitChibiId(struct Unit * unit);
int GetUnitLeaderPid(struct Unit * unit);
void SetUnitLeaderPid(struct Unit * unit, int pid);
void SetUnitHp(struct Unit * unit, int hp);
void AddUnitHp(struct Unit * unit, int amount);
int GetUnitVision(struct Unit * unit);
char const * GetUnitRescueName(struct Unit * unit);
char const * GetUnitStatusName(struct Unit * unit);
void SetUnitStatus(struct Unit * unit, int status);
struct Unit * GetUnit(int unit_id);
struct JInfo const * GetJInfo(int jid);
struct PInfo const * GetPInfo(int pid);
int GetUnitMapSprite(struct Unit * unit);
bool UnitAddItem(struct Unit * unit, int item);
void UnitRemoveItem(struct Unit * unit, int slot);
void UnitRemoveInvalidItems(struct Unit * unit);
int GetUnitItemCount(struct Unit * unit);
bool UnitHasItem(struct Unit * unit, int item);
int BatchCreateUnits(struct UnitInfo const * info);
struct Unit * CreateUnit(struct UnitInfo const * info);
void UnitInitFromInfo(struct Unit * unit, struct UnitInfo const * info);
void UnitInitStats(struct Unit * unit, struct PInfo const * pinfo);
void func_fe6_08017764(struct Unit * unit);
void UnitInitSupports(struct Unit * unit);
void UnitAutolevelWeaponExp(struct Unit * unit, struct UnitInfo const * info);
void UnitAutolevelCore(struct Unit * unit, u8 jid, int levelCount);
void UnitApplyBonusLevels(struct Unit * unit, int levelCount);
void UnitAutolevel(struct Unit * unit);
void UnitAutolevelPlayer(struct Unit * unit);
void UnitCheckStatOverflow(struct Unit * unit);
struct Unit * GetUnitByPid(int pid);
bool CanUnitCarry(struct Unit * unit, struct Unit * other);
void UnitRescue(struct Unit * unit, struct Unit * other);
void UnitDropRescue(struct Unit * unit, int x, int y);
bool UnitGiveRescue(struct Unit * unit, struct Unit * other);
void KillUnit(struct Unit * unit);
void UnitChangeFaction(struct Unit * unit, int faction);
bool CanUnitCrossTerrain(struct Unit * unit, int terrain);
void UnitSyncMovement(struct Unit * unit);
void UnitGetDropPositionOnDeath(struct Unit * unit, int* xOut, int* yOut);
void UnitBeginAction(struct Unit * unit);
void UnitBeginReMoveAction(struct Unit * unit);
void func_fe6_08017EDC(int x, int y);
void ClearActiveFactionTurnEndedState(void);
void TickActiveFactionTurnAndListStatusHeals(void);
void func_fe6_0801809C(void);
void UnitUpdateUsedItem(struct Unit * unit, int item_slot);
int GetUnitAid(struct Unit * unit);
int GetUnitMagRange(struct Unit * unit);
bool UnitKnowsMagic(struct Unit * unit);
void func_fe6_080181B0(struct Unit * unit, int x, int y);
int GetUnitKeyItemSlotForTerrain(struct Unit * unit, int terrain);
int GetAidIconFromAttributes(int attributes);
int func_fe6_08018258(struct Unit * unit);
bool CanActiveUnitStillMove(void);

extern struct Unit * gActiveUnit;

extern u8 EWRAM_DATA gActiveUnitId;
extern struct Vec2i EWRAM_DATA gActiveUnitMoveOrigin;

extern struct Unit EWRAM_DATA gUnitArrayBlue[UNIT_AMOUNT_BLUE];
extern struct Unit EWRAM_DATA gUnitArrayRed[UNIT_AMOUNT_RED];
extern struct Unit EWRAM_DATA gUnitArrayGreen[UNIT_AMOUNT_GREEN];
extern struct Unit EWRAM_DATA gUnitArrayPurple[UNIT_AMOUNT_PURPLE];

#define UNIT_FACTION(unit) ((unit)->id & 0xC0)
#define UNIT_ATTRIBUTES(unit) (((unit)->pinfo->attributes) | ((unit)->jinfo->attributes))

#define UNIT_HP_CAP(unit)  (UNIT_FACTION(unit) == FACTION_RED ? 80 : 60)
#define UNIT_POW_CAP(unit) ((unit)->jinfo->max_pow)
#define UNIT_SKL_CAP(unit) ((unit)->jinfo->max_skl)
#define UNIT_SPD_CAP(unit) ((unit)->jinfo->max_spd)
#define UNIT_DEF_CAP(unit) ((unit)->jinfo->max_def)
#define UNIT_RES_CAP(unit) ((unit)->jinfo->max_res)
#define UNIT_LCK_CAP(unit) (30)
#define UNIT_CON_CAP(unit) ((unit)->jinfo->max_con)
#define UNIT_MOV_CAP(unit) (15)

#define UNIT_CON_BASE(unit) ((unit)->jinfo->base_con + (unit)->pinfo->bonus_con)
#define UNIT_MOV_BASE(unit) ((unit)->jinfo->base_mov)

#define UNIT_CON(unit) (UNIT_CON_BASE(unit) + (unit)->bonus_con)
#define UNIT_MOV(unit) ((unit)->bonus_mov + UNIT_MOV_BASE(unit))

#define FOR_UNITS(begin, end, var_name, body) \
{ \
    int _uid; \
    struct Unit * var_name; \
    for (_uid = (begin); _uid < (end); ++_uid) \
    { \
        var_name = GetUnit(_uid); \
        if (!var_name) \
            continue; \
        if (!var_name->pinfo) \
            continue; \
        body \
    } \
}

typedef u8  volatile vu8;
typedef u16 volatile vu16;
typedef u32 volatile vu32;
typedef u64 volatile vu64;
typedef i8  volatile vi8;
typedef i16 volatile vi16;
typedef i32 volatile vi32;
typedef i64 volatile vi64;

struct BgAffineSetSrc
{
    /* +00 */ i32 tex_x;
    /* +04 */ i32 tex_y;
    /* +08 */ i16 scr_x;
    /* +0A */ i16 scr_y;
    /* +0C */ i16 sx;
    /* +0E */ i16 sy;
    /* +10 */ u16 alpha;
};

struct BgAffineSetDst
{
    /* +00 */ i16 pa;
    /* +02 */ i16 pb;
    /* +04 */ i16 pc;
    /* +06 */ i16 pd;
    /* +08 */ i32 dx;
    /* +0C */ i32 dy;
};

struct ObjAffineSetSrc
{
    /* +00 */ i16 x_scale;
    /* +02 */ i16 y_scale;
    /* +04 */ u16 rotation;
};

enum
{
    BIT_UNPACK_ADDEND_ZERO = 1 << 31,
};

struct BitUnpackInfo
{
    /* +00 */ u16 src_len;
    /* +02 */ u8  src_unit_bits;
    /* +03 */ u8  dst_unit_bits;
    /* +04 */ u32 data_addend;
};

enum
{
    GBA_RESET_EWRAM    = 1 << 0,
    GBA_RESET_IWRAM    = 1 << 1,
    GBA_RESET_PALETTE  = 1 << 2,
    GBA_RESET_VRAM     = 1 << 3,
    GBA_RESET_OAM      = 1 << 4,
    GBA_RESET_SIO_IO   = 1 << 5,
    GBA_RESET_SOUND_IO = 1 << 6,
    GBA_RESET_IO       = 1 << 7,
    GBA_RESET_ALL      = (1 << 8) - 1,
};

enum
{
    CPU_SET_SRC_FIXED = 0x01000000,
    CPU_SET_32BIT     = 0x04000000,
    CPU_SET_16BIT     = 0x00000000,
};

/* svc 00 */ void SoftReset(u32 reset_flags);
/* svc 01 */ void RegisterRamReset(u32 reset_flags);
// svc 02 */ void Halt(void);
// svc 03 */ void Stop(void);
// svc 04 */ void IntrWait(bool wait_next, u16 intr_flags);
/* svc 05 */ void VBlankIntrWait(void);
/* svc 06 */ i32  Div(i32 lhs, i32 rhs);
/* svc 06 */ i32  DivRem(i32 lhs, i32 rhs);
// svc 07 */ i32  DivArm(i32 rhs, i32 lhs);
/* svc 08 */ u16  Sqrt(u32 num);
// svc 09 */ u32  ArcTan(u16 tan);
/* svc 0A */ u16  ArcTan2(i16 x, i16 y);
/* svc 0B */ void CpuSet(const void * src, void * dst, u32 control);
/* svc 0C */ void CpuFastSet(const void * src, void * dst, u32 control);
// svc 0D */ u32  GetBiosChecksum(void);
/* svc 0E */ void BgAffineSet(struct BgAffineSetSrc const * src, struct BgAffineSetDst * dst, i32 count);
/* svc 0F */ void ObjAffineSet(struct ObjAffineSetSrc const * src, void * dest, i32 count, i32 offset);
// svc 10 */ void BitUnpack(void const * src, void * dst, struct BitUnpackInfo const * info);
/* svc 11 */ void LZ77UnCompWram(void const * src, void * dst);
/* svc 12 */ void LZ77UnCompVram(void const * src, void * dst);
/* svc 13 */ void HuffUnComp(void const * src, void * dst);
/* svc 14 */ void RLUnCompWram(void const * src, void * dst);
/* svc 15 */ void RLUnCompVram(void const * src, void * dst);
// svc 16 */ void Diff8bitUnFilterWram(void const * src, void * dst);
// svc 17 */ void Diff8bitUnFilterVram(void const * src, void * dst);
// svc 18 */ void Diff16bitUnFilter(void const * src, void * dst);
/* svc 19 */ void SoundBiasReset(void);
/* svc 19 */ void SoundBiasSet(void);

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

#define CpuFastFill(value, dest, size)                          \
{                                                               \
    vu32 tmp = (vu32)(value);                                   \
    CpuFastSet((void *)&tmp,                                    \
               dest,                                            \
               CPU_SET_SRC_FIXED | ((size)/(32/8) & 0x1FFFFF)); \
}

#define CpuFastFill16(value, dest, size) CpuFastFill(((value) << 16) | (value), (dest), (size))

#define CpuFastCopy(src, dest, size) CpuFastSet(src, dest, ((size)/(32/8) & 0x1FFFFF))

#define DmaSet(dmaNum, src, dest, control)   \
{                                            \
    vu32 *dmaRegs = (vu32 *) &REG_DMA##dmaNum##SAD; \
    dmaRegs[0] = (vu32)(src);                \
    dmaRegs[1] = (vu32)(dest);               \
    dmaRegs[2] = (vu32)(control);            \
    dmaRegs[2];                              \
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


#define FOR_UNITS_FACTION(faction, var_name, body) \
    FOR_UNITS((faction) + 1, (faction) + 0x40, var_name, body)

#define FOR_UNITS_ALL(var_name, body) \
    FOR_UNITS(1, 0xC0, var_name, body)

struct DispCnt
{
    /* bit  0 */ u16 mode : 3;
    /* bit  3 */ u16 : 1;
    /* bit  4 */ u16 bitmap_frame : 1;
    /* bit  5 */ u16 hblank_interval_free : 1;
    /* bit  6 */ u16 obj_mapping : 1;
    /* bit  7 */ u16 forced_blank : 1;
    /* bit  8 */ u16 bg0_enable : 1;
    /* bit  9 */ u16 bg1_enable : 1;
    /* bit 10 */ u16 bg2_enable : 1;
    /* bit 11 */ u16 bg3_enable : 1;
    /* bit 12 */ u16 obj_enable : 1;
    /* bit 13 */ u16 win0_enable : 1;
    /* bit 14 */ u16 win1_enable : 1;
    /* bit 15 */ u16 objwin_enable : 1;
};

struct DispStat
{
    /* bit  0 */ u16 vblank : 1;
    /* bit  1 */ u16 hblank : 1;
    /* bit  2 */ u16 vcount : 1;
    /* bit  3 */ u16 vblank_int_enable : 1;
    /* bit  4 */ u16 hblank_int_enable : 1;
    /* bit  5 */ u16 vcount_int_enable : 1;
    /* bit  6 */ u16 : 2;
    /* bit  8 */ u16 vcount_compare : 8;
};

struct BgCnt
{
    /* bit  0 */ u16 priority : 2;
    /* bit  2 */ u16 chr_block : 2;
    /* bit  4 */ u16 : 2;
    /* bit  6 */ u16 mosaic : 1;
    /* bit  7 */ u16 color_depth : 1;
    /* bit  8 */ u16 tm_block : 5;
    /* bit 13 */ u16 wrap : 1;
    /* bit 14 */ u16 size : 2;
};

struct WinCnt
{
    u8 win0_enable_bg0 : 1;
    u8 win0_enable_bg1 : 1;
    u8 win0_enable_bg2 : 1;
    u8 win0_enable_bg3 : 1;
    u8 win0_enable_obj : 1;
    u8 win0_enable_blend : 1;
    u8 : 2;

    u8 win1_enable_bg0 : 1;
    u8 win1_enable_bg1 : 1;
    u8 win1_enable_bg2 : 1;
    u8 win1_enable_bg3 : 1;
    u8 win1_enable_obj : 1;
    u8 win1_enable_blend : 1;
    u8 : 2;

    u8 wout_enable_bg0 : 1;
    u8 wout_enable_bg1 : 1;
    u8 wout_enable_bg2 : 1;
    u8 wout_enable_bg3 : 1;
    u8 wout_enable_obj : 1;
    u8 wout_enable_blend : 1;
    u8 : 2;

    u8 wobj_enable_bg0 : 1;
    u8 wobj_enable_bg1 : 1;
    u8 wobj_enable_bg2 : 1;
    u8 wobj_enable_bg3 : 1;
    u8 wobj_enable_obj : 1;
    u8 wobj_enable_blend : 1;
    u8 : 2;
};

struct BlendCnt
{
    u16 target1_enable_bg0 : 1;
    u16 target1_enable_bg1 : 1;
    u16 target1_enable_bg2 : 1;
    u16 target1_enable_bg3 : 1;
    u16 target1_enable_obj : 1;
    u16 target1_enable_bd : 1;
    u16 effect : 2;
    u16 target2_enable_bg0 : 1;
    u16 target2_enable_bg1 : 1;
    u16 target2_enable_bg2 : 1;
    u16 target2_enable_bg3 : 1;
    u16 target2_enable_obj : 1;
    u16 target2_enable_bd : 1;
};

struct DispIo
{
    /* 00 */ struct DispCnt disp_ct;
    /* 04 */ struct DispStat disp_stat;
    /* 08 */ u8 pad_08[4];
    /* 0C */ struct BgCnt bg0_ct;
    /* 10 */ struct BgCnt bg1_ct;
    /* 14 */ struct BgCnt bg2_ct;
    /* 18 */ struct BgCnt bg3_ct;
    /* 1C */ struct Vec2u bg_off[4];
    /* 2C */ u8 win0_right, win0_left, win1_right, win1_left;
    /* 30 */ u8 win0_bottom, win0_top, win1_bottom, win1_top;
    /* 34 */ struct WinCnt win_ct;
    /* 38 */ u16 mosaic;
    /* 3A */ u8 pad_3A[2];
    /* 3C */ struct BlendCnt blend_ct;
    /* 40 */ u8 pad_40[4];
    /* 44 */ u8 blend_coef_a;
    /* 45 */ u8 blend_coef_b;
    /* 46 */ u8 blend_y;
    /* 48 */ u16 bg2pa;
    /* 4A */ u16 bg2pb;
    /* 4C */ u16 bg2pc;
    /* 4E */ u16 bg2pd;
    /* 50 */ u32 bg2x;
    /* 54 */ u32 bg2y;
    /* 58 */ u16 bg3pa;
    /* 5A */ u16 bg3pb;
    /* 5C */ u16 bg3pc;
    /* 5E */ u16 bg3pd;
    /* 60 */ u32 bg3x;
    /* 64 */ u32 bg3y;
    /* 68 */ i8 color_addition;
};

struct KeySt
{
    /* 00 */ u8 repeat_delay;    // initial delay before generating auto-repeat presses
    /* 01 */ u8 repeat_interval; // time between auto-repeat presses
    /* 02 */ u8 repeat_clock;    // (decreased by one each frame, reset to repeat_delay when Presses change and repeat_interval when reaches 0)
    /* 04 */ u16 held;           // keys that are currently held down
    /* 06 */ u16 repeated;       // auto-repeated keys
    /* 08 */ u16 pressed;        // keys that went down this frame
    /* 0A */ u16 previous;       // keys that were held down last frame
    /* 0C */ u16 last;
    /* 0E */ u16 ablr_pressed; // 1 for Release (A B L R Only), 0 Otherwise
    /* 10 */ u16 pressed2;
    /* 12 */ u16 time_since_start_select; // Time since last Non-Start Non-Select Button was pressed
};

enum
{
    BG0_SYNC_BIT = (1 << 0),
    BG1_SYNC_BIT = (1 << 1),
    BG2_SYNC_BIT = (1 << 2),
    BG3_SYNC_BIT = (1 << 3),
};

unsigned GetGameTime(void);
void SetGameTime(unsigned time);
void IncGameTime(void);
bool FormatTime(unsigned time, u16 * hours, u16 * minutes, u16 * seconds);
void EnableBgSync(int bits);
void EnableBgSyncById(int bgid);
void DisableBgSync(int bits);
void EnablePalSync(void);
void DisablePalSync(void);
void ApplyPaletteExt(void const * data, int startOffset, int size);
void SyncDispIo(void);
int GetBgChrOffset(int bg);
int GetBgChrId(int bg, int offset);
int GetBgTilemapOffset(int bg);
void SetBgChrOffset(int bg, int offset);
void SetBgTilemapOffset(int bg, int offset);
void SetBgScreenSize(int bg, int size);
void SetBgBpp(int bg, int bpp);
void SyncBgsAndPal(void);
void TmFill(u16 * dest, int tileref);
void SetBlankChr(int chr);
void SetOnVBlank(Func func);
void SetOnVMatch(Func func);
void SetNextVCount(int vcount);
void SetVCount(int vcount);
void SetMainFunc(Func func);
void RunMainFunc(void);
void RefreshKeySt(struct KeySt * keySt);
void ClearKeySt(struct KeySt * keySt);
void InitKeySt(struct KeySt * keySt);
void SetBgOffset(u16 bgid, u16 xOffset, u16 yOffset);
void func_fe6_08001AE4(void);
void func_fe6_08001B18(u8 a, u8 b);
void func_fe6_08001B4C(u16 * a, u16 * b);
void func_fe6_08001B8C(void * tm, void const * inData, u8 base, u8 linebits);
void func_fe6_08001C68(u16 * tm, short const * inData, int unused);
void func_fe6_08001D0C(void);
void func_fe6_08001D44(u16 const * inPal, int bank, int count, int unk);
void func_fe6_08001E68(int a, int b, int c, int d);
void func_fe6_08001F88(int a, int b, int c);
void func_fe6_08001FD4(i8 a);
void func_fe6_0800210C(i8 a);
void func_fe6_08002234(i8 a);
void func_fe6_0800236C(i8 a);
void func_fe6_080024A4(void);
void InitBgs(u16 const * config);
u16 * GetBgTilemap(int bg);
void SoftResetIfKeyCombo(void);
void func_fe6_0800285C(int unk);
void SetOnHBlankA(Func func);
void SetOnHBlankB(Func func);

extern u8 EWRAM_DATA gBuf[0x2000];

extern u16 EWRAM_DATA gPal[0x200];

extern u16 EWRAM_DATA gBg0Tm[0x400];
extern u16 EWRAM_DATA gBg1Tm[0x400];
extern u16 EWRAM_DATA gBg2Tm[0x400];
extern u16 EWRAM_DATA gBg3Tm[0x400];

extern struct KeySt * CONST_DATA gKeySt;

extern struct DispIo gDispIo;

extern short SHOULD_BE_CONST gSinLut[];

#define RGB_GET_RED(color) ((color) & 0x1F)
#define RGB_GET_GREEN(color) (((color) >> 5) & 0x1F)
#define RGB_GET_BLUE(color) (((color) >> 10) & 0x1F)

#define TM_OFFSET(x, y) (((y) << 5) + (x))

#define TILE_CHR_SAFE(chr) ((chr) & 0x3FF)
#define TILE_PAL_SAFE(pal) (((pal) & 0xF) << 12)
#define TILEREF(chr, pal) ((chr) + ((pal) << 12))
#define TILE_HFLIP 0x0400
#define TILE_VFLIP 0x0800

#define PAL_COLOR(palid, colornum) gPal[(palid) * 0x10 + (colornum)]
#define PAL_BG_COLOR(palid, colornum) PAL_COLOR(palid, colornum)
#define PAL_OBJ_COLOR(palid, colornum) PAL_COLOR((palid) + 0x10, colornum)

#define SIN_Q12(angle) (gSinLut[(angle) & 0xFF])
#define COS_Q12(angle) (gSinLut[0x40 + ((angle) & 0xFF)])

#define ApplyPalettes(src, num, count) ApplyPaletteExt((src), 0x20 * (num), 0x20 * (count))
#define ApplyPalette(src, num) ApplyPalettes((src), (num), 1)

#define SetDispEnable(bg0, bg1, bg2, bg3, obj) \
    gDispIo.disp_ct.bg0_enable = (bg0); \
    gDispIo.disp_ct.bg1_enable = (bg1); \
    gDispIo.disp_ct.bg2_enable = (bg2); \
    gDispIo.disp_ct.bg3_enable = (bg3); \
    gDispIo.disp_ct.obj_enable = (obj)

#define SetWinEnable(win0, win1, objwin) \
    gDispIo.disp_ct.win0_enable = (win0); \
    gDispIo.disp_ct.win1_enable = (win1); \
    gDispIo.disp_ct.objwin_enable = (objwin)

#define SetWin0Box(left, top, right, bottom) \
    gDispIo.win0_left = (left); \
    gDispIo.win0_top = (top); \
    gDispIo.win0_right = (right); \
    gDispIo.win0_bottom = (bottom)

#define SetWin1Box(left, top, right, bottom) \
    gDispIo.win1_left = (left); \
    gDispIo.win1_top = (top); \
    gDispIo.win1_right = (right); \
    gDispIo.win1_bottom = (bottom)

#define SetWin0Layers(bg0, bg1, bg2, bg3, obj) \
    gDispIo.win_ct.win0_enable_bg0 = (bg0); \
    gDispIo.win_ct.win0_enable_bg1 = (bg1); \
    gDispIo.win_ct.win0_enable_bg2 = (bg2); \
    gDispIo.win_ct.win0_enable_bg3 = (bg3); \
    gDispIo.win_ct.win0_enable_obj = (obj)

#define SetWin1Layers(bg0, bg1, bg2, bg3, obj) \
    gDispIo.win_ct.win1_enable_bg0 = (bg0); \
    gDispIo.win_ct.win1_enable_bg1 = (bg1); \
    gDispIo.win_ct.win1_enable_bg2 = (bg2); \
    gDispIo.win_ct.win1_enable_bg3 = (bg3); \
    gDispIo.win_ct.win1_enable_obj = (obj)

#define SetWObjLayers(bg0, bg1, bg2, bg3, obj) \
    gDispIo.win_ct.wobj_enable_bg0 = (bg0); \
    gDispIo.win_ct.wobj_enable_bg1 = (bg1); \
    gDispIo.win_ct.wobj_enable_bg2 = (bg2); \
    gDispIo.win_ct.wobj_enable_bg3 = (bg3); \
    gDispIo.win_ct.wobj_enable_obj = (obj)

#define SetWOutLayers(bg0, bg1, bg2, bg3, obj) \
    gDispIo.win_ct.wout_enable_bg0 = (bg0); \
    gDispIo.win_ct.wout_enable_bg1 = (bg1); \
    gDispIo.win_ct.wout_enable_bg2 = (bg2); \
    gDispIo.win_ct.wout_enable_bg3 = (bg3); \
    gDispIo.win_ct.wout_enable_obj = (obj)

#define SetBlendConfig(eff, ca, cb, cy) \
    gDispIo.blend_ct.effect = (eff); \
    gDispIo.blend_coef_a = (ca); \
    gDispIo.blend_coef_b = (cb); \
    gDispIo.blend_y = (cy)

#define SetBlendAlpha(ca, cb) \
    SetBlendConfig(BLEND_EFFECT_ALPHA, (ca), (cb), 0)

#define SetBlendBrighten(cy) \
    SetBlendConfig(BLEND_EFFECT_BRIGHTEN, 0, 0, (cy))

#define SetBlendDarken(cy) \
    SetBlendConfig(BLEND_EFFECT_DARKEN, 0, 0, (cy))

#define SetBlendNone() \
    SetBlendConfig(BLEND_EFFECT_NONE, 0x10, 0, 0)

#define SetBlendTargetA(bg0, bg1, bg2, bg3, obj) \
    *((u16 *) &gDispIo.blend_ct) &= ~BLDCNT_TARGETA(1, 1, 1, 1, 1); \
    *((u16 *) &gDispIo.blend_ct) |= BLDCNT_TARGETA((bg0), (bg1), (bg2), (bg3), (obj))

#define SetBlendTargetB(bg0, bg1, bg2, bg3, obj) \
    *((u16 *) &gDispIo.blend_ct) &= ~BLDCNT_TARGETB(1, 1, 1, 1, 1); \
    *((u16 *) &gDispIo.blend_ct) |= BLDCNT_TARGETB((bg0), (bg1), (bg2), (bg3), (obj))

#define SetBlendBackdropA(enable) \
    gDispIo.blend_ct.target1_enable_bd = (enable)

#define SetBlendBackdropB(enable) \
    gDispIo.blend_ct.target2_enable_bd = (enable)

#define SetBackdropColor(color) \
    gPal[0] = (color); \
    EnablePalSync()


#define BWL_ARRAY_SIZE 0x46
#define WIN_ARRAY_SIZE 0x20

struct ChWinData {
    /* 00 */ u16 chapter_index : 0x06;
             u16 chapter_turn  : 0x0A;
             u16 chapter_time  : 0x10;
};

extern struct ChWinData gChWinData[WIN_ARRAY_SIZE];
struct ChWinData *GetChWinData(int index);
int GetFreeChWinDataIndex();


enum
{
    // For use with BattleSt::flags

    BATTLE_FLAG_REAL = (1 << 0),
    BATTLE_FLAG_SIMULATE = (1 << 1),
    BATTLE_FLAG_BIT2 = (1 << 2),
    BATTLE_FLAG_BALLISTA = (1 << 3),
    BATTLE_FLAG_BIT4 = (1 << 4),
    BATTLE_FLAG_ARENA = (1 << 5),
    BATTLE_FLAG_REFRESH = (1 << 6),
    BATTLE_FLAG_MAPANIMS = (1 << 7),
};

enum
{
    BATTLE_HIT_ATTR_CRIT      = (1 << 0),
    BATTLE_HIT_ATTR_MISS      = (1 << 1),
    BATTLE_HIT_ATTR_FOLLOWUP  = (1 << 2),
    BATTLE_HIT_ATTR_RETALIATE = (1 << 3),
    BATTLE_HIT_ATTR_BRAVE     = (1 << 4),
    BATTLE_HIT_ATTR_5         = (1 << 5), // unused?
    BATTLE_HIT_ATTR_POISON    = (1 << 6),
    BATTLE_HIT_ATTR_DEVIL     = (1 << 7),
    BATTLE_HIT_ATTR_HPSTEAL   = (1 << 8),
    BATTLE_HIT_ATTR_ECLIPSE   = (1 << 9),
    BATTLE_HIT_ATTR_TATTACK   = (1 << 10), // triangle attack!
};

enum
{
    #define BATTLE_HIT_INFO_ACTOR(n) ((n) << 3)

    BATTLE_HIT_INFO_BEGIN        = (1 << 0),
    BATTLE_HIT_INFO_FINISHES     = (1 << 1),
    BATTLE_HIT_INFO_KILLS_TARGET = (1 << 2),
    BATTLE_HIT_INFO_ACTORB       = (1 << 3),
    BATTLE_HIT_INFO_END          = (1 << 7),
};

struct BattleSt
{
    /* 00 */ u8 range;
    /* 01 */ u8 flags;
    /* 02 */ short damage;
    /* 04 */ short attack;
    /* 06 */ short defense;
    /* 08 */ short hit;
    /* 0A */ short crit;
    /* 0C */ struct Unit * ta_unit_a;
    /* 10 */ struct Unit * ta_unit_b;
};

struct BattleUnit
{
    /* 00 */ struct Unit unit;

    /* 48 */ u16 weapon;
    /* 4A */ u16 weapon_before;
    /* 4C */ u16 weapon_attributes;
    /* 4E */ u8 weapon_kind;
    /* 4F */ u8 weapon_inventory_slot;
    /* 50 */ bool8 has_inventory_weapon;

    /* 51 */ i8 advantage_bonus_hit;
    /* 52 */ i8 advantage_bonus_damage;

    /* 53 */ u8 terrain;
    /* 54 */ i8 terrain_defense;
    /* 55 */ i8 terrain_avoid;
    /* 56 */ i8 terrain_resistance;
    /* 57 */ // pad?

    /* 58 */ short battle_attack;
    /* 5A */ short battle_defense;
    /* 5C */ short battle_speed;
    /* 5E */ short battle_hit;
    /* 60 */ short battle_avoid;
    /* 62 */ short battle_effective_hit;
    /* 64 */ short battle_crit;
    /* 66 */ short battle_dodge;
    /* 68 */ short battle_effective_crit;

    /* 6A */ i8 exp_gain;
    /* 6B */ i8 output_status;
    /* 6C */ u8 previous_level;
    /* 6D */ i8 previous_exp;
    /* 6E */ i8 previous_hp;

    /* 6F */ i8 change_hp;
    /* 70 */ i8 change_pow;
    /* 71 */ i8 change_skl;
    /* 72 */ i8 change_spd;
    /* 73 */ i8 change_def;
    /* 74 */ i8 change_res;
    /* 75 */ i8 change_lck;
    /* 76 */ i8 change_con;

    /* 77 */ i8 wexp_gain;
    /* 78 */ bool8 dealt_damage;
    /* 79 */ bool8 weapon_broke;

    /* 7A */ bool8 has_item_effect_target;
    /* 7B */ /* pad */
};

struct BattleHit
{
    u16 attributes;
    u8 info;
    i8 damage;
};

void BattleGenerateSimulationInternal(struct Unit * instigator, struct Unit * target, int x, int y, int item_slot);
void BattleGenerateRealInternal(struct Unit * instigator, struct Unit * target);
void BattleApplyGameStateUpdates(void);
void BattleGenerateSimulation(struct Unit * unit, struct Unit * target, int x, int y, int item_slot);
void BattleGenerateReal(struct Unit * instigator, struct Unit * target);
void BattleGenerateBallistaSimulation(struct Unit * unit, struct Unit * target, int x, int y);
void BattleGenerateBallistaReal(struct Unit * instigator, struct Unit * target);
void BattleGenerate(struct Unit * instigator, struct Unit * target);
void BattleGenerateDisplayStats(struct Unit * unit, i8 item_slot);
bool BattleRandRoll(u16 threshold, bool simResult);
bool BattleRandRoll2Rn(u16 threshold, bool simResult);
void InitBattleUnit(struct BattleUnit * bu, struct Unit * unit);
void InitBattleUnitWithoutBonuses(struct BattleUnit * bu, struct Unit * unit);
void SetBattleUnitTerrainBonuses(struct BattleUnit * bu, int terrain);
void SetBattleUnitTerrainBonusesAuto(struct BattleUnit * bu);
void SetBattleUnitWeapon(struct BattleUnit * bu, int item_slot);
void SetBattleUnitWeaponBallista(struct BattleUnit * bu);
void ComputeBattleUnitStats(struct BattleUnit * attacker, struct BattleUnit * defender);
void ComputeBattleUnitEffectiveStats(struct BattleUnit * attacker, struct BattleUnit * defender);
void ComputeBattleUnitSupportBonuses(struct BattleUnit * attacker, struct BattleUnit * defender);
void ComputeBattleUnitDefense(struct BattleUnit * attacker, struct BattleUnit * defender);
void ComputeBattleUnitBaseDefense(struct BattleUnit * bu);
void ComputeBattleUnitAttack(struct BattleUnit * attacker, struct BattleUnit * defender);
void ComputeBattleUnitSpeed(struct BattleUnit * attacker);
void ComputeBattleUnitHitRate(struct BattleUnit * attacker);
void ComputeBattleUnitAvoidRate(struct BattleUnit * attacker);
void ComputeBattleUnitCritRate(struct BattleUnit * attacker);
void ComputeBattleUnitDodgeRate(struct BattleUnit * attacker);
void ComputeBattleUnitEffectiveHitRate(struct BattleUnit * attacker, struct BattleUnit * defender);
void ComputeBattleUnitEffectiveCritRate(struct BattleUnit * attacker, struct BattleUnit * defender);
void ComputeBattleUnitSpecialWeaponStats(struct BattleUnit * attacker, struct BattleUnit * defender);
void ClearBattleHits(void);
void BattleUnwind(void);
void BattleGetBattleUnitOrder(struct BattleUnit ** attacker, struct BattleUnit ** defender);
bool BattleGetFollowUpOrder(struct BattleUnit ** attacker, struct BattleUnit ** defender);
bool BattleGenerateRoundHits(struct BattleUnit * attacker, struct BattleUnit * defender);
int GetBattleUnitHitCount(struct BattleUnit * attacker);
int BattleCheckBraveEffect(struct BattleUnit * attacker);
bool BattleCheckTriangleAttack(struct BattleUnit * attacker, struct BattleUnit * defender);
void BattleUpdateBattleStats(struct BattleUnit * attacker, struct BattleUnit * defender);
void BattleGenerateHitAttributes(struct BattleUnit * attacker);
void BattleGenerateHitTriangleAttack(struct BattleUnit * attacker, struct BattleUnit * defender);
void BattleGenerateHitEffects(struct BattleUnit * attacker, struct BattleUnit * defender);
bool BattleGenerateHit(struct BattleUnit * attacker, struct BattleUnit * defender);
void BattleApplyExpGains(void);
int GetStatIncrease(int growth);
int GetAutoleveledStatIncrease(int growth, int levelCount);
void CheckBattleUnitLevelUp(struct BattleUnit * bu);
void UnitPromote(struct Unit * unit);
void GenerateBattleUnitStatGainsComparatively(struct BattleUnit * bu, struct Unit * unit);
void CheckBattleUnitStatCaps(struct Unit * unit, struct BattleUnit * bu);
void BattleApplyUnitUpdates(void);
int GetBattleUnitUpdatedWeaponExp(struct BattleUnit * bu);
bool HasBattleUnitGainedWeaponLevel(struct BattleUnit * bu);
void UpdateUnitFromBattle(struct Unit * unit, struct BattleUnit * bu);
void UpdateUnitDuringBattle(struct Unit * unit, struct BattleUnit * bu);
void BattleApplyBallistaUpdates(void);
void func_fe6_08025780(void);
int GetUnitExpLevel(struct Unit * unit);
int GetUnitRoundExp(struct Unit * unit, struct Unit * other);
int GetUnitPowerLevel(struct Unit * unit);
int GetUnitClassKillExpBonus(struct Unit * unit, struct Unit * defeated);
int GetUnitKillExpBonus(struct Unit * unit, struct Unit * other);
int GetBattleUnitExpGain(struct BattleUnit * bu, struct BattleUnit * other);
void BattleApplyItemExpGains(void);
int GetBattleUnitStaffExp(struct BattleUnit * bu);
void BattleApplyMiscActionExpGains(void);
void BattleUnitTargetSetEquippedWeapon(struct BattleUnit * bu);
void BattleUnitTargetCheckCanCounter(struct BattleUnit * bu);
void BattleApplyReaverEffect(struct BattleUnit * attacker, struct BattleUnit * defender);
void BattleApplyWeaponTriangleEffect(struct BattleUnit * instigator, struct BattleUnit * target);
void BattleInitTargetCanCounter(void);
void InitObstacleBattleUnit(void);
void ComputeBattleObstacleStats(void);
void UpdateObstacleFromBattle(struct BattleUnit * bu);
void BeginBattleAnimations(void);
int GetUnitSoloBattleAnimType(struct Unit * unit);
int GetBattleAnimType(void);
void BattlePrintDebugUnitInfo(struct BattleUnit * instigator, struct BattleUnit * target);
void BattlePrintDebugHitInfo(void);
void BattleInitItemEffect(struct Unit * instigator, int item_slot);
void BattleInitItemEffectTarget(struct Unit * unit);
void BattleApplyMiscAction(ProcPtr proc);
void BattleApplyItemEffect(ProcPtr proc);
int GetOffensiveStaffAccuracy(struct Unit * unit, struct Unit * target);
void BattleGenerateArena(struct Unit * unit);
bool BattleIsTriangleAttack(void);
bool DidBattleUnitBreakWeapon(struct BattleUnit * bu);
void BattleHitAdvance(void);
void BattleHitTerminate(void);

extern struct BattleSt gBattleSt;

extern struct BattleUnit gBattleUnitA;
extern struct BattleUnit gBattleUnitB;

extern struct BattleHit gBattleHits[];
extern struct BattleHit * gBattleHitIt;

#define CanBattleUnitGainExp(bu) ((bu)->unit.exp != 0xFF)


enum
{
    FACTION_BLUE   = 0x00,
    FACTION_RED    = 0x80,
    FACTION_GREEN  = 0x40,
    FACTION_PURPLE = 0xC0,
};

enum
{
    FACTION_ID_BLUE = 0,
    FACTION_ID_GREEN = 1,
    FACTION_ID_RED = 2,
    FACTION_ID_PURPLE = 3,
};

int CountFactionMoveableUnits(int faction);
int CountFactionUnitsWithoutState(int faction, int prohibited_state);
bool AreUnitIdsAllied(int uidA, int uidB);
bool AreUnitIdsSameFaction(int uidA, int uidB);
int GetActiveFactionAlliance(void);
int GetActiveFactionOpposingAlliance(void);

void PidStatsAddWinAmt(u8 pid);
#define UNIT_PID(unit) ((unit)->pinfo->id)
void PidStatsRecordLoseData(u8 pid);
bool VerifySaveBlockInfoByIndex(int saveId);
void LoadPlaySt(int saveId, struct PlaySt * out);
u8 *GetSaveTargetAddress(int index);
u8 *GetSaveSourceAddress(int index);
void WriteAndCkSum32SaveBlockInfo(struct SaveBlockInfo *chunk, int index);
int GetTextPrintDelay(void);
int IsFirstPlaythrough(void);
void InitPlayConfig(int is_hard);
void ResetBmSt(void);
void StartChapter(struct GenericProc * parent);
void func_fe6_08029084(void);
void ResumeChapterFromSuspend(struct GenericProc * parent);
void func_fe6_08029240(void);
void func_fe6_080292B8(void);
void InitBmDisplay(void);
ProcPtr StartMapMain(struct GenericProc * parent);
void EndMapMain(void);
void CleanupUnitsBeforeChapter(void);
void func_fe6_08029654(void);


enum { SUPPLY_ITEM_COUNT = 100 };

u16 * GetSupplyItems(void);
void ClearSupplyItems(void);
void SquashSupplyItems(void);
int CountSupplyItems(void);
int AddSupplyItem(int item);
void RemoveSupplyItem(int slot);
int FindSupplyItem(int item);

// TODO: move
enum { FLAG_PERMANENT_BASE = 100 };

enum { EVENT_NOSCRIPT = 1 };

enum { MAX_CHAPTER_FLAGS = 32 };
enum { MAX_PERMANENT_FLAGS = 40 };

enum
{
    EVT_LIST_CMD_END,
    EVT_LIST_CMD_FLAG,
    EVT_LIST_CMD_TURN,
    EVT_LIST_CMD_TURN_HARD,
    EVT_LIST_CMD_TALK,
    EVT_LIST_CMD_TILE,
    EVT_LIST_CMD_TILE_MAPCHANGE,
    EVT_LIST_CMD_ITEM,
    EVT_LIST_CMD_DOOR,
    EVT_LIST_CMD_DRAWBRIDGE,
    EVT_LIST_CMD_SHOP,
    EVT_LIST_CMD_AREA,
    EVT_LIST_CMD_AREA_HARD,
    EVT_LIST_CMD_FUNC,
};

enum
{
    TILE_COMMAND_NONE,

    TILE_COMMAND_VISIT    = 0x0E,
    TILE_COMMAND_SEIZE    = 0x0F,
    TILE_COMMAND_DOOR     = 0x10,
    TILE_COMMAND_BRIDGE   = 0x11,
    TILE_COMMAND_CHEST    = 0x12,
    TILE_COMMAND_ARMORY   = 0x13,
    TILE_COMMAND_VENDOR   = 0x14,
    TILE_COMMAND_SECRET   = 0x15,
    TILE_COMMAND_SHOP_UNK = 0x16,

    TILE_COMMAND_1D       = 0x1D,
};

typedef u32 EventListScr;

struct EventInfo
{
    /* 00 */ EventListScr const * list_script;
    /* 04 */ void const * script;
    /* 08 */ u32 flag;
    /* 0C */ u32 tile_command;
    /* 10 */ u32 given_money;
    /* 14 */ u32 given_iid;
    /* 18 */ i8 x_location;
    /* 19 */ i8 y_location;
    /* 1A */ u8 pid_a;
    /* 1B */ u8 pid_b;
};

struct SupportTalkEnt
{
    /* +00 */ u8 pid_a, pid_b;
    /* +02 */ // pad
    /* +04 */ u32 msg_talk_c;
    /* +08 */ u32 msg_talk_b;
    /* +0C */ u32 msg_talk_a;
};

struct BattleTalkExtEnt
{
    /* 00 */ u8 pid_a;
    /* 01 */ u8 pid_b;
    /* 02 */ u8 chapter;
    /* 03 */ // pad
    /* 04 */ u32 msg;
    /* 08 */ u32 flag;
};

struct BattleTalkEnt
{
    /* 00 */ u8 pid;
    /* 01 */ u8 chapter;
    /* 02 */ // pad
    /* 04 */ u32 msg;
    /* 08 */ u32 flag;
    /* 0C */ u32 unk_0C;
};

void StartEventFromInfo(struct EventInfo const * info);
struct EventInfo * SearchAvailableEvent(struct EventInfo * info);
struct EventInfo * SearchNextAvailableEvent(struct EventInfo * info);
int EvtListCmd_End(struct EventInfo * info);
int EvtListCmd_Flag(struct EventInfo * info);
int EvtListCmd_Turn(struct EventInfo * info);
int EvtListCmd_TurnHard(struct EventInfo * info);
int EvtListCmd_Talk(struct EventInfo * info);
int EvtListCmd_Tile(struct EventInfo * info);
int EvtListCmd_TileWithMapChange(struct EventInfo * info);
int EvtListCmd_ItemChest(struct EventInfo * info);
int EvtListCmd_Door(struct EventInfo * info);
int EvtListCmd_Drawbridge(struct EventInfo * info);
int EvtListCmd_Shop(struct EventInfo * info);
int EvtListCmd_Area(struct EventInfo * info);
int EvtListCmd_AreaHard(struct EventInfo * info);
int EvtListCmd_Func(struct EventInfo * info);
int EventInfoCheckTalk(struct EventInfo * info, fu8 pid_a, fu8 pid_b);
int CheckActiveUnitArea(int x1, int y1, int x2, int y2);
bool CheckAnyBlueUnitArea(int x1, int y1, int x2, int y2);
bool func_fe6_0806AD48(struct EventInfo * info);
bool func_fe6_0806AD74(struct EventInfo * info);
bool func_fe6_0806ADC4(struct EventInfo * info);
bool func_fe6_0806ADDC(struct EventInfo * info);
bool func_fe6_0806AE04(struct EventInfo * info);
bool func_fe6_0806AE2C(struct EventInfo * info);
bool func_fe6_0806AE54(struct EventInfo * info);
bool func_fe6_0806AE7C(int x1, int y1, int x2, int y2);
bool CheckAvailableTurnEvent(void);
void StartAvailableTurnEvents(void);
bool CheckAvailableTalkEvent(fu8 pid_a, fu8 pid_b);
void StartAvailableTalkEvent(fu8 pid_a, fu8 pid_b);
void StartAvailableSupportEvent(fu8 pid_a, fu8 pid_b, int support_level);
int GetAvailableTileEventCommand(fi8 x, fi8 y);
void StartAvailableTileEvent(fi8 x, fi8 y);
void StartAvailableTileEvent_Unused(fi8 x, fi8 y);
bool CheckAvailableVisitTileEvent(fi8 x, fi8 y);
void StartAvailableVisitTileEvent(fi8 x, fi8 y);
bool CheckAvailableShopTileEvent(fi8 x, fi8 y);
void StartAvailableShopTileEvent(fi8 x, fi8 y);
bool CheckAvailableChestTileEvent(fi8 x, fi8 y);
void StartAvailableChestTileEvent(fi8 x, fi8 y);
bool CheckAvailableDoorTileEvent(fi8 x, fi8 y);
void StartAvailableDoorTileEvent(fi8 x, fi8 y);
bool CheckAvailableBridgeTileEvent(fi8 x, fi8 y);
void StartAvailableBridgeTileEvent(fi8 x, fi8 y);
bool CheckAvailableVictoryEvent(void);
void StartAvailableVictoryEvent(void);
bool StartAvailableMoveSelectEvent(void);
bool CheckAvailableActionSelectEvent(void);
bool StartAvailableActionSelectEvent(void);
bool CheckAvailableMoveSelectConfirmEvent(void);
bool StartAvailableMoveSelectConfirmEvent(void);
bool StartAvailableAttackMenuEvent(void);
bool StartAvailableAttackMenuItemEvent(void);
bool StartAvailableMapMenuEvent(void);
bool CheckAvailableMoveEvent(void);
void StartAvailableMoveEvent(void);
bool CheckChapterVictory(void);
void StartChapterVictoryEvent(void);
void CreateInitialRedUnits(void);
struct UnitInfo const * GetDeployUnitInfoList(void);
struct BattleTalkEnt const * GetAvailableBattleTalkExt(fu8 pid_a, fu8 pid_b);
struct BattleTalkEnt const * GetAvailableBattleTalk(fu8 pid, struct BattleTalkEnt const * it);
bool CheckBattleTalk(fu8 pid_a, fu8 pid_b);
void StartBattleTalk(fu8 pid_a, fu8 pid_b);
bool CheckBattleDefeatTalk(fu8 pid);
void StartBattleDefeatTalk(fu8 pid);
bool func_fe6_0806B898(void);
void func_fe6_0806B89C(void);
void func_fe6_0806B8A0(void);
bool func_fe6_0806B8A4(void);
void func_fe6_0806B8A8(void);
bool func_fe6_0806B8AC(void);
bool func_fe6_0806B8B0(void);
void func_fe6_0806B8B4(void);
void func_fe6_0806B8B8(void);
void func_fe6_0806B8BC(void);
void func_fe6_0806B8C0(void);
void func_fe6_0806B8C4(void);
void SetChapterFlag(int flag);
bool CheckChapterFlag(int flag);
void ClearChapterFlag(int flag);
void ResetChapterFlags(void);
void SetPermanentFlag(int flag);
bool CheckPermanentFlag(int flag);
void ClearPermanentFlag(int flag);
void ResetPermanentFlags(void);
void SetFlag(int flag);
bool CheckFlag(int flag);
void ClearFlag(int flag);
u8 * GetPermanentFlagBits(void);
int GetPermanentFlagBitsSize(void);
u8 * GetChapterFlagBits(void);
int GetChapterFlagBitsSize(void);

#define CHAR_BIT 8

extern u8 gChapterFlagBits[(MAX_CHAPTER_FLAGS + CHAR_BIT - 1) / CHAR_BIT];
extern u8 gPermanentFlagBits[(MAX_PERMANENT_FLAGS + CHAR_BIT - 1) / CHAR_BIT];
void ResetSaveBlockInfo(int saveId);
int GetNewPlaythroughId();
void SaveSupplyItems(u8 *sram_dst);
void ClearPidChStatsSaveData(u8 *sram_dst);

void SavePermanentFlagBits(u8 *sram_dst);
void SavePermanentFlagBits(u8 *sram_dst);
void UpdateLastUsedGameSaveSlot(int slot_sa);
void SaveUnit(struct Unit *unit, void *sram_dst);
void SavePidStats(u8 *sram_dst);
void SaveChWinData(u8 *sram_dst);

struct SuspendPackedUnit
{
    /* 00 */ u8 pid;
    /* 01 */ u8 jid;
    /* 02 */ u8 ai_a;
    /* 03 */ u8 rescue;
    /* 04 */ u16 flags;
    /* 06 */ u16 item_a;
    /* 08 */ u16 item_b;
    /* 0A */ u16 item_c;
    /* 0C */ u8 max_hp;
    /* 0D */ u8 hp;
    /* 0E */ u8 exp;
    /* 0F */ u8 ai_flags;
    /* 10 */ u8 wexp[UNIT_WEAPON_EXP_COUNT];
    /* 18 */ u8 supports[UNIT_SUPPORT_COUNT];
    /* 22 */ u8 ai_a_pc;
    /* 23 */ u8 ai_b;
    /* 24 */ u16 ai_config;
    /* 26 */ u8 ai_b_pc;
    /* 27 */ u8 unit_unk_46;
    /* 28 */ u32 level           : 5;
    /*    */ u32 x               : 6;
    /*    */ u32 y               : 6;
    /*    */ u32 pow             : 5;
    /*    */ u32 skl             : 5;
    /*    */ u32 spd             : 5;
    /* 2C */ u32 def             : 5;
    /*    */ u32 res             : 5;
    /*    */ u32 lck             : 5;
    /*    */ u32 bonus_con       : 5;
    /*    */ u32 status          : 3;
    /*    */ u32 status_duration : 3;
    /*    */ u32 torch           : 3;
    /*    */ u32 barrier         : 3;
    /* 30 */ u32 bonus_mov       : 4;
    /*    */ u32 item_d          : 14;
    /*    */ u16 item_e          : 14;
};

struct PidStats {
    /* 000 */ u32 lossAmt     : 8;
    /* 008 */ u32 actAmt      : 8;
    /* 016 */ u32 statViewAmt : 8;
    /* 024 */ u32 deathCh     : 6;
    /* 030 */ u32 deathTurn   : 10;
    /* 040 */ u32 deployAmt   : 6;
    /* 046 */ u32 moveAmt     : 10;
	/* 056 */ u32 deathCause  : 4;
	/* 060 */ u32 expGained   : 12;
	/* 072 */ u32 winAmt      : 10;
	/* 082 */ u32 battleAmt   : 12;
	/* 094 */ u32 killerPid   : 9;
    /* 113 */ u32 _pad_       : 15;
};
extern struct PidStats gPidStatsData[BWL_ARRAY_SIZE];
#define gPidStats (&gPidStatsData[-1])
static inline struct PidStats *GetPidStats_(u8 pid)
{
    if (pid >= BWL_ARRAY_SIZE)
        return NULL;
    else if (0 == GetPInfo(pid)->affinity)
        return NULL;
    else
        return &gPidStats[pid];
}
void SavePermanentFlagBits(u8 *sram_dst);
void LoadUnit(u8 *sram_src, struct Unit *unit);
void LoadSupplyItems(u8 *sram_src);
void LoadPermanentFlagBits(u8 *sram_src);

void LoadPidStats(u8 *sram_src);
void LoadChWinData(u8 *sram_src);
void UpdateLastUsedGameSaveSlot(int slot_sa);

enum SaveSaDataSizes {
    SAVESA_SIZE_PLAYST = sizeof(struct PlaySt),
    SAVESA_SIZE_UNIT = 52 * 0x28,
    SAVESA_SIZE_SUPPLY = SUPPLY_ITEM_COUNT * sizeof(u16),
    SAVESA_SIZE_PIDSTATS = sizeof(gPidStatsData),
    SAVESA_SIZE_CHWIN = sizeof(gChWinData),
};

enum SaveSaDataOffsets {
    SAVESA_OFF_START = 0,
    SAVESA_OFF_PLAYST = SAVESA_OFF_START,
    SAVESA_OFF_UNIT = SAVESA_OFF_PLAYST + SAVESA_SIZE_PLAYST,
    SAVESA_OFF_SUPPLY = SAVESA_OFF_UNIT + SAVESA_SIZE_UNIT,
    SAVESA_OFF_PIDSTATS = SAVESA_OFF_SUPPLY + SAVESA_SIZE_SUPPLY,
    SAVESA_OFF_CHWIN = SAVESA_OFF_PIDSTATS + SAVESA_SIZE_PIDSTATS,
    SAVESA_OFF_PERMFLAG = SAVESA_OFF_CHWIN + SAVESA_SIZE_CHWIN,
};

struct UnitSavePack {       /* Save Data */
    /* 000 */ u32 pid : 7;
    /* 007 */ u32 jid : 7;
    /* 014 */ u32 level : 5;
    /* 019 */ u32 flags : 6;
    /* 025 */ u32 exp : 7;

    /* 032 */ u32 x : 6;
    /* 038 */ u32 y : 6;
    /* 044 */ u32 max_hp : 6;
    /* 049 */ u32 pow : 5;
    /* 054 */ u32 skl : 5;
    /* 059 */ u32 spd : 5;

    /* 065 */ u32 def : 5;
    /* 070 */ u32 res : 5;
    /* 075 */ u32 lck : 5;
    /* 080 */ u32 con : 5;
    /* 085 */ u32 mov : 5;

    /* 090 */ u32 item0 : 14;
    /* 104 */ u32 item1 : 14;
    /* 118 */ u32 item2 : 14;
    /* 132 */ u32 item3 : 14;
    /* 146 */ u32 item4 : 14;

    /* x15 */ u8 unk15[2];
    /* x16 */ u8 wexp[UNIT_WEAPON_EXP_COUNT];
    /* x1E */ u8 supports[UNIT_SUPPORT_COUNT];
};

enum packed_unit_state_bits {
    PACKED_US_DEAD       = 1 << 0,
    PACKED_US_UNDEPLOYED = 1 << 1,
    PACKED_US_SOLO_ANIM1 = 1 << 2,
    PACKED_US_SOLO_ANIM2 = 1 << 3,
    PACKED_US_METIS_TOME = 1 << 4,
    PACKED_US_B4         = 1 << 5,
    PACKED_US_B5         = 1 << 6,
    PACKED_US_NEW_FRIEND = 1 << 7,
};
void PackUnitForSuspend(struct Unit *unit, u8 *buf);
void LoadUnitFormSuspend(u8 *sram_src, struct Unit *unit);
void SaveTraps(void *sram_dest);
void LoadTraps(void *sram_dest);
int GetLastSuspendSlotId();
int GetNextSuspendSaveId();
void ChangeSuspendSlotId();
enum
{
    ACTION_NONE,
    ACTION_WAIT = 0x01,
    ACTION_COMBAT = 0x02,
    ACTION_STAFF = 0x03,
    ACTION_REFRESH = 0x04,
    // 05?
    ACTION_STEAL = 0x06,
    ACTION_RESCUE = 0x07,
    ACTION_DROP = 0x08,
    ACTION_TAKE = 0x09,
    ACTION_GIVE = 0x0A,
    // 0B?
    ACTION_TALK = 0x0C,
    ACTION_SUPPORT = 0x0D,
    ACTION_VISIT = 0x0E,
    ACTION_SEIZE = 0x0F,
    ACTION_DOOR = 0x10,
    // 11?
    ACTION_CHEST = 0x12,
    // ACTION_SHOPPED,
    // ACTION_ARENA,
    ACTION_16 = 0x16,
    ACTION_USEITEM = 0x17,
    ACTION_TRADED = 0x18,
    ACTION_TRADED_SUPPLY = 0x19,
    ACTION_TRADED_NOCHANGES = 0x1A,
    ACTION_TRAPPED = 0x1B,
    ACTION_1C = 0x1C,
};

enum
{
    SUSPEND_POINT_PLAYER_PHASE,
    SUSPEND_POINT_DURING_ACTION,
    SUSPEND_POINT_AI_PHASE,
    SUSPEND_POINT_BERSERK_PHASE,
    SUSPEND_POINT_DURING_ARENA,
    SUSPEND_POINT_5,
    SUSPEND_POINT_6,
    SUSPEND_POINT_7,
    SUSPEND_POINT_8,
    SUSPEND_POINT_CHANGE_PHASE,
};

struct Action
{
    /* 00 */ u16 action_rand_st[3];
    /* 06 */ u16 arena_begin_rand_st[3];
    /* 0C */ u8 instigator;
    /* 0D */ u8 target;
    /* 0E */ u8 x_move, y_move;
    /* 10 */ u8 move_count;
    /* 11 */ u8 id;
    /* 12 */ u8 item_slot;
    /* 13 */ u8 x_target, y_target;
    /* 15 */ u8 extra;
    /* 16 */ u8 suspendPoint;
};

extern struct Action gAction;

void SaveActionRand(void);
void RestoreActionRand(void);
bool DoAction(ProcPtr proc);

void DropRescueOnDeath(ProcPtr parent, struct Unit * unit);
void KillUnitOnCombatDeath(struct Unit * unit, struct Unit * opponent);
void func_fe6_0802A6B4(struct Unit * unit);
void func_fe6_0802A7F4(void);

extern struct ProcScr CONST_DATA ProcScr_CombatAction[];
void SaveChapterFlagBits(u8 *sram_dst);

enum SaveSuDataSizes {
    SAVESU_SIZE_PLAYST = sizeof(struct PlaySt),
    SAVESU_SIZE_ACTION = sizeof(struct Action),
    SAVESU_SIZE_UNIT = 112 * sizeof(struct SuspendPackedUnit),
    SAVESU_SIZE_TRAP = 0x100,
    SAVESU_SIZE_SUPPLY = SUPPLY_ITEM_COUNT * sizeof(u16),
    SAVESU_SIZE_PIDSTATS = sizeof(gPidStatsData),
    SAVESU_SIZE_CHWIN = sizeof(gChWinData),
    SAVESU_SIZE_PERMFLAG = 0x5,
};

enum SaveSuDataOffsets {
    SAVESU_OFF_START = 0,
    SAVESU_OFF_PLAYST = SAVESU_OFF_START,
    SAVESU_OFF_ACTION = SAVESU_OFF_PLAYST + SAVESU_SIZE_PLAYST,
    SAVESU_OFF_UNIT = SAVESU_OFF_ACTION + SAVESU_SIZE_ACTION,    // 0x38
    SAVESU_OFF_TRAP = SAVESU_OFF_UNIT + SAVESU_SIZE_UNIT,
    SAVESU_OFF_SUPPLY = SAVESU_OFF_TRAP + SAVESU_SIZE_TRAP,
    SAVESU_OFF_PIDSTATS = SAVESU_OFF_SUPPLY + SAVESU_SIZE_SUPPLY,
    SAVESU_OFF_CHWIN = SAVESU_OFF_PIDSTATS + SAVESU_SIZE_PIDSTATS,
    SAVESU_OFF_PERMFLAG = SAVESU_OFF_CHWIN + SAVESU_SIZE_CHWIN,
    SAVESU_OFF_TEMPFLAG = SAVESU_OFF_PERMFLAG + SAVESU_SIZE_PERMFLAG,
};
enum unit_amount_in_savedata {
    UNIT_SAVE_AMOUNT_BLUE = 52,
    UNIT_SAVE_AMOUNT_RED = 50,
    UNIT_SAVE_AMOUNT_GREEN = 10,
};

struct SavePackedUnit {       /* Save Data */
    u32 pid    : 7;
    u32 jid    : 7;
    u32 level  : 5;
    u32 flags  : 6;
    u32 exp    : 7;
    u32 x      : 6;
    u32 y      : 6;
    u32 max_hp : 6;

    u32 pow : 5;
    u32 skl : 5;
    u32 spd : 5;
    u32 def : 5;
    u32 res : 5;
    u32 lck : 5;
    u32 con : 5;
    u32 mov : 5;

    u32 item0 : 14;
    u32 item1 : 14;
    u32 item2 : 14;
    u32 item3 : 14;
    u32 item4 : 14;

    u8 _pad_14[2];

    u8 wexp[UNIT_WEAPON_EXP_COUNT];
    u8 supports[UNIT_SUPPORT_COUNT];
};

enum SaveDataSizes {
    SAV_SIZE_PLAYST = sizeof(struct PlaySt),
    SAV_SIZE_UNIT = UNIT_SAVE_AMOUNT_BLUE * sizeof(struct SavePackedUnit),
    SAV_SIZE_SUPPLY = SUPPLY_ITEM_COUNT * sizeof(u16),
    SAV_SIZE_PIDSTATS = sizeof(gPidStatsData),
    SAV_SIZE_CHWIN = sizeof(gChWinData),
};

enum SuspandDataSizes {
    SUS_SIZE_PLAYST = sizeof(struct PlaySt),
    SUS_SIZE_ACTION = sizeof(struct Action),
    SUS_SIZE_UNIT_B = (UNIT_SAVE_AMOUNT_BLUE) * sizeof(struct SuspendPackedUnit),
    SUS_SIZE_UNIT_R = (UNIT_SAVE_AMOUNT_RED) * sizeof(struct SuspendPackedUnit),
    SUS_SIZE_UNIT_G = (UNIT_SAVE_AMOUNT_GREEN) * sizeof(struct SuspendPackedUnit),
    SUS_SIZE_TRAP = 0x100,
    SUS_SIZE_SUPPLY = SUPPLY_ITEM_COUNT * sizeof(u16),
    SUS_SIZE_PIDSTATS = sizeof(gPidStatsData),
    SUS_SIZE_CHWIN = sizeof(gChWinData),
    SUS_SIZE_PERMFLAG = 0x5,
};

/* Save data memory map */
enum SaveDataOffsets {
    SAV_MEMMAP_START    = 0,
    SAV_MEMMAP_PLAYST   = SAV_MEMMAP_START,
    SAV_MEMMAP_UNIT     = SAV_MEMMAP_PLAYST   + SAV_SIZE_PLAYST,
    SAV_MEMMAP_SUPPLY   = SAV_MEMMAP_UNIT     + SAV_SIZE_UNIT,
    SAV_MEMMAP_PIDSTATS = SAV_MEMMAP_SUPPLY   + SAV_SIZE_SUPPLY,
    SAV_MEMMAP_CHWIN    = SAV_MEMMAP_PIDSTATS + SAV_SIZE_PIDSTATS,
    SAV_MEMMAP_PERMFLAG = SAV_MEMMAP_CHWIN    + SAV_SIZE_CHWIN,
};

/* Suspand data memory map */
enum SuspandDataOffsets {
    SUS_MEMMAP_START    = 0,
    SUS_MEMMAP_PLAYST   = SUS_MEMMAP_START,
    SUS_MEMMAP_ACTION   = SUS_MEMMAP_PLAYST   + SUS_SIZE_PLAYST,
    SUS_MEMMAP_UNIT_B   = SUS_MEMMAP_ACTION   + SUS_SIZE_ACTION,
    SUS_MEMMAP_UNIT_R   = SUS_MEMMAP_UNIT_B   + SUS_SIZE_UNIT_B,
    SUS_MEMMAP_UNIT_G   = SUS_MEMMAP_UNIT_R   + SUS_SIZE_UNIT_R,
    SUS_MEMMAP_TRAP     = SUS_MEMMAP_UNIT_G   + SUS_SIZE_UNIT_G,
    SUS_MEMMAP_SUPPLY   = SUS_MEMMAP_TRAP     + SUS_SIZE_TRAP,
    SUS_MEMMAP_PIDSTATS = SUS_MEMMAP_SUPPLY   + SUS_SIZE_SUPPLY,
    SUS_MEMMAP_CHWIN    = SUS_MEMMAP_PIDSTATS + SUS_SIZE_PIDSTATS,
    SUS_MEMMAP_PERMFLAG = SUS_MEMMAP_CHWIN    + SUS_SIZE_CHWIN,
    SUS_MEMMAP_TEMPFLAG = SUS_MEMMAP_PERMFLAG + SUS_SIZE_PERMFLAG,
};

void LoadChapterFlagBits(u8 *sram_src);
extern u8 gSuspendSlotIndex;
int GetCkSum32FromSRAM(void *sram_src, int size);

enum
{
    TRAP_MAX_COUNT = 0x20,
};

enum
{
    TRAP_NONE,

    TRAP_BALLISTA = 1,
    TRAP_LONGBALLISTA = 2,
    TRAP_KILLERBALLISTA = 3,
    TRAP_OBSTACLE = 4,
    TRAP_MAPCHANGE = 5,
    TRAP_FIRE = 6,
    TRAP_GAS = 7,
    TRAP_8 = 8,
    TRAP_LIGHTARROW = 9,
    TRAP_STEP_FIRE = 10,
    TRAP_STEP_PIKE = 11,
    TRAP_STEP_DISARMED = 12,
};

enum
{
    TRAPDATA_TRAP_INITCNT = 0,
    TRAPDATA_TRAP_INTERVAL = 1,
    TRAPDATA_TRAP_COUNTER = 2,
    TRAPDATA_TRAP_DAMAGE = 3,
};

struct Trap
{
    /* 00 */ u8 x, y;
    /* 02 */ u8 kind;
    /* 03 */ u8 extra;
    /* 04 */ i8 data[4];
};

void InitTraps(void);
struct Trap * GetTrap(int id);
struct Trap * GetTrapAt(int x, int y);
struct Trap * AddTrap(int x, int y, int kind, int extra);
struct Trap * AddDamagingTrap(int x, int y, int kind, int extra, int turnCountdown, int turnInterval, int damage);
void AddFireTrap(int x, int y, int turnCountdown, int turnInterval);
void AddGasTrap(int x, int y, int facing, int turnCountdown, int turnInterval);
void AddArrowTrap(int x, int turnCountdown, int turnInterval);
void func_fe6_08026BA4(int x, int y, int turnCountdown, int turnInterval);
void func_fe6_08026BC0(int x, int y);
void func_fe6_08026BD0(int x, int y, int extra);
void InitMapTraps(void);
void ApplyEnabledMapChanges(void);
struct Trap * GetBallistaTrapAt(int x, int y);
int GetBallistaItemAt(int x, int y);
int GetDummyBallistaItemAt(int x, int y);
int GetObstacleHpAt(int x, int y);
struct MapChangeInfo const * GetMapChange(int id);
int GetMapChangeIdAt(int x, int y);
void ApplyMapChange(int id);
void AddMapChangeTrap(int id);
void UnitHideIfUnderRoof(struct Unit * unit);
void UpdateRoofedUnits(void);
void EnlistFireTrapTargets(int x, int y, int damage);
void EnlistArrowTrapTargets(int x, int y, int damage);
void EnlistGasTrapTargets(int x, int y, int damage, int facing);
void ListDamagingTrapTargets(void);
void ListDamagingTrapTargetsForDisplay(void);
bool DoHandleStepTraps(ProcPtr proc);

extern struct ProcScr CONST_DATA ProcScr_UpdateTraps[];

#define TRAP_ID(trap) ((trap) - GetTrap(0))

struct ChapterEventInfo
{
    /* 00 */ void const * event_list_turn;
    /* 04 */ void const * event_list_talk;
    /* 08 */ void const * event_list_tile;
    /* 0C */ void const * event_list_move;
    /* 10 */ void const * units_red;
    /* 14 */ void const * units_blue;
    /* 18 */ void const * script_18;
};


extern struct PInfo CONST_DATA PersonInfoTable[];
extern struct JInfo CONST_DATA JobInfoTable[];

extern struct Unit * CONST_DATA gUnitLut[0x100];

#define FOR_UNITS(begin, end, var_name, body) \
{ \
    int _uid; \
    struct Unit * var_name; \
    for (_uid = (begin); _uid < (end); ++_uid) \
    { \
        var_name = GetUnit(_uid); \
        if (!var_name) \
            continue; \
        if (!var_name->pinfo) \
            continue; \
        body \
    } \
}

#define FOR_UNITS_FACTION(faction, var_name, body) \
    FOR_UNITS((faction) + 1, (faction) + 0x40, var_name, body)

#define FOR_UNITS_ALL(var_name, body) \
    FOR_UNITS(1, 0xC0, var_name, body)

enum
{
    HELPBOX_INFO_NONE,
    HELPBOX_INFO_WEAPON,
    HELPBOX_INFO_STAFF,
};

struct HelpBoxProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ struct HelpBoxInfo const * info;

    /* 30 */ i16 x_box;
    /* 32 */ i16 y_box;
    /* 34 */ i16 w_box;
    /* 36 */ i16 h_box;
    /* 38 */ i16 x_box_init;
    /* 3A */ i16 y_box_init;
    /* 3C */ i16 x_box_fini;
    /* 3E */ i16 y_box_fini;
    /* 40 */ i16 w_box_init;
    /* 42 */ i16 h_box_init;
    /* 44 */ i16 w_box_fini;
    /* 46 */ i16 h_box_fini;
    /* 48 */ i16 timer;
    /* 4A */ i16 timer_end;

    /* 4C */ u16 msg;
    /* 4E */ u16 item;

    /* 50 */ u16 move_key_bit; // move ctrl proc only

    /* 52 */ u8 unk_52;

    // NOTE: there's likely more, need to decompile more files
};

struct HelpBoxInfo
{
    /* 00 */ struct HelpBoxInfo const * adjacent_up;
    /* 04 */ struct HelpBoxInfo const * adjacent_down;
    /* 08 */ struct HelpBoxInfo const * adjacent_left;
    /* 0C */ struct HelpBoxInfo const * adjacent_right;
    /* 10 */ u8 x, y;
    /* 12 */ u16 msg;
    /* 14 */ void (* redirect)(struct HelpBoxProc * proc);
    /* 18 */ void (* populate)(struct HelpBoxProc * proc);
};

void UpdateHelpBoxDisplay(struct HelpBoxProc * proc, int interpolate_method);
void HelpBox_OnOpen(struct HelpBoxProc * proc);
void HelpBox_OnLoop(struct HelpBoxProc * proc);
void HelpBox_OnClose(struct HelpBoxProc * proc);
void HelpBox_WaitClose(struct HelpBoxProc * proc);
void StartHelpBox(int x, int y, int msg);
void StartItemHelpBox(int x, int y, int item);
void StartHelpBoxExt(struct HelpBoxInfo const * info, int unk);
void StartHelpBox_08070804(int x, int y, int msg);
void CloseHelpBox(void);
// KillHelpBox
// HelpBoxMoveControl_OnInitBox
// HelpBoxMoveControl_OnIdle
// HelpBoxMoveControl_OnEnd
void StartMovingHelpBox(struct HelpBoxInfo const * info, ProcPtr parent);
void StartMovingHelpBoxExt(struct HelpBoxInfo const * info, ProcPtr parent, int x, int y);
void ApplyHelpBoxContentSize(struct HelpBoxProc * proc, int w_inner, int h_inner);
void ApplyHelpBoxPosition(struct HelpBoxProc * proc, int x, int y);
void SetHelpBoxInitPosition(struct HelpBoxProc * proc, int x, int y);
void ResetHelpBoxInitSize(struct HelpBoxProc * proc);
int func_fe6_08070B30(int item);
void HelpBoxPopulateAutoItem(struct HelpBoxProc * proc);
int HelpBoxTryRelocateUp(struct HelpBoxProc * proc);
int HelpBoxTryRelocateDown(struct HelpBoxProc * proc);
int HelpBoxTryRelocateLeft(struct HelpBoxProc * proc);
int HelpBoxTryRelocateRight(struct HelpBoxProc * proc);
// func_fe6_08070C4C
// StartLockingHelpBox
struct HelpBoxInfo const * GetLastHelpBoxInfo(void);
void func_fe6_08070CB4(int flags, int pal);
void func_fe6_08070D08(int chr, int chapter);
// func_fe6_08070D48
void func_fe6_08070D78(int chr);
void func_fe6_08070DA8(u16 * tm, int pal);
// func_fe6_08070DC8
void func_fe6_08070DE8(u16 * tm, int pal);
int func_fe6_08070E0C(struct PlaySt const * play_st);
void func_fe6_08070E70(void * vram, int pal);
// func_fe6_08070EEC
void PutSpriteTalkBox(int x_box, int y_box, int w_box, int h_box);
// DrawHelpBoxWeaponLabels
// DrawHelpBoxWeaponStats
// DrawHelpBoxStaffLabels
// func_fe6_08071274
// func_fe6_08071308
// func_fe6_08071374
// func_fe6_080713DC
// func_fe6_08071410
void func_fe6_080714F8(int msg, int item);
void func_fe6_08071514(void);
// func_fe6_0807155C
// func_fe6_08071584
// func_fe6_080715B4
// func_fe6_080715DC
// func_fe6_080715FC
// func_fe6_080716C8
// func_fe6_080716F0
// func_fe6_08071714
// func_fe6_08071734
void func_fe6_08071748(struct HelpBoxInfo const * info);
// func_fe6_08071760
void func_fe6_08071778(struct HelpBoxProc * proc, int w_inner, int h_inner);
void func_fe6_080717B8(struct HelpBoxProc * proc, int x, int y);
void func_fe6_08071830(struct HelpBoxProc * proc, int x, int y);
void func_fe6_08071838(struct HelpBoxProc * proc);
int func_fe6_08071848(int item);
// func_fe6_08071888
// func_fe6_080718A8
// func_fe6_080718E0
// func_fe6_080718FC
// func_fe6_08071978
// func_fe6_080719D8
// func_fe6_080719EC
// func_fe6_08071A20
// func_fe6_08071A24
// func_fe6_08071A34
// func_fe6_08071AF8
// func_fe6_08071B20
// func_fe6_08071B44
void func_fe6_08071B6C(void);
// func_fe6_08071B80
// func_fe6_08071BC0
// func_fe6_08071C00
// func_fe6_08071C8C
void func_fe6_08071D04(int x, int y, int msg);
void func_fe6_08071D94(int x, int y, int w, int h);
// func_fe6_08071F50
// func_fe6_08071F64
// func_fe6_080720E0
// func_fe6_08072100
void func_fe6_080721B8(int msg);
void func_fe6_080721D0(void);

extern struct ProcScr CONST_DATA ProcScr_HelpBox[];
extern struct ProcScr CONST_DATA ProcScr_HelpBoxMoveControl[];

extern u8 const * CONST_DATA gUnk_08677F20[]; // array img ref

extern struct ProcScr CONST_DATA gUnk_08677FD0[];
extern struct ProcScr CONST_DATA gUnk_08677FE0[];
extern struct ProcScr CONST_DATA gUnk_08677FF8[];
extern struct ProcScr CONST_DATA gUnk_08678020[];
extern struct ProcScr CONST_DATA gUnk_08678040[];
extern struct ProcScr CONST_DATA gUnk_08678070[];
extern struct ProcScr CONST_DATA gUnk_08678080[];
extern struct ProcScr CONST_DATA gUnk_086780C8[];
extern struct ProcScr CONST_DATA ProcScr_HelpBoxPrint_086780E8[];
extern struct ProcScr CONST_DATA ProcScr_HelpBoxStartPrint_08678110[];

// TODO: move to helpboxinfo
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677798;
extern struct HelpBoxInfo CONST_DATA HelpInfo_086777B4;
extern struct HelpBoxInfo CONST_DATA HelpInfo_086777D0;
extern struct HelpBoxInfo CONST_DATA HelpInfo_086777EC;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677808;
extern struct HelpBoxInfo CONST_DATA HelpInfo_StatScreenPersonalInfo_Pow;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677840;
extern struct HelpBoxInfo CONST_DATA HelpInfo_0867785C;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677878;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677894;
extern struct HelpBoxInfo CONST_DATA HelpInfo_086778B0;
extern struct HelpBoxInfo CONST_DATA HelpInfo_086778CC;
extern struct HelpBoxInfo CONST_DATA HelpInfo_086778E8;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677904;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677920;
extern struct HelpBoxInfo CONST_DATA HelpInfo_0867793C;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677958;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677974;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677990;
extern struct HelpBoxInfo CONST_DATA HelpInfo_086779AC;
extern struct HelpBoxInfo CONST_DATA HelpInfo_086779C8;
extern struct HelpBoxInfo CONST_DATA HelpInfo_086779E4;
extern struct HelpBoxInfo CONST_DATA HelpInfo_StatScreenItems_ItemA;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677A1C;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677A38;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677A54;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677A70;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677A8C;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677AA8;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677AC4;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677AE0;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677AFC;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677B18;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677B34;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677B50;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677B6C;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677B88;
extern struct HelpBoxInfo CONST_DATA HelpInfo_StatScreenWeaponExp_WExpA;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677BC0;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677BDC;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677BF8;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677C14;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677C30;
extern struct HelpBoxInfo CONST_DATA HelpInfo_BpShort_Hp;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677C68;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677C84;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677CA0;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677CBC;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677CD8;
extern struct HelpBoxInfo CONST_DATA HelpInfo_BpLarge_Hp;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677D10;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677D2C;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677D48;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677D64;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677D80;
extern struct HelpBoxInfo CONST_DATA HelpInfo_08677D9C;


struct WaveData;
struct ToneData;
struct CgbChannel;
struct SoundChannel;
struct SoundInfo;
struct Song;
struct MusicPlayerTrack;
struct MusicPlayer;
struct MusicPlayerEnt;
struct SongEnt;

typedef void (* MPlayFunc)();
typedef void (* PlyNoteFunc)(u32, struct MusicPlayer *, struct MusicPlayerTrack *);
typedef void (* CgbSoundFunc)(void);
typedef void (* CgbOscOffFunc)(u8);
typedef u32 (* MidiKeyToCgbFreqFunc)(u8, u8, u8);
typedef void (* ExtVolPitFunc)(void);
typedef void (* MPlayMainFunc)(struct MusicPlayer *);

// ASCII encoding of 'Smsh' in reverse
// This is presumably short for SMASH, the developer of MKS4AGB.
enum { ID_NUMBER = 0x68736D53 };

enum { C_V = 0x40 }; // center value for PAN, BEND, and TUNE

enum
{
    SOUND_MODE_REVERB_VAL   = 0x0000007F,
    SOUND_MODE_REVERB_SET   = 0x00000080,
    SOUND_MODE_MAXCHN       = 0x00000F00,
    SOUND_MODE_MAXCHN_SHIFT = 8,
    SOUND_MODE_MASVOL       = 0x0000F000,
    SOUND_MODE_MASVOL_SHIFT = 12,
    SOUND_MODE_FREQ_05734   = 0x00010000,
    SOUND_MODE_FREQ_07884   = 0x00020000,
    SOUND_MODE_FREQ_10512   = 0x00030000,
    SOUND_MODE_FREQ_13379   = 0x00040000,
    SOUND_MODE_FREQ_15768   = 0x00050000,
    SOUND_MODE_FREQ_18157   = 0x00060000,
    SOUND_MODE_FREQ_21024   = 0x00070000,
    SOUND_MODE_FREQ_26758   = 0x00080000,
    SOUND_MODE_FREQ_31536   = 0x00090000,
    SOUND_MODE_FREQ_36314   = 0x000A0000,
    SOUND_MODE_FREQ_40137   = 0x000B0000,
    SOUND_MODE_FREQ_42048   = 0x000C0000,
    SOUND_MODE_FREQ         = 0x000F0000,
    SOUND_MODE_FREQ_SHIFT   = 16,
    SOUND_MODE_DA_BIT_9     = 0x00800000,
    SOUND_MODE_DA_BIT_8     = 0x00900000,
    SOUND_MODE_DA_BIT_7     = 0x00A00000,
    SOUND_MODE_DA_BIT_6     = 0x00B00000,
    SOUND_MODE_DA_BIT       = 0x00B00000,
    SOUND_MODE_DA_BIT_SHIFT = 20,
};

struct WaveData
{
    /* +00 */ u16 kind;
    /* +02 */ u16 status;
    /* +04 */ u32 freq;
    /* +08 */ u32 loop_start;
    /* +0C */ u32 size; // number of samples
    /* +10 */ i8 data[1]; // samples
};

enum
{
    TONEDATA_TYPE_CGB    = 0x07,
    TONEDATA_TYPE_FIX    = 0x08,
    TONEDATA_TYPE_SPL    = 0x40, // key split
    TONEDATA_TYPE_RHY    = 0x80, // rhythm

    TONEDATA_P_S_PAN     = 0xc0,
    TONEDATA_P_S_PAM     = TONEDATA_P_S_PAN,
};

struct ToneData
{
    /* +00 */ u8 kind;
    /* +01 */ u8 key;
    /* +02 */ u8 length; // sound length (compatible sound)
    /* +03 */ u8 pan_sweep; // pan or sweep (compatible sound ch. 1)
    /* +04 */ struct WaveData * wav;
    /* +08 */ u8 attack;
    /* +09 */ u8 decay;
    /* +0A */ u8 sustain;
    /* +0B */ u8 release;
};

enum
{
    SOUND_CHANNEL_SF_START       = 0x80,
    SOUND_CHANNEL_SF_STOP        = 0x40,
    SOUND_CHANNEL_SF_LOOP        = 0x10,
    SOUND_CHANNEL_SF_IEC         = 0x04,
    SOUND_CHANNEL_SF_ENV         = 0x03,
    SOUND_CHANNEL_SF_ENV_ATTACK  = 0x03,
    SOUND_CHANNEL_SF_ENV_DECAY   = 0x02,
    SOUND_CHANNEL_SF_ENV_SUSTAIN = 0x01,
    SOUND_CHANNEL_SF_ENV_RELEASE = 0x00,
    SOUND_CHANNEL_SF_ON = (SOUND_CHANNEL_SF_START | SOUND_CHANNEL_SF_STOP | SOUND_CHANNEL_SF_IEC | SOUND_CHANNEL_SF_ENV),
};

enum
{
    CGB_CHANNEL_MO_PIT = 0x02,
    CGB_CHANNEL_MO_VOL = 0x01,
};

enum
{
    CGB_NRx2_ENV_DIR_DEC = 0x00,
    CGB_NRx2_ENV_DIR_INC = 0x08,
};

struct CgbChannel
{
    /* +00 */ u8 flags;
    /* +01 */ u8 type;
    /* +02 */ u8 volume_right;
    /* +03 */ u8 volume_left;
    /* +04 */ u8 attack;
    /* +05 */ u8 decay;
    /* +06 */ u8 sustain;
    /* +07 */ u8 release;
    /* +08 */ u8 key;
    /* +09 */ u8 envelope_volume;
    /* +0A */ u8 envelope_goal;
    /* +0B */ u8 envelope_counter;
    /* +0C */ u8 pseudo_echo_volume;
    /* +0D */ u8 pseudo_echo_length;
    /* +0E */ u8 dummy1;
    /* +0F */ u8 dummy2;
    /* +10 */ u8 gate_time;
    /* +11 */ u8 midi_key;
    /* +12 */ u8 velocity;
    /* +13 */ u8 priority;
    /* +14 */ u8 rhythm_pan;
    /* +15 */ u8 dummy3[3];
    /* +18 */ u8 dummy5;
    /* +19 */ u8 sustain_goal;
    /* +1A */ u8 n4; // NR[1-4]4 register (initial, length bit)
    /* +1B */ u8 pan;
    /* +1C */ u8 pan_mask;
    /* +1D */ u8 modify;
    /* +1E */ u8 length;
    /* +1F */ u8 sweep;
    /* +20 */ u32 frequency;
    /* +24 */ u32 * wav; // instructs CgbMain to load targeted wave
    /* +28 */ u32 * current_ptr; // stores the currently loaded wave
    /* +2C */ struct MusicPlayerTrack * track;
    /* +30 */ void * prev_channel_ptr;
    /* +34 */ void * next_channel_ptr;
    /* +38 */ u8 dummy4[8];
};

struct SoundChannel
{
    /* +00 */ u8 flags;
    /* +01 */ u8 type;
    /* +02 */ u8 volume_right;
    /* +03 */ u8 volume_left;
    /* +04 */ u8 attack;
    /* +05 */ u8 decay;
    /* +06 */ u8 sustain;
    /* +07 */ u8 release;
    /* +08 */ u8 key; // midi key as it was translated into final pitch
    /* +09 */ u8 envelope_volume;
    /* +0A */ u8 envelope_volume_right;
    /* +0B */ u8 envelope_volume_left;
    /* +0C */ u8 pseudo_echo_volume;
    /* +0D */ u8 pseudo_echo_length;
    /* +0E */ u8 dummy1;
    /* +0F */ u8 dummy2;
    /* +10 */ u8 gate_time;
    /* +11 */ u8 midi_key; // midi key as it was used in the track data
    /* +12 */ u8 velocity;
    /* +13 */ u8 priority;
    /* +14 */ u8 rhythm_pan;
    /* +15 */ u8 dummy3[3];
    /* +18 */ u32 count;
    /* +1C */ u32 fw;
    /* +20 */ u32 frequency;
    /* +24 */ struct WaveData * wav;
    /* +28 */ i8 * current_ptr;
    /* +2C */ struct MusicPlayerTrack * track;
    /* +30 */ void * prev_channel_ptr;
    /* +34 */ void * next_channel_ptr;
    /* +38 */ u32 dummy4;
    /* +3C */ u16 xpi;
    /* +3E */ u16 xpc;
};

enum { MAX_DIRECTSOUND_CHANNELS = 12 };

enum { PCM_DMA_BUF_SIZE = 1584 }; // size of Direct Sound buffer

struct SoundInfo
{
    // This field is normally equal to ID_NUMBER but it is set to other
    // values during sensitive operations for locking purposes.
    // This field should be volatile but isn't. This could potentially cause
    // race conditions.
    /* +000 */ u32 ident;

    /* +004 */ u8 volatile pcm_dma_counter;

    // Direct Sound
    /* +005 */ u8 reverb;
    /* +006 */ u8 max_channels;
    /* +007 */ u8 master_volume;
    /* +008 */ u8 freq;

    /* +009 */ u8 mode;
    /* +00A */ u8 c15; // periodically counts from 14 down to 0 (15 states)
    /* +00B */ u8 pcm_dma_period; // number of V-blanks per PCM DMA
    /* +00C */ u8 max_lines;
    /* +00D */ u8 gap[3];
    /* +010 */ i32 pcm_samples_per_vblank;
    /* +014 */ i32 pcm_freq;
    /* +018 */ i32 div_freq;
    /* +01C */ struct CgbChannel * cgb_channels;
    /* +020 */ MPlayMainFunc mplay_head_func;
    /* +024 */ struct MusicPlayer * mplay_head;
    /* +028 */ CgbSoundFunc cgb_sound_func;
    /* +02C */ CgbOscOffFunc cgb_osc_off_func;
    /* +030 */ MidiKeyToCgbFreqFunc midi_to_cgb_func;
    /* +034 */ MPlayFunc * mplay_jump_table;
    /* +038 */ PlyNoteFunc plynote;
    /* +03C */ ExtVolPitFunc ext_vol_pit_func;
    /* +040 */ u8 gap2[16];
    /* +060 */ struct SoundChannel chans[MAX_DIRECTSOUND_CHANNELS];
    /* +360 */ i8 pcm_buffer[PCM_DMA_BUF_SIZE * 2];
};

struct Song
{
    /* +00 */ u8 track_count;
    /* +01 */ u8 block_count;
    /* +02 */ u8 priority;
    /* +03 */ u8 reverb;
    /* +04 */ struct ToneData * tone;
    /* +08 */ u8 * part[1];
};

enum
{
    MPT_FLG_VOLSET = 0x01,
    MPT_FLG_VOLCHG = 0x03,
    MPT_FLG_PITSET = 0x04,
    MPT_FLG_PITCHG = 0x0C,
    MPT_FLG_START  = 0x40,
    MPT_FLG_EXIST  = 0x80,
};

struct MusicPlayerTrack
{
    /* +00 */ u8 flags;
    /* +01 */ u8 wait;
    /* +02 */ u8 patternLevel;
    /* +03 */ u8 repN;
    /* +04 */ u8 gate_time;
    /* +05 */ u8 key;
    /* +06 */ u8 velocity;
    /* +07 */ u8 running_status;
    /* +08 */ u8 key_m;
    /* +09 */ u8 pit_m;
    /* +0A */ i8 key_shift;
    /* +0B */ i8 key_shift_x;
    /* +0C */ i8 tune;
    /* +0D */ u8 pit_x;
    /* +0E */ i8 bend;
    /* +0F */ u8 bend_range;
    /* +10 */ u8 vol_mr;
    /* +11 */ u8 vol_ml;
    /* +12 */ u8 vol;
    /* +13 */ u8 vol_x;
    /* +14 */ i8 pan;
    /* +15 */ i8 panX;
    /* +16 */ i8 mod_m;
    /* +17 */ u8 mod;
    /* +18 */ u8 mod_t;
    /* +19 */ u8 lfo_speed;
    /* +1A */ u8 lfo_speed_c;
    /* +1B */ u8 lfo_delay;
    /* +1C */ u8 lfo_delay_c;
    /* +1D */ u8 priority;
    /* +1E */ u8 pseudo_echo_volume;
    /* +1F */ u8 pseudo_echo_length;
    /* +20 */ struct SoundChannel * chan;
    /* +24 */ struct ToneData tone;
    /* +30 */ u8 gap[10];
    /* +3A */ u16 unk_3A;
    /* +3C */ u32 unk_3C;
    /* +40 */ u8 * cmd_ptr;
    /* +44 */ u8 * pattern_stack[3];
};

enum
{
    MUSICPLAYER_STATUS_TRACK = 0x0000ffff,
    MUSICPLAYER_STATUS_PAUSE = 0x80000000,
};

enum { MAX_MUSICPLAYER_TRACKS = 16 };

enum { TRACKS_ALL = 0xFFFF };

enum
{
    TEMPORARY_FADE = 0x0001,
    FADE_IN        = 0x0002,
    FADE_VOL_MAX   = 64,
    FADE_VOL_SHIFT = 2,
};

struct MusicPlayer
{
    /* +00 */ struct Song const * song;
    /* +04 */ u32 status;
    /* +08 */ u8 track_count;
    /* +09 */ u8 priority;
    /* +0A */ u8 cmd;
    /* +0B */ u8 unk_B;
    /* +0C */ u32 clock;
    /* +10 */ u8 gap[8];
    /* +18 */ u8 * mem_acc_area;
    /* +1C */ u16 tempo_d;
    /* +1E */ u16 tempo_u;
    /* +20 */ u16 tempo_i;
    /* +22 */ u16 tempo_c;
    /* +24 */ u16 fade_oi;
    /* +26 */ u16 fade_oc;
    /* +28 */ u16 fade_ov;
    /* +2C */ struct MusicPlayerTrack * tracks;
    /* +30 */ struct ToneData * tone;
    /* +34 */ u32 ident;
    /* +38 */ MPlayMainFunc next_func;
    /* +3C */ struct MusicPlayer * next;
};

struct MusicPlayerEnt
{
    /* +00 */ struct MusicPlayer * music_player;
    /* +04 */ struct MusicPlayerTrack * track;
    /* +08 */ u8 num_tracks;
    /* +0A */ u16 unk_A;
};

struct SongEnt
{
    /* +00 */ struct Song * song;
    /* +04 */ u16 ms;
    /* +06 */ u16 me;
};

extern struct MusicPlayerEnt const gMusicPlayerTable[];
extern struct SongEnt const gSongTable[];

void m4aSoundInit(void);
void m4aSoundMode(u32 mode);
void m4aSoundMain(void);
void m4aSoundVSync(void);
void m4aSoundVSyncOn(void);
void m4aSoundVSyncOff(void);
void m4aSongNumStart(u16 n);
void m4aSongNumStartOrChange(u16 n);
void m4aSongNumStartOrContinue(u16 n);
void m4aSongNumStop(u16 n);
void m4aMPlayAllStop(void);
void m4aMPlayStart(struct MusicPlayer * music_player, struct Song * song);
void m4aMPlayStop(struct MusicPlayer * music_player);
void m4aMPlayContinue(struct MusicPlayer * music_player);
void m4aMPlayFadeOut(struct MusicPlayer * music_player, u16 speed);
void m4aMPlayFadeOutTemporarily(struct MusicPlayer * music_player, u16 speed);
void m4aMPlayFadeIn(struct MusicPlayer * music_player, u16 speed);
void m4aMPlayImmInit(struct MusicPlayer * music_player);
void m4aMPlayTempoControl(struct MusicPlayer * music_player, u16 tempo);
void m4aMPlayVolumeControl(struct MusicPlayer * music_player, u16 track_bits, u16 volume);
void m4aMPlayPitchControl(struct MusicPlayer * music_player, u16 track_bits, i16 pitch);
void m4aMPlayPanpotControl(struct MusicPlayer * music_player, u16 track_bits, i8 pan);
void m4aMPlayModDepthSet(struct MusicPlayer * music_player, u16 track_bits, u8 mod_depth);
void m4aMPlayLFOSpeedSet(struct MusicPlayer * music_player, u16 track_bits, u8 lfo_speed);

// TODO: move elsewhere

enum
{
    SOUND_MODE = SOUND_MODE_DA_BIT_8
        | SOUND_MODE_FREQ_13379
        | (13 << SOUND_MODE_MASVOL_SHIFT)
        | (7 << SOUND_MODE_MAXCHN_SHIFT),
};

extern char gNumMusicPlayers[];
extern char gMaxLines[];

#define NUM_MUSIC_PLAYERS ((u16) gNumMusicPlayers)
#define MAX_LINES ((u32) gMaxLines)

extern struct MusicPlayer gMusicPlayer_03006530;
extern struct MusicPlayer gMusicPlayer_03006600;
extern struct MusicPlayer gMusicPlayer_03006570;
extern struct MusicPlayer gMusicPlayer_03006260;
extern struct MusicPlayer gMusicPlayer_030062A0;
extern struct MusicPlayer gMusicPlayer_030064B0;
extern struct MusicPlayer gMusicPlayer_FightBgm;
extern struct MusicPlayer gMusicPlayer_MainBgm;

int GetCurrentBgmSong(void);
bool IsBgmPlaying(void);
void func_fe6_08002F9C(int volume);
void SetBgmVolume(int volume);
void FadeBgmOut(int speed);
void func_fe6_080030B4(int speed);
void StartBgmCore(int song, struct MusicPlayer * music_player);
void StartOrChangeBgm(int song, int speed, struct MusicPlayer * music_player);
void StartBgm(int song, struct MusicPlayer * music_player);
void StartBgmExt(int song, int speed, struct MusicPlayer * music_player);
void StartBgmFadeIn(int song, int b, struct MusicPlayer * music_player);
void OverrideBgm(int song);
void RestoreBgm(void);
void MakeBgmOverridePersist(void);
void StartBgmVolumeChange(int volumeInit, int volumeEnd, int duration, ProcPtr parent);

#define PlaySe(id) \
    if (!gPlaySt.config_se_disable) \
        m4aSongNumStart((id))

#define RGB_GET_RED(color) ((color) & 0x1F)
#define RGB_GET_GREEN(color) (((color) >> 5) & 0x1F)
#define RGB_GET_BLUE(color) (((color) >> 10) & 0x1F)

#define TM_OFFSET(x, y) (((y) << 5) + (x))

#define TILE_CHR_SAFE(chr) ((chr) & 0x3FF)
#define TILE_PAL_SAFE(pal) (((pal) & 0xF) << 12)
#define TILEREF(chr, pal) ((chr) + ((pal) << 12))
#define TILE_HFLIP 0x0400
#define TILE_VFLIP 0x0800

#define PAL_COLOR(palid, colornum) gPal[(palid) * 0x10 + (colornum)]
#define PAL_BG_COLOR(palid, colornum) PAL_COLOR(palid, colornum)
#define PAL_OBJ_COLOR(palid, colornum) PAL_COLOR((palid) + 0x10, colornum)

#define SIN_Q12(angle) (gSinLut[(angle) & 0xFF])
#define COS_Q12(angle) (gSinLut[0x40 + ((angle) & 0xFF)])

#define ApplyPalettes(src, num, count) ApplyPaletteExt((src), 0x20 * (num), 0x20 * (count))
#define ApplyPalette(src, num) ApplyPalettes((src), (num), 1)

#define SetDispEnable(bg0, bg1, bg2, bg3, obj) \
    gDispIo.disp_ct.bg0_enable = (bg0); \
    gDispIo.disp_ct.bg1_enable = (bg1); \
    gDispIo.disp_ct.bg2_enable = (bg2); \
    gDispIo.disp_ct.bg3_enable = (bg3); \
    gDispIo.disp_ct.obj_enable = (obj)

#define SetWinEnable(win0, win1, objwin) \
    gDispIo.disp_ct.win0_enable = (win0); \
    gDispIo.disp_ct.win1_enable = (win1); \
    gDispIo.disp_ct.objwin_enable = (objwin)

#define SetWin0Box(left, top, right, bottom) \
    gDispIo.win0_left = (left); \
    gDispIo.win0_top = (top); \
    gDispIo.win0_right = (right); \
    gDispIo.win0_bottom = (bottom)

#define SetWin1Box(left, top, right, bottom) \
    gDispIo.win1_left = (left); \
    gDispIo.win1_top = (top); \
    gDispIo.win1_right = (right); \
    gDispIo.win1_bottom = (bottom)

#define SetWin0Layers(bg0, bg1, bg2, bg3, obj) \
    gDispIo.win_ct.win0_enable_bg0 = (bg0); \
    gDispIo.win_ct.win0_enable_bg1 = (bg1); \
    gDispIo.win_ct.win0_enable_bg2 = (bg2); \
    gDispIo.win_ct.win0_enable_bg3 = (bg3); \
    gDispIo.win_ct.win0_enable_obj = (obj)

#define SetWin1Layers(bg0, bg1, bg2, bg3, obj) \
    gDispIo.win_ct.win1_enable_bg0 = (bg0); \
    gDispIo.win_ct.win1_enable_bg1 = (bg1); \
    gDispIo.win_ct.win1_enable_bg2 = (bg2); \
    gDispIo.win_ct.win1_enable_bg3 = (bg3); \
    gDispIo.win_ct.win1_enable_obj = (obj)

#define SetWObjLayers(bg0, bg1, bg2, bg3, obj) \
    gDispIo.win_ct.wobj_enable_bg0 = (bg0); \
    gDispIo.win_ct.wobj_enable_bg1 = (bg1); \
    gDispIo.win_ct.wobj_enable_bg2 = (bg2); \
    gDispIo.win_ct.wobj_enable_bg3 = (bg3); \
    gDispIo.win_ct.wobj_enable_obj = (obj)

#define SetWOutLayers(bg0, bg1, bg2, bg3, obj) \
    gDispIo.win_ct.wout_enable_bg0 = (bg0); \
    gDispIo.win_ct.wout_enable_bg1 = (bg1); \
    gDispIo.win_ct.wout_enable_bg2 = (bg2); \
    gDispIo.win_ct.wout_enable_bg3 = (bg3); \
    gDispIo.win_ct.wout_enable_obj = (obj)

#define SetBlendConfig(eff, ca, cb, cy) \
    gDispIo.blend_ct.effect = (eff); \
    gDispIo.blend_coef_a = (ca); \
    gDispIo.blend_coef_b = (cb); \
    gDispIo.blend_y = (cy)

#define SetBlendAlpha(ca, cb) \
    SetBlendConfig(BLEND_EFFECT_ALPHA, (ca), (cb), 0)

#define SetBlendBrighten(cy) \
    SetBlendConfig(BLEND_EFFECT_BRIGHTEN, 0, 0, (cy))

#define SetBlendDarken(cy) \
    SetBlendConfig(BLEND_EFFECT_DARKEN, 0, 0, (cy))

#define SetBlendNone() \
    SetBlendConfig(BLEND_EFFECT_NONE, 0x10, 0, 0)

#define SetBlendTargetA(bg0, bg1, bg2, bg3, obj) \
    *((u16 *) &gDispIo.blend_ct) &= ~BLDCNT_TARGETA(1, 1, 1, 1, 1); \
    *((u16 *) &gDispIo.blend_ct) |= BLDCNT_TARGETA((bg0), (bg1), (bg2), (bg3), (obj))

#define SetBlendTargetB(bg0, bg1, bg2, bg3, obj) \
    *((u16 *) &gDispIo.blend_ct) &= ~BLDCNT_TARGETB(1, 1, 1, 1, 1); \
    *((u16 *) &gDispIo.blend_ct) |= BLDCNT_TARGETB((bg0), (bg1), (bg2), (bg3), (obj))

#define SetBlendBackdropA(enable) \
    gDispIo.blend_ct.target1_enable_bd = (enable)

#define SetBlendBackdropB(enable) \
    gDispIo.blend_ct.target2_enable_bd = (enable)

#define SetBackdropColor(color) \
    gPal[0] = (color); \
    EnablePalSync()


extern u8 const ArmCodeStart[];
extern u8 const ArmCodeEnd[];

void func_fe6_08000234(void);
void ClearOam(void * oam, int count);
void TmApplyTsa(u16 * tm, u8 const * tsa, u16 tileref);
void TmCopyRect(u16 const * src, u16 * dst, int width, int height);
void TmFillRect(u16 * tm, int width, int height, u16 tileref);

void DrawGlyph(u16 const * cvtLut, void * chr, u32 const * glyph, int offset);
void DecodeString(char const * src, char * dst);
void PutOamHi(int x, int y, u16 const * oam_list, int oam2);
void PutOamLo(int x, int y, u16 const * oam_list, int oam2);
void MapFloodCoreStep(int connect, int x, int y);
void MapFloodCore(void);

void ClearOam_t(void * oam, int count);
void TmApplyTsa_t(u16 * tm, u8 const * tsa, u16 tileref);
void TmFillRect_t(u16 * tm, int width, int height, u16 tileref);
void func_fe6_08000234_t(void);
void TmCopyRect_t(u16 const * src, u16 * dst, int width, int height);

struct BaSprite
{
    /* 00 */ u16 flags;
    /* 02 */ short xPosition;
    /* 04 */ short yPosition;
    /* 06 */ short timer;
    /* 08 */ u16 oam2;
    /* 0A */ u16 priority;
    /* 0C */ u16 flags2;
    /* 0E */ u16 nextRoundId;
    /* 10 */ u16 flags3;
    /* 12 */ u8 currentRoundType;
    /* 13 */ u8 unk13;

    // Command queue
    /* 14 */ u8 cqSize;
    /* 15 */ u8 cq[7];

    /* 1C */ u32 oam01;

    /* 20 */ u32 const * scrCur;
    /* 24 */ u32 const * script;

    /* 28 */ void const * imgSheet;
    /* 2C */ void const * unk2C;
    /* 30 */ void const * sprDataPool; // aka "OAM data"

    /* 34 */ struct BaSprite * prev;
    /* 38 */ struct BaSprite * next;

    /* 3C */ void const * sprData;
    /* 40 */ void const * unk40;
    /* 44 */ void const * unk_44;
};

enum
{
    // Command Identifiers

    // TODO: complete during battle anim decomp

    BAS_CMD_NOP     = 0x00,
    BAS_CMD_WAIT_01 = 0x01, // wait for hp depletion
    BAS_CMD_WAIT_02 = 0x02, // wait for dodge start, then dodge
    BAS_CMD_WAIT_03 = 0x03, // wait for attack start
    BAS_CMD_WAIT_04 = 0x04,
    BAS_CMD_WAIT_05 = 0x05, // wait for spell anim?
    // TODO: more
    BAS_CMD_WAIT_13 = 0x13, // unk
    BAS_CMD_WAIT_18 = 0x18, // wait for dodge start, then forward dodge
    BAS_CMD_WAIT_39 = 0x39, // unk
};

enum anim_flag2 
{
    ANIM_BIT2_0001        = (1 << 0),
    ANIM_BIT2_0002        = (1 << 1),
    ANIM_BIT2_0004        = (1 << 2),
    ANIM_BIT2_0008        = (1 << 3),
    ANIM_BIT2_0010        = (1 << 4),
    ANIM_BIT2_0020        = (1 << 5),
    ANIM_BIT2_0040        = (1 << 6),
    ANIM_BIT2_0080        = (1 << 7),

    ANIM_BIT2_FRONT_FRAME = (1 << 8),
    ANIM_BIT2_BACK_FRAME  = (0 << 8),

    ANIM_BIT2_POS_RIGHT   = (1 << 9),
    ANIM_BIT2_POS_LEFT    = (0 << 9),

    ANIM_BIT2_0400        = (1 << 10),
    ANIM_BIT2_0800        = (1 << 11),
    ANIM_BIT2_COMMAND     = (1 << 12), /* 0x1000 */
    ANIM_BIT2_FRAME       = (1 << 13), /* 0x2000 */
    ANIM_BIT2_STOP        = (1 << 14), /* 0x4000 */
    ANIM_BIT2_8000        = (1 << 15), /* 0x8000 */
};

#define ANIM_BIT2_CMD_MASK (ANIM_BIT2_COMMAND | ANIM_BIT2_FRAME | ANIM_BIT2_STOP | ANIM_BIT2_8000)

enum anim_flag3
{
    ANIM_BIT3_TAKE_BACK_ENABLE   = (1 << 0),
    ANIM_BIT3_NEXT_ROUND_START   = (1 << 1),

    /**
     * If set, C01 will block the anim
     * set bit when hit effect applied
     * and then cleared after hitted
     */
    ANIM_BIT3_C01_BLOCKING_IN_BATTLE = (1 << 2),
    ANIM_BIT3_HIT_EFFECT_APPLIED = (1 << 3),
    ANIM_BIT3_0010               = (1 << 4),
    ANIM_BIT3_BLOCKING           = (1 << 5),
    ANIM_BIT3_BLOCKEND           = (1 << 6),
    ANIM_BIT3_0080               = (1 << 7),
    ANIM_BIT3_0100               = (1 << 8),
    ANIM_BIT3_0200               = (1 << 9),
    ANIM_BIT3_0400               = (1 << 10),
    ANIM_BIT3_0800               = (1 << 11),
    ANIM_BIT3_1000               = (1 << 12),
    ANIM_BIT3_2000               = (1 << 13),
    ANIM_BIT3_4000               = (1 << 14),
    ANIM_BIT3_NEW_ROUND_START    = (1 << 15),
};
extern struct BaSprite * gAnims[4];
#define MAIN_ANIM_FRONT(pos) (gAnims[pos * 2 + 0])
#define MAIN_ANIM_BACK(pos)  (gAnims[pos * 2 + 1])

struct ProcEkrBattle {
    PROC_HEADER;

    /* 29 */ u8 speedup;
    /* 2A */ STRUCT_PAD(0x2A, 0x2C);
    /* 2C */ i16 timer;
    /* 2E */ i16 end;
    /* 30 */ STRUCT_PAD(0x30, 0x44);
    /* 44 */ int side;
    /* 48 */ int counter;
    /* 4C */ STRUCT_PAD(0x4C, 0x54);
    /* 54 */ int quote;
    /* 58 */ int unk58;
    /* 5C */ struct BaSprite * anim;
};

extern int gEkrDebugTimer;
extern int gEkrDebugFlag1;
extern int gEkrDebugFlag2;
extern int gAnimC01Blocking;
extern struct Vec2i gEkrBg0QuakeVec;

extern i16 gEkrDebugModeMaybe;

extern struct ProcScr ProcScr_EkrBattleDeamon[];
extern struct ProcScr ProcScr_EkrBattle[];
extern u32 gEkrBattleEndFlag;
extern u32 gBanimDoneFlag[2];
extern u8 gEkrPids[2];
extern struct Unit * gpEkrTriangleUnits[2];
extern i16 gEkrInitialHitSide;
extern u32 gEkrInitPosReal;
extern u32 gEkrBgPosition;
extern i16 gEkrPairEffectiveAgainst[2];
extern i16 gEkrPairSideVaild[2];
extern i16 gEkrPairExpGain[2];
extern i16 gEkrGaugeHp[2];
extern struct BattleUnit * gpEkrBattleUnitLeft;
extern struct BattleUnit * gpEkrBattleUnitRight;
extern u32 gEkrHPBarCount;
extern u32 gEkrDeadEventExist;
void NewEkrWindowAppear(int identifier, int duration);
bool CheckEkrWindowAppearUnexist(void);
// func_fe6_08048E08
void NewEkrNamewinAppear(int identifier, int duration, int delay);
bool CheckEkrNamewinAppearUnexist(void);
void EkrBattleWaitNamewinAppear(struct ProcEkrBattle * proc);
void EkrBattleWaitForPostBattleAct(struct ProcEkrBattle * proc);
int CheckEkrDragonDead1(void);
u16 * GetEkrDragonStatusIdx(struct BaSprite * anim);
void NewEfxFarAttackWithDistance(struct BaSprite * anim, int);
extern u8 gSpellAnimBgfx[];
extern u16 gEkrTsaBuffer[0x1000 / 2];
extern u8 gSpellAnimObjfx[];
extern const u16 Pal_081BF434[0xC0];
extern const u8 Img_081BC268[];
extern const u8 Tsa_081BF5B4[];
void EfxTmFill(u32 val);
void SetEkrFrontAnimPostion(int pos, i16 x, i16 y);
bool SetupBanim(void);
void UpdateBanimFrame(void);
void InitMainAnims(void);
void InitBattleAnimFrame(int round_type_left, int round_type_right);
void InitLeftAnim(int round_type);
void InitRightAnim(int round_type);
void SwitchAISFrameDataFromBARoundType(struct BaSprite * anim, int type);
int GetAnimLayer(struct BaSprite * anim);
int GetAnimPosition(struct BaSprite * anim);
int CheckRoundMiss(i16 type);
int CheckRound1(i16 type);
int CheckRound2(i16 type);
// CheckRoundCrit
struct BaSprite * GetAnimAnotherSide(struct BaSprite * anim);
i16 GetAnimRoundType(struct BaSprite * anim);
i16 GetAnimNextRoundType(struct BaSprite * anim);
i16 GetAnimRoundTypeAnotherSide(struct BaSprite * anim);
i16 GetAnimNextRoundTypeAnotherSide(struct BaSprite * anim);
void SetAnimStateHidden(int pos);
void SetAnimStateUnHidden(int pos);

enum EkrDistanceType_idx {
    EKR_DISTANCE_CLOSE,
    EKR_DISTANCE_FAR,
    EKR_DISTANCE_FARFAR,
    EKR_DISTANCE_MONOCOMBAT,
    EKR_DISTANCE_PROMOTION
};

extern i16 gEkrDistanceType;
void EfxTmCpyBG(const void * ptr1, void * ptr2, u16 width, u16 height, int pal, int chr);
void EfxTmCpyBgHFlip(const u16 * tsa, u16 * tm, u16 width, u16 height, int pal, int chr);
void EfxTmCpyExt(const u16 * src, i16 src_width, u16 * dst, i16 dst_width, u16 width, u16 hight, int pal, int chr);
void EfxTmCpyExtHFlip(const u16 * src, i16 src_width, u16 * dst, i16 dst_width, u16 width, u16 hight, int pal, int chr);

#define EFX_BG_WIDTH 66
#define EFX_TILEMAP_LOC(aMap, aX, aY) (aMap + (aX) + EFX_BG_WIDTH * (aY))
void RegisterDataMove(void const * src, void * dst, int size);
void RegisterDataFill(u32 value, void * dst, int size);
void ApplyDataMoves(void);

#define RegisterVramMove(src, offset, size) \
    RegisterDataMove( \
        (src), \
        (void *) VRAM + (0x1FFFF & (offset)), \
        (size))

#define RegisterVramFill(value, offset, size) \
    RegisterDataFill( \
        (value), \
        (void *) VRAM + (0x1FFFF & (offset)), \
        (size))


#define CHR_SIZE 0x20
#define CHR_LINE 0x20
#define BGCHR_EKRDRAGON_400 0x400
extern u16 gEfxFrameTmap[0x2520 / 2];

extern const u8 Img_081BD5E8[];
extern const u8 Tsa_081BD5E8[];
extern u16 gUnk_Banim_0201E7CC[];
void EkrDragonTmCpyExt(int x);
u32 GetUnitEfxDebuff(struct BaSprite * anim);
struct ProcEkrDragonFlashing {
    PROC_HEADER;

    /* 29 */ u8 fxtype;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ i16 timer;

    STRUCT_PAD(0x2E, 0x44);

    /* 44 */ u32 frame;
    /* 48 */ const i16 * conf;
    /* 4C */ const u16 * pal;

    STRUCT_PAD(0x50, 0x54);

    /* 54 */ u32 round_cur;

    STRUCT_PAD(0x58, 0x5C);

    /* 5C */ struct BaSprite * anim;
};
extern u16 const FrameLut_EkrManaketeFlashingNormalAttack[];
extern u16 const FrameLut_EkrManaketeFlashingCriticalAttack[];
// extern ??? gUnk_081BC0FC
// extern ??? gUnk_081BC132
// extern ??? gUnk_081BC140
// extern ??? gUnk_081BC15E
// extern ??? gUnk_081BC17C
// extern ??? gUnk_081BC19A
extern u8 const Img_081BC268[];
extern u8 const Img_081BCBDC[];
extern u8 const Img_081BD5E8[];
extern u8 const Img_081BE490[];
extern const u16 Pal_EkrManaketeFlashing[0xC0];
extern u8 const Tsa_081BF5B4[];
extern u8 const Tsa_081BF6F4[];
extern u8 const Tsa_081BD5E8[];
extern u8 const Tsa_081BFA34[];
extern u8 const Img_ManaketeObjfx1[];
extern u8 const Img_ManaketeObjfx2[];
extern u8 const Img_ManaketeObjfx3[];
extern u16 const Pal_081C1C74[];
i16 EfxAdvanceFrameLut(i16 * ptime, i16 * pcount, const i16 lut[]);
#define PAL_COLOR_OFFSET(palid, colornum) (palid) * 0x10 + (colornum)
#define PAL_OFFSET(palid) PAL_COLOR_OFFSET((palid), 0)
#define BGPAL_OFFSET(bgpal) PAL_OFFSET(0x00 + (bgpal))
#define OBPAL_OFFSET(obpal) PAL_OFFSET(0x10 + (obpal))
enum
{
    // For use with BaSprite::currentRoundType

    ANIM_ROUND_HIT_CLOSE,
    ANIM_ROUND_CRIT_CLOSE,
    ANIM_ROUND_NONCRIT_FAR,
    ANIM_ROUND_CRIT_FAR,
    ANIM_ROUND_TAKING_MISS_CLOSE,
    ANIM_ROUND_TAKING_MISS_FAR,
    ANIM_ROUND_TAKING_HIT_CLOSE,
    ANIM_ROUND_STANDING,
    ANIM_ROUND_TAKING_HIT_FAR,
    ANIM_ROUND_MISS_CLOSE,
    ANIM_ROUND_MAX,

    ANIM_ROUND_INVALID = -1,
};

struct ProcEkrDragonIntroFx {
    PROC_HEADER;

    /* 29 */ u8 flag;
    /* 2A */ u16 unk2A;
    /* 2C */ i16 timer;
    /* 2E */ i16 timer2;

    STRUCT_PAD(0x30, 0x32);

    /* 32 */ u16 x;
    /* 34 */ i16 x_hi;

    STRUCT_PAD(0x36, 0x3A);

    /* 3A */ i16 y;
    /* 3C */ i16 y_hi;

    STRUCT_PAD(0x3E, 0x44);

    /* 44 */ int duration;
    /* 48 */ int step;
    /* 4C */ int speed;
    /* 50 */ int unk50;
};

struct ProcEkrDragon {
    PROC_HEADER;

    /* 29 */ u8 done;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ i16 timer;
    /* 2E */ i16 terminator;
    /* 30 */ i16 timer2;
    /* 32 */ i16 x; 

    STRUCT_PAD(0x34, 0x3A);

    /* 3A */ i16 y_lo;
    /* 3C */ i16 y_hi;

    STRUCT_PAD(0x3E, 0x44);

    /* 44 */ ProcPtr sproc_flashingobj;
    /* 48 */ ProcPtr sproc_bg2fx;
    /* 4C */ ProcPtr sproc_bg2scroll;
    /* 50 */ ProcPtr mainfxproc;
    /* 54 */ ProcPtr proc54;
    /* 58 */ ProcPtr sproc_bg2scrollhandle;
    /* 5C */ struct BaSprite * anim;
    /* 60 */ ProcPtr sproc1;
    /* 64 */ struct ProcEkrDragonIntroFx * procfx;
    /* 68 */ ProcPtr sproc_flashingbg;
};

extern struct ProcEkrDragon * EkrDragonProcs[2];

struct ProcEkrDragonDeamon {
    PROC_HEADER;

    /* 29 */ u8 fxtype;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ i16 timer;

    STRUCT_PAD(0x2E, 0x32);

    /* 32 */ i16 x;
    /* 34 */ i16 x_hi;

    STRUCT_PAD(0x36, 0x3A);

    /* 3A */ i16 y;
    /* 3C */ i16 y_hi;

    STRUCT_PAD(0x3E, 0x44);

    /* 44 */ u32 frame;
    /* 48 */ const i16 * conf;
    /* 4C */ const u16 * pal;

    STRUCT_PAD(0x50, 0x54);

    /* 54 */ u32 round_cur;

    STRUCT_PAD(0x58, 0x5C);

    /* 5C */ struct BaSprite * anim;
};

extern struct ProcEkrDragonDeamon * gEkrDragonDeamonProcs[2];
bool CheckSkipDragonTransfer(struct BaSprite * anim);
ProcPtr NewEfxIdunnMain(struct BaSprite * anim);
ProcPtr StartEkrIdunnIntroDeamon(struct BaSprite * anim);
// func_fe6_0805A7C0
ProcPtr StartEkrIdunnMainDeamon(struct BaSprite * anim);
void EfxPlaySE(int songid, int volume);

struct ProcEfxHpBar {
    PROC_HEADER;

    /* 29 */ u8 death;
    STRUCT_PAD(0x2A, 0x2C);
    /* 2C */ i16 timer;
    /* 2E */ i16 cur;
    STRUCT_PAD(0x30, 0x48);
    /* 48 */ int diff;
    /* 4C */ int this;
    /* 50 */ int next;
    /* 54 */ u32 timer2;
    /* 58 */ int finished;
    /* 5C */ struct BaSprite * anim_main_other;
    /* 60 */ struct BaSprite * anim_main_this;
    /* 64 */ struct BaSprite * anim_this;
};
extern i16 gEfxHpLutOff[2];
extern i16 gEkrHitNow[];
int GetBanimLinkArenaFlag(void);
void NewEfxDeadEvent(struct BaSprite * anim1, struct BaSprite * anim2);
void NewEfxDead(struct BaSprite * anim1, struct BaSprite * anim2);
extern i16 gBanimValid[2];
void PlayDeathSoundForArena(void);

struct ProcEfxQuake {
    /* 00 */ PROC_HEADER;

    /* 29 */ u8 quake_ui;
    /* 2A */ u8 kind;
    /* 2C */ i16 timer;
    /* 30 */ int unk_30;
    /* 34 */ i16 ix;
    /* 36 */ i16 unk_36;
    /* 38 */ i16 unk_38;
    /* 3A */ i16 unk_3a;
    /* 3C */ i16 iy;
    /* 3E */ i16 unk_3e;
    /* 40 */ int unk_40;
    /* 44 */ const i16 * vec;
    /* 48 */ int unk_48;
    STRUCT_PAD(0x4C, 0x5C);
    /* 5C */ struct BaSprite * anim_l;
    /* 60 */ struct BaSprite * anim_r;
    /* 64 */ struct BaSprite * unk_64;
};

extern i16 gEkrXPosReal[2];
extern i16 gEkrYPosReal[2];
extern u16 gEkrXPosBase[2];
extern u16 gEkrYPosBase[2];
u32 GetEkrDragonStateTypeGeneric(void); /* Different form FE8, this is a bitfile rather than enum */
u32 GetEkrDragonStateType(void);
u32 GetEkrDragonStateTypeIdunn(void);
extern u32 gEfxQuakeExist;
extern struct Vec2i gEkrBg2QuakeVec;
#define SetEkrBg2QuakeVec(_x, _y) \
    gEkrBg2QuakeVec.x = (_x);    \
    gEkrBg2QuakeVec.y = (_y);

enum
{
    PREPMENU_FLAG_MULTIARENA = 1 << 0,
};

enum
{
    L_PREPMENU_5 = 0x05,
    L_PREPMENU_6 = 0x06,
    L_PREPMENU_B = 0x0B,
};

enum prepscreen_text_idx {
    TEXT_PREP_PICK_LEFT_BAR = 0,
};

// TODO: MOOOOVE

#define BGCHR_PREPMENU_230 0x230
#define BGCHR_PREPMENU_240 0x240
#define BGCHR_PREPMENU_700 0x700

#define OBCHR_PREPMENU_240 0x240
#define OBCHR_PREPMENU_380 0x380

#define BGPAL_PREPMENU_2 0x02
#define BGPAL_PREPMENU_A 0x0A // ..E // background
#define BGPAL_PREPMENU_E 0x0E
#define BGPAL_PREPMENU_F 0x0F

#define OBPAL_PREPMENU_2 0x02 // ..4
#define OBPAL_PREPMENU_4 0x04
#define OBPAL_PREPMENU_5 0x05
#define OBPAL_PREPMENU_6 0x06 // ..A
#define OBPAL_PREPMENU_D 0x0D

struct UnkProc_08678E18;
struct UnkProc_PrepMenu_50;

enum PREP_SUB2_ACTION_IDX {
    PREP_SUB2ACT_TRADE_ITEM = 2,
    PREP_SUB2ACT_CONVOY,
    PREP_SUB2ACT_DISCARD_ITEM,
    PREP_SUB2ACT_CHECK_ALL_ITEM,
    PREP_SUB2ACT_STATSCREEN,
    PREP_SUB2ACT_SAVEMENU,
};

struct PrepMenuProc
{
    /* 00 */ PROC_HEADER;
    /* 29 */ u8 unk_29;
    /* 2A */ u8 in_unit_sel_screen;
    /* 2B */ u8 unk_2B;
    /* 2C */ u8 unk_2C;
    /* 2D */ u8 unk_2D; // size of gPrepUnitList?
    /* 2E */ u8 max_counter;
    /* 2F */ u8 cur_counter;
    /* 30 */ u8 list_num_cur; // id within gPrepUnitList
    /* 31 */ u8 unk_31;
    /* 32 */ u8 unk_32;
    /* 33 */ u8 unk_33[2];
    /* 35 */ u8 unk_35;
    /* 36 */ i8 hand_y_pos;
    /* 37 */ u8 unk_37; // i8 also?
    /* 38 */ u8 unk_38;
    /* 39 */ u8 unk_39;
    /* 3A */ u8 unk_3A;
    /* 3B */ u8 sub2_action;
    /* 3C */ u8 a_button_actions; // Bit1:selection unit, Bit2:Start battle
    /* 3D */ u8 do_help;
    /* 3E */ u8 unk_3E;
    /* 3F */ u8 unk_3F;
    /* 40 */ u16 unk_40;
    /* 42 */ u16 scroll_timer;
    /* 44 */ u16 yDiff_cur;
    /* 46 */ STRUCT_PAD(0x46, 0x48);
    /* 48 */ u32 unk_48;
    /* 4C */ u32 unk_4C;
    /* 50 */ struct UnkProc_PrepMenu_50 * unk_50;
    /* 54 */ STRUCT_PAD(0x54, 0x58);
    /* 58 */ ProcPtr procbg;
    /* 5C */ struct UnkProc_08678E18 * unk_5C;
    /* 60 */ ProcPtr unk_60;
};

struct UnkProc_08678DE0
{
    /* 00 */ PROC_HEADER_EXT(struct PrepMenuProc);
    /* 29 */ STRUCT_PAD(0x29, 0x30);
    /* 30 */ u16 unk_30;
};

struct UnkProc_08678E00
{
    /* 00 */ PROC_HEADER;
    /* 29 */ STRUCT_PAD(0x29, 0x48);
    /* 48 */ struct Unit * unit;
};

struct UnkProc_08678E18
{
    /* 00 */ PROC_HEADER_EXT(struct PrepMenuProc);
    /* 29 */ STRUCT_PAD(0x29, 0x2C);
    /* 2C */ struct Unit * unit;
    /* 30 */ struct PrepMenuProc * main_proc;
    /* 34 */ u8 unk_34;
    /* 35 */ u8 unk_35;
};

struct UnkProc_PrepMenu_50
{
    /* 00 */ PROC_HEADER;
    /* 29 */ STRUCT_PAD(0x29, 0x2A);
    /* 2A */ u8 unk_2A;
};

void PrepScreen_DrawScreenInfo(struct PrepMenuProc * proc);
fu8 GetPrepMenuItemAmount(fu8 arg_0);
void func_fe6_0807CEF0(fu8 arg_0, fu8 arg_1);
void PutPrepScreenMenuItems(struct Text * text, fu8 arg_1, u16 * tm, fu8 arg_3);
void func_fe6_08082D08(ProcPtr proc, int unused_1, fu16 obpal);
void ResetPrepMenuItem(void);

enum { SID_PID_POOL_SIZE = 5 };
extern u8 SioPidPool[SID_PID_POOL_SIZE];

void ResetSioPidPool(void);
void RegisterSioPid(fu8 pid);
void RemoveSioPid(fu8 pid);
void func_fe6_0807921C(void);
void func_fe6_08079250(struct UnkProc_08678DE0 * proc);
void func_fe6_080792C8(struct UnkProc_08678DE0 * proc);
void func_fe6_08079388(struct UnkProc_08678DE0 * proc);
void func_fe6_080793F0(struct PrepMenuProc * parent);
bool IsUnitMandatoryDeploy(struct Unit * unit);
void InitPrepScreenMainMenu(struct PrepMenuProc * proc);
void PrepUnit_DrawLeftUnitInfo(struct Unit * unit, u16 * tm);
void PrepScreen_ReloadLeftUnitInfo(struct Unit * unit);
void func_fe6_0807979C(struct UnkProc_08678E00 * proc);
void func_fe6_080797DC(struct PrepMenuProc * parent);
void func_fe6_08079804(struct PrepMenuProc * proc);
void func_fe6_080798EC(struct PrepMenuProc * proc);
void func_fe6_08079928(struct PrepMenuProc * proc, int unit_id_or_pid, bool by_pid);
void func_fe6_08079A28(void);
void func_fe6_08079A94(struct PrepMenuProc * proc);
void func_fe6_08079BC8(struct UnkProc_08678E18 * proc);
void func_fe6_08079C38(struct UnkProc_08678E18 * proc);
struct UnkProc_08678E18 * func_fe6_08079D70(struct PrepMenuProc * parent);
void func_fe6_08079D84(struct PrepMenuProc * proc);
void PrepUnit_DrawPickLeftBar(struct PrepMenuProc * proc);
void PrepUnit_DrawUnitListNames(struct PrepMenuProc * proc, fu8 row);
void RearrangeMandatoryDeployUnits(void);
void SioResetUnitItems(void);
void func_fe6_0807A1C8(struct PrepMenuProc * proc, bool load_sprites);
void PrepMenu_InitScreenExt(struct PrepMenuProc * proc);
void PrepMenu_InitScreen(struct PrepMenuProc * proc);
void PrepScreen_DrawScreenInfo(struct PrepMenuProc * proc);
void PrepMenu_InitExt(struct PrepMenuProc * proc);
fi8 PrepUnitSel_Loop(struct PrepMenuProc * proc);
void func_fe6_0807ABF4(struct PrepMenuProc * proc);
void func_fe6_0807AC9C(struct PrepMenuProc * proc);
void func_fe6_0807ACE8(struct PrepMenuProc * proc);
void PrepMenu_EndIfNoUnit(struct PrepMenuProc * proc);
void PrepMenu_Init(struct PrepMenuProc * proc);
void PrepMenu_Loop(struct PrepMenuProc * proc);
// func_fe6_0807B0DC
// func_fe6_0807B0E4
// func_fe6_0807B178
// func_fe6_0807B200
// PrepMenu_ExecSub2Screen
// func_fe6_0807B3D8
// PrepScreen_ReloadLeftUnitInfoFromStatscreen
// func_fe6_0807B4C0
// func_fe6_0807B5A0
// func_fe6_0807B69C
void StartPrepAtMenu(void);
// StartSioPrepMenu
// PrepMenuFadeIn_Init
// PrepMenuFadeIn_Loop
// func_fe6_0807B7C8
// StartPrepMenuFadeIn
// func_fe6_0807B89C
void func_fe6_0807B8B0(ProcPtr proc, int);
void func_fe6_0807B8CC(ProcPtr proc, fu8 arg_1, fu8 arg_2, int arg_3);
// func_fe6_0807B90C
// func_fe6_0807B9CC
// func_fe6_0807BC04
// func_fe6_0807BE88
// func_fe6_0807BF70
// func_fe6_0807C090
// PrepMenuBmCursor_Init
// PrepMenuBmCursor_Loop
// PrepMenuBmCursor_End
// PrepMenuBmCursor_Block
ProcPtr StartPrepMenuBmCursor(ProcPtr parent);
// func_fe6_0807C520
void PrepScreenMenu_OnPickUnits(struct PrepMenuProc * proc);
void PrepScreenMenu_OnItems(struct PrepMenuProc * proc);
// func_fe6_0807C840
void PrepScreenSubMenu_OnTrade(struct PrepMenuProc * proc);
void PrepScreenSubMenu_OnDiscard(struct PrepMenuProc * proc);
void PrepScreenSubMenu_Convoy(struct PrepMenuProc * proc);
void PrepScreenSubMenu_AllItems(struct PrepMenuProc * proc);
void PrepScreenSubMenu_Shop(struct PrepMenuProc * proc);
// func_fe6_0807CAD4
void PrepScreenMenu_Augury(struct PrepMenuProc * proc);
// func_fe6_0807CB40
void PrepScreenMenu_OnSave(struct PrepMenuProc * proc);
void PrepScreenMenu_OnCheckMap(struct PrepMenuProc * proc);
void PrepScreenSubMenu_StartBattle(struct PrepMenuProc * proc);
// ResetPrepMenuItem
void SetPrepScreenMenuItem(void(*func)(struct PrepMenuProc * proc), fu8 is_submenu, int name, fu8 color, int desc, fu8 index);
bool PrepMenuOnSelected(struct PrepMenuProc * proc);
// GetPrepMenuItemAmount
// PutPrepScreenMenuItems
void PrepMenuHelpbox(struct PrepMenuProc * proc);
// PrepMenuHelpbox
// func_fe6_0807CE98
// func_fe6_0807CEF0
u8 func_fe6_0807CF2C(u8, u8);
// func_fe6_0807CF78
// func_fe6_0807CFA0
// func_fe6_0807CFA4
// func_fe6_0807CFB8
// func_fe6_0807CFBC
// func_fe6_0807CFDC
// func_fe6_0807D074
// func_fe6_0807D088
// func_fe6_0807D0A8
// func_fe6_0807D16C

extern struct Unit * gPrepUnitList[];
extern struct Text gPrepScreenText_PickLeftBar;
extern struct Text gUnk_0200E864[];
extern struct Text gPrepScreenText_LeftPersonName;
extern u16 gUnk_0200E8A4[];
extern struct Unit gUnk_0200F0A4[]; // rearrange buf
extern struct Text gPrepScreenTexts_Units[];
extern u8 gUnk_0200E7D4;
extern struct Text gUnk_0200E88C[];
extern u8 gUnk_020104A4[]; // img buf

extern u16 const gUnk_08320FCE[]; // tiles
extern u16 const gUnk_08326EE6[]; // tiles
extern u32 const gUnk_0831A268[]; // img(lz)
extern u32 const Img_SpinningArrow[]; // img(lz)
extern u32 const gUnk_08326930[]; // img(lz)
extern u16 const Pal_SpinningArrow[]; // pal
extern u16 const gUnk_0831AABC[]; // pal (x2)
extern u16 const gUnk_08326E64[]; // pal (x4)
extern u16 const gUnk_08327108[]; // pal
extern u32 const gUnk_0831B0A8[]; // img(lz)
extern u16 const gUnk_08320D98[]; // pal (x4)
extern u32 const gUnk_08321FA4[]; // img(lz)
extern u16 const gUnk_08326910[]; // pal
extern int gUnk_0200E7D8; // unit id
