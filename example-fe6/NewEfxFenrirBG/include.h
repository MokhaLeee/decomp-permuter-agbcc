enum video_banim {
    BGPAL_EFX_0 = 0,
    BGPAL_EFX_SPELL_BG = 1,
    BGPAL_EFX_4 = 4,
    BGPAL_EFXDRAGON_L = 6,
    BGPAL_EFXDRAGON_R = 7,

    OBPAL_EFX_SYSTEM_OBJ = 0,
    OBPAL_EFX_SPELL_BG = 1,
    OBPAL_EFX_SPELL_OBJ = 2,
    OBPAL_EFX_FACE = 3,
    OBPAL_EFX_5 = 5,
    OBPAL_EFX_BG = 6,
    OBPAL_EFX_UNIT_L = 7,
    OBPAL_EFX_UNIT_BAK_L = 8,
    OBPAL_EFX_UNIT_R = 9,
    OBPAL_EFX_UNIT_BAK_R = 10,
    OBPAL_EFXHPBAR_L = 11,
    OBPAL_EFXHPBAR_R = 12,
    OBPAL_EFX_ITEM_L = 13,
    OBPAL_EFX_ITEM_R = 14,

    VRAMOFF_BANIM_SPELL_OBJ = 0x0800,
    VRAMOFF_BANIM_SPELL_BG  = 0x2000,

    VRAMOFF_OBJ_EKRGAUGE_SUBFIX = 0x3800,
    VRAMOFF_OBJ_EKRGAUGE_NUM_L  = 0x3A00,
    VRAMOFF_OBJ_EKRGAUGE_ICON_L = 0x3B80,
    VRAMOFF_OBJ_EKRGAUGE_ICON_R = 0x3BC0,
    VRAMOFF_OBJ_EKRGAUGE_ARROW  = 0x3C00,
    VRAMOFF_OBJ_EKRGAUGE_NUM_R  = 0x3E00,
    VRAMOFF_OBJ_4000            = 0x4000,
    VRAMOFF_OBJ_6000            = 0x6000,

    VRAMOFF_BG_EKRLVUP_FONT = 0x2400,
};


enum
{
    BGCHR_WINDOWFRAME = 0,

    BGCHR_MINIMAP = 0x01,

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

    BGCHR_STEALSELECT_FACE = 0x200,

    BGCHR_BATTLEPREVIEW_FRAME = 0x200,

    BGCHR_MANIM_INFOFRAME = 1,
    BGCHR_MANIM_140 = 0x140,
    BGCHR_MANIM_200 = 0x200,

    BGCHR_STATSCREEN_EQUIPMENTLABEL = 0x270,

    BGCHR_STATSCREEN_EQUIPSTATFRAME = 0x60, // chr bank @ 8000
    BGCHR_STATSCREEN_FACE = 0xE0, // chr bank @ 8000
    BGCHR_STATSCREEN_BACKMURAL = 0x180, // chr bank @ 8000

    BGCHR_MAPUI_CHIBI = 0x0F0,
    BGCHR_MAPUI_100 = 0x100,
    BGCHR_MAPUI_128 = 0x128,
    BGCHR_MAPUI_140 = 0x140,

    BGCHR_STATUSSCREEN_280 = 0x280,
    BGCHR_B_STATUSSCREEN_280 = 0x280,
    BGCHR_B_STATUSSCREEN_380 = 0x380,
    BGCHR_B_STATUSSCREEN_3C0 = 0x3C0,
};

enum
{
    BGPAL_TEXT_DEFAULT    = 0,
    BGPAL_WINDOWFRAME     = 1,
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

    BGPAL_STEALSELECT_FACE = 5,

    BGPAL_BATTLEPREVIEW_FRAME = 1, // .. 2

    BGPAL_UI_STATBAR = 6,

    BGPAL_MANIM_INFOFRAME = 1, // .. 2
    BGPAL_MANIM_4 = 4,
    BGPAL_MANIM_INFO = 5,

    BGPAL_MURALBACKGROUND = 14, // .. 15

    BGPAL_STATSCREEN_6 = 6,
    BGPAL_STATSCREEN_EQUIPSTATFRAME = 7,
    BGPAL_STATSCREEN_FACE = 13,

    BGPAL_MAPUI_0 = BGPAL_TEXT_DEFAULT,
    BGPAL_MAPUI_2 = 2,
    BGPAL_MAPUI_3 = 3,
    BGPAL_MAPUI_CHIBI = 4,

    BGPAL_STATUSSCREEN_TALKTEXT = 1,
    BGPAL_STATUSSCREEN_2 = 2,
    BGPAL_STATUSSCREEN_4 = 4,
    BGPAL_STATUSSCREEN_5 = 5,

    BGPAL_MINIMAP_TERRAIN = 3,
    BGPAL_MINIMAP_OBJECTS = 4,
};

enum
{
    OBCHR_SYSTEM_OBJECTS = 0x000,

    OBCHR_CLOUDS = 0x012,
    OBCHR_SNOWSTORM_PARTICLE = 0x018,
    OBCHR_SANDSTORM_PARTICLE = 0x01C,

    OBCHR_MAPSPRITES = 0x80,

    OBCHR_DEBUGTEXT_DEFAULT = 0x180,

    OBCHR_MU_180 = 0x180,

    OBCHR_MANIM_180 = 0x180,
    OBCHR_MANIM_1C0 = 0x1C0,

    OBCHR_TRAPFX = 0x240,

    OBCHR_TRADEMENU_240 = 0x240,

    OBCHR_SUBTITLEHELP_TEXT = 0x240,

    OBCHR_BATTLEPREVIEW_MULTIPLIERS = 0x2E8,

    OBCHR_MOVEPATH = 0x2F0,

    OBCHR_FACE_DEFAULT2 = 0x1E0,
    OBCHR_FACE_DEFAULT1 = 0x268,
    OBCHR_FACE_DEFAULT0 = 0x2F0,
    OBCHR_FACE_DEFAULT3 = 0x378,

    OBCHR_MU_BASE = 0x380,

    OBCHR_STATSCREEN_240 = 0x240,

    OBCHR_HELPBOX_180 = 0x180,

    OBCHR_MAPUI_NUMBERS = 0x2E0,
};

enum
{
    OBPAL_SYSTEM_OBJECTS = 0,

    OBPAL_1 = 1,

    OBPAL_TRAPFX = 2,

    OBPAL_STATUSHEAL_UNITSPRITE = 2,

    OBPAL_BATTLEPREVIEW_MULTIPLIERS = 2,

    OBPAL_MOVEPATH = 3,

    OBPAL_SUBTITLEHELP_TEXT = 4,

    OBPAL_MU_FADE = 5,

    OBPAL_FACE_DEFAULT0 = 6,
    OBPAL_FACE_DEFAULT1 = 7,
    OBPAL_FACE_DEFAULT2 = 8,
    OBPAL_FACE_DEFAULT3 = 9,

    OBPAL_TRADEMENU_8 = 8,

    OBPAL_MANIM_3 = 3,
    OBPAL_MANIM_4 = 4,
    OBPAL_MANIM_SPECIALMU = 8, // .. 9

    OBPAL_7 = 7,
    OBPAL_10 = 10,

    OBPAL_UNITSPRITE_PURPLE = 11,

    OBPAL_MAPSPRITES = 12,
    OBPAL_UNITSPRITE_BLUE = OBPAL_MAPSPRITES + 0,
    OBPAL_UNITSPRITE_RED = OBPAL_MAPSPRITES + 1,
    OBPAL_UNITSPRITE_GREEN = OBPAL_MAPSPRITES + 2,
    OBPAL_UNITSPRITE_GRAY = OBPAL_MAPSPRITES + 3,

    OBPAL_STATSCREEN_WINDOWFRAME = 2,
    OBPAL_STATSCREEN_PAGENAME = 3,
    OBPAL_STATSCREEN_SPRITES = 4,

    OBPAL_HELPBOX_5 = 5,

    OBPAL_MAPUI_8 = 8,
};

#define PLTT_SIZEOF(n) ((n) * sizeof(u16))
#define PLTT_SIZE_4BPP PLTT_SIZEOF(16)
#define PLTT_SIZE_8BPP PLTT_SIZEOF(256)
#define ANIM_REF_OFFSET(off_ref_round, off_ref_pos) ((off_ref_round) * 2 + off_ref_pos)

enum BanimIndex
{
    BANIM_00,
    BANIM_01,
    BANIM_02,
    BANIM_03,
    BANIM_04,
    BANIM_05,
    BANIM_06,
    BANIM_07,
    BANIM_08,
    BANIM_09,
    BANIM_0A,
    BANIM_0B,
    BANIM_0C,
    BANIM_0D,
    BANIM_0E,
    BANIM_0F,
    BANIM_10,
    BANIM_11,
    BANIM_12,
    BANIM_13,
    BANIM_14,
    BANIM_15,
    BANIM_16,
    BANIM_17,
    BANIM_18,
    BANIM_19,
    BANIM_1A,
    BANIM_1B,
    BANIM_1C,
    BANIM_1D,
    BANIM_1E,
    BANIM_1F,
    BANIM_20,
    BANIM_21,
    BANIM_22,
    BANIM_23,
    BANIM_24,
    BANIM_25,
    BANIM_26,
    BANIM_27,
    BANIM_28,
    BANIM_29,
    BANIM_2A,
    BANIM_2B,
    BANIM_2C,
    BANIM_2D,
    BANIM_2E,
    BANIM_2F,
    BANIM_30,
    BANIM_31,
    BANIM_32,
    BANIM_33,
    BANIM_34,
    BANIM_35,
    BANIM_36,
    BANIM_37,
    BANIM_38,
    BANIM_39,
    BANIM_3A,
    BANIM_3B,
    BANIM_3C,
    BANIM_3D,
    BANIM_3E,
    BANIM_3F,
    BANIM_40,
    BANIM_41,
    BANIM_42,
    BANIM_43,
    BANIM_44,
    BANIM_45,
    BANIM_46,
    BANIM_47,
    BANIM_48,
    BANIM_49,
    BANIM_4A,
    BANIM_4B,
    BANIM_4C,
    BANIM_4D,
    BANIM_4E,
    BANIM_4F,
    BANIM_50,
    BANIM_51,
    BANIM_52,
    BANIM_53,
    BANIM_54,
    BANIM_55,
    BANIM_56,
    BANIM_57,
    BANIM_58,
    BANIM_59,
    BANIM_5A,
    BANIM_5B,
    BANIM_5C,
    BANIM_5D,
    BANIM_5E,
    BANIM_5F,
    BANIM_60,
    BANIM_61,
    BANIM_62,
    BANIM_63,
    BANIM_64,
    BANIM_65,
    BANIM_66,
    BANIM_67,
    BANIM_68,
    BANIM_69,
    BANIM_6A,
    BANIM_6B,
    BANIM_6C,
    BANIM_6D,
    BANIM_6E,
    BANIM_6F,
    BANIM_70,
    BANIM_71,
    BANIM_72,
    BANIM_73,
    BANIM_74,
    BANIM_75,
    BANIM_76,
    BANIM_77,
    BANIM_78,
    BANIM_79,

    BANIM_MAX
};
#define Anim BaSprite

enum
{
    BG_0 = 0,
    BG_1,
    BG_2,
    BG_3,
};
#define MSG_Turn 0x0725
#define MSG_MoneyOnHand 0x0726
#define MSG_____ 0x0727

#define OAM2_CHR(ac)        ((ac) & 0x03FF)
#define OAM2_CHR_MASK       0x03FF
#define OAM2_LAYER(al)      (((al) & 0x3) * 0x0400)
#define OAM2_LAYER_MASK     0x0C00
#define OAM2_PAL(ap)        (((ap) & 0xF) * 0x1000)
#define OAM2_PAL_MASK       0xF000

#define MSG_PLAYRANK_0 0x0B94
#define MSG_PLAYRANK_1 0x0B95
#define MSG_PLAYRANK_2 0x0B96
#define MSG_PLAYRANK_3 0x0B97
#define MSG_PLAYRANK_4 0x0B98
#define MSG_PLAYRANK_5 0x0B99
#define MSG_PLAYRANK_6 0x0B9A
#define MSG_PLAYRANK_7 0x0B9B
#define MSG_PLAYRANK_8 0x0B9C
#define MSG_PLAYRANK_9 0x0B9D
#define MSG_PLAYRANK_PREFIX 0x0B9E
#define MSG_PLAYRANK_SUBFIX 0x0B9F
#define MSG_PLAYRANK_GAIDEN 0x0BA0
#define MSG_PLAYRANK_FINAL 0x0BA1

enum
{
    CHAPTER_TUTORIAL = 0x00,
    CHAPTER_1 = 0x01,
    CHAPTER_2 = 0x02,
    CHAPTER_3 = 0x03,
    CHAPTER_4 = 0x04,
    CHAPTER_5 = 0x05,
    CHAPTER_6 = 0x06,
    CHAPTER_7 = 0x07,
    CHAPTER_8 = 0x08,
    CHAPTER_9 = 0x09,
    CHAPTER_10_A = 0x0A,
    CHAPTER_11_A = 0x0B,
    CHAPTER_12 = 0x0C,
    CHAPTER_13 = 0x0D,
    CHAPTER_14 = 0x0E,
    CHAPTER_15 = 0x0F,
    CHAPTER_16 = 0x10,
    CHAPTER_17_I = 0x11,
    CHAPTER_18_I = 0x12,
    CHAPTER_19_I = 0x13,
    CHAPTER_20_I = 0x14,
    CHAPTER_21 = 0x15,
    CHAPTER_22 = 0x16,
    CHAPTER_23 = 0x17,
    CHAPTER_24 = 0x18,
    CHAPTER_FINAL = 0x19,
    CHAPTER_10_B = 0x1A,
    CHAPTER_11_B = 0x1B,
    CHAPTER_17_S = 0x1C,
    CHAPTER_18_S = 0x1D,
    CHAPTER_19_S = 0x1E,
    CHAPTER_20_S = 0x1F,
    CHAPTER_8X = 0x20,
    CHAPTER_12X = 0x21,
    CHAPTER_14X = 0x22,
    CHAPTER_16X = 0x23,
    CHAPTER_20X_I = 0x24,
    CHAPTER_20X_S = 0x25,
    CHAPTER_21X = 0x26,
    CHAPTER_MULTIARENA = 0x27,
    CHAPTER_TRIAL_A = 0x28,
    CHAPTER_TRIAL_B = 0x29,
    CHAPTER_TRIAL_C = 0x2A,
    CHAPTER_TRIAL_D = 0x2B,
    CHAPTER_TRIAL_E = 0x2C,

    CHAPTER_COUNT = 0x2D,
};

enum
{
    SONG_NONE = 0x00,

    SONG_01 = 0x01,
    SONG_02 = 0x02,
    SONG_03 = 0x03,
    SONG_04 = 0x04,
    SONG_05 = 0x05,
    SONG_06 = 0x06,
    SONG_09 = 0x09,
    SONG_0A = 0x0A,
    SONG_0C = 0x0C,
    SONG_0E = 0x0E,
    SONG_0F = 0x0F,
    SONG_11 = 0x11,
    SONG_12 = 0x12,
    SONG_13 = 0x13,
    SONG_14 = 0x14,
    SONG_15 = 0x15,
    SONG_16 = 0x16,
    SONG_17 = 0x17,
    SONG_18 = 0x18,
    SONG_19 = 0x19,
    SONG_1A = 0x1A,
    SONG_1B = 0x1B,
    SONG_1C = 0x1C,
    SONG_1D = 0x1D,
    SONG_1E = 0x1E,
    SONG_1F = 0x1F,
    SONG_20 = 0x20,
    SONG_21 = 0x21,
    SONG_22 = 0x22,
    SONG_23 = 0x23,
    SONG_24 = 0x24,
    SONG_25 = 0x25,
    SONG_26 = 0x26,
    SONG_27 = 0x27,
    SONG_28 = 0x28,
    SONG_29 = 0x29,
    SONG_2A = 0x2A,
    SONG_2B = 0x2B,
    SONG_2C = 0x2C,
    SONG_2D = 0x2D,
    SONG_2E = 0x2E,
    SONG_2F = 0x2F,
    SONG_30 = 0x30,
    SONG_31 = 0x31,
    SONG_32 = 0x32,
    SONG_33 = 0x33,
    SONG_34 = 0x34,
    SONG_35 = 0x35,
    SONG_36 = 0x36,
    SONG_37 = 0x37,
    SONG_38 = 0x38,
    SONG_39 = 0x39,
    SONG_3A = 0x3A,
    SONG_3B = 0x3B,
    SONG_3C = 0x3C,
    SONG_3D = 0x3D,
    SONG_3E = 0x3E,
    SONG_3F = 0x3F,
    SONG_40 = 0x40,
    SONG_41 = 0x41,
    SONG_42 = 0x42,
    SONG_43 = 0x43,
    SONG_44 = 0x44,
    SONG_45 = 0x45,
    SONG_46 = 0x46,
    SONG_47 = 0x47,
    SONG_48 = 0x48,
    SONG_49 = 0x49,
    SONG_4A = 0x4A,
    SONG_4B = 0x4B,
    SONG_4C = 0x4C,
    SONG_4D = 0x4D,
    SONG_4E = 0x4E,
    SONG_4F = 0x4F,
    SONG_50 = 0x50,
    SONG_51 = 0x51,
    SONG_52 = 0x52,
    SONG_53 = 0x53,
    SONG_54 = 0x54,
    SONG_55 = 0x55,
    SONG_56 = 0x56,
    SONG_57 = 0x57,
    SONG_58 = 0x58,
    SONG_59 = 0x59,
    SONG_5A = 0x5A,
    SONG_5B = 0x5B,
    SONG_5C = 0x5C,
    SONG_60 = 0x60, // save success
    SONG_61 = 0x61,
    SONG_65 = 0x65,
    SONG_66 = 0x66,
    SONG_67 = 0x67, // change selection in menu/help box
    SONG_68 = 0x68,
    SONG_69 = 0x69,
    SONG_6A = 0x6A,
    SONG_6B = 0x6B,
    SONG_6C = 0x6C,
    SONG_6D = 0x6D,
    SONG_6E = 0x6E,
    SONG_6F = 0x6F, // stat screen page slide
    SONG_70 = 0x70, // help box open
    SONG_71 = 0x71, // help box close
    SONG_73 = 0x73,
    SONG_74 = 0x74, // exp bar thingy
    SONG_75 = 0x75,
    SONG_76 = 0x76,
    SONG_77 = 0x77,
    SONG_78 = 0x78, // open minimap
    SONG_79 = 0x79, // close minimap
    SONG_7A = 0x7A,
    SONG_7B = 0x7B, // sioerror
    SONG_82 = 0x82, // manim
    SONG_83 = 0x83, // manim
    SONG_84 = 0x84, // manim
    SONG_85 = 0x85, // manim
    SONG_86 = 0x86,
    SONG_87 = 0x87,
    SONG_88 = 0x88, // manim
    SONG_89 = 0x89,
    SONG_8A = 0x8A, // manim
    SONG_8B = 0x8B, // manim
    SONG_8C = 0x8C,
    SONG_8D = 0x8D, // manim (unlock?)
    SONG_8E = 0x8E,
    SONG_8F = 0x8F,
    SONG_90 = 0x90,
    SONG_91 = 0x91,
    SONG_92 = 0x92,
    SONG_96 = 0x96,
    SONG_97 = 0x97,
    SONG_9A = 0x9A,
    SONG_9B = 0x9B,
    SONG_9C = 0x9C,
    SONG_A0 = 0xA0,
    SONG_A4 = 0xA4,
    SONG_A5 = 0xA5,
    SONG_A6 = 0xA6,
    SONG_A8 = 0xA8, // dance sfx
    SONG_A9 = 0xA9, // play (bard) sfx
    SONG_AA = 0xAA,
    SONG_AB = 0xAB,
    SONG_AC = 0xAC,
    SONG_AF = 0xAF, // obstacle destroy (end)
    SONG_B0 = 0xB0, // obstacle destroy (mid)
    SONG_B1 = 0xB1,
    SONG_B3 = 0xB3,
    SONG_B4 = 0xB4, // manim
    SONG_B5 = 0xB5, // manim
    SONG_B6 = 0xB6,
    SONG_B7 = 0xB7, // manim poison
    SONG_B9 = 0xB9,
    SONG_BA = 0xBA,
    SONG_BB = 0xBB,
    SONG_BC = 0xBC,
    SONG_BD = 0xBD, // chapter 14x timed map change sound A
    SONG_BE = 0xBE, // chapter 14x timed map change sound B
    SONG_BF = 0xBF,
    SONG_C4 = 0xC4,
    SONG_C6 = 0xC6,
    SONG_C8 = 0xC8, // stat screen unit slide, also miss'
    SONG_C9 = 0xC9,
    SONG_CA = 0xCA,
    SONG_CB = 0xCB,
    SONG_CC = 0xCC,
    SONG_CD = 0xCD,
    SONG_CE = 0xCE,
    SONG_CF = 0xCF,
    SONG_D0 = 0xD0,
    SONG_D1 = 0xD1,
    SONG_D2 = 0xD2,
    SONG_D3 = 0xD3,
    SONG_D4 = 0xD4,
    SONG_D5 = 0xD5,
    SONG_D6 = 0xD6,
    SONG_D7 = 0xD7,
    SONG_D8 = 0xD8, // crit?
    SONG_D9 = 0xD9,
    SONG_DA = 0xDA,
    SONG_DB = 0xDB,
    SONG_DC = 0xDC,
    SONG_DD = 0xDD,
    SONG_DE = 0xDE,
    SONG_DF = 0xDF,
    SONG_E0 = 0xE0,
    SONG_E1 = 0xE1, // efx dancer
    SONG_E2 = 0xE2, // ekrtriangle armor knight
    SONG_E7 = 0xE7,
    SONG_EA = 0xEA,
    SONG_EB = 0xEB,
    SONG_EC = 0xEC, // no damage
    SONG_ED = 0xED,
    SONG_EE = 0xEE, // efx singer
    SONG_EF = 0xEF, // efx song
    SONG_F0 = 0xF0, // efx special effect
    SONG_F1 = 0xF1,
    SONG_F2,
    SONG_F3,
    SONG_F4,
    SONG_F5,
    SONG_F6,
    SONG_F7,
    SONG_F8,
    SONG_F9,
    SONG_FA,
    SONG_FB,
    SONG_FC,
    SONG_FD = 0xFD, // manim
    SONG_FE,
    SONG_FF,
    SONG_100,
    SONG_101,
    SONG_102,
    SONG_103,
    SONG_104,
    SONG_105,
    SONG_106,
    SONG_107,
    SONG_108,
    SONG_109,
    SONG_10A,
    SONG_10B,
    SONG_10C = 0x10C,
    SONG_10D,
    SONG_10E,
    SONG_10F = 0x10F, // efx ballista
    SONG_110,
    SONG_111,
    SONG_112,
    SONG_113,
    SONG_114,
    SONG_115,
    SONG_116,
    SONG_117,
    SONG_118,
    SONG_119,
    SONG_11A,
    SONG_11B,
    SONG_11C,
    SONG_11D,
    SONG_11E = 0x11E, // efx ice breath
    SONG_11F = 0x11F, // efx dark breath
    SONG_120,
    SONG_121,
    SONG_122,
    SONG_123,
    SONG_124,
    SONG_125,
    SONG_126,
    SONG_127,
    SONG_128,
    SONG_129,
    SONG_12A,
    SONG_12B,
    SONG_12C,
    SONG_12D,
    SONG_12E,
    SONG_12F,
    SONG_130,
    SONG_131,
    SONG_132,
    SONG_133,
    SONG_134,
    SONG_135,
    SONG_136 = 0x136,
    SONG_137 = 0x137,
    SONG_138,
    SONG_139,
    SONG_13A,
    SONG_13B,
    SONG_13C,
    SONG_13D,
    SONG_13E,
    SONG_13F,
    SONG_140 = 0x140,
    SONG_141 = 0x141,
    SONG_142 = 0x142,
    SONG_143 = 0x143,
    SONG_144 = 0x144,
    SONG_145 = 0x145,
    SONG_146 = 0x146,
    SONG_147 = 0x147,

    SONG_262 = 0x262,
    SONG_263 = 0x263,
    SONG_264 = 0x264,
    SONG_265 = 0x265,
    SONG_266 = 0x266,
    SONG_267 = 0x267,
    SONG_268 = 0x268,
    SONG_269 = 0x269,
    SONG_26A = 0x26A,

    SONG_317 = 0x317,
    SONG_320 = 0x320,
    SONG_321 = 0x321,
    SONG_322 = 0x322,
    SONG_325 = 0x325,
    SONG_326 = 0x326,
    SONG_327 = 0x327,
    SONG_329 = 0x329,
    SONG_32A = 0x32A,
    SONG_32B = 0x32B,
    SONG_32C = 0x32C,
    SONG_32E = 0x32E,
    SONG_32F = 0x32F,
    SONG_330 = 0x330,
    SONG_331 = 0x331,
    SONG_332 = 0x332,
    SONG_334 = 0x334,
    SONG_336 = 0x336,
    SONG_33A = 0x33a,
    SONG_33E = 0x33e,
    SONG_338 = 0x338,
    SONG_340 = 0x340,
    SONG_342 = 0x342,
    SONG_344 = 0x344,
    SONG_348 = 0x348,
    SONG_34A = 0x34a,
    SONG_34C = 0x34c,
    SONG_34E = 0x34e,
    SONG_352 = 0x352,
    SONG_354 = 0x354,
    SONG_356 = 0x356,
    SONG_358 = 0x358,
    SONG_35C = 0x35c,
    SONG_35E = 0x35e,
    SONG_360 = 0x360,
    SONG_362 = 0x362,
    SONG_366 = 0x366,
    SONG_368 = 0x368,
    SONG_36A = 0x36a,
    SONG_36C = 0x36c,
    SONG_370 = 0x370,
    SONG_372 = 0x372,
    SONG_374 = 0x374,
    SONG_376 = 0x376,
    SONG_37A = 0x37A,
    SONG_37B = 0x37B,
    SONG_37C = 0x37C,
    SONG_37D = 0x37D,
    SONG_37F = 0x37F,
    SONG_384 = 0x384,
    SONG_3B7 = 0x3B7,
    SONG_3BA = 0x3BA,
    SONG_3BB = 0x3BB,
    SONG_3BF = 0x3BF,
    SONG_3C0 = 0x3C0,
    SONG_3C2 = 0x3C2,
    SONG_3C3 = 0x3C3,
    SONG_3C4 = 0x3C4,
    SONG_3CA = 0x3CA,
    SONG_3CF = 0x3CF,
    SONG_SILENT = 0x7fff, 
};


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
typedef i16 s16;
typedef void (* Func)(void);
typedef u32 AnimScr;
enum {false, true};
struct Vec2i
{
    i16 x, y;
};

struct Vec2u
{
    u16 x, y;
};

#define SOUND_INFO_PTR (*(struct SoundInfo **)0x3007FF0)
#define INTR_CHECK     (*(u16 *)0x3007FF8)
#define INTR_VECTOR    (*(void **)0x3007FFC)

#define EWRAM_START 0x02000000
#define IWRAM_START 0x03000000

#define PLTT      0x5000000
#define PLTT_SIZE 0x400

#define BG_PLTT      PLTT
#define BG_PLTT_SIZE 0x200

#define OBJ_PLTT      (PLTT + 0x200)
#define OBJ_PLTT_SIZE 0x200

#define VRAM      0x6000000
#define VRAM_SIZE 0x18000

#define BG_VRAM           VRAM
#define BG_VRAM_SIZE      0x10000
#define BG_CHAR_ADDR(n)   (void *)(BG_VRAM + (0x4000 * (n)))
#define BG_SCREEN_ADDR(n) (void *)(BG_VRAM + (0x800 * (n)))
#define BG_TILE_ADDR(n)    (void *)(BG_VRAM + (0x80 * (n)))

// text-mode BG
#define OBJ_VRAM0      (void *)(VRAM + 0x10000)
#define OBJ_VRAM0_SIZE 0x8000

// bitmap-mode BG
#define OBJ_VRAM1      (void *)(VRAM + 0x14000)
#define OBJ_VRAM1_SIZE 0x4000

#define OAM      0x7000000
#define OAM_SIZE 0x400

#define DISPLAY_WIDTH  240
#define DISPLAY_HEIGHT 160

#define TILE_SIZE_4BPP 32
#define TILE_SIZE_8BPP 64

#define TOTAL_OBJ_TILE_COUNT 1024

#define RGB_GET_RED(color) ((color) & 0x1F)
#define RGB_GET_GREEN(color) (((color) >> 5) & 0x1F)
#define RGB_GET_BLUE(color) (((color) >> 10) & 0x1F)

#define RGB_R(color) ((color) & 0x1F)
#define RGB_G(color) (((color) >> 5) & 0x1F)
#define RGB_B(color) (((color) >> 10) & 0x1F)

#define RGB5_MASK_R (0x1F << 0)
#define RGB5_MASK_G (0x1F << 5)
#define RGB5_MASK_B (0x1F << 10)

#define RGB(r, g, b) (((b) << 10) + ((g) << 5) + (r))
#define _RGB(r, g, b) ((r) | ((g) << 5) | ((b) << 10))

#define RGB_BLACK RGB(0, 0, 0)
#define RGB_WHITE RGB(31, 31, 31)

#define WIN_RANGE(a, b) (((a) << 8) + (b))
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
    // enables "limit view" (move/range squares)
    BM_FLAG_LIMITVIEW = (1 << 0),

    // enables cursor sticking to the edge of the movement map
    BM_FLAG_LIMITCURSOR = (1 << 1),

    // when the cursor moves, this is used to prevent sounds from being played back every frame
    BM_FLAG_CURSORMOVE = (1 << 2),

    // unknown usage/unused
    BM_FLAG_3 = (1 << 3),

    // in the preparation phase
    BM_FLAG_PREP = (1 << 4),

    // unknown meaning
    BM_FLAG_5 = (1 << 5),

    // in link-arena mode
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
    PLAY_FLAG_TUTORIAL        = (1 << 3),
    PLAY_FLAG_PREP            = (1 << 4),
    PLAY_FLAG_COMPLETE        = (1 << 5),
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
    /* bit  0 */ u32 config_unique_pal : 1;
    /* bit  1 */ u32 config_terrain_mapui : 1; // TODO: constants
    /* bit  2 */ u32 config_unit_mapui : 2; // TODO: constants
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
enum AnimConfType {
    PLAY_ANIMCONF_ON = 0,
    PLAY_ANIMCONF_OFF = 1,
    PLAY_ANIMCONF_SOLO_ANIM = 2,
    PLAY_ANIMCONF_ON_UNIQUE_BG = 3,
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
#define OAM0_Y(ay)          ((ay) & 0x00FF)
#define OAM0_Y_MASK         0x00FF
#define OAM0_AFFINE_ENABLE  0x0100
#define OAM0_DOUBLESIZE     0x0200
#define OAM0_DISABLE        0x0200
#define OAM0_BLEND          0x0400
#define OAM0_WINDOW         0x0800
#define OAM0_MOSAIC         0x1000
#define OAM0_256COLORS      0x2000
#define OAM0_SHAPE_8x8      0x0000
#define OAM0_SHAPE_16x16    0x0000
#define OAM0_SHAPE_32x32    0x0000
#define OAM0_SHAPE_64x64    0x0000
#define OAM0_SHAPE_16x8     0x4000
#define OAM0_SHAPE_32x8     0x4000
#define OAM0_SHAPE_32x16    0x4000
#define OAM0_SHAPE_64x32    0x4000
#define OAM0_SHAPE_8x16     0x8000
#define OAM0_SHAPE_8x32     0x8000
#define OAM0_SHAPE_16x32    0x8000
#define OAM0_SHAPE_32x64    0x8000

#define OAM1_X(ax)          ((ax) & 0x01FF)
#define OAM1_X_MASK         0x01FF
#define OAM1_AFFINE_ID(ai)  (((ai) << 9) & 0x3E00)
#define OAM1_AFFINE_ID_MASK 0x3E00
#define OAM1_HFLIP          0x1000
#define OAM1_VFLIP          0x2000
#define OAM1_SIZE_8x8       0x0000
#define OAM1_SIZE_16x8      0x0000
#define OAM1_SIZE_8x16      0x0000
#define OAM1_SIZE_16x16     0x4000
#define OAM1_SIZE_32x8      0x4000
#define OAM1_SIZE_8x32      0x4000
#define OAM1_SIZE_32x32     0x8000
#define OAM1_SIZE_32x16     0x8000
#define OAM1_SIZE_16x32     0x8000
#define OAM1_SIZE_64x64     0xC000
#define OAM1_SIZE_64x32     0xC000
#define OAM1_SIZE_32x64     0xC000

#define OAM2_CHR(ac)        ((ac) & 0x03FF)
#define OAM2_CHR_MASK       0x03FF
#define OAM2_LAYER(al)      (((al) & 0x3) * 0x0400)
#define OAM2_LAYER_MASK     0x0C00
#define OAM2_PAL(ap)        (((ap) & 0xF) * 0x1000)
#define OAM2_PAL_MASK       0xF000
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

#define PAL_COLOR_OFFSET(palid, colornum) (palid) * 0x10 + (colornum)
#define PAL_OFFSET(palid) PAL_COLOR_OFFSET((palid), 0)
#define BGPAL_OFFSET(bgpal) PAL_OFFSET(0x00 + (bgpal))
#define OBPAL_OFFSET(obpal) PAL_OFFSET(0x10 + (obpal))

#define PAL_COLOR(palid, colornum) gPal[(palid) * 0x10 + (colornum)]
#define PAL_BG_COLOR(palid, colornum) PAL_COLOR(palid, colornum)
#define PAL_OBJ_COLOR(palid, colornum) PAL_COLOR((palid) + 0x10, colornum)

#define PAL_BG(palid) (&PAL_BG_COLOR(palid, 0))
#define PAL_OBJ(palid) (&PAL_OBJ_COLOR(palid, 0))

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
    BATTLE_HIT_ATTR_TRIANGLE_ATTACK = (1 << 10),
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
    /* 02 */ i16 damage;
    /* 04 */ i16 attack;
    /* 06 */ i16 defense;
    /* 08 */ i16 hit;
    /* 0A */ i16 crit;
    /* 0C */ struct Unit * extra_unit_a;
    /* 10 */ struct Unit * extra_unit_b;
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
    /* 6C */ i8 previous_level;
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

struct PidStats
{
    u32 loss_count      : 8;
    u32 act_count       : 8;
    u32 stat_view_count : 8;
    u32 defeat_chapter  : 6;
    u32 defeat_turn     : 10;
    u32 deploy_count    : 6;
    u32 move_count      : 10;
    u32 defeat_cause    : 4;
    u32 exp_gained      : 12;
    u32 win_count       : 10;
    u32 battle_count    : 12;
    u32 killer_pid      : 9;
    u32 : 0; // unused/padding (15 bits)
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
    ACTION_SHOPPED = 0x14,
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

void SetObjAffine(int id, fi16 pa, fi16 pb, fi16 pc, fi16 pd);
#define SetObjAffineAuto(id, angle, x_scale, y_scale) \
    SetObjAffine((id), \
        Div(+COS_Q12((angle)) << 4, (x_scale)), \
        Div(-SIN_Q12((angle)) << 4, (y_scale)), \
        Div(+SIN_Q12((angle)) << 4, (x_scale)), \
        Div(+COS_Q12((angle)) << 4, (y_scale)))
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
    /* 2C */ void * imgBuf;
    /* 30 */ void const * sprDataPool; // aka "OAM data"

    /* 34 */ struct BaSprite * prev;
    /* 38 */ struct BaSprite * next;

    /* 3C */ void const * sprData;
    /* 40 */ void const * unk40;
    /* 44 */ void  * priv;
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
    ANIM_BIT3_C02_BLOCK_END           = (1 << 0),
    ANIM_BIT3_NEXT_ROUND_START        = (1 << 1),
    ANIM_BIT3_C01_BLOCK_END_PREBATTLE = (1 << 2),
    ANIM_BIT3_C01_BLOCK_END_INBATTLE  = (1 << 3),
    ANIM_BIT3_0010                    = (1 << 4),
    ANIM_BIT3_BLOCKING                = (1 << 5),
    ANIM_BIT3_BLOCKEND                = (1 << 6),
    ANIM_BIT3_UNUSED_0080             = (1 << 7),
    ANIM_BIT3_UNUSED_0100             = (1 << 8),
    ANIM_BIT3_UNUSED_0200             = (1 << 9),
    ANIM_BIT3_UNUSED_0400             = (1 << 10),
    ANIM_BIT3_UNUSED_0800             = (1 << 11),
    ANIM_BIT3_UNUSED_1000             = (1 << 12),
    ANIM_BIT3_UNUSED_2000             = (1 << 13),
    ANIM_BIT3_4000                    = (1 << 14),
    ANIM_BIT3_NEW_ROUND_START         = (1 << 15),
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

struct ProcEfxMagicOBJ {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x2C);

    /* 2C */ i16 timer, terminator;

    STRUCT_PAD(0x30, 0x5C);

    /* 5C */ struct BaSprite *anim;
    /* 60 */ struct BaSprite *anim2;

    /* 64 */ ProcPtr seproc;
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
    EKR_DISTANCE_PROMOTION,

    EKR_DISTANCE_MAX
};

enum anim_round_type {
    ANIM_ROUND_BIT8 = 0x0100,
    ANIM_ROUND_PIERCE = 0x0200,
    ANIM_ROUND_GREAT_SHIELD = 0x0400,
    ANIM_ROUND_SURE_SHOT = 0x0800,
    ANIM_ROUND_SILENCER = 0x1000,
    ANIM_ROUND_POISON = 0x2000,
    ANIM_ROUND_BIT14 = 0x4000,
    ANIM_ROUND_DEVIL = 0x8000,    
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
    /* 2C */ u8 link_arena_flag;
    /* 2D */ u8 unk_2D; // size of gPrepUnitList?
    /* 2E */ u8 max_counter;
    /* 2F */ u8 cur_counter;
    /* 30 */ u8 list_num_cur; // id within gPrepUnitList
    /* 31 */ u8 unk_31;
    /* 32 */ u8 unk_32;
    /* 33 */ u8 disp_idx[2];
    /* 35 */ u8 submenu_level;
    /* 36 */ i8 hand_y_pos;
    /* 37 */ u8 unk_37; // i8 also?
    /* 38 */ u8 unk_38;
    /* 39 */ u8 unk_39;
    /* 3A */ u8 unk_3A;
    /* 3B */ u8 sub2_action;
    /* 3C */ u8 a_button_actions; // Bit1:selection unit, Bit2:Start battle
    /* 3D */ u8 do_help;
    /* 3E */ u8 end_prep;
    /* 3F */ u8 unk_3F;
    /* 40 */ u16 unk_40;
    /* 42 */ u16 scroll_timer;
    /* 44 */ u16 yDiff_cur;
    /* 46 */ STRUCT_PAD(0x46, 0x48);
    /* 48 */ struct Unit * unit1, * unit2;
    /* 50 */ struct PrepScreenDispProc * disp_proc;
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
enum
{
    // window_theme (including PlaySt::config_window_theme)

    UI_WINDOW_THEME_BLUE,
    UI_WINDOW_THEME_RED,
    UI_WINDOW_THEME_GRAY,
    UI_WINDOW_THEME_GREEN,
};

enum
{
    // PutUiWindowFrame param window_kind

    UI_WINDOW_REGULAR,
    UI_WINDOW_FILL,
    UI_WINDOW_SABLE,
};

void ApplyUiWindowFramePal(int palid);
void UnpackUiWindowFrameImg(void * vram);
void ApplyUiStatBarPal(int palid);
void UnpackUiWindowFrameGraphics2(int window_theme);
void PutUiWindowFrame(int x, int y, int width, int height, int window_kind);
void PutUiHand(int x, int y);
void PutFrozenUiHand(int x, int y);
int GetUiHandPrevX(void);
int GetUiHandPrevY(void);
void ClearUi(void);
void PutUiEntryHover(int x, int y, int width);
void RemoveUiEntryHover(int x, int y, int width);
void UnpackUiUnitNameFrameGraphics(void * vram, int palid, int palcount);
void UnpackUiWindowFrameGraphics(void);
void PrepScreen_DrawScreenInfo(struct PrepMenuProc * proc);
fu8 GetPrepMenuItemAmount(fu8 arg_0);
void func_fe6_0807CEF0(fu8 arg_0, fu8 arg_1);
void PutPrepScreenMenuItems(struct Text * text, fu8 arg_1, u16 * tm, fu8 arg_3);
void ResetPrepMenuItem(void);

#define UNITSPRITE_ID_BITS 7

// or that to any map sprite id to have it not animate
#define UNITSPRITE_NOTANIMATED (1 << UNITSPRITE_ID_BITS)

#define UNITSPRITE_MAX 0xD0
#define UNITSPRITE_SIMULATANEOUS_MAX 100

#define UNITSPRITE_SHEET_LINES 8
#define UNITSPRITE_SHEET_SIZE (UNITSPRITE_SHEET_LINES * CHR_LINE * CHR_SIZE)

enum
{
    UNITSPRITE_16x16,
    UNITSPRITE_16x32,
    UNITSPRITE_32x32,
};

struct UnitSprite
{
    /* 00 */ struct UnitSprite * next;
    /* 04 */ i16 x, y;
    /* 08 */ u16 oam2;
    /* 0A */ STRUCT_PAD(0x0A, 0x0B);
    /* 0B */ i8 config;
};

struct UnitSpriteInfo
{
    /* 00 */ u16 unk_00;
    /* 02 */ u16 size;
    /* 04 */ u8 const * img;
};

void func_fe6_08021B88(void);
void ApplyUnitSpritePalettes(void);
void ResetUnitSprites(void);
void ResetUnitSpritesB(void);
int UseUnitSprite(u32 id);
void SyncUnitSpriteSheet(void);
void ForceSyncUnitSpriteSheet(void);
int GetUnitDisplayedSpritePalette(struct Unit * unit);
int GetUnitSpritePalette(struct Unit * unit);
void RefreshUnitSprites(void);
void PutUnitSpritesOam(void);
void PutUnitSpriteIconsOam(void);
void func_fe6_08022618(void);
void ResetUnitSpritHover(void);
void UnitSpriteHoverUpdate(void);
bool IsUnitSpriteHoverEnabledAt(int x, int y);
void PutUnitSprite(int layer, int x, int y, struct Unit * unit);
void PutUnitSpriteExt(int layer, int x, int y, int oam2, struct Unit * unit);
void PutBlendWindowUnitSprite(int layer, int x, int y, int oam2, struct Unit * unit);
void func_fe6_08022A2C(void);
void HideUnitSprite(struct Unit * unit);
void ShowUnitSprite(struct Unit * unit);
u8 GetUnitSpriteHiddenFlag(struct Unit * unit);

struct UnitSprite * AddUnitSprite(int y);

extern struct UnitSpriteInfo CONST_DATA UnitSpriteTable[];

extern u8 EWRAM_DATA gUnitSpriteSlots[UNITSPRITE_MAX];

extern u8 EWRAM_DATA gUnitSpriteBuf[3][UNITSPRITE_SHEET_SIZE];

extern int EWRAM_DATA gUnitSpriteSmallAllocCount;
extern int EWRAM_DATA gUnitSpriteLargeAllocCount;

extern struct UnitSprite EWRAM_DATA gUnitSprites[UNITSPRITE_SIMULATANEOUS_MAX];
extern struct UnitSprite * EWRAM_DATA gNextFreeUnitSprite;

extern int EWRAM_DATA gUnitSpriteSyncRequest;

extern int EWRAM_DATA gUnitSpriteHoverClock;

extern u8 * CONST_DATA UnitSpriteUnpackBuf;

#define GetUnitSpriteInfo(id) (UnitSpriteTable[(id) & ((1 << UNITSPRITE_ID_BITS) - 1)])

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
void ReorderPlayerUnitsBasedOnDeployment();

struct PrepMenuCursorProc
{
    /* 00 */ PROC_HEADER_EXT(struct PrepMenuProc);
    /* 29 */ u8 unk_29;
    /* 2A */ u8 unk_2A;
    /* 2B */ u8 unk_2B;
    /* 2C */ u8 unk_2C;
    /* 2D */ u8 unk_2D;
    /* 2E */ u8 unk_2E;
    /* 2F */ u8 unk_2F;
    /* 30 */ u8 unk_30;
    /* 31 */ u8 unk_31;
    /* 32 */ u8 unk_32;
    /* 33 */ u8 unk_33;
    /* 34 */ u8 cursor_x, cursor_y;
    /* 36 */ u8 unk36, chidx;
    /* 38 */ u8 disp_x, disp_y;
    /* 3A */ u16 unk_3A;
    /* 3C */ u16 unk_3C;
    /* 3E */ u16 unk_3E;
    /* 40 */ u16 unk_40;
    /* 42 */ u8 unk_42;
    /* 43 */ u8 pre;
    /* 44 */ u8 unk_44;
    /* 46 */ u16 unk_46;
    /* 48 */ u16 unk_48;
};
extern struct Unit * gPrepUnitList[];
#define GetUnitFromPrepList(index) (gPrepUnitList[(index)])
#define RegisterPrepUnitList(index, unit) (gPrepUnitList[(index)] = (unit))
void PutSpriteExt(int layer, int x_oam1, int y_oam0, u16 const * object, int oam2);
extern CONST_DATA u16 gUnk_08679048[];
extern CONST_DATA u16 gUnk_08679050[];
extern CONST_DATA u16 gUnk_0867907A[];
extern CONST_DATA u16 gUnk_08679082[];
extern CONST_DATA u16 gUnk_0867908A[];
extern CONST_DATA u16 gUnk_08679098[];
extern CONST_DATA u16 gUnk_086790A0[];
extern CONST_DATA u16 gUnk_086790BA[];

extern CONST_DATA u16 gUnk_086790DA[];
extern CONST_DATA u16 gUnk_086790E2[];
extern CONST_DATA u16 gUnk_086790EA[];
extern CONST_DATA u16 gUnk_086790F2[];
extern CONST_DATA u16 gUnk_086790FA[];
extern CONST_DATA u16 gUnk_08679102[];
extern CONST_DATA u16 gUnk_0867910A[];
extern CONST_DATA u16 gUnk_08679112[];
extern CONST_DATA u16 gUnk_0867911A[];
extern CONST_DATA u16 gUnk_08679122[];
extern CONST_DATA u16 gUnk_0867912A[];
extern CONST_DATA u16 gUnk_08679132[];
extern CONST_DATA u16 * gUnk_0867913C[12];
extern u16 Pal_0831AAFC[];

struct SpriteProc
{
    /* 00 */ PROC_HEADER;

    /* 2C */ int x;
    /* 30 */ int y;

    /* 34 */ u8 pad_34[0x50 - 0x34];

    /* 50 */ i16 layer;
    /* 52 */ u16 tileref;
    /* 54 */ u16 const * object;
};

extern u16 CONST_DATA Sprite_8x8[];
extern u16 CONST_DATA Sprite_16x16[];
extern u16 CONST_DATA Sprite_32x32[];
extern u16 CONST_DATA Sprite_64x64[];
extern u16 CONST_DATA Sprite_8x16[];
extern u16 CONST_DATA Sprite_16x32[];
extern u16 CONST_DATA Sprite_32x64[];
extern u16 CONST_DATA Sprite_16x8[];
extern u16 CONST_DATA Sprite_32x16[];
extern u16 CONST_DATA Sprite_64x32[];
extern u16 CONST_DATA Sprite_32x8[];
extern u16 CONST_DATA Sprite_8x32[];
extern u16 CONST_DATA Sprite_32x8_VFlipped[];
extern u16 CONST_DATA Sprite_8x16_HFlipped[];
extern u16 CONST_DATA Sprite_8x8_HFlipped[];
extern u16 CONST_DATA Sprite_8x8_VFlipped[];
extern u16 CONST_DATA Sprite_8x8_HFlipped_VFlipped[];
extern u16 CONST_DATA Sprite_16x16_VFlipped[];

void PutSpriteAffine(int id, short pa, short pb, short pc, short pd);
void ClearSprites(void);
void PutSprite(int layer, int x, int y, u16 const * object, int oam2);
void PutSpriteExt(int layer, int x_oam1, int y_oam0, u16 const * object, int oam2);
void PutSpriteLayerOam(int layer);
extern u16 Sprite_086791A2[];
extern u16 Sprite_0867917A[];
#define OAM1_X(ax)          ((ax) & 0x01FF)
void func_fe6_08082D54(ProcPtr proc, int msg);
extern u16 Sprite_08679182[];
extern u16 Sprite_086791B0[];
extern u16 Sprite_086791BE[];
void func_fe6_0807BF70(struct PrepMenuCursorProc * proc);

u8 func_fe6_0807CE98(struct PrepMenuProc * proc);
void PrepUnit_DrawSMSAndObjs(struct PrepMenuCursorProc * proc);
void PrepMenu_DrawGmapSprites(struct PrepMenuCursorProc * proc);
void func_fe6_0807BE88(struct PrepMenuCursorProc * proc);
void func_fe6_0807BF70(struct PrepMenuCursorProc * proc);
void func_fe6_0807C090(struct PrepMenuCursorProc * proc);
void func_fe6_0807B90C(u8 a, u8 b, int c);
bool func_fe6_08082B74(struct Unit * unit);
void PrepMenuStartHelpbox(int x, int y, int msg, ProcPtr parent);
#define MSG_6C1 0x6C1

struct PrepMenuItem {
    /* 00 */ void (* func)(struct PrepMenuProc * proc);
    /* 04 */ int desc;
    /* 08 */ u8 color;
    /* 09 */ fu8 is_submenu;
    /* 0C */ int name;
    /* 10 */ u8 index;
    /* 14 */
};
extern struct PrepMenuItem gPrepMenuItems[0x10];
extern u8 gPrepMenuItemCnt;
char * DecodeMsg(int id);

struct ProcShop {
    /* 00 */ PROC_HEADER;

    /* 2C */ struct Unit * unit;
    /* 30 */ u16 shopItems[20];

    /* 58 */ u16 unk_58;

    /* 5A */ u8 shopItemCount;
    /* 5B */ u8 unitItemCount;
    /* 5C */ u8 head_loc;
    /* 5D */ u8 hand_loc;
    /* 5E */ u8 head_idx;
    /* 5F */ u8 hand_idx; // maybe top visible item in menu?
    /* 60 */ u8 buy_or_sel;
    /* 61 */ u8 shopType;
    /* 62 */ u8 helpTextActive;

    /* 64 */ i16 goldbox_x, goldbox_y, goldbox_oam2;
};

#define SHOP_ITEMS_MAX_AMT 20
#define SHOP_TEXT_LINES 5

enum ShopProcLabel {
    PL_SHOP_ENTRY = 0,
    PL_SHOP_BUY,
    PL_SHOP_BUY_MAIN,
    PL_SHOP_BUY_DONE,
    PL_SHOP_SELL,
    PL_SHOP_SELL_MAIN,
    PL_SHOP_6_UNUSED, // unused
    PL_SHOP_SELL_NOITEM,
    PL_SHOP_ANYTHING_ELSE,
    PL_SHOP_SENDTO_INVENTORY,
    PL_SHOP_SENDTO_INVENTORY_EXT,
    PL_SHOP_BUY_FULL_NO_INEVNTORY,
    PL_SHOP_EXIT,
};
enum ShopType {
    /* ProcShop::shopType */
    SHOP_TYPE_ARMORY      = 0,
    SHOP_TYPE_VENDOR      = 1,
    SHOP_TYPE_SECRET_SHOP = 2,

    SHOP_TYPE_MAX
};

enum ShopStatus {
    /* ProcShop::buy_or_sel */
    SHOP_ST_BUY,
    SHOP_ST_SELL
};

struct ProcShopInit {
    /* 00 */ PROC_HEADER;

    STRUCT_PAD(0x29, 0x54);

    /* 54 */ struct ProcShop * shopproc;
};

extern struct Text gShopItemTexts[SHOP_TEXT_LINES + 1];
void DrawShopItemPriceLine(struct Text *, int, struct Unit *, u16 *);
void DrawShopItemPriceLine(struct Text * text, int item, struct Unit * unit, u16 * tm);
void DrawShopItemLine(struct Text * text, int item, struct Unit * unit, u16 * tm);
u16 GetItemPrice(struct Unit *, int);
// func_fe6_080975A0
// func_fe6_080975C8
void GoldBox_OnLoop(struct ProcShop * proc);
void InitShopScreenConfig(void);
void _DisplayShopUiArrows(void);
void DisplayShopUiArrows(void);
// void UnpackUiVArrowGfx(int, int);
void DisplayUiVArrow(int, int, u16, int);
void HandleShopBuyAction(struct ProcShop * proc);
int ShopTryMoveCursor(int pos, int pre, bool scroll);
// func_fe6_080979AC
// ShopTryScrollPage
// ShopUpdateBg2Offset
void RegisterShopState(u16, u16 item_cnt, u16 lines, u16 cur_sel, int bg_off, void (* on_draw)(struct ProcShop *, int), struct ProcShop * proc);
void Shop_TryMoveHandPage(void);
u16 ShopSt_GetHeadLoc(void);
int ShopSt_GetBg2Offset(void);
u16 ShopSt_GetHandLoc(void);
// func_fe6_08097D50
// func_fe6_08097D7C
bool IsShopPageScrolling(void);
bool ShouldDisplayUpArrow(void);
bool ShouldDisplayDownArrow(void);
int GetGold(void);
void StartShopDialogue(int msg, struct ProcShop * proc);
void SetTalkNumber(int number);
extern i8 gEfxSplitedColorBufA[2][0x30];
extern i8 gEfxSplitedColorBufB[2][0x30];
extern i16 gEfxSplitedColorBufC[2][0x30];
void func_fe6_0805B88C(i8 * src1, i8 * src2, i16 * pal, u32 length, int ref);
void EfxSplitColor(u16 * pal, u8 * dst, u32 length);
extern u16 Pal_08113424[];
extern u16 Pal_081134A4[];
extern u16 Pal_081134C4[];
extern u16 const gFrameLut_EfxHPBarColorChange[];

struct ProcEfxHpBarColorChange {
    PROC_HEADER;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ i16 timer;

    STRUCT_PAD(0x2E, 0x44);

    /* 44 */ u32 frame;
    /* 48 */ const u16 * frame_conf;
    /* 4C */ u32 frame_state;
    /* 50 */ int disabled;

    STRUCT_PAD(0x54, 0x5C);

    /* 5C */ struct Anim * anim;
};

extern struct ProcEfxHpBarColorChange * gpProcEfxHpBarColorChange;

extern CONST_DATA struct ProcScr ProcScr_EfxHpBarColorChange[];
extern i16 gBanimUniquePal[2];
extern i16 gBanimFactionPal[2];
void SetBanimArenaFlag(int flag);
void SetBanimLinkArenaFlag(int flag);
int GetBanimTerrainGround(u16 terrain, u16 tileset);
int GetBanimBackgroundIndex(u16 terrain, u16 tileset);
i16 GetSpellAnimId(u16 jid, u16 weapon);
void UnsetMapStaffAnim(i16 * out, u16 pos, u16 weapon);
void ParseBattleHitToBanimCmd(void);
bool CheckBattleHasHit(void);
int GetBanimUniquePal(struct Unit * unit);
u16 * GetBanimTriangleAttackPalette(i16 bid, u16 item);

enum banim_faction_palette_idx {
    BANIMPAL_BLUE = 0,
    BANIMPAL_RED = 1,
    BANIMPAL_GREEN = 2,
    BANIMPAL_PURPLE = 3,
};

int GetBanimFactionPalette(u32 faction);
enum {BATTLE_FLAG_PROMOTE = (1 << 4),};
extern i16 gBanimPositionIsEnemy[2];
extern i16 gBanimMaxHP[2];
extern i16 gEkrGaugeHpBak[2];
extern i16 gEkrGaugeHit[2];
extern i16 gEkrGaugeDmg[2];
extern i16 gBanimExpGain[2];
extern i16 gBanimTerrain[2];
extern i16 gBanimCon[2];
extern i16 gBanimWtaBonus[2];
extern i16 gBanimEffectiveness[2];
extern u16 * gpBanimTriAtkPalettes[2];
extern const u8 * gBanimUnitChgForceImg[2];
extern u8 const Img_BanimArcherFBallistaIntro[];
extern u8 const Img_BanimArcherMBallistaIntro[];
extern u8 const Img_BanimSnipperFBallistaIntro[];
extern i16 gBanimUniquePaletteDisabled[2];
extern i16 gEkrGaugeCrt[2];
enum
{
    // Item attribute flags

    ITEM_ATTR_WEAPON = (1 << 0),
    ITEM_ATTR_MAGIC = (1 << 1),
    ITEM_ATTR_STAFF = (1 << 2),
    ITEM_ATTR_UNBREAKABLE = (1 << 3),
    ITEM_ATTR_IMPORTANT = (1 << 4),
    ITEM_ATTR_BRAVE = (1 << 5),
    ITEM_ATTR_LIGHTBRAND = (1 << 6),
    ITEM_ATTR_UNCOUNTERABLE = (1 << 7),
    ITEM_ATTR_REVERTS_TRIANGLE = (1 << 8),
    ITEM_ATTR_UNREPAIRABLE = (1 << 9),
    ITEM_ATTR_LOCK_DRAGON = (1 << 10),
    ITEM_ATTR_LOCK_ROY = (1 << 11),
    ITEM_ATTR_LOCK_MYRM = (1 << 12),
    ITEM_ATTR_LOCK_ZEPHIEL = (1 << 13),
    ITEM_ATTR_DELPHI_SHIELD = (1 << 14),

    // Helpers
    ITEM_ATTR_REQUIRES_EXP = ITEM_ATTR_WEAPON + ITEM_ATTR_STAFF,
    ITEM_ATTR_LOCK_ANY = ITEM_ATTR_LOCK_ROY + ITEM_ATTR_LOCK_MYRM + ITEM_ATTR_LOCK_ZEPHIEL + ITEM_ATTR_LOCK_DRAGON,
};
u8 GetWeaponAnimActorCount(u16 item);
extern i16 gBanimFloorfx[2];
int GetItemIid(int item);
extern i16 gEkrBmLocation[4];
extern i16 gBanimIdx[2];
enum ChapterInfo_RefRanks
{
    REFRANK_A,
    REFRANK_B,
    REFRANK_C,
    REFRANK_D,

    REFRANK_MAX
};

struct ChapterInfo
{
    /* 00 */ char const * debug_name;

    /* 04 */ u8 asset_img_a;
    /* 05 */ u8 asset_img_b;
    /* 06 */ u8 asset_pal;
    /* 07 */ u8 asset_tileset;
    /* 08 */ u8 asset_map;
    /* 09 */ u8 asset_img_anims;
    /* 0A */ u8 asset_pal_anims;
    /* 0B */ u8 asset_map_changes;

    /* 0C */ u8 fog;
    /* 0D */ u8 has_prep;
    /* 0E */ u8 title_id;
    /* 0F */ u8 unk_0F;
    /* 10 */ u8 unk_10;
    /* 11 */ u8 weather;
    /* 12 */ u8 banim_terrain_id;
    /* 13 */ u8 hard_bonus_levels;

    /* 14 */ u8 song_blue_bgm;
    /* 15 */ u8 song_red_bgm;
    /* 16 */ u8 song_green_bgm;
    /* 17 */ u8 song_intro_bgm;
    /* 18 */ u8 song_opening_bgm;

    /* 19 */ u8 wall_hp;
    /* 1A */ u8 class_roll_set;

    // ranks
    /* 1B */ u8 tactics_ranks[REFRANK_MAX];
    /* 20 */ u16 exp_ranks[REFRANK_MAX];
    /* 28 */ u16 combat_ranks[REFRANK_MAX];

    /* 30 */ u16 msg_30;
    /* 32 */ u16 msg_32;
    /* 34 */ u16 msg_34;
    /* 36 */ u16 chibi_36;
    /* 38 */ u16 msg_38;
    /* 3A */ u8 asset_event_info;
    /* 3B */ u8 asset_event_info_wm;

    /* 3C */ u16 msg_unk_0C;
    /* 3E */ u8 number_id;
    /* 3F */ u8 gmap_dispx;
    /* 40 */ u8 gmap_dispy;
    /* 41 */ u8 gmap_cursorx;
    /* 42 */ u8 gmap_cursory;
    /* 43 */ i8 victory_bgm_enemy_threshold;
};
enum
{
    JID_NONE,
    JID_ROY,
    JID_MERCENARY,
    JID_MERCENARY_F,
    JID_HERO,
    JID_HERO_F,
    JID_MYRMIDON,
    JID_MYRMIDON_F,
    JID_SWORDMASTER,
    JID_SWORDMASTER_F,
    JID_FIGHTER,
    JID_WARRIOR,
    JID_ARMOR,
    JID_ARMOR_F,
    JID_GENERAL,
    JID_GENERAL_F,
    JID_ARCHER,
    JID_ARCHER_F,
    JID_SNIPER,
    JID_SNIPER_F,
    JID_PRIEST,
    JID_CLERIC,
    JID_BISHOP,
    JID_BISHOP_F,
    JID_MAGE,
    JID_MAGE_F,
    JID_SAGE,
    JID_SAGE_F,
    JID_SHAMAN,
    JID_SHAMAN_F,
    JID_DRUID,
    JID_DRUID_F,
    JID_CAVALIER,
    JID_CAVALIER_F,
    JID_PALADIN,
    JID_PALADIN_F,
    JID_TROUBADOUR,
    JID_VALKYRIE,
    JID_NOMAD,
    JID_NOMAD_F,
    JID_NOMADTROOPER,
    JID_NOMADTROOPER_F,
    JID_PEGASUSKNIGHT,
    JID_FALCONKNIGHT,
    JID_WYVERNRIDER,
    JID_WYVERNRIDER_F,
    JID_WYVERNLORD,
    JID_WYVERNLORD_F,
    JID_SOLDIER,
    JID_BRIGAND,
    JID_PIRATE,
    JID_BERSERKER,
    JID_THIEF,
    JID_THIEF_F,
    JID_BARD,
    JID_DANCER,
    JID_MANAKETE,
    JID_MANAKETE_F,
    JID_FIREDRAGON,
    JID_DIVINEDRAGON,
    JID_DEMONDRAGON,
    JID_KING,
    JID_CIVILIAN,
    JID_CIVILIAN_F,
    JID_CHILD,
    JID_CHILD_F,
    JID_SUPPLY,
    JID_ROY_PROMOTED,
    JID_ARCHER_BALLISTA,
    JID_ARCHER_LONGBALLISTA,
    JID_ARCHER_KILLERBALLISTA,
    JID_BALLISTA,
    JID_LONGBALLISTA,
    JID_KILLERBALLISTA,
    JID_DISMOUNTED,
    JID_DISMOUNTED_F,

    MAX_JIDS,

    JID_OBSTACLE = JID_ROY,
};

enum
{
    // Terrain identifiers

    // I'm going by the FE8 in-game names + some old FE7 nmm for this
    // TODO: figure out in better details

    TERRAIN_TILE_00    = 0x00,
    TERRAIN_PLAINS     = 0x01,
    TERRAIN_ROAD       = 0x02,
    TERRAIN_VILLAGE    = 0x03,
    TERRAIN_VILLAGE_CLOSED = 0x04,
    TERRAIN_HOUSE      = 0x05,
    TERRAIN_ARMORY     = 0x06,
    TERRAIN_VENDOR     = 0x07,
    TERRAIN_ARENA_08   = 0x08,
    TERRAIN_C_ROOM_09  = 0x09,
    TERRAIN_FORT       = 0x0A,
    TERRAIN_GATE_0B    = 0x0B,
    TERRAIN_FOREST     = 0x0C,
    TERRAIN_THICKET    = 0x0D,
    TERRAIN_SAND       = 0x0E,
    TERRAIN_DESERT     = 0x0F,
    TERRAIN_RIVER      = 0x10,
    TERRAIN_MOUNTAIN   = 0x11,
    TERRAIN_PEAK       = 0x12,
    TERRAIN_BRIDGE     = 0x13,
    TERRAIN_DRAWBRIDGE = 0x14,
    TERRAIN_SEA        = 0x15,
    TERRAIN_LAKE       = 0x16,
    TERRAIN_FLOOR_17   = 0x17,
    TERRAIN_FLOOR_18   = 0x18,
    TERRAIN_FENCE_19   = 0x19,
    TERRAIN_WALL       = 0x1A,
    TERRAIN_WALL_BREAKABLE = 0x1B,
    TERRAIN_RUBBLE     = 0x1C,
    TERRAIN_PILLAR     = 0x1D,
    TERRAIN_DOOR       = 0x1E,
    TERRAIN_THRONE     = 0x1F,
    TERRAIN_CHEST_OPENED = 0x20,
    TERRAIN_CHEST      = 0x21,
    TERRAIN_ROOF       = 0x22,
    TERRAIN_GATE_23    = 0x23,
    TERRAIN_CHURCH     = 0x24,
    TERRAIN_RUINS      = 0x25,
    TERRAIN_CLIFF      = 0x26,
    TERRAIN_BALLISTA   = 0x27,
    TERRAIN_LONGBALLISTA = 0x28,
    TERRAIN_KILLERBALLISTA = 0x29,
    TERRAIN_SHIP_FLAT  = 0x2A,
    TERRAIN_SHIP_WRECK = 0x2B,
    TERRAIN_TILE_2C    = 0x2C,
    TERRAIN_STAIRS     = 0x2D,
    TERRAIN_TILE_2E    = 0x2E,
    TERRAIN_GLACIER    = 0x2F,
    TERRAIN_ARENA_30   = 0x30,
    TERRAIN_VALLEY     = 0x31,
    TERRAIN_FENCE_32   = 0x32,

    // TERRAIN_SNAG       = 0x33,
    // TERRAIN_BRIDGE_34  = 0x34,
    // TERRAIN_SKY        = 0x35,
    // TERRAIN_DEEPS      = 0x36,
    // TERRAIN_RUINS_37   = 0x37,
    // TERRAIN_INN        = 0x38,
    // TERRAIN_BARREL     = 0x39,
    // TERRAIN_BONE       = 0x3A,
    // TERRAIN_DARK       = 0x3B,
    // TERRAIN_WATER      = 0x3C,
    // TERRAIN_GUNNELS    = 0x3D,
    // TERRAIN_DECK       = 0x3E,
    // TERRAIN_BRACE      = 0x3F,
    // TERRAIN_MAST       = 0x40,

    TERRAIN_COUNT,
};
enum
{
    IID_NONE = 0,

    IID_IRONSWORD = 0x01,
    IID_IRONBLADE = 0x02,
    IID_STEELSWORD = 0x03,
    IID_SILVERSWORD = 0x04,
    IID_SLIMSWORD = 0x05,
    IID_POISONSWORD = 0x06,
    IID_BRAVESWORD = 0x07,
    IID_LIGHTBRAND = 0x08,
    IID_DURANDAL = 0x09,
    IID_ARMORSLAYER = 0x0A,
    IID_RAPIER = 0x0B,
    IID_KILLINGEDGE = 0x0C,
    IID_LANCEREAVER = 0x0D,
    IID_WODAO = 0x0E,
    IID_BINDINGBLADE = 0x0F,
    IID_IRONLANCE = 0x10,
    IID_STEELLANCE = 0x11,
    IID_SILVERLANCE = 0x12,
    IID_SLIMLANCE = 0x13,
    IID_POISONLANCE = 0x14,
    IID_BRAVELANCE = 0x15,
    IID_JAVELIN = 0x16,
    IID_MALTET = 0x17,
    IID_HORSESLAYER = 0x18,
    IID_KILLERLANCE = 0x19,
    IID_AXEREAVER = 0x1A,
    IID_IRONAXE = 0x1B,
    IID_STEELAXE = 0x1C,
    IID_SILVERAXE = 0x1D,
    IID_POISONAXE = 0x1E,
    IID_BRAVEAXE = 0x1F,
    IID_HANDAXE = 0x20,
    IID_ARMADS = 0x21,
    IID_HAMMER = 0x22,
    IID_KILLERAXE = 0x23,
    IID_SWORDREAVER = 0x24,
    IID_DEVILAXE = 0x25,
    IID_HALBERD = 0x26,
    IID_IRONBOW = 0x27,
    IID_STEELBOW = 0x28,
    IID_SILVERBOW = 0x29,
    IID_POISONBOW = 0x2A,
    IID_KILLERBOW = 0x2B,
    IID_BRAVEBOW = 0x2C,
    IID_SHORTBOW = 0x2D,
    IID_LONGBOW = 0x2E,
    IID_MULAGIR = 0x2F,
    IID_BALLISTA = 0x30,
    IID_LONGBALLISTA = 0x31,
    IID_KILLERBALLISTA = 0x32,
    IID_FIRE = 0x33,
    IID_THUNDER = 0x34,
    IID_FIMBULVETR = 0x35,
    IID_ELFIRE = 0x36,
    IID_AIRCALIBUR = 0x37,
    IID_FENRIR = 0x38,
    IID_BOLTING = 0x39,
    IID_FORBLAZE = 0x3A,
    IID_LIGHTNING = 0x3B,
    IID_DIVINE = 0x3C,
    IID_PURGE = 0x3D,
    IID_AUREOLA = 0x3E,
    IID_FLUX = 0x3F,
    IID_NOSFERATU = 0x40,
    IID_ECLIPSE = 0x41,
    IID_APOCALYPSE = 0x42,
    IID_HEALSTAFF = 0x43,
    IID_MENDSTAFF = 0x44,
    IID_RECOVERSTAFF = 0x45,
    IID_PHYSICSTAFF = 0x46,
    IID_FORTIFYSTAFF = 0x47,
    IID_WARPSTAFF = 0x48,
    IID_RESCUESTAFF = 0x49,
    IID_RESTORESTAFF = 0x4A,
    IID_SILENCESTAFF = 0x4B,
    IID_SLEEPSTAFF = 0x4C,
    IID_TORCHSTAFF = 0x4D,
    IID_HAMMERNESTAFF = 0x4E,
    IID_WATCHSTAFF = 0x4F,
    IID_BERSERKSTAFF = 0x50,
    IID_UNLOCKSTAFF = 0x51,
    IID_BARRIERSTAFF = 0x52,
    IID_FIRESTONE = 0x53,
    IID_DIVINESTONE = 0x54,
    IID_DEMONSTONE = 0x55,
    IID_SECRETBOOK = 0x56,
    IID_GODDESSICON = 0x57,
    IID_SERAPHROBE = 0x58,
    IID_DRACOSHIELD = 0x59,
    IID_ENERGYRING = 0x5A,
    IID_SPEEDWING = 0x5B,
    IID_TALISMAN = 0x5C,
    IID_BOOTS = 0x5D,
    IID_BODYRING = 0x5E,
    IID_HEROCREST = 0x5F,
    IID_KNIGHTCREST = 0x60,
    IID_ORIONSBOLT = 0x61,
    IID_ELYSIANWHIP = 0x62,
    IID_GUIDINGRING = 0x63,
    IID_CHESTKEY = 0x64,
    IID_DOORKEY = 0x65,
    IID_BRIDGEKEY = 0x66,
    IID_LOCKPICK = 0x67,
    IID_VULNERARY = 0x68,
    IID_ELIXIR = 0x69,
    IID_PUREWATER = 0x6A,
    IID_TORCH = 0x6B,
    IID_ANTITOXIN = 0x6C,
    IID_MEMBERCARD = 0x6D,
    IID_SILVERCARD = 0x6E,
    IID_GOLD = 0x6F,
    IID_DARKBREATH = 0x70,
    IID_ECKESACHS = 0x71,
    IID_STEELBLADE = 0x72,
    IID_SILVERBLADE = 0x73,
    IID_ALSSWORD = 0x74,
    IID_GANTSLANCE = 0x75,
    IID_TINASSTAFF = 0x76,
    IID_SAINTSSTAFF = 0x77,
    IID_WYRMSLAYER = 0x78,
    IID_WHITEGEM = 0x79,
    IID_BLUEGEM = 0x7A,
    IID_REDGEM = 0x7B,
    IID_DELPHISHIELD = 0x7C,
    IID_RUNESWORD = 0x7D,
    IID_SPEAR = 0x7E,
    IID_TOMAHAWK = 0x7F,

    MAX_IIDS,
};
extern i16 gBanimExpPrevious[2];
struct ChapterInfo const * GetChapterInfo(int chapter);
extern i16 gBanimIdx_bak[2];
#define UNIT_JID(unit) ((unit)->jinfo->id)
int GetItemAttributes(int item);
bool IsItemEffectiveAgainst(u16 item, struct Unit * unit);
extern i16 gEkrSnowWeather;
extern i16 gEkrSpellAnimIndex[2];
u16 * GetEkrDragonWeapon(int pos);
extern i16 gBanimBG;
int GetBattleAnimArenaFlag(void);

struct BanimInfoEnt
{
    u16 wtype, index;
};
enum
{
    ITEM_KIND_SWORD,
    ITEM_KIND_LANCE,
    ITEM_KIND_AXE,
    ITEM_KIND_BOW,
    ITEM_KIND_STAFF,
    ITEM_KIND_ANIMA,
    ITEM_KIND_LIGHT,
    ITEM_KIND_ELDER,

    ITEM_KIND_UNK8,
    ITEM_KIND_ITEM,
    ITEM_KIND_DRAGON,
    ITEM_KIND_DRAGONSTONE,

    ITEM_KIND_INVALID = 0xFF,
};
int GetItemKind(int item);

struct ProcEfx {
    PROC_HEADER;

    /* 29 */ u8 hitted;
    /* 2A */ u8 type;
    /* 2B */ STRUCT_PAD(0x2B, 0x2C);
    /* 2C */ i16 timer;
    /* 2E */ i16 step;
    /* 30 */ i16 unk30;
    /* 32 */ u16 unk32;
    /* 34 */ STRUCT_PAD(0x34, 0x44);
    /* 44 */ u32 unk44;
    /* 48 */ u32 unk48;
    /* 4C */ u32 frame;
    /* 50 */ u32 speed;
    /* 54 */ i16 * unk54;
    /* 58 */ i16 ** unk58;
    /* 5C */ struct Anim * anim;
    STRUCT_PAD(0x60, 0x64);
    ProcPtr unk_64;
};

extern ProcPtr gpProcEfxAnimeDrv;
extern const void * gpImgSheet[2];
extern int gEkrBg2ScrollFlip;
extern u16 * gpBg2ScrollOffsetStart;
extern u16 * gpBg2ScrollOffset;
extern u16 gpBg2ScrollOffsetTable1[];
extern u16 gpBg2ScrollOffsetTable2[];
extern int gEkrBg1ScrollFlip;
extern u16 * gpBg1ScrollOffsetStart;
extern u16 * gpBg1ScrollOffset;
extern u16 gpBg1ScrollOffsetList1[];
extern u16 gpBg1ScrollOffsetList2[];
extern int gEfxMagicChk_N;
extern u32 gEfxBgSemaphore;
extern CONST_DATA struct ProcScr ProcScr_EfxRestWINH[];

#define MSG_2F6 0x02F6
#define MSG_2F7 0x02F7
#define MSG_2F8 0x02F8
#define MSG_2F9 0x02F9
#define MSG_2FA 0x02FA
#define MSG_2FB 0x02FB
#define MSG_2FC 0x02FC

enum talk_choice
{
    TALK_CHOICE_CANCEL = 0,
    TALK_CHOICE_YES,
    TALK_CHOICE_NO
};
int GetTalkChoiceResult(void);
void StartArenaDialogue(int msg, ProcPtr proc);
int ArenaGetMatchupGoldValue(void);

void func_fe6_08092838(void);
void func_fe6_08092EB0(int a, int b, int c, int d, int e, int f, int g);

struct ProcWorldMap {
    PROC_HEADER;

    /* 2C */ int unk2C;
    /* 30 */ int unk30;
    /* 34 */ int unk34;
    /* 38 */ int unk38;

    /* 3C */ int camera_x, camera_y;

    /* 44 */ int unk44;
    /* 48 */ i16 unk48, unk4A;
    /* 4C */ u16 unk4C, unk4E, unk50;
    /* 52 */ u8 unk52, unk53, unk54;
};
void ApplyCompressedWmPalette(int a, int b);
u8 * GetCompressedWmPalette(int a, int b);

struct WmArrowSt {
    u8 unk_00, id, unk_02, unk_03;
    /* 04 */ u8 unk_04;
    /* 05 */ u8 color;

    /* 08 */ int unk_08;
    /* 0C */ int unk_0C;
    /* 10 */ int unk_10;
    /* 14 */ int unk_14[12];
    /* 44 */ int unk_44[12];
    /* 74 */ int unk_74[12];
    /* A4 */ int unk_A4[12];
    /* D4 */ int unk_D4;
    /* D8 */ int unk_D8;

    /* DC */ u8 unk_DC[20];
    /* DC */ u8 unk_F0[20];

    /* 104 */ int unk_104[20];
    /* 154 */ int unk_154[20];
    /* 1A4 */ int unk_1A4[20];
    /* 1F4 */ int unk_1F4[20];
    /* 244 */ int unk_244[20];
    /* 294 */ int unk_294[20];
    /* 2E4 */ int unk_2E4[20];
};

struct ProcWmArrow {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x58);

    /* 58 */ struct WmArrowSt * unk58;
};

u16 * func_fe6_0809325C(int a);
int func_fe6_08093284(u16 * buf);
int func_fe6_08093288(u16 * buf, int a);
#define OAM2_CHR(ac)        ((ac) & 0x03FF)
extern u16 CONST_DATA Sprite_0868C2CC[];
extern u16 CONST_DATA Sprite_0868C2D4[];
void func_fe6_08093064(int a, int b, int c, int d);
void PutWmArrowSpriteExt(struct WmArrowSt * conf, int idx);
extern const int gUnk_08353328[];

struct Proc_0868C3C4 {
    PROC_HEADER;

    /* 2C */ int ix, iy;

    STRUCT_PAD(0x34, 0x4C);

    /* 4C */ struct ProcWorldMap * wmproc;

    STRUCT_PAD(0x50, 0x66);

    /* 66 */ i16 unk_66, unk_68;
};

void func_fe6_08092A9C(int x, int y);

struct ProcTitleDisp {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x64);

    /* 64 */ i16 timer1, timer2;
};
extern CONST_DATA int gTitleDuration;
extern CONST_DATA int gUnk_0869211C;
extern CONST_DATA int gUnk_08692120;
extern CONST_DATA int gUnk_08692124;
extern CONST_DATA int gUnk_08692128;
extern CONST_DATA int gUnk_0869212C;
extern u16 CONST_DATA Sprite_086922F0[];
extern u16 CONST_DATA Sprite_086922F8[];
extern u16 CONST_DATA Sprite_08692300[];
extern u8 const Img_EfxSideHitDmgCrit[];
extern u8 const Img_EfxArrowWTA[];
extern u16 Img_EkrGaugeNumber[];
extern u16 Pal_EkrGauge_081131A4[];

struct ProcEkrGauge {
    PROC_HEADER;

    /* 29 */ u8 battle_init;           /* 1 in battle-starting and 0 after battle started */
    /* 2A */ u8 valid;
    /* 2B */ u8 _pad_2B[0x32 - 0x2B];
    /* 32 */ i16 unk32;
    /* 34 */ u8 _pad_34[0x3A - 0x34];
    /* 3A */ i16 unk3A;
    /* 3C */ u8 _pad_3C[0x44 - 0x3C];
    /* 44 */ int unk44;
    /* 48 */ int unk48;
    /* 4C */ int unk4C;
    /* 50 */ int unk50;
    /* 54 */
};

extern struct ProcEkrGauge * gpProcEkrGauge;
extern EWRAM_OVERLAY(banim) u16 Buf_EkrGaugeNumImg[0x200];
extern EWRAM_OVERLAY(banim) u16 gEkrGaugeDecoder[18];

void EkrGaugeModDec(i16 val, u16 buf[]);
void NewEkrGauge(void);
void EndEkrGauge(void);
void EkrGauge_080438C8(void);
void EkrGauge_080438D8(void);
void func_fe6_080438E8(void);
void func_fe6_080438F8(void);
void EkrGauge_08043908(u16 val);
void func_fe6_08043918(i16 x, i16 y);
void func_fe6_0804392C(i16 x, i16 y);
void func_fe6_08043940(void);
void func_fe6_08043950(void);
void EnableEkrGauge(void);
void DisableEkrGauge(void);
extern CONST_DATA struct ProcScr ProcScr_EkrGauge[];

extern u16 gPalEfxHpBarPurple[];
extern u16 const Pal_SystemObjects[];

void InitIcons(void);
void ClearIcons(void);
void ApplyIconPalettes(int palid);
void ApplyIconPalette(int num, int palid);
void PutIcon(u16 * tm, int icon, int tileref);
void ClearIcon(int icon);
void PutIconObjImg(int icon, int chr);

#define ApplyBgPalettes ApplyPalettes
#define ApplyBgPalette ApplyPalette
#define ApplyObPalettes(src, num, count) ApplyPalettes((src), 0x10 + (num), (count))
#define ApplyObPalette(src, num) ApplyPalette((src), 0x10 + (num))
int GetItemIcon(int item);

enum AUGURY_CHOICE {
	AUGURY_CHOICE_0,
	AUGURY_CHOICE_1,
	AUGURY_CHOICE_2,
};

enum AUGURY_PROC_LABLE {
	PL_AUGURY_0,
	PL_AUGURY_1,
	PL_AUGURY_2,
	PL_AUGURY_3,
	PL_AUGURY_4,
	PL_AUGURY_5,
	PL_AUGURY_6,
};

struct AuguryDispConfig {
	u8 x, y;

	u8 _pad_[2];
};

struct AuguryConfig {
	/* 00 */ u8 fid;
	/* 01 */ u8 pid;

	STRUCT_PAD(0x02, 0xC);

	/* 0C */ int *msg;
};

void ClearTalkText(void);
void EndTalk(void);



void func_fe6_0808D6D4(u16 old, u16 new);
void func_fe6_0808D7B4(ProcPtr proc);

struct Proc_0868AFF0_Augury {
	PROC_HEADER;

	i16 timer1;
	i16 timer2;
	int current_bgm;
};

extern struct ProcScr ProcScr_0868AFF0[];
#define SONG_41 0x41
#define SONG_EE 0xEE
extern i16 ProcAugury_0868AFF0_EndEnable;

enum ekr_lvup_status_index {
    EKRLVUP_STAT_HP = 0,
    EKRLVUP_STAT_POW,
    EKRLVUP_STAT_SKL,
    EKRLVUP_STAT_SPD,
    EKRLVUP_STAT_LCK,
    EKRLVUP_STAT_DEF,
    EKRLVUP_STAT_RES,
    EKRLVUP_STAT_CON,
    EKRLVUP_STAT_MAX,

    EKRLVUP_STAT_CLASS = EKRLVUP_STAT_MAX,
    EKRLVUP_STAT_LV_MSG,
    EKRLVUP_STAT_LV_VAL,

    EKRLVUP_STAT_PNAME = EKRLVUP_STAT_MAX,
    EKRLVUP_STAT_LVPRE_MSG,
    EKRLVUP_STAT_LVPRE_VAL
};

struct ProcEkrlvup {
    PROC_HEADER;

    /* 29 */ u8 finished;
    /* 2A */ u8 is_promotion;
    /* 2C */ i16 timer;
    /* 2E */ i16 index;

    STRUCT_PAD(0x30, 0x44);

    /* 44 */ int scroll_timer[4];

    STRUCT_PAD(0x54, 0x5C);

    struct Anim *anim_this, *anim_other;
};

extern struct ProcEkrlvup * gpProcEkrLevelup;
extern struct Unit * gpEkrLvupUnit;
extern struct BattleUnit * gpEkrLvupBattleUnit;
extern u16 gEkrLvupPreLevel;
extern u16 gEkrLvupPostLevel;
extern u16 gEkrLvupBaseStatus[EKRLVUP_STAT_MAX];
extern u16 gEkrLvupPostStatus[EKRLVUP_STAT_MAX];
extern u16 gEkrLvupScrollPos1;
extern u16 gEkrLvupScrollPos2;
extern int gEkrLvupApfxUnexist;

extern const u16 sEfxLvupPartsPos[];
extern CONST_DATA char *EkrLvupMsgsStr[];
extern CONST_DATA char *EkrLvupMsgsMag[];
extern struct Font gBanimFont;
extern struct Text gBanimText[20];
extern struct Text gBanimText[20];
extern const char gMsg_Lv[];



enum PlayRankSt_texts_idx {
	PLAYRANK_TEXT_0,
	PLAYRANK_TEXT_1,
	PLAYRANK_TEXT_2,
	PLAYRANK_TEXT_3,
	PLAYRANK_TEXT_4,
	PLAYRANK_TEXT_5,
	PLAYRANK_TEXT_6,
	PLAYRANK_TEXT_7,
	PLAYRANK_TEXT_8,

	PLAYRANK_TEXT_MAX
};

enum PlayRankSt_ranks {
	PLAYRANK_TACTICS = 0,
	PLAYRANK_COMBAT,
	PLAYRANK_SURVIVAL,
	PLAYRANK_EXPERIENCE,
	PLAYRANK_ASSET,
	PLAYRANK_POWER,
	PLAYRANK_TOTAL,

	PLAYRANK_MAX
};

enum PlayRankSt_Xmap_ranks {
	PLAYRANK_XMAP_TACTICS = 0,
	PLAYRANK_XMAP_SURVIVAL,
	PLAYRANK_XMAP_COMBAT,
	PLAYRANK_XMAP_TOTAL,

	PLAYRANK_XMAP_MAX
};

enum PlayRankSt_trail_texts_idx {
	PLAYRANK_TRAIL_TEXT_TACTICS,
	PLAYRANK_TRAIL_TEXT_SURVIVAL,
	PLAYRANK_TRAIL_TEXT_COMBAT,
	PLAYRANK_TRAIL_TEXT_TOTAL,

	PLAYRANK_TRAIL_TEXT_MAX
};

struct PlayRankSt {
	STRUCT_PAD(0x00, 0x32);

	/* 32 */ u16 unk_32;
	/* 34 */ u16 unk_34;
	/* 38 */ int x, y;
	/* 40 */ u8 x_step, y_step;
	/* 42 */ i16 xs[7];
	/* 50 */ i16 ys[7];
	/* 5E */ u16 unk_5E[7];
	/* 6C */ u16 ranks[7];
	/* 7A */ u16 unk_7A;
	/* 7C */ u16 *objs[7];
	/* 98 */ u8 unk_98[7];
	/* 9F */ u8 step;
	/* A0 */ struct Text texts[PLAYRANK_TEXT_MAX];
	/* A0 */ struct Text texts_rank_name[PLAYRANK_TEXT_MAX];
};

struct UnkStruct_0868B4D0 {
	/* 00 */ u16 *obj;
	/* 04 */ u8 unk_04;
};

struct Proc_0868B5E8 {
	PROC_HEADER;

	/* 2A */ i16 timer1;
	/* 2C */ i16 anim_timer;
	/* 2E */ u16 anim_duration;
	/* 30 */ u16 unk_30;
	/* 32 */ i16 x, y;
	/* 36 */ u16 pal_bank;
};

extern CONST_DATA struct UnkStruct_0868B4D0 Objs_0868B4D0[];
extern CONST_DATA struct PlayRankSt *gpPlayRankSt;
extern u16 const Pal_08342AB8[];
void func_fe6_0808DF3C(u16 pal_bank, int x, int y);

void func_fe6_0808DF78(int a, int b);

struct Proc_0868B700 {
	PROC_HEADER;

	i16 timer;
	i16 unk_2C;
};
struct Proc_0868B730 {
	PROC_HEADER;

	u16 unk_2A;
	i16 timer;
	i16 total_sprites;
};
extern CONST_DATA u16 Sprite_0868B720[];
extern CONST_DATA u16 Sprite_0868B410[];
extern CONST_DATA u16 Sprite_0868B418[];
extern EWRAM_OVERLAY(0) u16 gPlayRankLayer;
extern CONST_DATA struct ProcScr ProcScr_0868B700[];
struct UnkStruct_0868b508 {
	i8 chr;
	u8 len, size;
	u8 _pad_;
};
extern CONST_DATA struct UnkStruct_0868b508 Unk_0868b508[];

struct UnkStruct_0868B5B0 {
	struct UnkStruct_0868b508 *unk_00;
	u8 x, y, _pad_[2];
};
extern CONST_DATA struct UnkStruct_0868B5B0 gUnk_0868B5B0[];
extern u16 Msgs_PlayRankNum[10];
extern u16 gPlayRankCurChapter;
int GetNextChapterStatsSlot(void);

struct ChapterStats
{
    u16 chapter_id   : 6;
    u16 chapter_turn : 10;
    u16 chapter_time : 16; // in increments of 3 seconds
};
void WritePidStats(void * sram_dst);
void WriteChapterStats(void * sram_dst);
struct ChapterStats * GetChapterStats(int num);
bool IsValidChapterStats(struct ChapterStats * chapter_stats);
int GetNextChapterStatsSlot(void);
void RegisterChapterStats(struct PlaySt * play_st);
int PlayRank_ChapterTurns_DrawBase(struct Text *text, int chapter_gaiden, u8 centered);



extern u16 gPlayRanks[7];
u16 PlayRank_GetTotalTurn(void);
u8 PlayRankGetter_Tactics(void);
u8 PlayRankGetter_XmapTactics(void);
// PlayRank_GetWinningRate
u8 PlayRankGetter_Combat(void);
u8 PlayRankGetter_XmapCombat(void);
// PlayRank_GetDeadAllies
u8 PlayRankGetter_Survival(void);
u8 PlayRankGetter_XmapSurvival(void);
// PlayRank_GetTotalLevelsGained
u8 PlayRankGetter_Experience(void);
u8 PlayRankGetter_Asset(void);
// PlayRank_CalcTotalLevel
u8 PlayRankGetter_Power(void);
int GameRank_GetTotalRankA(void);
int GameRank_GetTotalRankB(void);
void SetupPlayRankDispUnit(int step, int b);

struct TotalPlayRankConf {
	/* 00 */ u16 msg;
	/* 04 */ int color;
	/* 08 */ u8 (*func)(void);
	/* 0C */ u8 x;
	/* 0D */ u8 y;
	/* 0E */ u8 unk_0E;
};

extern CONST_DATA struct TotalPlayRankConf gTotalPlayRankConf1[];
extern CONST_DATA struct TotalPlayRankConf gTotalPlayRankConf2[];

struct ProcPlayRank {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x2E);

	i16 unk_2E;
	i16 unk_30;
};

void PlayRank_InitTexts(void);
int PlayRank_ChapterTurns_DrawBase(struct Text *text, int chapter_gaiden, u8 centered);
bool PlayRank_ChapterTurns_DrawTurn(int line);
void SetupPlayRanks(int line);
void func_fe6_0808EB94(int line);
int PlayRank_GetTotalPlayTime(void);
void PlayRank_PutTotalPlayTime(int line);
void func_fe6_0808EC78(int x);
void func_fe6_0808ECD0(u16 *tm, int a, int b);
void PlayRank_InitDisplay(void);
void func_fe6_0808F060(struct ProcPlayRank *proc);
void PlayRank_Loop(struct ProcPlayRank *proc);
extern CONST_DATA struct ProcScr ProcScr_0868B730[];
extern CONST_DATA struct ProcScr ProcScr_0868B6D8[];
extern CONST_DATA struct ProcScr ProcScr_EfxDamageMojiEffect[];
extern CONST_DATA struct ProcScr ProcScr_EfxDamageMojiEffectOBJ[];
extern CONST_DATA struct ProcScr ProcScr_EfxCriricalEffect[];
extern CONST_DATA struct ProcScr ProcScr_EfxCriricalEffectBG[];
extern CONST_DATA struct ProcScr ProcScr_EfxCriricalEffectBGCOL[];
extern CONST_DATA struct ProcScr ProcScr_EfxNormalEffect[];
extern CONST_DATA struct ProcScr ProcScr_EfxNormalEffectBG[];
extern CONST_DATA u16 *TSAs_EfxNormalEffectBG[];
extern CONST_DATA struct ProcScr ProcScr_EfxYushaSpinShield[];
extern CONST_DATA struct ProcScr ProcScr_EfxYushaSpinShieldOBJ[];
extern CONST_DATA struct ProcScr ProcScr_EfxHurtmutEff00[];
extern CONST_DATA struct ProcScr ProcScr_EfxHurtmutEff00OBJ[];
extern CONST_DATA struct ProcScr ProcScr_EfxHurtmutEff01OBJ[];
extern CONST_DATA struct ProcScr ProcScr_EfxMagfcast[];
extern CONST_DATA struct ProcScr ProcScr_EfxMagfcastBG[];
extern CONST_DATA struct ProcScr TsaLut1_EfxMagfcastBG[];
extern CONST_DATA struct ProcScr TsaLut2_EfxMagfcastBG[];
extern CONST_DATA struct ProcScr ProcScr_EfxSunakemuri[];
extern CONST_DATA struct ProcScr ProcScr_EfxSunakemuriOBJ[];


void SpellFx_Begin(void);
void SpellFx_Finish(void);
void SpellFx_SetBG1Position(void);
void SpellFx_ClearBG1(void);
void SpellFx_SetSomeColorEffect(void);
void SpellFx_ClearColorEffects(void);
void StartBattleAnimHitEffectsDefault(struct BaSprite * anim, int type);

struct ProcEfxOBJ {
    PROC_HEADER;

    /* 29 */ u8 unk29;
    /* 2A */ u8 unk2A;
    STRUCT_PAD(0x2B, 0x2C);
    /* 2C */ i16 timer;
    /* 2E */ i16 terminator;
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
    /* 4C */ int unk4C;
    STRUCT_PAD(0x50, 0x5C);
    /* 5C */ struct  BaSprite * anim;
    /* 60 */ struct  BaSprite * anim2;
    /* 64 */ struct  BaSprite * anim3;
    /* 68 */ struct  BaSprite * anim4;
};

struct ProcEfxBG {
    PROC_HEADER;

    /* 29 */ u8 unk29;
    STRUCT_PAD(0x2A, 0x2C);
    /* 2C */ i16 timer;
    /* 2E */ i16 terminator;
    /* 30 */ i16 unk30;
    /* 32 */ i16 unk32;
    /* 34 */ i16 unk34;
    STRUCT_PAD(0x36, 0x3C);
    /* 3C */ i16 unk3C;
    STRUCT_PAD(0x3E, 0x44);
    /* 44 */ u32 frame;
    /* 48 */ const u16 * frame_config;
    /* 4C */ u16 ** tsal;
    /* 50 */ u16 ** tsar;
    /* 54 */ u16 ** img;
    /* 58 */ u16 ** pal;
    /* 5C */ struct  BaSprite * anim;
};

struct ProcEfxBGCOL {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x2C);
    /* 2C */ i16 timer;
    /* 2E */ i16 timer2;
    /* 30 */ i16 terminator;
    /* 32 */ i16 unk32;
    STRUCT_PAD(0x34, 0x44);
    /* 44 */ u32 frame;
    /* 48 */ const u16 * frame_config;
    /* 4C */ void * pal;
    STRUCT_PAD(0x50, 0x5C);
    /* 5C */ struct  BaSprite * anim;
};

void NewEfxYushaSpinShield(struct Anim *anim, int state);
void EfxYushaSpinShield_Null(struct ProcEfx *proc);
void NewEfxYushaSpinShieldOBJ(struct Anim *anim, int state);
void EfxYushaSpinShieldOBJ_1(struct ProcEfxOBJ * proc);
void EfxYushaSpinShieldOBJ_2(struct ProcEfxOBJ * proc);
void EfxYushaSpinShieldOBJ_3(struct ProcEfxOBJ * proc);
void EfxYushaSpinShieldOBJ_4(struct ProcEfxOBJ * proc);
void NewEfxHurtmutEff00(struct Anim * anim);
void EfxHurtmutEff00_Null(struct ProcEfx * proc);
void NewEfxHurtmutEff00OBJ(struct Anim * anim);
void EfxHurtmutEff00OBJ_1(struct ProcEfxOBJ * proc);
void EfxHurtmutEff00OBJ_2(struct ProcEfxOBJ * proc);
void EfxHurtmutEff00OBJ_3(struct ProcEfxOBJ * proc);
void NewEfxHurtmutEff01OBJ(struct Anim * anim);
void EfxHurtmutEff01OBJ_1(struct ProcEfxOBJ * proc);
void EfxHurtmutEff01OBJ_2(struct ProcEfxOBJ * proc);
void EfxHurtmutEff01OBJ_3(struct ProcEfxOBJ * proc);
void NewEfxMagfcast(struct Anim * anim, int type);
void EfxMagfcast_Loop(struct ProcEfx * proc);
void NewEfxMagfcastBG(struct Anim * anim, u32 type);
void EfxMagfcastBG_Loop(struct ProcEfxBG * proc);
void NewEfxSunakemuri(struct Anim * anim, int type);
void EfxSunakemuri_Null(struct ProcEfx * proc);
void NewEfxSunakemuriOBJ(struct Anim * anim, int type);
void EfxSunakemuriOBJ_Loop(struct ProcEfxOBJ * proc);
void NewEfxKingPika(struct Anim * anim);
void EfxKingPika_Loop(struct ProcEfx * proc);

#define MOSAIC_LO2BG(_mosaic) ({ \
    int ___mosaic = _mosaic; \
    int __local_mosaic_lo = (u8)___mosaic & 0xF; \
    int __local_mosaic_hi = ___mosaic << 4; \
    \
    (__local_mosaic_hi | __local_mosaic_lo); \
})

#define SetMosaicDisp(_mosaic) { \
    int __local_mosaic   = _mosaic; \
    \
    u8 *__pr_disp = ((u8 *) &gDispIo); \
    u8 *__pr_mosaic = __pr_disp + 0x38; \
    \
    *__pr_mosaic = MOSAIC_LO2BG(__local_mosaic); \
}
extern CONST_DATA i16 EfxSRankWeaponEffectSCR_Ref[];
extern CONST_DATA struct ProcScr ProcScr_EfxMantBatabata[];
extern u32 AnimScr_EfxMantBatabata1_R[];
extern u32 AnimScr_EfxMantBatabata1_L[];
extern u32 AnimScr_EfxMantBatabata2_R[];
extern u32 AnimScr_EfxMantBatabata2_L[];
extern u32 AnimScr_EfxMantBatabata3_R[];
extern u32 AnimScr_EfxMantBatabata3_L[];

struct BaSprite * EfxCreateFrontAnim(struct BaSprite * anim, const AnimScr * scr1, const AnimScr * scr2, const AnimScr * scr3, const AnimScr * scr4);
void BasUpdateAll(void);
void BasInit(void);
struct BaSprite * BasCreate2(void const * script);
struct BaSprite * BasCreate(void const * script, u16 displayPriority);
void BasSort(void);
void BasRemove(struct BaSprite * banim_sprite);
void BasPutOam(struct BaSprite * banim_sprite);
void FillBGRect(u16 * tm, u16 width, u16 height, int pal, int chr);
extern i16 gAnimRoundData[4];
extern i16 gEfxHpLutOff[2];
extern u16 gEfxHpLut[22];
extern i16 gBanimPosIsTarget[2];

int BanimSpawnRandB(int a);
i16 GetEfxHp(int index);
void RegisterAISSheetGraphics(struct Anim *anim);
void NewEkrChienCHR(struct Anim *anim);
extern u8 gBanimScrs[2 * 0x2A00];
extern int *gpBanimModesLeft;
extern int *gpBanimModesRight;

extern i16 const gEfxNoDmgBgShakeOff[];
extern i16 const gEfxQuakePureVec1[];
extern i16 const gEfxQuakePureVec2[];
extern i16 const gEfxQuakePureVec3[];
extern i16 const gEfxQuakePureVec4[];
extern i16 const gEfxQuakePureVec5[];
extern i16 const gEfxQuakePureVec6[];
extern i16 const gEfxQuakeVec_08111E14[];
extern i16 const gEfxQuakePureVec7[];
extern i16 const gEfxQuakePureVec8[];
extern i16 const gEfxQuakePureVec9[];
extern i16 const gEfxQuakePureVec10[];
extern i16 const gEfxQuakePureVec11[];
extern i16 const gEfxQuakeVec_08111F30[];
extern i16 const gEfxQuakeVec_08111FC6[];
// extern ??? RoundTypes_NormalPhy
// extern ??? RoundTypes_MissedPhy
// extern ??? RoundTypes_CriticalPhy
// extern ??? RoundTypes_TargetMiss
// extern ??? RoundTypes_TargetHitted
// extern ??? RoundTypes_NormalMag
// extern ??? RoundTypes_CriticalMag
// extern ??? RoundTypes_Dragon1
// extern ??? RoundTypes_Dragon2
// extern ??? RoundTypes_Dragon3
extern const u8 BanimDefaultModeConfig[ANIM_ROUND_MAX * 4];
extern const u8 BanimDefaultStandingTypes[5];
extern const u8 BanimTypesPosLeft[5];
extern const u8 BanimTypesPosRight[5];
extern const u16 BanimLeftDefaultPos[5];
// extern ??? gUnk_081122DA
// extern ??? gUnk_08112370
// extern ??? gUnk_081125E0
// extern ??? gUnk_081127F0
// extern ??? gUnk_08112840
// extern ??? gUnk_081128AC
// extern ??? gUnk_081128FC
// extern ??? gUnk_08112968
// extern ??? gUnk_08112A1C
extern u8 const gUnk_08112AD0[];
extern u8 const gUnk_08112BA4[];
// extern ??? gUnk_08112C84
// extern ??? gUnk_08112CD4

void NewEfxCriricalEffect(struct Anim *anim);

struct BanimScrFrame {
    // disassemble of ANIMSCR_FRAME
    u32 prefix;
    const u32 *img;
    u32 oam_offset;
};

#define BAS_CMD(x) (x)
int CheckEkrHitDone(void);
void NewEfxSpecalEffect(struct Anim *anim);
void StartSpellAnimation(struct Anim *anim);
enum efx_hp_change_type {
    EFX_HPT_CHANGED = 0,
    EFX_HPT_DEFEATED = 1,
    EFX_HPT_NOT_CHANGE = 2
};

i16 GetEfxHpChangeType(struct Anim *anim);
void LoadAnimFrame(struct BaSprite *anim, int type);
extern u32 gEfxTeonoState;
ProcPtr NewEfxQuake(int type);
void NewEfxNormalEffect(struct Anim *anim);
void NewEfxDanceOBJ(struct Anim *anim);
void NewEfxSongFE6(struct Anim *anim);
void EfxPlaySEwithCmdCtrl(struct BaSprite *anim, int cmd);
void NewEfxMantBatabata(struct Anim *anim);
i16 GetBattleAnimRoundType(int index);
struct BattleAnim {
    char abbr[12];
    int * modes;
    void * script;
    void * oam_r;
    void * oam_l;
    void * pal;
};

extern struct BattleAnim gBanimTable[];

struct BattleAnimCharaPal {
    char abbr[12];
    char * pal;
};

extern struct BattleAnimCharaPal gBanimCharaPalTable[];

enum banim_sprites_size {
    BAS_SCR_MAX_SIZE = 0x2A00,
    BAS_OAM_REF_MAX_SIZE = 0x57F0,
    BAS_OAM_MAX_SIZE = 0x5800,
    BAS_IMG_MAX_SIZE = 0x1000,
};

extern u8 gBanimScrs[2 * BAS_SCR_MAX_SIZE];
extern u8 gBanimOamBufs[2 * BAS_OAM_MAX_SIZE];
extern u8 gBanimImgSheetBufs[2 * BAS_IMG_MAX_SIZE];

int GetBanimPalette(int banim_id, int pos);
extern u16 gBanimPaletteLeft[0x50];
extern u16 gBanimPaletteRight[0x50];
void ApplyBanimUniquePalette(u32 *buf, int pos);

extern u16 * gpEfxUnitPaletteBackup[2];
u16 GetBattleAnimationId(const struct BanimInfoEnt *animdef, u16 item);
extern CONST_DATA AnimScr AnimScr_DefaultAnim[];

struct EkrMainMiniBuf {
    /* 00 */ u8 started;
    /* 01 */ u8 faction_pal;
    /* 02 */ u16 x, y;
    /* 06 */ u16 bid;
    // i16 chara_pal;
    /* 08 */ u16 round_type;
    /* 0A */ u16 pos;
    /* 0C */ u16 oam2_chr;
    /* 0E */ u16 oam2_pal;
    /* 10 */ struct Anim *anim1, *anim2;
    /* 18 */ u16 *img_buf;
    /* 1C */ u16 *pal_buf;
    /* 20 */ u16 *oam_buf;
    /* 24 */ u8  *scr_buf;
    /* 28 */ const u16 *img_sheet;
    /* 2C */ void *magicfx_buf;
    /* 30 */ ProcPtr proc;
};
enum banim_mode_index {
    BANIM_MODE_NORMAL_ATK,
    BANIM_MODE_NORMAL_ATK_PRIORITY_L,
    BANIM_MODE_CRIT_ATK,
    BANIM_MODE_CRIT_ATK_PRIORITY_L,
    BANIM_MODE_RANGED_ATK,
    BANIM_MODE_RANGED_CRIT_ATK,
    BANIM_MODE_CLOSE_DODGE,
    BANIM_MODE_RANGED_DODGE,
    BANIM_MODE_STANDING,
    BANIM_MODE_STANDING2,
    BANIM_MODE_RANGED_STANDING,
    BANIM_MODE_MISSED_ATK,

    BANIM_MODE_INVALID = -1,
};

struct BattleAnimTerrain {
    char abbr[12];
    char * tileset;
    short * palette;
    int null_1; // useless, always 00
};

extern const struct BattleAnimTerrain gBanimTerrainTable[];



struct ProcEkrSubAnimeEmulator {
    PROC_HEADER;

    /* 29 */ u8 type;
    /* 2A */ u8 valid;
    /* 2C */ i16 timer;
    /* 2E */ i16 scr_cur;

    STRUCT_PAD(0x30, 0x32);

    /* 32 */ i16 x1;
    /* 34 */ i16 x2;

    STRUCT_PAD(0x36, 0x3A);

    /* 3A */ i16 y1;
    /* 3C */ i16 y2;

    STRUCT_PAD(0x3E, 0x44);

    /* 44 */ u32 *anim_scr;
    /* 48 */ void * sprite;
    /* 4C */ int oam2Base;
    /* 50 */ int oamBase;
};

struct ProcEkrSubAnimeEmulator * NewEkrsubAnimeEmulator(int x, int y, u32 *anim_scr, int type, int oam2Base, int oamBase, ProcPtr parent);
void EkrsubAnimeEmulator_Loop(struct ProcEkrSubAnimeEmulator *proc);
extern CONST_DATA AnimScr AnimScr_EkrTerrainfx_R_Far[];
extern CONST_DATA AnimScr AnimScr_EkrTerrainfx_L_Far[];
extern CONST_DATA AnimScr AnimScr_EkrTerrainfx_R_Close[];
extern CONST_DATA AnimScr AnimScr_EkrTerrainfx_L_Close[];

struct ProcEfxFlashing {
    PROC_HEADER;

    /* 29 */ u8 flag;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ i16 timer;
    /* 2E */ i16 terminator;
    /* 30 */ i16 terminator2;

    STRUCT_PAD(0x32, 0x5C);

    /* 5C */ struct Anim *anim;
};

void NewEfxFlashBgWhite(struct Anim *anim, int duartion);
void NewEfxFlashBgRed(struct Anim *anim, int duartion);
void EfxFlashBg_Loop(struct ProcEfxFlashing *proc);
void EfxFlashRestorePalSync(struct ProcEfxFlashing *proc);
void NewEfxWhiteIN(struct Anim *anim, int duartion, int duartion2);
void EfxWhiteIn_Loop1(struct ProcEfxFlashing *proc);
void EfxWhiteIn_Loop2(struct ProcEfxFlashing *proc);
void EfxBlackInRestorePalSync(struct ProcEfxFlashing *proc);

void NewEfxFlashHpBar(struct Anim *anim, int duartion, int duartion2);
void EfxFlashHpBar_Pause(struct ProcEfxFlashing *proc);
void EfxFlashHpBar_Loop(struct ProcEfxFlashing *proc);
void EfxFlashHpBar_RestorePal(struct ProcEfxFlashing *proc);

bool EkrClasschgFinished(void);
void EndEkrClasschg(void);
void NewEkrClassChg(struct BaSprite *anim);
void EkrClasschg_Loop(struct ProcEfx *proc);
void EkrClasschg_Done(struct ProcEfx *proc);
void NewEfxClasschgOBJ1(struct Anim *anim);
void NewEfxClasschgOBJ2(struct Anim *anim);
// EfxClasschgOBJ_Loop
void NewEfxClasschgBGSE00(struct Anim *anim);
// EfxClasschgBGSE00_Loop
void NewEfxClasschgBGSE01(struct Anim *anim);
// EfxClasschgBGSE01_Loop
void NewEfxClasschgOBJDiffusion(struct Anim *anim);
// EfxClasschgOBJDiffusion_Loop
void NewEfxClasschgFIN(struct Anim * anim, int duration);
// EfxClasschgFIN_Loop
void NewEfxClasschgCLONE(struct Anim * anim, int duration);
// EfxClasschgCLONE_Loop
// EfxClasschgCLONE_End
void NewEfxBlackInOutUnit(struct Anim * anim, int duration, int direction);
// EfxBlackInOutUnit_Loop
void NewEfxClasschgRST(struct Anim * anim, struct ProcEfx *parent, int duration, int start, int end);

struct ProcEfxStatusUnit {
    PROC_HEADER;
    /* 29 */ u8 invalid;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ u16 timer;

    STRUCT_PAD(0x2E, 0x32);

    /* 32 */ i16 red, green, blue;

    STRUCT_PAD(0x38, 0x44);

    /* 44 */ u32 frame;
    /* 48 */ const u16 * frame_lut;
    /* 4C */ int debuff, debuf_bak;

    STRUCT_PAD(0x54, 0x5C);

    /* 5C */ struct Anim *anim;
};

extern struct ProcEfxStatusUnit * gpProcEfxStatusUnits[2];

void NewEfxStatusUnit(struct Anim *anim);
void EndEfxStatusUnits(struct Anim *anim);
void DisableEfxStatusUnits(struct Anim *anim);
void EnableEfxStatusUnits(struct Anim *anim);
void SetUnitEfxDebuff(struct Anim *anim, int debuff);
u32 GetUnitEfxDebuff(struct Anim *anim);
void EfxStatusUnitFlashing(struct Anim *anim, int r, int g, int b);
void EfxStatusUnit_Loop(struct ProcEfxStatusUnit *proc);
void EfxStatusUnit_End(struct ProcEfxStatusUnit *proc);

i16 GetEfxHpChangeType(struct Anim *anim);
void EfxPlayHittedSFX(struct Anim *anim);
void EfxPlayCriticalHittedSFX(struct Anim *anim);
int EfxCheckRetaliation(int is_retaliation);
int EfxCheckStaffType(int weapon);
void EkrPlayMainBGM(void);
void EkrRestoreBGM(void);
int GetProperAnimSoundLocation(struct Anim *anim);
void PlaySFX(int songid, int volume, int locate, int type);
void PlaySfxAutomatically(int songid, int volume, struct Anim *anim);

void StartSpellAnimation(struct Anim *anim);
void func_fe6_0804C8D0(void);
ProcPtr NewEfxRestRST(struct Anim *anim, int duration, int step, int frame, int speed);
void EfxRestRST_End(struct ProcEfx *proc);
void EfxRestRST_Loop(struct ProcEfx *proc);
void NewDummvRST(struct Anim *anim, int unk44);
void EfxDummyRST_End(struct ProcEfx *proc);
void EfxDummyRST_Loop(struct ProcEfx *proc);
void NewEfxRestWIN(struct Anim *anim, int unk44, void * unk54, void * unk58);
void EfxRestWIN_Loop(struct ProcEfx *proc);
void NewEfxRestWINH(struct Anim *anim, int a, i16 b, void (* hblank)(void));
void NewEfxRestWINH_(struct Anim *anim, int a, void (* hblank)(void));
void EfxRestWINH_Dummy(struct ProcEfx *proc);
void EfxRestWINH_Loop(struct ProcEfx *proc);
void EfxRestWINH_DefaultHblank(void);

struct ProcEfxSpellCast {
    PROC_HEADER;

    /* 29 */ u8 done;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ i16 timer;
    /* 2E */ i16 terminator;
};

extern struct ProcEfxSpellCast * gpProcEfxSpellCast;

void NewEfxSpellCast(void);
void UnsyncEkrDispUP(void);
void EndEfxSpellCastAsync(void);
void EndEfxSpellCastSync(void);
void EfxSpellCast_FlashIN(struct ProcEfxSpellCast *proc);
void EfxSpellCast_Pause(struct ProcEfxSpellCast *proc);
void EfxSpellCast_FlashOUT(struct ProcEfxSpellCast *proc);

struct ProcEfxALPHA
{
    PROC_HEADER;

    /* 29 */ u8 unk29;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ i16 timer;
    /* 2E */ i16 delay;
    /* 30 */ i16 duration_total;

    STRUCT_PAD(0x32, 0x44);

    /* 44 */ int lo, hi, type;

    STRUCT_PAD(0x50, 0x5C);

    /* 5C */ struct Anim *anim;
};

void NewEfxALPHA(struct Anim *anim, int delay, int duration2, int lo, int hi, int type);
void EfxALPHA_Loop(struct ProcEfxALPHA *proc);

void SpellFx_WriteBgMapUncomp(struct Anim *anim, const u16 * src1, const u16 * src2);
void SpellFx_WriteBgMap(struct Anim *anim, const u16 * src1, const u16 * src2);
void SpellFx_WriteBgMapExt(struct Anim *anim, const u16 * src, int width, int height);
void SpellFx_RegisterObjGfx(const void * img, u32 size);
void SpellFx_RegisterObjPal(const u16 * pal, u32 size);
void SpellFx_RegisterBgGfx(const void * img, u32 size);
void SpellFx_RegisterBgPal(const u16 * pal, u32 size);

enum videoalloc_secret_screen {
	BGPAL_SECRETSCREEN_MURALBG = 10,
};


struct ProcSecretScreen {
	PROC_HEADER;

	/* 2A */ u16 unk_2A;
	/* 2C */ u8 count;
	/* 30 */ struct Unit *units[SID_PID_POOL_SIZE];
	/* 44 */ ProcPtr subproc;
};

struct SecretScreenData {
	u8 numbers[11];
	STRUCT_PAD(0xB, 0x18);
};

extern struct SecretScreenData gSecretScreenData[];

struct UnkStruct_020169C4 {
	STRUCT_PAD(0x0, 0x6);

	u16 unk_06;
};
extern EWRAM_OVERLAY(0) int Unk_020168F0;
extern EWRAM_OVERLAY(0) int Unk_020168F4;
extern EWRAM_OVERLAY(0) struct Text gSecretScreenTexts[5];
extern EWRAM_OVERLAY(0) int Unk_02016920;
extern EWRAM_OVERLAY(0) u8 Unk_02016924[0xA0];
extern EWRAM_OVERLAY(0) struct UnkStruct_020169C4 Unk_020169C4;

extern EWRAM_DATA u8 SioPidPool[SID_PID_POOL_SIZE];

extern CONST_DATA u8 gUnk_0867978C[];
extern struct ProcScr ProcScr_Prep_Password[];
extern CONST_DATA u8 gUnk_08679820[];
extern CONST_DATA struct ProcScr ProcScr_SecretScreen[];
extern EWRAM_DATA u8 Unk_0203D518[10];

u32 GetSecretScreenRN(void);
extern EWRAM_OVERLAY(0) int gSecretScreenRN;
int GetWeaponLevelFromExp(int wexp);
int GetUnitSupportCount(struct Unit * unit);
fu8 GetUnitSupportPid(struct Unit * unit, int num);
struct Unit * GetUnitSupportUnit(struct Unit * unit, int num);
int GetUnitSupportLevel(struct Unit * unit, int num);
int GetUnitTotalSupportLevel(struct Unit * unit);
void UnitGainSupportExp(struct Unit * unit, int num);
void UnitGainSupportLevel(struct Unit * unit, int num);
bool CanUnitSupportNow(struct Unit * unit, int num);
int GetUnitInitialSupportExp(struct Unit * unit, int num);
int GetUnitSupportNumByPid(struct Unit * unit, u8 pid);
void ClearUnitSupports(struct Unit * unit);
void DoTurnSupportExp(void);
int GetUnitAffinityIcon(struct Unit * unit);
int GetAffinityIconByPid(int pid);
int GetSupportLevelSpecialChar(int level);
char const * GetAffinityName(int affinity);
int func_fe6_08083B8C(int a, int b);
u32 SecretRnGetter_08082FE8(int a, int b, int round);

enum videoalloc_playrank {
	BGPAL_PLAYRANK_0 = 0,
	BGPAL_PLAYRANK_1 = 1,
	BGPAL_PLAYRANK_WM = 4,
	BGPAL_PLAYRANK_FOG = 6,

	BGPAL_PLAYRANK_TIME = 2,
	OBPAL_PLAYRANK_MISSION = 3,
	OBPAL_PLAYRANK_4 = 4,
	OBPAL_PLAYRANK_5 = 5,
	OBPAL_PLAYRANK_B = 0xB,
	OBPAL_PLAYRANK_C = 0xC,

	BGCHR_PLAYRANK_80 = 0x80,
	BGCHR_PLAYRANK_C0 = 0xC0,
	BGCHR_PLAYRANK_180 = 0x180,
	BGCHR_PLAYRANK_680 = 0x680,

	OBCHR_PLAYRANK_TIME = 0x80,
	OBCHR_PLAYRANK_84 = 0x84,
	OBCHR_PLAYRANK_98 = 0x98,
};

extern CONST_DATA struct ProcScr ProcScr_PlayRankFogHandler[];
extern CONST_DATA struct ProcScr ProcScr_PlayRankTrialOBJ[];
extern CONST_DATA struct ProcScr ProcScr_PlayRankTrail[];
extern u16 const Pal_PlayRankWmBG[];
extern u8 const Img_PlayRankFogBG[];
extern u16 const Pal_PlayRankFogBG[];
extern u8 const Img_PlayRankMissionCompletesOBJ[];
extern const u16 Pal_PlayRankMissionCompletesOBJ[];
extern u16 const Pal_PlayRankTimeOBJ[];
extern u8 const Img_PlayRankTimeOBJ[];
extern EWRAM_OVERLAY(0) u8 gPlayRankMissionCompleted;
extern EWRAM_OVERLAY(0) u16 gPlayRankMissonObjSelect;
extern EWRAM_OVERLAY(0) u16 gPlayRankBg0Offset;
extern EWRAM_OVERLAY(0) u16 gPlayRankBg1Offset;
extern EWRAM_OVERLAY(0) u16 gPlayRankDispLine;
extern EWRAM_OVERLAY(0) u16 gPlayRankBg0MoveStep;
extern u16 const Pal_08342A98[];
extern u8 const Img_PlayRankCharacters[];
extern u8 const Img_WorldMap_PlayRank[];
extern u8 const Tsa_08340ED8[];
struct ChapterStats * GetXmapChapterStats(void);
bool HasNextChapter(void);
void SetupXmapPlayRanks(void);
void FillPlayRankFogsToBG(u16 *tm, int a, int b);

struct ProcOpInfoFadeOut {
    PROC_HEADER;

    /* 2A */ u16 speed;
};

extern u16 gOpInfoPalettes[0x200];

void func_fe6_0805B01C(u16 * tm, u16 width, u16 height, int pal, int chr);
void FillBGRect(u16 * tm, u16 width, u16 height, int pal, int chr);
void func_fe6_0805B0D4(u16 * tm, u16 width, u16 height, int pal, int chr);
void EfxTmModifyPal(u16 * tm, u16 width, u16 height);
void EfxTmCpyBG(const void * ptr1, void * ptr2, u16 width, u16 height, int pal, int chr);
void EfxTmCpyBgHFlip(const u16 * tsa, u16 * tm, u16 width, u16 height, int pal, int chr);
void EfxTmCpyExt(const u16 * src, i16 src_width, u16 * dst, i16 dst_width, u16 width, u16 hight, int pal, int chr);
void EfxTmCpyExtHFlip(const u16 * src, i16 src_width, u16 * dst, i16 dst_width, u16 width, u16 hight, int pal, int chr);
void func_fe6_0805B380(u16 * tm, int arg1, int arg2);
void EkrModifyBarfx(u16 * tm, int);
// func_fe6_0805B4D8
void EfxPalBlackInOut(u16 * pal_buf, int line, int length, int ref);
void EfxPalWhiteInOut(u16 * pal_buf, int line, int length, int ref);
void EfxPalFlashingInOut(u16 * pal_buf, int line, int length, int r0, int g0, int b0);
void EfxPalModifyPetrifyEffect(u16 * pal_buf, int line, int length);
void EfxSplitColor(u16 * pal, u8 * dst, u32 length);
void EfxSplitColorPetrify(u16 * src, u8 * dst, u32 length);
void func_fe6_0805B88C(i8 * src1, i8 * src2, i16 * pal, u32 length, int ref);
void EfxDecodeSplitedPalette(u16 * dst, i8 * src1, i8 * src2, i16 * src3, u32 length, int ref, int unk);
void EfxChapterMapFadeOUT(int speed);
int BanimSpawnRandB(int a);

extern CONST_DATA struct ProcScr ProcScr_OpInfo[];
extern CONST_DATA struct ProcScr ProcScr_OpInfoFadeOut[];
extern CONST_DATA struct ProcScr ProcScr_OpInfoEnter[];
extern CONST_DATA struct ProcScr ProcScr_OpInfoView[];
extern CONST_DATA struct ProcScr ProcScr_OpInfoIcon[];
extern CONST_DATA struct ProcScr ProcScr_ClassInfoDisp[];
// extern CONST_DATA ??? gUnk_08690014
extern CONST_DATA u16 *Sprites_OpInfo_0869006C[];
extern CONST_DATA u16 *Sprites_OpInfo_086900BC[];
extern CONST_DATA u16 Sprite_OpInfo_086900DC[];
extern CONST_DATA u16 Sprite_OpInfo_086900F0[];
extern CONST_DATA u16 Sprite_OpInfo_086900F8[];
extern CONST_DATA u16 Sprite_OpInfo_08690100[];
extern CONST_DATA u16 *Sprites_OpInfo_08690288[];
extern CONST_DATA u8 gUnk_0869056C[][4];

enum videoalloc_opinfo {
	OBPAL_OFINFOVIEW_LETTER_REF = 0,
	OBPAL_OFINFOVIEW_LETTER0 = 1,
	OBPAL_OFINFOICON_LINE = 14,
	OBPAL_OFINFOICON = 15,
};
struct ProcEndingfx {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x4C);

	i16 unk_4C;
};

struct Proc_Prep_08679774 {
    PROC_HEADER;

    /* 2C */ u16 *vram;
    /* 30 */ struct Font font;
    /* 48 */ struct Text text;
    /* 50 */ int oam2;
};

// void func_fe6_08082DA4(struct Proc_Prep_08679774 *proc, int x, int y, int scale);
extern CONST_DATA u16 Sprite_Prep_0867976C[];
extern u16 const Pal_Text[];
extern u16 const gUnk_Ui_Pal_08321F24[3 * 0x10];
extern u16 gUnk_Pal_02016874[0x10];


extern ProcPtr gpProcEkrIdunnBodyFlashing;

enum EkrDragonfxState_idx {
	DRAGONFX_STATE_0 = 0,
	DRAGONFX_STATE_1,
	DRAGONFX_STATE_2,
};
extern u16 gEkrDragonfxState[2];

extern u16 gEkrDragonFastenConf[2];

enum EkrDragonState_idx {
	DRAGON_STATE_DEFAULT = 0,
	DRAGON_STATE_1 = 1,
	DRAGON_STATE_ENDING = 2,
};

extern u16 gEkrDragonState[2];
extern u16 gUnk_Banim_0201E7CC[];
extern u16 gEkrDragonJid[2];
extern u16 gEkrDragonFastenConf[2];
extern u16 gEkrBgPaletteBackup1[0x20];
extern u16 gEkrBgPaletteBackup2[0x20];
extern u16 gEkrBgPaletteBackup3[0x40];

void ResetEkrDragonStatus(void);
bool EkrDragonIntroDone(struct BaSprite *anim);
void TriggerEkrDragonEnding(struct BaSprite *anim);
bool CheckEkrDragonEndingDone(struct BaSprite *anim);

enum ekr_dragon_status_type_bitfile {
	EDRAGON_TYPE_MANAKETE_L = 1 << 0,
	EDRAGON_TYPE_MANAKETE_R = 1 << 1,
	EDRAGON_TYPE_FAE_L = 1 << 2,
	EDRAGON_TYPE_FAE_R = 1 << 3,
	EDRAGON_TYPE_IDUNN_L = 1 << 4,
	EDRAGON_TYPE_IDUNN_R = 1 << 5,
};

u32 GetEkrDragonStateTypeGeneric(void); /* Different form FE8, this is a bitfile rather than enum */
u32 GetEkrDragonStateType(void);
u32 GetEkrDragonStateTypeIdunn(void);
bool CheckSkipDragonTransfer(struct BaSprite *anim);
u16 *GetEkrDragonWeapon(int pos);
u16 *CheckEkrDragonFasten(struct BaSprite *anim);
ProcPtr GetEkrDragonProc(struct BaSprite *anim);
void EndEkrDragonDaemon(struct BaSprite *anim);
void SetDragonBasLayer(u8 layer);

enum ekr_dragon_intro_fx_flag {
	EDRAGONFX_FLAG_START = 0,
	EDRAGONFX_FLAG_DONE,
	EDRAGONFX_FLAG_END,
};

struct ProcEkrDragonFx {
	PROC_HEADER;

	/* 29 */ u8 flag;
	/* 2A */ u16 unk2A;
	/* 2C */ i16 timer;
	/* 2E */ i16 counter;
	/* 30 */ i16 delay;
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

	STRUCT_PAD(0x54, 0x5C);

	/* 5C */ struct BaSprite *anim;
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
	/* 5C */ struct BaSprite *anim;
	/* 60 */ ProcPtr sproc1;
	/* 64 */ struct ProcEkrDragonFx *procfx;
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
	/* 48 */ const i16 *conf;
	/* 4C */ const u16 *pal;

	STRUCT_PAD(0x50, 0x54);

	/* 54 */ u32 round_cur;

	STRUCT_PAD(0x58, 0x5C);

	/* 5C */ struct BaSprite *anim;
};

struct ProcEkrIdunnfx {
	PROC_HEADER;

	/* 29 */ u8 flag;

	STRUCT_PAD(0x2A, 0x2C);

	/* 2C */ i16 timer;
	/* 2E */ i16 duration;

	STRUCT_PAD(0x30, 0x44);

	/* 44 */ u32 frame;
	/* 48 */ const u16 *frame_config;
	/* 4C */ const u16 **tsa;
	/* 50 */ const u16 **tsa_unused;
	/* 54 */ int round;
	/* 58 */ u16 **pal_unused;
	/* 5C */ struct BaSprite *anim;
	/* 60 */ ProcPtr procfx;
};

extern i16 const FrameArray_EkrIdunnBody0[];
extern i16 const FrameArray_EkrIdunnBody1[];
extern i16 const FrameArray_EkrIdunnBody2[];
extern i16 const FrameArray_EkrIdunnBody3[];
extern i16 const FrameArray_EkrIdunnBody4[];
void EkrDragonTmCpy3(const u8 * tsa);
void NewEfxMagdhisEffect(struct Anim *anim);
extern CONST_DATA struct ProcScr ProcScr_EkrIdunnExitAnim1[];
extern u8 const Tsa_EkrIdunn_081C4E28[];
ProcPtr NewEkrIdunnExitAnim2(struct BaSprite *anim, int, int);
ProcPtr NewEfxQuakePure(int type, int stopped);
void NewEkrIdunnDeadFlashing(struct BaSprite *anim, int t0, int t1, int t2);

u16 GetUnitEquippedWeapon(struct Unit * unit);

enum ekrtriangle_types {
    EKR_TRI_JTYPE_DEFAULT = 0,
    EKR_TRI_JTYPE_PROMOTED,

    EKR_TRI_WTYPE_DEFAULT = 0,
    EKR_TRI_WTYPE_ALTERNATIVE,
    EKR_TRI_WTYPE_ALTERNATIVE2,
};
extern int gEkrTriangleInvalid;

ProcPtr NewEkrTriPegasusKnight(struct Anim * anim, u32 etype1, u32 etype2, u32 ewtype1, u32 ewtype2);
ProcPtr NewEkrTriArmorKnight(struct Anim * anim, u32 etype1, u32 etype2, u32 ewtype1, u32 ewtype2);
ProcPtr NewEkrTriArmorKnightOBJ(struct Anim * anim, u32 etype1, u32 etype2, u32 ewtype1, u32 ewtype2);

extern CONST_DATA struct ProcScr ProcScr_EkrTriPegasusKnight[];

struct ProcEkrTriClass {
    PROC_HEADER;

    /* 2E */ STRUCT_PAD(0x29, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ STRUCT_PAD(0x2E, 0x44);
    /* 44 */ int etype1;
    /* 48 */ int etype2;
    /* 4C */ int ewtype1;
    /* 50 */ int ewtype2;
    /* 54 */ STRUCT_PAD(0x54, 0x5C);
    /* 5C */ struct Anim * anim;
};

struct FaceInfo
{
    /* 00 */ void const * img;
    /* 04 */ void const * img_chibi;
    /* 08 */ u16 const * pal;
    /* 0C */ u8 x_mouth, y_mouth;
    /* 0E */ u8 unk_0E;
};

struct FaceVramEnt
{
    /* 00 */ u32 chr_off;
    /* 04 */ u16 palid;
};

struct FaceTalkSpriteEnt
{
    i16 chr;
    u16 const * sprite;
};

struct FaceProc
{
    /* 00 */ PROC_HEADER;

    /* 29 */ STRUCT_PAD(0x29, 0x2A);
    /* 2A */ u16 disp;
    /* 2C */ i8 slot;
    /* 2D */ i8 sprite_layer;
    /* 2E */ i16 x_disp;
    /* 30 */ i16 y_disp;
    /* 32 */ i16 x_offset_mouth;
    /* 34 */ i16 y_offset_mouth;
    /* 36 */ i8 talk_frame;
    /* 37 */ i8 talk_frame_clock;
    /* 38 */ u16 oam2;
    /* 3A */ STRUCT_PAD(0x3A, 0x3C);
    /* 3C */ u16 const * sprite;
    /* 40 */ u8 fid;
};

enum
{
    FACE_64x80,
    FACE_64x80_FLIPPED,
    FACE_96x80,
    FACE_96x80_FLIPPED,
    FACE_64x72,
    FACE_64x72_FLIPPED,
};

enum
{
    FACE_HLAYER_DEFAULT,

    // why shifts?
    FACE_HLAYER_0 = 1 << 0,
    FACE_HLAYER_1 = 1 << 1,
    FACE_HLAYER_2 = 1 << 2,
    FACE_HLAYER_3 = 1 << 3,
};

#define FACE_DISP_FLIPPED (1 << 0)
#define FACE_DISP_KIND(kind) ((kind) & 7)
#define FACE_DISP_KIND_MASK FACE_DISP_KIND(-1)
#define FACE_DISP_SMILE (1 << 3)
#define FACE_DISP_TALK_1 (1 << 4)
#define FACE_DISP_TALK_2 (1 << 5)
#define FACE_DISP_HLAYER(layer) (((layer) & 0xF) << 6)
#define FACE_DISP_HLAYER_MASK FACE_DISP_HLAYER(-1)
#define FACE_DISP_BLEND (1 << 10)

enum { FACE_SLOT_COUNT = 4 };

extern struct FaceVramEnt CONST_DATA DefaultFaceConfig[FACE_SLOT_COUNT];

extern u16 CONST_DATA Sprite_Face64x80[];
extern u16 CONST_DATA Sprite_Face64x80_Flipped[];
extern u16 CONST_DATA Sprite_Face96x80[];
extern u16 CONST_DATA Sprite_Face96x80_Flipped[];
extern u16 CONST_DATA Sprite_Face64x72[];
extern u16 CONST_DATA Sprite_Face64x72_Flipped[];

extern u16 CONST_DATA Sprite_FaceTalkFrameB[];
extern u16 CONST_DATA Sprite_FaceTalkFrameB_Flipped[];
extern u16 CONST_DATA Sprite_FaceTalkFrameA[];
extern u16 CONST_DATA Sprite_FaceTalkFrameA_Flipped[];

extern struct FaceTalkSpriteEnt CONST_DATA FaceTalkFrameSpriteTable[16];

extern struct ProcScr CONST_DATA ProcScr_Face[];

extern u8 CONST_DATA FaceTm_Unk_085C3C18[];
extern u8 CONST_DATA FaceTm_Unk_085C3C92[];

extern struct ProcScr CONST_DATA ProcScr_FaceChibiSpr[];

extern u16 CONST_DATA Sprite_FaceChibi[];
extern u16 CONST_DATA Sprite_FaceChibi_Flipped[];

extern struct ProcScr CONST_DATA ProcScr_FaceEndIn8Frames[];

extern struct FaceProc * gFaces[FACE_SLOT_COUNT];

extern struct FaceVramEnt gFaceConfig[FACE_SLOT_COUNT];

extern struct FaceInfo CONST_DATA FaceInfoTable[];

struct FaceInfo const * GetFaceInfo(int fid);
int GetFace_Unk(int fid);
void InitFaces(void);
void SetFaceConfig(struct FaceVramEnt const * config);
int GetFreeFaceSlot(void);
void UpdateFaceTalk(struct FaceProc * proc);
void Face_OnIdle(struct FaceProc * proc);
struct FaceProc * StartFaceAuto(int fid, int x, int y, int disp);
struct FaceProc * StartFace(int slot, int fid, int x, int y, int disp);
void EndFace(struct FaceProc * proc);
void EndFaceById(int slot);
u32 SetFaceDisp(struct FaceProc * proc, u32 disp);
u32 SetFaceDispById(int slot, u32 disp);
u32 GetFaceDisp(struct FaceProc * proc);
u32 GetFaceDispById(int slot);
void FaceRefreshSprite(struct FaceProc * proc);
void UnpackFaceGraphics(int fid, int chr, int pal);
void PutFaceTm(u16 * tm, u8 const * data, int tileref, bool is_flipped);
void PutFullFaceTm(u16 * tm, int unused_1, int unused_2, int tileref, bool is_flipped);
void func_fe6_08008874(u16 * tm, int tileref);
void UnpackFaceChibiGraphics(int fid, int chr, int pal);
void PutFaceChibi(int fid, u16 * tm, int chr, int pal, bool is_flipped);
void UnpackFaceChibiSprGraphics(int fid, int chr, int pal);
void FaceChibiSpr_OnIdle(struct FaceProc * proc);
void StartFaceChibiStr(int x, int y, int fid, int chr, int pal, bool is_flipped, ProcPtr parent);
void EndFaceChibiSpr(void);
void PutFace80x72(u16 * tm, int fid, int chr, int pal);
void EndFacePtr(ProcPtr proc);
void EndFaceIn8Frames(struct FaceProc * proc);
void StartFaceFadeIn(struct FaceProc * proc);
void StartFaceFadeOut(struct FaceProc * proc);
u8 const * GetFactionFaceImg(int fid);
void ApplyFactionFacePal(int fid, int pal);

struct ProcPrepDiscardScreen {
	PROC_HEADER_EXT(struct PrepMenuProc);

    /* 29 */ u8 unk_29;

	STRUCT_PAD(0x2A, 0x2C);

	/* 2C */ u8 in_arena;
	/* 2D */ u8 unk_2D;
	/* 2E */ u8 y;
	/* 2F */ u8 unk_2F;
	/* 30 */ u8 x;
    /* 31 */ u8 unk_31;

    STRUCT_PAD(0x32, 0x45);

    /* 45 */ u8 unk_45;

    STRUCT_PAD(0x46, 0x50);

    /* 50 */ u16 unk_50;
    /* 52 */ u16 unk_52;

    /* 54 */ struct Unit *unit1;
    /* 58 */ struct Unit *unit2;
};
extern struct Text gPrepTexts1[10];
extern struct Text gPrepTexts2[10];
extern struct Text gPrepTexts3[2];

void StartEquipInfoWindow(ProcPtr parent, struct Unit * unit, int x, int y);
void PrepDiscardUpdateInfoWindow(struct ProcPrepDiscardScreen *proc);

// void func_fe6_0807D6C0(int, struct Unit *uni);
void PrepPutText(struct Text *th, u16 *tm, int color, int x, const char *str);
extern u8 const Img_Prep_083198CC[]; // img
extern u8 const Img_Prep_0831AB1C[]; // img
extern u16 const Pal_Sio_0831AABC[]; // pal (x2)
ProcPtr NewPrepDiscardHand(ProcPtr parent);
void LoadHelpBoxGfx(void * vram, int pal);
ProcPtr NewSallyCir2(ProcPtr parent, i8 direct);

struct MenuScrollBarProc {
    PROC_HEADER;

    /* 2A */ u8 unk_29;
    /* 2A */ u8 xBase;
    /* 2B */ u8 unk_2B;
    /* 2C */ u8 yBase;
    /* 2D */ u8 numSegments;
    /* 2E */ u16 currentSegment;
    /* 30 */ u16 prevSegment;
    /* 32 */ u16 numTotalRows;
    /* 34 */ u8 numVisibleRows;
    /* 36 */ u16 oam2Chr;
    /* 38 */ u16 oam2Pal;
    /* 3A */ u8 topArrowFrameIdx;
    /* 3B */ u8 bottomArrowFrameIdx;
};

void MenuScroll_Init(struct MenuScrollBarProc *proc);
void MenuScroll_Loop(struct MenuScrollBarProc *proc);
ProcPtr StartMenuScrollBar(ProcPtr parent);
void SetPrepMenuScrollBarBaseInfo(struct MenuScrollBarProc *proc,
        int x, int b, int y, int seg, int total, int len);
void SetPrepMenuScrollBarOam2Info(struct MenuScrollBarProc *proc, int chr, u8 pal);
void PrepPutText(struct Text *th, u16 *tm, int color, int x, const char *str);
void func_fe6_080823A0(u8 * a, u16 * b);

enum {
    PREP_SUB2U2D_0,
    PREP_SUB2U2D_1,
    PREP_SUB2U2D_2,
    PREP_SUB2U2D_3,
    PREP_SUB2U2D_4,
};

struct PrepSubItemProc {
    PROC_HEADER_EXT(struct PrepMenuProc);

    /* 29 */ u8 unk29;
    /* 2A */ u8 unk2A;
    /* 2B */ u8 in_sel_action_menu;
    /* 2C */ u8 menu_scrolling_pos;
    /* 2D */ u8 unk2D;
    /* 2E */ u8 hand_disp_y;
    /* 2F */ u8 hand_disp_x;
    /* 30 */ u8 unk30;
    /* 31 */ u8 sel_action; /* save/load.. */
    /* 32 */ u8 unk_32[9];
    /* 3B */ u8 unk_3B[9];
    /* 44 */ u8 unk_44;
    /* 45 */ u8 convoy_scrolling_pos;
    /* 46 */ u8 convoy_page;
    /* 47 */ u8 unk_47;
    /* 48 */ u8 unk_48;
    /* 49 */ u8 unk_49;
    /* 4A */ u8 unk_4A;
    /* 4B */ u8 unk4B;
    /* 4C */ u8 unk_4C;
    /* 4D */ u8 unk_4D;
    /* 4E */ u16 unk_4E;
    /* 50 */ u16 menu_scroll_bar_disp_idx;
    /* 52 */ u16 timer;
    /* 54 */ struct Unit *units[2];
    /* 5C */ ProcPtr subproc1;
    /* 60 */ ProcPtr proc_menuscroll;
};

extern int gPrepSubMenuIcons[20];
enum prepscreen_videoalloc {
    BGCHR_PREPMENU_230 = 0x230,
    BGCHR_PREPMENU_240 = 0x240,
    BGCHR_PREPMENU_280 = 0x280,
    BGCHR_PREPMENU_328 = 0x328,
    BGCHR_PREPMENU_368 = 0x368,
    BGCHR_PREPMENU_700 = 0x700,

    OBCHR_PREPMENU_080 = 0x080,
    OBCHR_PREPMENU_240 = 0x240,
    OBCHR_PREPMENU_280 = 0x280,
    OBCHR_PREPMENU_380 = 0x380,
    OBCHR_PREPMENU_390 = 0x390,

    BGPAL_PREPMENU_2 = 0x02,
    BGPAL_PREPMENU_3 = 0x03,
    BGPAL_PREPMENU_A = 0x0A,
    BGPAL_PREPMENU_E = 0x0E,
    BGPAL_PREPMENU_F = 0x0F,

    OBPAL_PREPMENU_0 = 0x00,
    OBPAL_PREPMENU_2 = 0x02,
    OBPAL_PREPMENU_4 = 0x04,
    OBPAL_PREPMENU_5 = 0x05,
    OBPAL_PREPMENU_6 = 0x06,
    OBPAL_PREPMENU_8 = 0x08,
    OBPAL_PREPMENU_D = 0x0D,
};

enum proclabel_prep_subitem_screen {
    PL_PREP_SUBITEM_VIEWALL = 0,
    PL_PREP_SUBITEM_TRADE = 2,
    PL_PREP_SUBITEM_CONVOY = 4,
    PL_PREP_SUBITEM_5 = 5,
    PL_PREP_SUBITEM_6 = 6,
    PL_PREP_SUBITEM_7 = 7,
};
extern u8 const Img_Prep_08319EE8[];
extern u8 const Img_Prep_0831A088[];
extern u16 const Pal_Prep_0831A248[];
void func_fe6_0807E544(struct PrepSubItemProc *proc);
bool CheckValidLinkArenaItemSwap(struct Unit *unit1, int slot1, struct Unit *unit2, int slot2);
bool CheckValidLinkArenaItemSupply(struct Unit *unit, int slot, int weapon);
bool PrepCanUnitPutItemToSupply(struct Unit *unit, int slot);
ProcPtr StartPrepErrorHelpbox(int x, int y, int msg, ProcPtr parent);

#define MSG_6C2 0x6C2

#define EKR_LVUP_UI_BASE 0x50
void EkrLvup_InitStatusText(struct ProcEkrlvup *proc);
void Ekrlvup_PutBaseStatus(struct ProcEkrlvup *proc, int index);
void Ekrlvup_PutJobname(struct ProcEkrlvup *proc);
void Ekrlvup_PutPreLevel(struct ProcEkrlvup *proc);
struct Proc08606254 {
    PROC_HEADER;

    /* 29 */ u8 unk_29;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ i16 unk_2C;
    /* 2E */ i16 unk_2E;

    STRUCT_PAD(0x30, 0x32);

    /* 32 */ u16 unk_32;
    /* 34 */ u16 unk_34;

    STRUCT_PAD(0x36, 0x3A);

    /* 3A */ u16 unk_3A;
    /* 3C */ u16 unk_3C;

    STRUCT_PAD(0x40, 0x44);

    /* 44 */ const AnimScr *scr;
    /* 48 */ int unk_48;
    /* 4C */ int unk_4C;
};

struct Proc08606254 *func_fe6_0805E140(int a, int b, AnimScr *scr, int c);
void func_fe6_0805E180(struct Proc08606254 *proc);
extern u8 const Img_BanimSnipperFBallistaIntro[];
extern u8 const Img_LevelUpFrame[]; // img (stat gains)
extern u8 const Tm_LevelUpFrame[]; // tiles (stat gains)
extern u16 const Pal_LevelUpFrame[]; // pal (stat gains)
extern u8 const Img_LvupApfx[];
extern u16 const Pal_LvupApfx[];
extern CONST_DATA AnimScr AnimScr_EkrlvupfxUnk_085CCC40[];
extern struct FaceVramEnt CONST_DATA FaceConfig_EkrLevelup[];
extern u8 gBuf_Banim[];

#define ANFMT_FORCESPRITE 0x00000000
#define ANFMT_NOT_FORCESPRITE 0x80000000
#define ANFMT_PTRINS 0x40000000
#define ANFMT_INST_TYPE(type) (((type) & 0x3F) << 24)
#define ANIMFMT_OAM_DURATION(duration) (((duration) & 3) + ((duration & 0x3C) << 26))

#define ANINS_IS_NOT_FORCESPRITE(instruction) ((instruction) & ANFMT_NOT_FORCESPRITE)
#define ANINS_IS_PTRINS(instruction) ((instruction) & ANFMT_PTRINS)
#define ANINS_FORCESPRITE_GET_ADDRESS(instruction) ((void*) ((instruction) &~ 0xF0000003))
#define ANINS_FORCESPRITE_GET_DELAY(instruction) ((((instruction) >> 26) & 0x1C) + ((instruction) & 3))
#define ANINS_PTRINS_GET_TYPE(instruction) (0x3 & ((instruction) >> 28))
#define ANINS_PTRINS_GET_ADDRESS(instruction) ((void*) ((instruction) &~ 0xF0000000))
#define ANINS_GET_TYPE(instruction) (0x3F & ((instruction) >> 24))
#define ANINS_WAIT_GET_DELAY(instruction) ((instruction) & 0xFFFF)
#define ANINS_MOVE_GET_XOFF(instruction) (((int) ((instruction) << 24)) >> 24)
#define ANINS_MOVE_GET_YOFF(instruction) (((int) ((instruction) << 16)) >> 24)
#define ANINS_MOVE_GET_DELAY(instruction) (((instruction) >> 16) & 0xFF)
#define ANINS_COMMAND_GET_ID(instruction) (0xFF & (instruction))
#define ANINS_FRAME_GET_DELAY(instruction) ((instruction) & 0xFFFF)
#define ANINS_FRAME_GET_UNK(instruction) ((instruction) >> 16) & 0xFF
struct ProcEkrDispUP {
    PROC_HEADER;

    /* 29 */ u8 sync;
    /* 2A */ u8 asnyc;

    STRUCT_PAD(0x2B, 0x32);

    /* 32 */ u16 x; /* unused actually */

    STRUCT_PAD(0x34, 0x3A);

    /* 3A */ u16 y;

    STRUCT_PAD(0x3C, 0x4C);

    /* 4C */ u32 unk4C;
    /* 50 */ u32 unk50;
};

#define gBg0Tm2D ((u16 (*)[1])gBg0Tm)

void NewEkrDispUP(void);
void EndEkrDispUP(void);
void EkrDispUpClear4C50(void);
void EkrDispUpSet4C50(void);
void EkrDispUpSet4C(void);
void EkrDispUpSet50(void);
void EkrDispUP_SetPositionUnsync(u16 x, u16 y);
void EkrDispUP_SetPositionSync(u16 x, u16 y);
void SyncEkrDispUP(void);
void UnsyncEkrDispUP(void);
void AsyncEkrDispUP(void);
void UnAsyncEkrDispUP(void);
void EkrDispUP_Loop(struct ProcEkrDispUP *proc);
extern u8 const Tsa_EkrDispUP_08112968[];
extern u8 const Tsa_EkrDispUP_08112A1C[];
void FillBGSafelyRect(u16 * tm, u16 width, u16 height, int pal, int chr);
void M4aPlayWithPostionCtrl(int songid, int x, int flag);
void EfxPlaySEwithCmdCtrl(struct Anim *anim, int cmd);
u16 GetEfxSoundType1FromTerrain(u16 terrain);
int IsAnimSoundInPosition(struct Anim *anim);
u16 GetEfxSoundType2FromBaseCon(u16 basecon);
enum efx_sound_type {
    EFX_SOUNDT_0,
    EFX_SOUNDT_1,
    EFX_SOUNDT_2,
    EFX_SOUNDT_3,
    EFX_SOUNDT_4,
    EFX_SOUNDT_5,
    EFX_SOUNDT_6,
};
extern CONST_DATA u16 *gBanimBossBGMs[];
extern CONST_DATA u16 *gBanimSongTable1[];
extern CONST_DATA u16 *gBanimSongTable2[];
extern CONST_DATA u16 *gBanimSongTable3[];
enum efx_staff_type {
    EFX_STAFF_NOPE,

    EFX_STAFF_HEAL,
    EFX_STAFF_OFFSENSIVE,
};
extern EWRAM_OVERLAY(banim) int gEkrMainBgmPlaying;
extern EWRAM_OVERLAY(banim) int gEfxSoundSeExist;
void EfxOverrideBgm(int songid, int volume);

extern u16 const Pal_Prep_0831B068[];
extern CONST_DATA u16 Sprite_08679326[];
extern u16 CONST_DATA *Sprites_08679330[];
extern u16 gPrep_Unk_02016368;
extern u16 gPrep_Unk_0201636A;
void func_fe6_0807DE60(void);
struct PrepConvoyData {
    union {
        struct {
            u8 unk_00;
            u8 unk_01;
            u16 item;
        } info;

        u32 raw;
    } u;
};
extern struct PrepConvoyData gPrepConvoyData[];
extern u8 CONST_DATA gUnk_08679354[20];
void func_fe6_0807D358(struct PrepSubItemProc *proc);
// func_fe6_0807D4A8
void func_fe6_0807D834(int convoy_page);
void func_fe6_0807D9E4(struct Text *text, int, struct Unit *unit, int off, int);
extern u16 gPrepAllItemsCount;
void func_fe6_0807DDC8(u8 x, u8 y);
int GetItemIcon(int item);
int GetItemWeaponEffect(int item);
int GetItemEffect(int item);
int GetItemCostPerUse(int item);
int GetItemMaxValue(int item);
int GetItemHpBonus(int item);
int GetItemPowBonus(int item);
int GetItemSklBonus(int item);
int GetItemSpdBonus(int item);
int GetItemDefBonus(int item);
int GetItemResBonus(int item);
int GetItemLckBonus(int item);
int CreateItem(int item);
bool CanUnitUseWeapon(struct Unit * unit, int item);
bool CanUnitUseStaff(struct Unit * unit, int item);
void DrawItemMenuLine(struct Text * text, int item, bool is_usable, u16 * tm);
void DrawItemMenuLineLong(struct Text * text, int item, bool is_usable, u16 * tm);
void DrawItemMenuLineNoColor(struct Text * text, int item, u16 * tm);
void DrawItemStatScreenLine(struct Text * text, int item, bool is_usable, u16 * tm);
u16 GetItemAfterUse(int item);
u16 GetUnitEquippedWeapon(struct Unit * unit);
int GetUnitEquippedWeaponSlot(struct Unit * unit);
bool CanItemReachDistance(int item, int distance);
void UnitEquipItemSlot(struct Unit * unit, int item_slot);
bool IsItemEffectiveAgainst(u16 item, struct Unit * unit);
char const * GetItemRangeString(int item);
int GetWeaponLevelFromExp(int wexp);
char const * GetWeaponLevelStringFromExp(int wexp);
int GetWeaponLevelSpecialCharFromExp(int wexp);
char const * GetItemKindString(int kind);
bool IsItemDisplayUseable(struct Unit * unit, int item);
bool Unused_08016C50(struct Unit * unit, int item);
int GetUnitItemHealAmount(struct Unit * unit, int item);
int FindUnitItemSlot(struct Unit * unit, int iid);
bool IsItemStealable(int item);
bool IsItemRepairable(int item);
int GetItemReach(int item);
int GetUnitWeaponReach(struct Unit * unit, int item_slot);
int GetUnitItemUseReach(struct Unit * unit, int item_slot);
int GetUnitStaffReach(struct Unit * unit);
int GetTotalConvoyItemsValue(void);
int GetTotalUnitItemsValue(void);
int GetTotalAsset(void);
int GetItemIid(int item);
char const * GetItemName(int item);
int GetItemDescMsg(int item);
int GetItemUseDescMsg(int item);
int GetItemKind(int item);
int GetItemAttributes(int item);
int GetItemUses(int item);
int GetItemMaxUses(int item);
int GetItemMight(int item);
int GetItemHit(int item);
int GetItemWeight(int item);
int GetItemCrit(int item);
int GetItemValue(int item);
int GetItemMinRange(int item);
int GetItemMaxRange(int item);
int GetItemEncodedRange(int item);
int GetItemRequiredExp(int item);
u8 const * GetItemEffectiveness(int item);
void func_fe6_0807D2F4(int icon);

#define MSG_SHOP_00 0x02C3
#define MSG_SHOP_01 0x02C4
#define MSG_SHOP_02 0x02C5
#define MSG_SHOP_03 0x02C6
#define MSG_SHOP_04 0x02C7
#define MSG_SHOP_05 0x02C8
#define MSG_SHOP_06 0x02C9
#define MSG_SHOP_07 0x02CA
#define MSG_SHOP_08 0x02CB
#define MSG_SHOP_09 0x02CC
#define MSG_SHOP_0A 0x02CD
#define MSG_SHOP_0B 0x02CE
#define MSG_SHOP_0C 0x02CF
#define MSG_SHOP_0D 0x02D0
#define MSG_SHOP_0E 0x02D1
#define MSG_SHOP_0F 0x02D2
#define MSG_SHOP_10 0x02D3
#define MSG_SHOP_11 0x02D4
#define MSG_SHOP_12 0x02D5
#define MSG_SHOP_13 0x02D6
#define MSG_SHOP_14 0x02D7
#define MSG_SHOP_15 0x02D8
#define MSG_SHOP_16 0x02D9
#define MSG_SHOP_17 0x02DA
#define MSG_SHOP_18 0x02DB
#define MSG_SHOP_19 0x02DC
#define MSG_SHOP_1A 0x02DD
#define MSG_SHOP_1B 0x02DE
#define MSG_SHOP_1C 0x02DF
#define MSG_SHOP_1D 0x02E0
#define MSG_SHOP_1E 0x02E1
#define MSG_SHOP_1F 0x02E2
#define MSG_SHOP_20 0x02E3
#define MSG_SHOP_21 0x02E4
#define MSG_SHOP_22 0x02E5
#define MSG_SHOP_23 0x02E6
#define MSG_SHOP_24 0x02E7
#define MSG_SHOP_25 0x02E8
#define MSG_SHOP_26 0x02E9
#define MSG_SHOP_27 0x02EA
#define MSG_SHOP_28 0x02EB
#define MSG_SHOP_29 0x02EC
#define MSG_SHOP_2A 0x02ED
#define MSG_SHOP_2B 0x02EE
#define MSG_SHOP_2C 0x02EF
#define MSG_SHOP_2D 0x02F0
#define MSG_SHOP_2E 0x02F1
#define MSG_SHOP_2F 0x02F2

void InitShopSellStatus(struct ProcShopInit * proc);
void DrawShopItemPriceLine(struct Text * text, int item, struct Unit *unit, u16 * tm);
void DrawShopItemLine(struct Text * text, int item, struct Unit *unit, u16 * tm);
u16 GetItemPurchasePrice(struct Unit *, int);
u16 GetItemSellPrice(int);
bool IsItemSellable(int item);
void GoldBox_OnLoop(struct ProcShop *proc);
void InitShopScreenConfig(void);
void _DisplayShopUiArrows(void);
void DisplayShopUiArrows(void);
// void UnpackUiVArrowGfx(int, int);
void DisplayUiVArrow(int, int, u16, int);
void HandleShopBuyAction(struct ProcShop *proc);
int ShopTryMoveCursor(int pos, int pre, bool scroll);
void UpdateShopItemCounts(struct ProcShop *proc);
void ShopInitTexts_OnSell(struct ProcShop *proc);
void DisplayGoldBoxText(u16 * tm);
int GetGold(void);
void SetGold(int amount);
void AddGold(int amount);
extern struct ProcScr CONST_DATA ProcScr_ShopBuyInit[];
extern struct ProcScr CONST_DATA ProcScr_ShopSellInit[];

extern const char String_Prep_083272AC[];
extern const char String_Prep_083272B8[];
extern const char String_Prep_083272C4[];

#define MSG_C47 0xC47
ProcPtr func_fe6_0807D2E0(ProcPtr parent);
void func_fe6_0807D4A8(u8 x, u8 y, int item, ProcPtr proc);
void func_fe6_0807FBE8(struct PrepSubItemProc *proc);
void func_fe6_08071B80(int x, int y, int msg, ProcPtr parent);
void PrepAllItems_PutTotalNum(u8 x, u8 y);
extern u16 gPrepMenuScrollPos;
void func_fe6_0807E06C(bool act);

struct PrepItemListEnt {
    union {
        struct {
            u8 pid;
            u8 slot;
            u16 item;
        } info;

        u32 raw;
    } u;
};
extern struct PrepItemListEnt gPrepItemListData[];
void PrepAllItems_PutPName(struct Text *text, u8 pid, u8 x, u8 y);
void func_fe6_0807D4A8(u8 x, u8 y, int item, ProcPtr proc);
ProcPtr func_fe6_0807D2E0(ProcPtr parent);
ProcPtr func_fe6_0807D16C(ProcPtr parent);

#define ICON_ITEM_KIND_BASE 0x70
struct ProcPrepSubItemSubfx {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x34);

    /* 34 */ struct Text texts[3];
};
struct ProcPrepSubItemfx {
    PROC_HEADER_EXT(struct PrepSubItemProc);

    /* 2A */ u16 timer;
    /* 2C */ struct ProcPrepSubItemSubfx *procfx;
    /* 30 */ int obj_offset;
};
#define BGPAL_PREPMENU_ICON 4
extern const char String_Prep_0832726C[];
extern const char String_Prep_08327274[];
extern const char String_Prep_0832727C[];
extern const char String_Prep_08327284[];
extern const char String_Prep_0832728C[];
void PrepSubItem_InsertIcon(int icon);
bool IsItemDisplayUsable(struct Unit * unit, int item);

extern EWRAM_OVERLAY(0) i16 gAuguryIndex;
extern EWRAM_OVERLAY(0) u16 unk_020169CE;
extern EWRAM_OVERLAY(0) u16 unk_020169D0;
extern EWRAM_OVERLAY(0) u16 unk_020169D2;
extern EWRAM_OVERLAY(0) u8 gAuguryStatus[7];
extern EWRAM_OVERLAY(0) u8 gCurrentAuguryIndex;
extern EWRAM_OVERLAY(0) i8 gAuguryChoice;
extern EWRAM_OVERLAY(0) struct Text gAuguryTexts[7];
extern EWRAM_OVERLAY(0) i16 ProcAugury_0868AFF0_EndEnable;
extern EWRAM_OVERLAY(0) i16 unk_02016A1A;
extern EWRAM_OVERLAY(0) u16 gPlayRankBg0Offset;
extern EWRAM_OVERLAY(0) u16 gPlayRankBg1Offset;
extern EWRAM_OVERLAY(0) u16 gPlayRankDispLine;
extern EWRAM_OVERLAY(0) u16 gPlayRankBg0MoveStep;
extern EWRAM_OVERLAY(0) u16 gPlayRankCurChapter;
extern EWRAM_OVERLAY(0) u16 unk_02016A26;
extern EWRAM_OVERLAY(0) u16 gPlayRankLayer;
extern EWRAM_OVERLAY(0) u16 gPlayRankMissonObjSelect;
extern EWRAM_OVERLAY(0) u8 unk_02016A2C;
extern EWRAM_OVERLAY(0) u8 gPlayRankMissionCompleted;
extern EWRAM_OVERLAY(0) u16 gPlayRanks[7];
extern EWRAM_OVERLAY(0) u8 gCreditInfoDispStep;
extern EWRAM_OVERLAY(0) u8 unk_02016A3D;
extern EWRAM_OVERLAY(0) u8 unk_02016A3E;
extern EWRAM_OVERLAY(0) u8 unk_02016A3F;
extern EWRAM_OVERLAY(0) u8 gEndingStep;
extern EWRAM_OVERLAY(0) u8 gEndingDispType;
extern EWRAM_OVERLAY(0) u8 unk_02016A42;
extern EWRAM_OVERLAY(0) u8 unk_02016A43[0x80];
extern EWRAM_OVERLAY(0) u8 unk_02016AC3[0x81];
extern EWRAM_OVERLAY(0) bool unk_02016B44;
extern EWRAM_OVERLAY(0) struct Text Texts_02016B48[6];
extern EWRAM_OVERLAY(0) struct Text Texts_02016B78[2];
extern EWRAM_OVERLAY(0) u8 gCurEndingUid;
extern EWRAM_OVERLAY(0) u8 EndingUid_02016B89;
extern EWRAM_OVERLAY(0) u8 unk_02016B8A;
extern EWRAM_OVERLAY(0) ProcPtr gpAuguryFaceProc;
extern EWRAM_OVERLAY(0) u16 unk_02016B90[2];
extern EWRAM_OVERLAY(0) u16 unk_02016B94[0x8][0x10];
extern EWRAM_OVERLAY(0) u16 unk_02016C94[0x8][0x10];

struct ProcharacterEnding2 {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x2C);

	/* 2C */ int timer;
};
extern u8 const Tsa_EndingPInfoBG[];
extern IWRAM_DATA ProcPtr gEndingInfoFaceProc;
void HBlank_Ending_DyadPInfo(void);
extern CONST_DATA struct ProcScr ProcScr_EndingPInfoFadeOut[];
void Ending_DrawPInfoTitle(u8 x, u8 y, struct Unit *unit, u8 type);
u8 PopNextEnding2Person(u8 pos);

struct ProcClassDemoStatus;

struct ProcOpInfo {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x2A);

	/* 2A */ u16 fade_speed;
	/* 2C */ u8 mode;
	/* 2D */ u8 class_set;
	/* 2E */ u8 unk_2E;
	/* 2F */ u8 unk_2F;
	/* 30 */ u8 unk_30;
	/* 31 */ u8 unk_31, unk_32;

	/* 34 */ ProcPtr subproc1;
	/* 38 */ ProcPtr anim_proc;
	/* 3C */ int proc_run_time;
	/* 40 */ int proc_start_time;
};

struct ProcClassDemoMain {
	PROC_HEADER;

	/* 2A */ u16 x;
	/* 2C */ u16 unk_2C;
	/* 2E */ u16 unk_2E;
	/* 30 */ u8 unk_30;
	/* 31 */ u8 index;
	/* 34 */ struct ProcOpInfo *opinfo;
	/* 38 */ u8 unit_status[6];
	/* 3E */ u8 unk_3E;
	/* 40 */ struct ProcClassDemoStatus *procfx;
	/* 44 */ u8 anim_x;
};

struct ProcClassDemoStatus {
	PROC_HEADER;

	/* 2A */ u16 timer;

	STRUCT_PAD(0x2C, 0x30);

	/* 30 */ struct ProcClassDemoMain *gauge;
	/* 34 */ u8 ch_pos[14];
	/* 42 */ u8 unk_42;
	/* 43 */ u8 unk_43;
};

enum OpInfoModeIndex {
	OPINFO_STATE_0,
	OPINFO_STATE_IDLE,
	OPINFO_STATE_2,
	OPINFO_STATE_3,
};
struct Unk_086905F8 {
	u8 unk_00;
	u8 unk_01;
	u16 unk_02;
};

extern struct Unk_086905F8 gUnk_086905F8[];

struct EkrMainMiniDesc {
    /* 00 */ u8 valid;
    /* 01 */ u8 faction_pal;
    /* 02 */ u16 x, y;
    /* 06 */ u16 bid;

    // i16 chara_pal;

    /* 08 */ u16 round_type;
    /* 0A */ u16 pos;
    /* 0C */ u16 oam2_chr;
    /* 0E */ u16 oam2_pal;
    /* 10 */ struct Anim *anim1, *anim2;
    /* 18 */ u16 *img_buf;
    /* 1C */ u16 *pal_buf;
    /* 20 */ u16 *oam_buf;
    /* 24 */ u8  *scr_buf;
    /* 28 */ const u16 *img_sheet;
    /* 2C */ void *magicfx_desc;
    /* 30 */ ProcPtr proc;
};
bool EkrMainMini_CheckBlocking(struct EkrMainMiniDesc *desc);
void EkrMainMini_EndBlock(struct EkrMainMiniDesc *desc);
bool EkrMainMini_CheckDone(struct EkrMainMiniDesc *desc);
void EkrMainMini_UpdateAnim(struct EkrMainMiniDesc *desc);
extern struct EkrMainMiniDesc OpEkrMiniDesc;

struct ClassDisplayFont {
	u16 *sprite;
	char ch;
	u8 x_start, width, c;
};

extern CONST_DATA struct ClassDisplayFont gClassDisplayFont1[];
extern const char * CONST_DATA gClassDemoNames[];
extern u8 const Img_ClassDemo_0835B040[];
extern u16 const Pal_ClassDemo_0835C034[];
struct Vec1u
{
    u8 x, y;
};
extern struct Vec1u unk_opinfo_0200FF54[2];
extern u8 const Img_ClassDemoStatus_Fonts[];
extern u16 const Pal_ClassDemoStatus_Fonts[];
struct ProcEndingPinfoText {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x54);

	int text_x;
};
extern EWRAM_OVERLAY(0) u8 gEndingUid1;
extern EWRAM_OVERLAY(0) u8 gEndingUid2;
struct PidStats * GetPidStats(fu8 pid);
extern struct ProcScr CONST_DATA ProcScr_TypeWritter[];
struct PidEndingInfo {
	/* 00 */ u16 msg_00;
	/* 02 */ u16 msg_02;
	/* 04 */ u16 msg_04;
	/* 06 */ u16 msg_06;
};

extern CONST_DATA struct PidEndingInfo gPersonEndingInfo[];
struct ProcTypeWritter
{
    /* 00 */ PROC_HEADER;

    /* 2C */ char const * str_it;
    /* 30 */ struct Font * font;
    /* 34 */ struct Text * text[6];
    /* 4C */ STRUCT_PAD(0x4C, 0x5C);
    /* 5C */ i16 line;
    /* 5E */ i16 clock;
    /* 60 */ i16 clock_interval;
    /* 62 */ i16 chars_per_print;
};
extern EWRAM_DATA i8 gEndingUids[55];
#define UNIT_IS_VALID(unit) ((unit) && (unit)->pinfo)
extern i8 EWRAM_DATA gEndingSceneDispEnPidList[];

extern EWRAM_OVERLAY(0) u16 gEndingPInfoPal1[8][0x10];
extern EWRAM_OVERLAY(0) u16 gEndingPInfoPal2[8][0x10];

struct ProcEndingCredit {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x64);

	i16 timer;
};
struct CreditInfo {
	const char *work;
	const char *name;
	u8 x, y;
	u16 _pad_;
};

extern CONST_DATA struct CreditInfo gCreditInfo[];
void SetupCreditCharacterGlyphs(void);
void PutEndingCreditTm(u16 *tm, u16 oam2, u8 w, u8 h);
void EndingCredit_Reinit(struct ProcEndingCredit *proc);
void GameCredit_Init(struct ProcEndingCredit *proc);
void EndingCredit_ReinitType2(struct ProcEndingCredit *proc);
void EndingCredit_ReinitType0(struct ProcEndingCredit *proc);
u8 func_fe6_0808FF04(struct ProcEndingfx *proc, int b, int c);
int func_fe6_0808FF9C(int a, int b, int c);
void func_fe6_0808FFE0(struct ProcEndingCredit *proc, int step);
void func_fe6_080902F0(int step);
// func_fe6_080904F0
// func_fe6_08090508
void func_fe6_0809058C(void);
// func_fe6_080905A0
void func_fe6_0809060C(void);
void EndingStepAdvance(void);
// func_fe6_08090630
// func_fe6_08090644
// func_fe6_08090660
// EndingCredit_Init
// EndingCredit_WaitingDisp
// EndingCredit_Ending
// EndingCopyRight_Init
// EndingCopyRight_Loop
void func_fe6_08090854(u16 *tm, int oam2);
extern u8 gEndingDoneFlag;

enum game_ending_flags {
	GAME_ENDING_FLAG0 = 1 << 0,
	GAME_ENDING_FLAG1 = 1 << 1,
	GAME_ENDING_FLAG2 = 1 << 2,
	GAME_ENDING_FLAG3 = 1 << 3,
	GAME_ENDING_FLAG4 = 1 << 4,
	GAME_ENDING_FLAG5 = 1 << 5,
};
extern EWRAM_OVERLAY(0) u8 gGameEndingFlag;

struct ProcGameEnding {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x64);

	i16 timer;
};
int func_fe6_08090630(void);
enum ending_disp_type {
	ENDING_DISP_0 = 0,
	ENDING_DISP_1,
	ENDING_DISP_2,
	ENDING_DISP_3,
};
extern CONST_DATA struct ProcScr ProcScr_0868BB3C[];
extern CONST_DATA struct ProcScr ProcScr_0868BB5C[];
extern CONST_DATA struct ProcScr ProcScr_0868BB7C[];
extern CONST_DATA struct ProcScr ProcScr_EndingCredit[];
extern CONST_DATA struct ProcScr ProcScr_EndingCopyRight[];
extern CONST_DATA struct ProcScr ProcScr_EndingStep1_PutaMonologue[];
extern CONST_DATA struct ProcScr ProcScr_Fin[];
// extern CONST_DATA ??? gUnk_0868BCE4
extern CONST_DATA struct ProcScr ProcScr_0868BDB4[];
extern CONST_DATA struct ProcScr ProcScr_Ending[];
extern CONST_DATA struct ProcScr ProcScr_GameCredit[];
extern CONST_DATA struct ProcScr ProcScr_EndingP0InfoText[];
extern CONST_DATA struct ProcScr ProcScr_EndingPInfo_x1[];
extern CONST_DATA struct ProcScr ProcScr_EndingP1InfoText[];
extern CONST_DATA struct ProcScr ProcScr_EndingP2InfoText[];
extern CONST_DATA struct ProcScr ProcScr_EndingPInfo_x2[];
extern CONST_DATA struct ProcScr ProcScr_EndingFacePosCtrl[];
extern CONST_DATA struct ProcScr ProcScr_PlayRank[];
u8 PopNextEndingPerson(void);
u8 PopNextEnding2Person(u8 pos);
bool func_fe6_08090BA0(void);
void EndEndingBgmLooper(void);
void SetupEndingPInfo2Uids(void);
extern u8 const Img_EndingFighterText[];
extern u16 BgConf_0868BA24[];
extern u16 const Pal_Fin[];
extern u8 const Img_MonologueBG[];
extern u8 const Tsa_MonologueBG[];
extern u16 Tsa_MonologueScrollingBG[30 * 40];
extern u16 const Pal_MonologueBG[];
# define INT16_MAX		(32767)
void BanimSetBg2Position(int);
struct EkrTerrainfxDesc {
    /* 00 */ i16 terrain_l;
    /* 02 */ i16 pal_l;
    /* 04 */ i16 chr_l;
    /* 06 */ i16 terrain_r;
    /* 0A */ i16 pal_r;
    /* 08 */ i16 chr_r;
    /* 0C */ i16 distance;
    /* 0E */ i16 bg_index;

    /* 10 */ u16 unk_10;

    /* 14 */ struct ProcEkrSubAnimeEmulator *proc1;
    /* 18 */ struct ProcEkrSubAnimeEmulator *proc2;
    /* 1C */ int vram_offset;
    /* 20 */ u8 *img_buf;

    /* 24 */ int _pad_24;
};

extern struct EkrTerrainfxDesc gEkrTerrainfxDesc, gEkrLvupTerrainfxDesc;

void NewEkrTerrainfx(struct EkrTerrainfxDesc *desc); // FE8: sub_805AA68
void EndEkrTerrainfx(struct EkrTerrainfxDesc *desc);
void EkrTerrainfx_SetPosition(struct EkrTerrainfxDesc *desc, i16 x1, i16 y1, i16 x2, i16 y2);
void EkrTerrainfx_PutTiles(struct EkrTerrainfxDesc *desc);
void BanimCopyBgTM(i16 distance, i16 pos);
extern u32 gEfxHitQuakeExist;
void EkrGauge_Setxy323A(i16 x, i16 y);

struct ProcEfxAureolaOBJ {
    PROC_HEADER;

    /* 2B */ STRUCT_PAD(0x29, 0x2C);
    /* 2C */ i16 timer;
    /* 2E */ i16 step;
    /* 30 */ i16 unk30;
    /* 32 */ i16 unk32;
    /* 34 */ i16 unk34;
    /* 36 */ i16 unk36;
    /* 38 */ i16 unk38;
    /* 3A */ i16 unk3A;
    /* 3C */ i16 unk3C;
    /* 3E */ STRUCT_PAD(0x3E, 0x44);
    /* 44 */ u32 unk44;
    /* 48 */ u32 unk48;
    /* 4C */ u32 frame;
    /* 50 */ u32 speed;
    /* 54 */ i16 * unk54;
    /* 58 */ i16 ** unk58;
    /* 5C */ struct Anim *anim;
    /* 60 */ struct Anim *anim2;
    /* 64 */ struct Anim *anim3;
};

extern CONST_DATA struct ProcScr ProcScr_EfxAureolaOBJ2[];
extern CONST_DATA AnimScr AnimScr_EfxAureolaOBJ2_1[];
extern CONST_DATA AnimScr AnimScr_EfxAureolaOBJ2_2[];
extern CONST_DATA AnimScr AnimScr_EfxAureolaOBJ3_1[];
extern CONST_DATA AnimScr AnimScr_EfxAureolaOBJ3_2[];
extern CONST_DATA struct ProcScr ProcScr_EfxAureolaOBJ3Ctrl[];
void NewEfxAureolaOBJCtrl(struct Anim *anim, int);
// EfxAureolaOBJCtrl_Loop
void NewEfxAureolaOBJ2(struct Anim *anim, int);
// EfxAureolaOBJ2_Loop
void NewEfxAureolaOBJ3(struct Anim *anim);
// EfxAureolaOBJ3_Loop
void NewEfxAureolaOBJ3Ctrl(struct Anim *anim, int);
// EfxAureolaOBJ3Ctrl_Loop
void StartSpellAnimApocalypse(struct Anim *anim);
// EfxApocalypse_Loop
void NewEfxApocalypseBG(struct Anim *anim, int);
// EfxApocalypseBG_Loop
// NewEfxApocalypseBGCtrl
void NewEfxApocalypseBGCtrl(struct Anim *anim);
// EfxApocalypseBGCtrl_Loop
void NewEfxApocalypseBGCOL(struct Anim *anim);
// EfxApocalypseBGCOL_Loop
void NewEfxApocalypseOBJ(struct Anim *anim);
// EfxApocalypseOBJ_Loop1
// EfxApocalypseOBJ_Loop2
// EfxApocalypseOBJ_Loop3
// EfxApocalypseOBJ_Loop4
void NewEfxApocalypseBGCOL2(struct Anim *anim, int);
// EfxApocalypseBGCOL2_Loop
void NewEfxApocalypseDummy(struct Anim *anim, ProcPtr, int);
// EfxApocalypseDummy_Loop
void NewEfxApocalypseBgFlash1(struct Anim *anim, int, int);
// EfxApocalypseBgFlash1_Loop
void NewEfxApocalypseBgFlash2(struct Anim *anim, int, int);
// EfxApocalypseBgFlash2_Loop1
// EfxApocalypseBgFlash2_Loop2
void NewEfxApocalypseBG2(struct Anim *anim, int);
// EfxApocalypseBG2_Loop
void NewEfxApocalypseOBJ2(struct Anim *anim, int, int);
// EfxApocalypseOBJ2_Loop1
// EfxApocalypseOBJ2_Loop2
void NewEfxApocalypseOBJ3(struct Anim *anim, int);
int EfxGetCamMovDuration(void);
void NewEfxMagicQUAKE(struct Anim *anim, int duration);
extern i16 PosArray_EfxApocalypseBGCtrl[];

extern struct ProcScr ProcScr_EfxHazymoonOBJ2[];
extern u32 AnimScr_Common[];
extern i16 gEclipseAnimSpriteCoordinates[];
void NewEfxHazymoonOBJ3RND(struct Anim *anim, int x, int y);

void NewEfxFenrirBG(struct Anim * anim, int duration);
void NewEfxFenrirBGCOL(struct Anim * anim, int duration);
void NewEfxFenrirOBJ(struct Anim * anim, int duration);
void NewEfxFenrirBG2_A(struct Anim * anim);
void NewEfxFenrirBG2_B(struct Anim * anim);
void NewEfxFenrirOBJ2(struct Anim * anim);