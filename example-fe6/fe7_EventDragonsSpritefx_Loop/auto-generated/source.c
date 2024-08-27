
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long u64;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
typedef signed long s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef float f32;
typedef double f64;
typedef u8 bool8;
typedef u16 bool16;
typedef u32 bool32;
struct PlttData
{
  u16 r : 5;
  u16 g : 5;
  u16 b : 5;
  u16 unused_15 : 1;
};
struct OamData
{
  u32 y : 8;
  u32 affineMode : 2;
  u32 objMode : 2;
  u32 mosaic : 1;
  u32 bpp : 1;
  u32 shape : 2;
  u32 x : 9;
  u32 matrixNum : 5;
  u32 size : 2;
  u16 tileNum : 10;
  u16 priority : 2;
  u16 paletteNum : 4;
  u16 affineParam;
};
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
struct SioMultiCnt
{
  u16 baudRate : 2;
  u16 si : 1;
  u16 sd : 1;
  u16 id : 2;
  u16 error : 1;
  u16 enable : 1;
  u16 unused_11_8 : 4;
  u16 mode : 2;
  u16 intrEnable : 1;
  u16 unused_15 : 1;
  u16 data;
};
struct WaitCnt
{
  u16 sramWait : 2;
  u16 rom0_1stAcc : 2;
  u16 rom0_2ndAcc : 1;
  u16 rom1_1stAcc : 2;
  u16 rom1_2ndAcc : 1;
  u16 rom2_1stAcc : 2;
  u16 rom2_2ndAcc : 1;
  u16 phiTerminalClock : 2;
  u16 dummy : 1;
  u16 prefetchBufEnable : 1;
  u16 gamePakType : 1;
};
typedef s8 bool;
enum 
{
  false,
  true
};
typedef void (*Func)(void);
typedef void *ProcPtr;
typedef void (*ProcFunc)(ProcPtr proc);
struct Vec2
{
  s16 x;
  s16 y;
};
struct Vec2u
{
  u16 x;
  u16 y;
};
enum glb_pos
{
  POS_L = 0,
  POS_R = 1,
  POS_INVALID = -1
};
struct SMSHandle;
struct Unit;
struct UnitDefinition;
struct BattleHit;
struct SupportBonuses;
struct BattleAnimDef
{
  u16 wtype;
  u16 index;
};
void SoftReset(u32 resetFlags);
void SoundBiasReset(void);
void SoundBiasSet(void);
void RegisterRamReset(u32 resetFlags);
void VBlankIntrWait(void);
u16 Sqrt(u32 num);
u16 ArcTan2(s16 x, s16 y);
void CpuSet(const void *src, void *dest, u32 control);
void CpuFastSet(const void *src, void *dest, u32 control);
void BgAffineSet(struct BgAffineSrcData *src, struct BgAffineDstData *dest, s32 count);
void ObjAffineSet(struct ObjAffineSrcData *src, void *dest, s32 count, s32 offset);
void LZ77UnCompWram(const void *src, void *dest);
int Div(int, int);
int DivArm(int, int);
int DivRem(int, int);
void HuffUnComp(const void *src, void *dst);
void LZ77UnCompVram(const void *src, void *dest);
void RLUnCompWram(const void *src, void *dest);
void RLUnCompVram(const void *src, void *dest);
enum interpolate_method_idx
{
  INTERPOLATE_LINEAR,
  INTERPOLATE_SQUARE,
  INTERPOLATE_CUBIC,
  INTERPOLATE_POW4,
  INTERPOLATE_RSQUARE,
  INTERPOLATE_RCUBIC
};
int Interpolate(int method, int lo, int hi, int x, int end);
bool StringEquals(const char *strA, const char *strB);
void StringCopy(char *dst, const char *src);
void Decompress(const void *src, void *dst);
struct Proc;
struct ProcCmd
{
  short opcode;
  short dataImm;
  const void *dataPtr;
};
struct Proc
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  int x;
  int y;
  int unk34;
  int unk38;
  int unk3C;
  int unk40;
  u8 pad38[0x4A - 0x44];
  short unk4A;
  short unk4C;
  short unk4E;
  short unk50;
  u16 unk52;
  void *ptr;
  int unk58;
  int unk5C;
  int unk60;
  short unk64;
  short unk66;
  short unk68;
  short unk6A;
};
struct ProcFindIterator
{
  struct Proc *proc;
  const struct ProcCmd *script;
  int count;
};
extern struct Proc *gProcTreeRootArray[8];
void Proc_Init(void);
ProcPtr Proc_Start(const struct ProcCmd *script, ProcPtr parent);
ProcPtr Proc_StartBlocking(const struct ProcCmd *script, ProcPtr parent);
void Proc_End(ProcPtr proc);
void Proc_Run(ProcPtr proc);
void Proc_Break(ProcPtr proc);
ProcPtr Proc_Find(const struct ProcCmd *script);
void Proc_Goto(ProcPtr proc, int label);
void Proc_GotoScript(ProcPtr proc, const struct ProcCmd *script);
void Proc_SetMark(ProcPtr proc, int mark);
void Proc_SetEndCb(ProcPtr proc, ProcFunc func);
void Proc_ForAll(ProcFunc func);
void Proc_ForEach(const struct ProcCmd *script, ProcFunc func);
void Proc_ForEachMarked(int mark, ProcFunc func);
void Proc_BlockEachMarked(int mark);
void Proc_UnblockEachMarked(int mark);
void Proc_EndEachMarked(int mark);
void Proc_EndEach(const struct ProcCmd *script);
void Proc_BreakEach(const struct ProcCmd *script);
void Proc_SetRepeatCb(ProcPtr proc, ProcFunc func);
void Proc_FindBegin(struct ProcFindIterator *it, const struct ProcCmd *script);
ProcPtr Proc_FindNext(struct ProcFindIterator *it);
enum 
{
  UNIT_DEFINITION_ITEM_COUNT = 4
};
enum 
{
  UNIT_SUPPORT_MAX_COUNT = 7
};
enum item_slot_idx
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
  ITEMSLOT_BALLISTA = ITEMSLOT_INV_COUNT + 3
};
struct CharacterData
{
  u16 nameTextId;
  u16 descTextId;
  u8 number;
  u8 defaultClass;
  u16 portraitId;
  u8 miniPortrait;
  u8 affinity;
  u8 sort_order;
  s8 baseLevel;
  s8 baseHP;
  s8 basePow;
  s8 baseSkl;
  s8 baseSpd;
  s8 baseDef;
  s8 baseRes;
  s8 baseLck;
  s8 baseCon;
  u8 baseRanks[8];
  u8 growthHP;
  u8 growthPow;
  u8 growthSkl;
  u8 growthSpd;
  u8 growthDef;
  u8 growthRes;
  u8 growthLck;
  u8 _u23;
  u8 _u24;
  u8 _u25;
  u8 _u26;
  u8 _u27;
  u32 attributes;
  const struct SupportData *pSupportData;
  u8 visit_group;
  u8 _pad_[0x34 - 0x31];
};
extern struct CharacterData gCharacterData[];
struct ClassData
{
  u16 nameTextId;
  u16 descTextId;
  u8 number;
  u8 promotion;
  u8 SMSId;
  u8 slowWalking;
  u16 defaultPortraitId;
  u8 sort_order;
  s8 baseHP;
  s8 basePow;
  s8 baseSkl;
  s8 baseSpd;
  s8 baseDef;
  s8 baseRes;
  s8 baseCon;
  s8 baseMov;
  s8 maxHP;
  s8 maxPow;
  s8 maxSkl;
  s8 maxSpd;
  s8 maxDef;
  s8 maxRes;
  s8 maxCon;
  s8 classRelativePower;
  s8 growthHP;
  s8 growthPow;
  s8 growthSkl;
  s8 growthSpd;
  s8 growthDef;
  s8 growthRes;
  s8 growthLck;
  u8 promotionHp;
  u8 promotionPow;
  u8 promotionSkl;
  u8 promotionSpd;
  u8 promotionDef;
  u8 promotionRes;
  u32 attributes;
  u8 baseRanks[8];
  const void *pBattleAnimDef;
  const s8 *pMovCostTable[3];
  const s8 *pTerrainAvoidLookup;
  const s8 *pTerrainDefenseLookup;
  const s8 *pTerrainResistanceLookup;
  const void *_pU50;
};
struct Unit
{
  const struct CharacterData *pCharacterData;
  const struct ClassData *pClassData;
  s8 level;
  u8 exp;
  u8 aiFlags;
  s8 index;
  u32 state;
  s8 xPos;
  s8 yPos;
  s8 maxHP;
  s8 curHP;
  s8 pow;
  s8 skl;
  s8 spd;
  s8 def;
  s8 res;
  s8 lck;
  s8 conBonus;
  u8 rescue;
  u8 ballistaIndex;
  s8 movBonus;
  u16 items[ITEMSLOT_INV_COUNT];
  u8 ranks[8];
  u8 statusIndex : 4;
  u8 statusDuration : 4;
  u8 torchDuration : 4;
  u8 barrierDuration : 4;
  u8 supports[UNIT_SUPPORT_MAX_COUNT];
  s8 supportBits;
  u8 _u3A;
  u8 _u3B;
  struct SMSHandle *pMapSpriteHandle;
  u16 ai3And4;
  u8 ai1;
  u8 ai1data;
  u8 ai2;
  u8 ai2data;
  u8 _u46;
  u8 _u47;
};
int GetPlayerLeaderUnitId(void);
int GetItemIndex(int item);
void UnitHideIfUnderRoof(struct Unit *unit);
void CharStoreAI(struct Unit *unit, const struct UnitDefinition *uDef);
int GetUnitSupporterCount(struct Unit *unit);
int GetUnitSupporterInitialExp(struct Unit *unit, int num);
int GetAutoleveledStatIncrease(int growth, int levelCount);
int GetCurrentPromotedLevelBonus(void);
int GetStatIncrease(int growth);
void ClearUnitSupports(struct Unit *unit);
void sub_0802A21C(void);
void PidStatsAddMove(u8 pid, int amount);
void PidStatsSubFavval08(u8 pid);
void BeginTargetList(int x, int y);
void EnlistTarget(int x, int y, int uid, int extra);
void RenderMap(void);
void RenderMapForFade(void);
void RefreshEntityMaps(void);
void StartMapFade(bool locksGame);
void RefreshUnitSprites(void);
void sub_0807B32C(void);
void sub_080799E4(void);
char *DecodeMsg(int id);
void EnableAllLightRunes(void);
void DisableAllLightRunes(void);
void PidStatsRecordBattleResult(void);
void PidStatsAddBattleAmt(struct Unit *unit);
int GetBallistaItemAt(int xPos, int yPos);
int GetUnitSupportBonuses(struct Unit *unit, struct SupportBonuses *bonuses);
bool sub_08028620(struct Unit *unit);
void PidStatsAddExpGained(u8 pid, int expGain);
int GetMapChangeIdAt(int x, int y);
void MU_EndAll(void);
void BeginBattleMapAnims(void);
void WriteSuspendSave(int slot);
void StartBgmVolumeChange(int volume_from, int volume_to, int duration, ProcPtr parent);
void CloseHelpBox(void);
void LoadHelpBoxGfx(void *vram, int palId);
void StartHelpBoxExt_Unk(int x, int y, int mid);
enum times_amt
{
  FRAMES_PER_SECOND = 60,
  FRAMES_PER_MINUTE = 60 * FRAMES_PER_SECOND,
  FRAMES_PER_HOUR = 60 * FRAMES_PER_MINUTE
};
struct DispCnt
{
  u16 mode : 3;
  u16 _ : 1;
  u16 bitmap_frame : 1;
  u16 hblank_interval_free : 1;
  u16 obj_mapping : 1;
  u16 forced_blank : 1;
  u16 bg0_enable : 1;
  u16 bg1_enable : 1;
  u16 bg2_enable : 1;
  u16 bg3_enable : 1;
  u16 obj_enable : 1;
  u16 win0_enable : 1;
  u16 win1_enable : 1;
  u16 objwin_enable : 1;
};
struct DispStat
{
  u16 vblank : 1;
  u16 hblank : 1;
  u16 vcount : 1;
  u16 vblank_int_enable : 1;
  u16 hblank_int_enable : 1;
  u16 vcount_int_enable : 1;
  u16 _ : 2;
  u16 vcount_compare : 8;
};
struct BgCnt
{
  u16 priority : 2;
  u16 chr_block : 2;
  u16 _ : 2;
  u16 mosaic : 1;
  u16 color_depth : 1;
  u16 tm_block : 5;
  u16 wrap : 1;
  u16 size : 2;
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
  struct DispCnt disp_ct;
  struct DispStat disp_stat;
  unsigned char _pad_0x08[0x0C - 0x08];
  struct BgCnt bg0_ct;
  struct BgCnt bg1_ct;
  struct BgCnt bg2_ct;
  struct BgCnt bg3_ct;
  struct Vec2u bg_off[4];
  u8 win0_right;
  u8 win0_left;
  u8 win1_right;
  u8 win1_left;
  u8 win0_bottom;
  u8 win0_top;
  u8 win1_bottom;
  u8 win1_top;
  struct WinCnt win_ct;
  u16 mosaic;
  unsigned char _pad_0x3A[0x3C - 0x3A];
  struct BlendCnt blend_ct;
  unsigned char _pad_0x40[0x44 - 0x40];
  u8 blend_coef_a;
  u8 blend_coef_b;
  u8 blend_y;
  u16 bg2pa;
  u16 bg2pb;
  u16 bg2pc;
  u16 bg2pd;
  u32 bg2x;
  u32 bg2y;
  u16 bg3pa;
  u16 bg3pb;
  u16 bg3pc;
  u16 bg3pd;
  u32 bg3x;
  u32 bg3y;
  s8 color_addition;
};
struct KeySt
{
  u8 repeat_delay;
  u8 repeat_interval;
  u8 repeat_clock;
  u16 held;
  u16 repeated;
  u16 pressed;
  u16 previous;
  u16 last;
  u16 ablr_pressed;
  u16 pressed2;
  u16 time_since_start_select;
};
enum bg_sync_bitfile
{
  BG0_SYNC_BIT = 1 << 0,
  BG1_SYNC_BIT = 1 << 1,
  BG2_SYNC_BIT = 1 << 2,
  BG3_SYNC_BIT = 1 << 3
};
enum bg_index
{
  BG_0 = 0,
  BG_1,
  BG_2,
  BG_3,
  BG_INVALID = -1
};
extern struct KeySt *gpKeySt;
extern struct KeySt gKeyStObj;
struct MoveStats
{
  int count;
  int totalSize;
};
struct MoveEntry
{
  const void *src;
  void *dest;
  u16 size;
  u16 mode;
};
extern struct MoveStats gMoveStats;
extern struct MoveEntry gMoveList[0x20];
enum data_move_mode
{
  MOVE_MODE_COPY,
  MOVE_MODE_COPY_FAST,
  MOVE_MODE_FILL_FAST
};
enum 
{
  BG_SIZE_256x256 = 0,
  BG_SIZE_512x256 = 1,
  BG_SIZE_256x512 = 2,
  BG_SIZE_512x512 = 3
};
enum softreset_arg
{
  GBA_RESET_EWRAM = 1 << 0,
  GBA_RESET_IWRAM = 1 << 1,
  GBA_RESET_PALETTE = 1 << 2,
  GBA_RESET_VRAM = 1 << 3,
  GBA_RESET_OAM = 1 << 4,
  GBA_RESET_SIO_IO = 1 << 5,
  GBA_RESET_SOUND_IO = 1 << 6,
  GBA_RESET_IO = 1 << 7,
  GBA_RESET_ALL = (1 << 8) - 1
};
extern u8 gBuf[0x2100];
extern u16 gPal[0x200];
extern u16 gBg0Tm[0x400];
extern u16 gBg1Tm[0x400];
extern u16 gBg2Tm[0x400];
extern u16 gBg3Tm[0x400];
extern void *gBgMapVramTable[4];
extern Func MainFunc;
extern struct DispIo gDispIo;
extern const s16 gSinLut[0x40];
extern Func gOnHBlankA;
extern Func gOnHBlankB;
unsigned GetGameTime(void);
void SetGameTime(unsigned time);
void IncGameTime(void);
bool FormatTime(unsigned time, u16 *hours, u16 *minutes, u16 *seconds);
void EnableBgSync(int bits);
void EnableBgSyncById(int bgid);
void DisableBgSync(int bits);
void EnablePalSync(void);
void DisablePalSync(void);
void ApplyPaletteExt(const void *data, int startOffset, int size);
void SyncDispIo(void);
int GetBgChrOffset(int bg);
int GetBgChrId(int bg, int offset);
int GetBgTilemapOffset(int bg);
void SetBgChrOffset(int bg, int offset);
void SetBgTilemapOffset(int bg, int offset);
void SetBgScreenSize(int bg, int size);
void SetBgBpp(int bg, int bpp);
void SyncBgsAndPal(void);
void TmFill(u16 *dest, int tileref);
void SetBlankChr(int chr);
void SetOnVBlank(Func func);
void SetOnVMatch(Func func);
void SetNextVCount(int vcount);
void SetVCount(int vcount);
void SetMainFunc(Func func);
void RunMainFunc(void);
void RefreshKeySt(struct KeySt *keySt);
void ClearKeySt(struct KeySt *keySt);
void InitKeySt(struct KeySt *keySt);
void SetBgOffset(u16 bgid, u16 x_offset, u16 y_offset);
void func_fe6_08001AE4(void);
void func_fe6_08001B18(u8 a, u8 b);
void func_fe6_08001B4C(u16 *a, u16 *b);
void func_fe6_08001B8C(void *tm, const void *in_data, u8 base, u8 linebits);
void func_fe6_08001C68(u16 *tm, const short *in_data, int unused);
void ColorFadeInit(void);
void func_fe6_08001D44(const u16 *in_pal, int bank, int count, int unk);
void func_fe6_08001E68(int a, int b, int c, int d);
void func_fe6_08001F88(int a, int b, int c);
void ColorFadeSetupFromColorToBlack(s8 component_step);
void ColorFadeSetupFromBlack(s8 component_step);
void ColorFadeSetupFromColorToWhite(s8 component_step);
void ColorFadeSetupFromWhite(s8 component_step);
void ColorFadeTick2(void);
void InitBgs(const u16 *config);
u16 *GetBgTilemap(int bg);
void SoftResetIfKeyCombo(void);
void func_fe6_0800285C(int unk);
void SetOnHBlankA(Func func);
void SetOnHBlankB(Func func);
int GetBgFromPtr(u16 *ptr);
void RegisterDataMove(const void *src, void *dst, int size);
void RegisterDataFill(u32 value, void *dst, int size);
void ApplyDataMoves(void);
typedef u32 AnimScr;
struct Anim
{
  u16 state;
  short xPosition;
  short yPosition;
  short timer;
  u16 oam2Base;
  u16 drawLayerPriority;
  u16 state2;
  u16 nextRoundId;
  u16 state3;
  u8 currentRoundType;
  u8 unk13;
  u8 commandQueueSize;
  u8 commandQueue[7];
  u32 oamBase;
  const AnimScr *pScrCurrent;
  const AnimScr *pScrStart;
  const void *pImgSheet;
  void *pImgSheetBuf;
  const void *pSpriteDataPool;
  struct Anim *pPrev;
  struct Anim *pNext;
  const void *pSpriteData;
  const void *pUnk40;
  void *pUnk44;
};
enum Anim_state
{
  ANIM_BIT_ENABLED = 1 << 0,
  ANIM_BIT_HIDDEN = 1 << 1,
  ANIM_BIT_2 = 1 << 2,
  ANIM_BIT_FROZEN = 1 << 3
};
enum Anim_state2
{
  ANIM_BIT2_0001 = 1 << 0,
  ANIM_BIT2_0002 = 1 << 1,
  ANIM_BIT2_0004 = 1 << 2,
  ANIM_BIT2_0008 = 1 << 3,
  ANIM_BIT2_0010 = 1 << 4,
  ANIM_BIT2_0020 = 1 << 5,
  ANIM_BIT2_0040 = 1 << 6,
  ANIM_BIT2_0080 = 1 << 7,
  ANIM_BIT2_FRONT_FRAME = 1 << 8,
  ANIM_BIT2_BACK_FRAME = 0 << 8,
  ANIM_BIT2_POS_RIGHT = 1 << 9,
  ANIM_BIT2_POS_LEFT = 0 << 9,
  ANIM_BIT2_0400 = 1 << 10,
  ANIM_BIT2_0800 = 1 << 11,
  ANIM_BIT2_COMMAND = 1 << 12,
  ANIM_BIT2_FRAME = 1 << 13,
  ANIM_BIT2_STOP = 1 << 14,
  ANIM_BIT2_8000 = 1 << 15
};
enum Anim_state3
{
  ANIM_BIT3_TAKE_BACK_ENABLE = 1 << 0,
  ANIM_BIT3_NEXT_ROUND_START = 1 << 1,
  ANIM_BIT3_C01_BLOCKING_IN_BATTLE = 1 << 2,
  ANIM_BIT3_HIT_EFFECT_APPLIED = 1 << 3,
  ANIM_BIT3_0010 = 1 << 4,
  ANIM_BIT3_BLOCKING = 1 << 5,
  ANIM_BIT3_BLOCKEND = 1 << 6,
  ANIM_BIT3_0080 = 1 << 7,
  ANIM_BIT3_0100 = 1 << 8,
  ANIM_BIT3_0200 = 1 << 9,
  ANIM_BIT3_0400 = 1 << 10,
  ANIM_BIT3_0800 = 1 << 11,
  ANIM_BIT3_1000 = 1 << 12,
  ANIM_BIT3_2000 = 1 << 13,
  ANIM_BIT3_4000 = 1 << 14,
  ANIM_BIT3_NEW_ROUND_START = 1 << 15
};
enum AnimRoundData_type_identifier
{
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
  ANIM_ROUND_INVALID = -1
};
enum anim_round_type
{
  ANIM_ROUND_BIT8 = 0x0100,
  ANIM_ROUND_PIERCE = 0x0200,
  ANIM_ROUND_GREAT_SHIELD = 0x0400,
  ANIM_ROUND_SURE_SHOT = 0x0800,
  ANIM_ROUND_SILENCER = 0x1000,
  ANIM_ROUND_POISON = 0x2000,
  ANIM_ROUND_BIT14 = 0x4000,
  ANIM_ROUND_DEVIL = 0x8000
};
enum banim_mode_index
{
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
  BANIM_MODE_INVALID = -1
};
enum 
{
  ANIM_MAX_COUNT = 50
};
enum 
{
  ANIM_CMD_NOP = 0x00,
  ANIM_CMD_WAIT_01 = 0x01,
  ANIM_CMD_WAIT_02 = 0x02,
  ANIM_CMD_WAIT_03 = 0x03,
  ANIM_CMD_WAIT_04 = 0x04,
  ANIM_CMD_WAIT_05 = 0x05,
  ANIM_CMD_WAIT_13 = 0x13,
  ANIM_CMD_WAIT_18 = 0x18,
  ANIM_CMD_WAIT_2D = 0x2D,
  ANIM_CMD_WAIT_39 = 0x39,
  ANIM_CMD_WAIT_52 = 0x52
};
enum anim_inst_type
{
  ANIM_INS_TYPE_STOP = 0,
  ANIM_INS_TYPE_END = 1,
  ANIM_INS_TYPE_LOOP = 2,
  ANIM_INS_TYPE_MOVE = 3,
  ANIM_INS_TYPE_WAIT = 4,
  ANIM_INS_TYPE_COMMAND = 5,
  ANIM_INS_TYPE_FRAME = 6
};
struct AnimSpriteData
{
  u32 header;
  union 
  {
    struct 
    {
      u16 pa;
      u16 pb;
      u16 pc;
      u16 pd;
    } affine;
    struct 
    {
      u16 oam2;
      short x;
      short y;
    } object;
  } as;
};
void AnimUpdateAll(void);
void AnimClearAll(void);
struct Anim *AnimCreate_unused(const void *script);
struct Anim *AnimCreate(const void *script, u16 displayPriority);
void AnimSort(void);
void AnimDelete(struct Anim *anim);
void AnimDisplay(struct Anim *anim);
extern s8 MoveTable_Flying[];
extern s8 MoveTable_Ballista[];
extern const char *StatusNameStringLut[];
extern int Unk_081C8FCC[12][4];
extern u8 gArenaLevelBackup;
extern struct unk_type_0203A50C gUnk_0203A50C;
extern u8 Img_EkrDragon_082E445C[];
extern u8 Tsa_EkrDragon_082E445C[];
extern u8 Tsa_EkrDragon_082E6E8C[];
enum ekr_battle_unit_position
{
  EKR_POS_L,
  EKR_POS_R
};
extern struct Anim *gAnims[4];
enum gEkrDistanceType_index
{
  EKR_DISTANCE_CLOSE,
  EKR_DISTANCE_FAR,
  EKR_DISTANCE_FARFAR,
  EKR_DISTANCE_3,
  EKR_DISTANCE_PROMOTION
};
extern s16 gEkrDistanceType;
struct ProcEkrSubAnimeEmulator
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  u8 type;
  u8 valid;
  s16 timer;
  s16 scr_cur;
  unsigned char _pad_0x30[0x32 - 0x30];
  s16 x1;
  s16 x2;
  unsigned char _pad_0x36[0x3A - 0x36];
  s16 y1;
  s16 y2;
  unsigned char _pad_0x3E[0x44 - 0x3E];
  u32 *anim_scr;
  void *sprite;
  int oam2Base;
  int oamBase;
};
struct ProcEfx
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  u8 hitted;
  u8 type;
  unsigned char _pad_0x2B[0x2C - 0x2B];
  s16 timer;
  s16 step;
  s16 unk30;
  u16 unk32;
  unsigned char _pad_0x34[0x44 - 0x34];
  u32 unk44;
  u32 unk48;
  u32 frame;
  u32 speed;
  s16 *unk54;
  s16 **unk58;
  struct Anim *anim;
  unsigned char _pad_0x60[0x64 - 0x60];
  ProcPtr unk_64;
};
struct ProcEfxBG
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  u8 unk29;
  unsigned char _pad_0x2A[0x2C - 0x2A];
  s16 timer;
  s16 terminator;
  s16 unk30;
  s16 unk32;
  s16 unk34;
  unsigned char _pad_0x36[0x3C - 0x36];
  s16 unk3C;
  unsigned char _pad_0x3E[0x44 - 0x3E];
  u32 frame;
  const u16 *frame_config;
  u16 **tsal;
  u16 **tsar;
  u16 **img;
  u16 **pal;
  struct Anim *anim;
};
struct ProcEfxBGCOL
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  unsigned char _pad_0x29[0x2C - 0x29];
  s16 timer;
  s16 timer2;
  s16 terminator;
  s16 unk32;
  unsigned char _pad_0x34[0x44 - 0x34];
  u32 frame;
  const u16 *frame_config;
  void *pal;
  unsigned char _pad_0x50[0x5C - 0x50];
  struct Anim *anim;
};
struct ProcEfxRST
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  unsigned char _pad_0x29[0x2C - 0x29];
  s16 timer;
  s16 duration;
  unsigned char _pad_0x30[0x5C - 0x30];
  struct Anim *anim;
  unsigned char _pad_0x60[0x64 - 0x60];
  struct ProcEfx *efxproc;
};
struct ProcEfxOBJ
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  u8 unk29;
  u8 unk2A;
  unsigned char _pad_0x2B[0x2C - 0x2B];
  s16 timer;
  s16 terminator;
  u16 unk30;
  u16 unk32;
  u16 unk34;
  u16 unk36;
  u16 unk38;
  u16 unk3A;
  u16 unk3C;
  u16 unk3E;
  u16 unk40;
  u16 unk42;
  int unk44;
  int unk48;
  int unk4C;
  unsigned char _pad_0x50[0x5C - 0x50];
  struct Anim *anim;
  struct Anim *anim2;
  struct Anim *anim3;
  struct Anim *anim4;
};
struct ProcEfxALPHA
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  u8 unk29;
  unsigned char _pad_0x2A[0x2C - 0x2A];
  s16 timer;
  s16 unk2E;
  s16 unk30;
  unsigned char _pad_0x32[0x5C - 0x32];
  struct Anim *anim;
};
struct ProcEfxSCR
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  unsigned char _pad_0x29[0x2C - 0x29];
  s16 timer;
  s16 unk2E;
  unsigned char _pad_0x30[0x44 - 0x30];
  int unk44;
  unsigned char _pad_0x48[0x5C - 0x48];
  struct ProcEfx *unk5C;
};
extern const void *gpImgSheet[2];
extern int gEkrDebugUnk2;
extern int gAnimC01Blocking;
extern u32 gBanimDoneFlag[];
extern u8 gBanimRoundScripts[];
extern u8 gBanimScr_81DE208[];
extern int *gpBanimModesLeft;
extern int *gpBanimModesRight;
extern u8 gBanimScrLeft[];
extern u8 gBanimScrRight[];
extern int Unk_02017758;
extern int Unk_03004750;
extern int Unk_0203E088[2];
extern s16 Unk_0203DFEC;
extern short gEkrPairHpInitial[2];
extern short gEfxPairHpBufOffset[];
extern u16 gEkrTsaBuffer[0x1000 / 2];
extern u16 gEfxFrameTmap[0x2520 / 2];
extern s16 gEkrSpellAnimIndex[2];
extern u32 gEkrBgPosition;
extern s16 gEkrXPosReal[2];
extern s16 gEkrYPosReal[2];
extern u16 gEkrXPosBase[2];
extern u16 gEkrYPosBase[2];
extern struct Vec2 gEkrBg0QuakeVec;
extern struct Vec2 gEkrBg2QuakeVec;
void NewEkrLvlupFan(void);
void NewEkrGauge(void);
void EndEkrGauge(void);
void EkrGauge_0804CC28(void);
void EkrGauge_0804CC38(void);
void EkrGauge_0804CC48(void);
void EkrGauge_0804CC58(void);
void EkrGauge_0804CC68(u16 val);
void EkrGauge_0804CC78(s16 x, s16 y);
void EkrGauge_0804CC8C(s16 x, s16 y);
void EkrGauge_SetInitFlag(void);
void EkrGauge_ClrInitFlag(void);
void NewEkrDispUP(void);
void EndEkrDispUP(void);
void EkrDispUP_SetPositionUnsync(u16 x, u16 y);
void EkrDispUP_SetPositionSync(u16 x, u16 y);
void SyncEkrDispUP(void);
void UnsyncEkrDispUP(void);
void AsyncEkrDispUP(void);
void UnAsyncEkrDispUP(void);
int sub_0804DD50(void);
ProcPtr NewEfxQuakePure(int, int);
void NewEfxQuake(int type);
void NewEfxFlashBgWhite(struct Anim *anim, int duartion);
void NewEfxFlashBgRed(struct Anim *anim, int duartion);
void NewEfxFlashBgBlack(struct Anim *anim, int duartion);
void NewEfxFlashBgDirectly(struct Anim *anim, int duartion);
void SpellFx_ClearBG1(void);
void SpellFx_SetSomeColorEffect(void);
void SpellFx_ClearColorEffects(void);
void StartBattleAnimHitEffectsDefault(struct Anim *anim, int type);
void SpellFx_WriteBgMap(struct Anim *anim, const u16 *src1, const u16 *src2);
void SpellFx_RegisterObjGfx(const u16 *img, u32 size);
void SpellFx_RegisterObjPal(const u16 *pal, u32 size);
void SpellFx_RegisterBgGfx(const u16 *img, u32 size);
void SpellFx_RegisterBgPal(const u16 *pal, u32 size);
s16 EfxAdvanceFrameLut(s16 *ptime, s16 *pcount, const s16 lut[]);
int EfxGetCamMovDuration(void);
void EfxTmFill(u32 val);
void SetEkrFrontAnimPostion(int pos, s16 x, s16 y);
int sub_08050FE4(void);
void sub_08050FF0(int);
void NewEfxspdquake(struct Anim *anim);
bool SetupBanim(void);
void BeginAnimsOnBattleAnimations(void);
u16 *FilterBattleAnimCharacterPalette(s16 index, u16 item);
int GetAllegienceId(u32 arg);
void EkrPrepareBanimfx(struct Anim *anim, u16 index);
s16 GetBattleAnimRoundType(int index);
s16 GetBattleAnimRoundTypeFlags(int);
s16 GetEfxHp(int index);
void BattleAIS_ExecCommands(void);
void AnimScrAdvance(struct Anim *anim);
void NewEkrChienCHR(struct Anim *anim);
void RegisterAISSheetGraphics(struct Anim *anim);
int GetBanimPalette(int banim_id, int pos);
void UpdateBanimFrame(void);
void InitMainAnims(void);
void InitBattleAnimFrame(int round_type_left, int round_type_right);
void InitLeftAnim(int);
void InitRightAnim(int);
void SwitchAISFrameDataFromBARoundType(struct Anim *anim, int);
int GetAISLayerId(struct Anim *anim);
int GetAnimPosition(struct Anim *anim);
int CheckRoundMiss(s16 type);
int CheckRound1(s16 type);
int CheckRound2(s16 type);
int CheckRoundCrit(struct Anim *anim);
struct Anim *GetAnimAnotherSide(struct Anim *anim);
s16 GetAnimRoundType(struct Anim *anim);
s16 GetAnimNextRoundType(struct Anim *anim);
s16 GetAnimRoundTypeAnotherSide(struct Anim *anim);
s16 GetAnimNextRoundTypeAnotherSide(struct Anim *anim);
void SetAnimStateHidden(int pos);
void SetAnimStateUnHidden(int pos);
void StartSpellAnimation(struct Anim *anim);
void NewEfxPierceCritical(struct Anim *anim);
void NewEfxNormalEffect(struct Anim *anim);
void NewEfxYushaSpinShield(struct Anim *anim, int type);
void NewEfxHurtmutEff00(struct Anim *anim);
void NewEfxMagfcast(struct Anim *anim, int);
void NewEfxSunakemuri(struct Anim *anim, int);
void NewEfxLokmsuna(struct Anim *anim);
void NewEfxKingPika(struct Anim *anim);
void NewEfxFlashFX(struct Anim *anim);
void NewEfxSpecalEffect(struct Anim *anim);
void NewEfxMantBatabata(struct Anim *anim);
void NewEfxChillEffect(struct Anim *anim);
void NewEfxChillAnime(struct Anim *anim, int);
void sub_08064458(struct Anim *anim);
void sub_08067128(u16 *tm, u16 width, u16 height, int pal, int chr);
void FillBGRect(u16 *tm, u16 width, u16 height, int pal, int chr);
void sub_080671E0(u16 *tm, u16 width, u16 height, int pal, int chr);
void EfxTmModifyPal(u16 *tm, u16 width, u16 height);
void EfxTmCpyBG(const void *ptr1, void *ptr2, u16 width, u16 height, int pal, int chr);
void EfxTmCpyBgHFlip(const u16 *tsa, u16 *tm, u16 width, u16 height, int pal, int chr);
void EfxTmCpyExt(const u16 *src, s16 src_width, u16 *dst, s16 dst_width, u16 width, u16 hight, int pal, int chr);
void EfxTmCpyExtHFlip(const u16 *src, s16 src_width, u16 *dst, s16 dst_width, u16 width, u16 hight, int pal, int chr);
void sub_0806748C(u16 *tm, int arg1, int arg2);
void EkrModifyBarfx(u16 *tm, int arg);
bool EkrPalModifyUnused(u16 *pal_start, u16 *pal_end, u16 *dst, u16 amount, u16 start, u16 end);
void EfxPalBlackInOut(u16 *pal_buf, int line, int length, int ref);
void EfxPalWhiteInOut(u16 *pal_buf, int line, int length, int ref);
void EfxPalGrayInOut(u16 *pal_buf, int line, int length, int r0, int g0, int b0);
void EfxPalModifyPetrifyEffect(u16 *pal_buf, int line, int length);
void EfxSplitColor(u16 *pal, u8 *dst, u32 length);
void EfxSplitColorPetrify(u16 *src, u8 *dst, u32 length);
void sub_08067998(s8 *src1, s8 *src2, u16 *pal, u32 length, int ref);
void EfxDecodeSplitedPalette(u16 *dst, s8 *src1, s8 *src2, s16 *src3, u32 length, int ref, int unk);
void EfxChapterMapFadeOUT(int speed);
int sub_08067AD4(int a);
struct ProcEkrSubAnimeEmulator *NewEkrsubAnimeEmulator(int x, int y, u32 *anim_scr, int type, int oam2Base, int oamBase, ProcPtr parent);
void EkrsubAnimeEmulatorMain(struct ProcEkrSubAnimeEmulator *proc);
int GetAnimSpriteRotScaleX(u32 header);
int GetAnimSpriteRotScaleY(u32 header);
void BanimUpdateSpriteRotScale(void *src, struct AnimSpriteData *out, s16 x, s16 y, int unused);
struct ProcEfxSoundSE
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  unsigned char _pad_0x29[0x2C - 0x29];
  s16 timer;
  unsigned char _pad_0x2E[0x44 - 0x2E];
  int volume;
  int index;
};
void EfxPlaySE(int songid, int volume);
void Loop6C_efxSoundSE(struct ProcEfxSoundSE *proc);
void EfxPlaySEwithCmdCtrl(struct Anim *anim, int);
s16 sub_080684B0(struct Anim *anim);
void PlaySFX(int, int, int, int);
struct EkrDragonStatus
{
  u16 type;
  u16 attr;
  ProcPtr proc;
  u32 unk08;
  struct Anim *anim;
};
enum dragonstatue_attr
{
  EKRDRGON_ATTR_START = 1 << 0,
  EKRDRGON_ATTR_BANIMFX_PREPARED = 1 << 1,
  EKRDRGON_ATTR_BANIMFINISH = 1 << 2,
  EKRDRGON_ATTR_END = 1 << 3,
  EKRDRGON_ATTR_DEAD = 1 << 12
};
extern struct EkrDragonStatus gEkrDragonStatusLeft;
extern struct EkrDragonStatus gEkrDragonStatusRight;
void ResetEkrDragonStatus(void);
struct EkrDragonStatus *GetEkrDragonStatus(struct Anim *anim);
u16 GetEkrDragonStatusAttr(struct Anim *anim);
void AddEkrDragonStatusAttr(struct Anim *anim, u16 attr_bitfile);
u32 GetEkrDragonStatusType(struct Anim *anim);
u32 GetEkrDragonStatusType_(struct Anim *anim);
void AddEkrDragonStatusType(struct Anim *anim, u16 type_bitfile);
int CheckInEkrDragon(void);
void EkrDragonTmCpyHFlip(int x, int y);
void EkrDragonTmCpyExt(int x, int y);
void EkrDragonTmCpyWithDistance(void);
bool EkrDragonIntroDone(struct Anim *anim);
bool CheckEkrDragonEndingDone(struct Anim *anim);
void SetEkrDragonExit(struct Anim *anim);
void SetEkrDragonDead(struct Anim *anim);
bool CheckEkrDragonDead(struct Anim *anim);
struct ProcEkrDragonIntroFx
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  bool unk29;
  u16 unk2A;
  s16 timer;
  s16 timer2;
  unsigned char _pad_0x30[0x32 - 0x30];
  u16 x;
  s16 x_hi;
  unsigned char _pad_0x36[0x3A - 0x36];
  s16 y;
  s16 y_hi;
  unsigned char _pad_0x3E[0x44 - 0x3E];
  int duration;
  int step;
  int speed;
  int unk50;
};
struct ProcEkrDragonFx
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  u8 done;
  s16 unk2A;
  s16 timer;
  s16 step;
  s16 unk30;
  s16 x;
  unsigned char _pad_0x34[0x3A - 0x34];
  u16 y;
  u16 y_hi;
  unsigned char _pad_0x3E[0x44 - 0x3E];
  u32 frame;
  const s16 *conf;
  const u16 * const *fx;
  u32 unk50;
  u32 round_cur;
  u32 unk58;
  struct Anim *anim;
  struct Anim *anim2;
  ProcPtr sprocfx;
};
struct ProcEkrDragon
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  u8 done;
  unsigned char _pad_0x2A[0x2C - 0x2A];
  s16 timer;
  s16 terminator;
  s16 unk30;
  s16 x;
  unsigned char _pad_0x34[0x3A - 0x34];
  s16 y_lo;
  s16 y_hi;
  unsigned char _pad_0x3E[0x44 - 0x3E];
  ProcPtr sproc_flashingobj;
  ProcPtr sproc_bg2fx;
  ProcPtr sproc_bg2scroll;
  struct ProcEkrDragon *mainfxproc;
  ProcPtr proc54;
  ProcPtr sproc_bg2scrollhandle;
  struct Anim *anim;
  ProcPtr sproc1;
  struct ProcEkrDragonIntroFx *procfx;
  ProcPtr sproc_flashingbg;
};
extern struct ProcCmd ProcScr_EkrDragon[];
void InitEkrDragonStatus(void);
void EkrDragonUpdateFlashingUnit(struct Anim *anim);
void EkrDragonUpdatePal_080654C8(struct Anim *anim);
void NewEkrDragon(struct Anim *anim);
void EkrDragon_Preparefx(struct ProcEkrDragon *proc);
void EkrDragon_CustomBgFadeIn(struct ProcEkrDragon *proc);
void EkrDragon_080655A0(struct ProcEkrDragon *proc);
void EkrDragon_08065660(struct ProcEkrDragon *proc);
void EkrDragon_080656D8(struct ProcEkrDragon *proc);
void EkrDragon_0806574C(struct ProcEkrDragon *proc);
void EkrDragon_080657D4(struct ProcEkrDragon *proc);
void EkrDragon_080658F8(struct ProcEkrDragon *proc);
void EkrDragon_08065AB0(struct ProcEkrDragon *proc);
void EkrDragon_08065BA0(struct ProcEkrDragon *proc);
void EkrDragon_08065BC0(struct ProcEkrDragon *proc);
void EkrDragon_08065C14(struct ProcEkrDragon *proc);
void EkrDragon_08065C34(struct ProcEkrDragon *proc);
void EkrDragon_08065CC8(struct ProcEkrDragon *proc);
void EkrDragon_08065D20(struct ProcEkrDragon *proc);
void sub_08065D38(struct Anim *anim);
ProcPtr sub_08065EAC(struct Anim *anim);
ProcPtr sub_08065F38(struct Anim *anim);
ProcPtr sub_080660F4(struct Anim *anim);
ProcPtr sub_08066200(struct Anim *anim);
ProcPtr sub_080662F4(struct Anim *anim);
ProcPtr sub_08066380(void);
ProcPtr sub_08066414(struct Anim *anim);
ProcPtr sub_080664CC(int, int, int, int);
void sub_080665B8(int, u16);
void sub_08066CAC(struct Anim *anim, int);
extern u16 Pal_EkrDragon[0x10];
extern u16 Pal_EkrDragon_082E6C60[0x10];
extern u16 Pal_EkrDragon_082EB510[0x10];
extern int gEkrBg2ScrollFlip;
extern u16 *gpEkrLvupBg2ScrollOffsetStart;
extern u16 *gpEkrLvupBg2ScrollOffset;
extern u16 gpEkrLvupBg2ScrollOffsetTable1[];
extern u16 gpEkrLvupBg2ScrollOffsetTable2[];
extern int gEkrBg1ScrollFlip;
extern u16 *gpEkrLvupBg1ScrollOffsetStart;
extern u16 *gpEkrLvupBg1ScrollOffset;
extern u16 gpEkrLvupBg1ScrollOffsetList1[];
extern u16 gpEkrLvupBg1ScrollOffsetList2[];
void EkrDragonBgScroll_OnVBlank(void);
extern struct ProcCmd ProcScr_EkrDragon_08C48804[];
extern int gEkrBg2ScrollFlip;
extern u16 *gpBg2ScrollOffsetStart;
extern u16 *gpBg2ScrollOffset;
extern u16 gpBg2ScrollOffsetTable1[];
extern u16 gpBg2ScrollOffsetTable2[];
extern int gEkrBg1ScrollFlip;
extern u16 *gpBg1ScrollOffsetStart;
extern u16 *gpBg1ScrollOffset;
extern u16 gpBg1ScrollOffsetList1[];
extern u16 gpBg1ScrollOffsetList2[];
extern s16 gUnk_08C4A008[];
extern struct ProcCmd ProcScr_EkrDragon_08C4883C[];
void EkrDragonBg3HfScroll_OnVBlank(void);
extern const u16 FrameLut_EkrDragonWingFlashingNormalAtk[];
extern const u16 FrameLut_EkrDragonWingFlashingCriticalAtk[];
extern const u16 FrameLut_EkrDragonFlashingWingObjNormalAtk[];
extern const u16 FrameLut_EkrDragonFlashingWingObjCriticalAtk[];
extern const u16 FrameLut_EkrDragon_082E4418[];
extern const u16 FrameLut_EkrDragon_082E441E[];
extern const u16 FrameLut_EkrDragon_082E4430[];
extern const u16 FrameLut_EkrDragon_082E4442[];
int CheckEkrHitDone(void);
void NewEkrDragonProc_8066F80(int, int, int);
void sub_80668B8(int x, int y);
void sub_8066950(int x, int y);
ProcPtr NewEfxDragonDeadFallHeadFx(struct Anim *anim);
extern const u8 Tsa_EkrDragon_MainBg[];
void EkrDragonUpdatePal_08065510(int ref);
struct ProcEkrDragonBarkQuake
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  unsigned char _pad_0x29[0x2C - 0x29];
  s16 timer;
  s16 duration;
  unsigned char _pad_0x30[0x5C - 0x30];
  ProcPtr procfx;
  ProcPtr procquake;
};
struct ProcEfxDrsmmoyaScroll
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  unsigned char _pad_0x29[0x2C - 0x29];
  s16 timer;
  s16 step;
  unsigned char _pad_0x30[0x44 - 0x30];
  int duration;
  int speed;
  unsigned char _pad_0x4C[0x5C - 0x4C];
  struct Anim *anim;
};
extern s16 gBanimUniquePal[2];
extern s16 gBanimFactionPal[2];
extern u16 gBanimPaletteLeft[0x50];
extern u16 gBanimPaletteRight[0x50];
extern u32 gBanimOaml[0x1600];
extern u32 gBanimOamr2[0x1600];
extern s16 gBanimValid[2];
extern s16 gBanimIdx[2];
extern struct Unit *gpEkrTriangleUnits[2];
extern u16 *gBanimTriAtkPalettes[2];
extern s16 gBanimUniquePaletteDisabled[2];
struct BattleAnim
{
  char abbr[12];
  int *modes;
  char *script;
  char *oam_r;
  char *oam_l;
  u16 *pal;
};
extern struct BattleAnim banim_data[];
struct BattleAnimCharaPal
{
  char abbr[12];
  u16 *pal;
};
extern struct BattleAnimCharaPal character_battle_animation_palette_table[];
struct BattleAnimTerrain
{
  char abbr[12];
  char *tileset;
  u16 *palette;
  int null_1;
};
extern struct BattleAnimTerrain battle_terrain_table[];
struct BanimModeData
{
  const u32 *unk0;
  const u32 *img;
  u32 unk2;
};
void ApplyBanimUniquePalette(u32 *buf, int pos);
extern u16 *gpEfxUnitPaletteBackup[2];
u16 GetBattleAnimationId_WithUnique(struct Unit *unit, const void *pBattleAnimDef, u16, int *out);
s16 GetBattleAnimCharacterUniquePalIndex(struct Unit *unit, int index);
extern const u8 BanimDefaultModeConfig[ANIM_ROUND_MAX * 4];
extern const u8 BattleTypeToAnimModeEndOfDodge[5];
extern const u8 BanimTypesPosLeft[5];
extern const u8 BanimTypesPosRight[5];
struct AnimBuffer
{
  u8 unk_00;
  u8 genericPalId;
  u16 xPos;
  u16 yPos;
  s16 animId;
  s16 charPalId;
  u16 roundType;
  u16 state2;
  u16 oam2Tile;
  u16 oam2Pal;
  struct Anim *anim1;
  struct Anim *anim2;
  void *pImgSheetBuf;
  void *unk_20;
  void *unk_24;
  void *unk_28;
  const void *unk_2C;
  void *unk_30;
  void *unk_34;
};
extern u32 AnimScr_DefaultAnim[];
struct SpriteAnim
{
  const u16 *info;
  const u16 *sprites;
  const u16 *script;
  const u16 *script_pc;
  const u16 *current_sprite;
  const u16 *current_affine;
  s16 clock;
  u16 clock_interval_q8;
  u16 clock_decimal_q8;
  u16 layer;
  u8 need_sync_img_b;
  u8 affine_slot;
  u16 oam2;
  const u8 *img;
};
struct ProcSpriteAnim
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  u8 pad_29[0x50 - 0x29];
  struct SpriteAnim *anim;
  int x;
  int y;
};
void InitSpriteAnims(void);
struct SpriteAnim *StartSpriteAnim(const u16 *info, u16 layer);
void EndSpriteAnim(struct SpriteAnim *anim);
bool DisplaySpriteAnim(struct SpriteAnim *anim, int x, int y);
void SetSpriteAnimId(struct SpriteAnim *anim, int id);
void SetSpriteAnimInfo(struct SpriteAnim *anim, const u16 *info);
struct SpriteAnim *FindSpriteAnim(const u16 *info);
ProcPtr StartSpriteAnimProc(const u16 *info, int x, int y, int oam2, int animid, int layer);
void AnimProc_Update(struct ProcSpriteAnim *proc);
void AnimProc_OnEnd(struct ProcSpriteAnim *proc);
void SetSpriteAnimProcParameters(ProcPtr proc, int x, int y, int oam2);
void EndSpriteAnimProc(ProcPtr proc);
void EndEachSpriteAnimProc(void);
bool SpriteAnimProcExists(void);
extern struct ProcCmd ProcScr_SpriteAnimProc[];
struct BmSt
{
  bool main_loop_ended;
  s8 lock;
  s8 lock_display;
  u8 pad_03;
  u8 flags;
  u16 main_loop_end_scanline;
  int pad_08;
  struct Vec2 camera;
  struct Vec2 camera_previous;
  struct Vec2 cursor;
  struct Vec2 cursor_previous;
  struct Vec2 cursor_sprite_target;
  struct Vec2 cursor_sprite;
  struct Vec2 map_render_anchor;
  struct Vec2 camera_max;
  u16 inventory_item_overflow;
  u16 convoy_item_overflow;
  bool8 unk_30;
  bool8 unk_31;
  short unk_32;
  short unk_34;
  s8 unk_36;
  s8 unk_37;
  u8 alt_blend_a_ca;
  u8 alt_blend_a_cb;
  u8 alt_blend_b_ca;
  u8 alt_blend_b_cb;
  u8 just_resumed;
  u8 partial_actions_taken;
  u8 swap_action_range_count;
  s8 unk_3F;
};
extern struct BmSt gBmSt;
enum BmSt_gameStateBits
{
  BM_FLAG_0 = 1 << 0,
  BM_FLAG_1 = 1 << 1,
  BM_FLAG_2 = 1 << 2,
  BM_FLAG_3 = 1 << 3,
  BM_FLAG_4 = 1 << 4,
  BM_FLAG_5 = 1 << 5,
  BM_FLAG_LINKARENA = 1 << 6
};
struct PlaySt
{
  u32 time_saved;
  u32 time_chapter_started;
  u32 partyGoldAmount;
  u8 gameSaveSlot;
  u8 chapterVisionRange;
  s8 chapterIndex;
  u8 faction;
  u16 chapterTurnNumber;
  u8 xCursor;
  u8 yCursor;
  u8 chapterStateBits;
  u8 chapterWeatherId;
  u16 chapterTotalSupportGain;
  u8 playthroughIdentifier;
  u8 unk19;
  u8 lastUnitSortType;
  u8 chapterModeIndex;
  u8 unk1C[2];
  u8 unk1E;
  u8 unk1F;
  char playerName[0x2B - 0x20];
  u8 unk_2B_00 : 0x01;
  u8 unk_2B_01 : 0x03;
  u8 unk_2B_04 : 0x04;
  u32 unk2C_00 : 0x04;
  u32 unk2C_11 : 0x09;
  u32 unk2C_0D : 0x13;
  int total_gold;
  u32 unk_34_00 : 0x14;
  u32 unk_34_14 : 0x0C;
  u32 unk_38_1 : 8;
  u32 unk_38_2 : 20;
  u32 unk_38_3 : 4;
  u32 unk_3C_00 : 6;
  u32 combatRank : 3;
  u32 expRank : 3;
  u32 unk_3D_04 : 3;
  u32 fundsRank : 3;
  u32 tacticsRank : 3;
  u32 survivalRank : 3;
  u32 unk_3F_00 : 8;
  u32 cfgUnitColor : 1;
  u32 cfgDisableTerrainDisplay : 1;
  u32 cfgUnitDisplayType : 2;
  u32 cfgAutoCursor : 1;
  u32 cfgTextSpeed : 2;
  u32 cfgGameSpeed : 1;
  u32 cfgDisableBgm : 1;
  u32 cfgDisableSoundEffects : 1;
  u32 config_window_theme : 2;
  u32 unk41_5 : 1;
  u32 unk41_6 : 1;
  u32 cfgDisableAutoEndTurns : 1;
  u32 cfgNoSubtitleHelp : 1;
  u32 cfgDisableGoalDisplay : 1;
  u32 cfgAnimationType : 2;
  u32 cfgBattleForecastType : 2;
  u32 cfgController : 1;
  u32 cfgRankDisplay : 1;
  u32 debugControlRed : 2;
  u32 debugControlGreen : 2;
  u32 unk43_4 : 5;
  u8 unk44[0x48 - 0x44];
  u16 unk48;
  u8 unk4A_1 : 1;
  u8 unk4A_2 : 3;
  u8 unk4A_5 : 4;
  u8 unk4B;
};
extern struct PlaySt gPlaySt;
enum PlaySt_chapterStateBits
{
  PLAY_FLAG_STATSCREENPAGE0 = 1 << 0,
  PLAY_FLAG_STATSCREENPAGE1 = 1 << 1,
  PLAY_FLAG_POSTGAME = 1 << 2,
  PLAY_FLAG_TUTORIAL = 1 << 3,
  PLAY_FLAG_PREPSCREEN = 1 << 4,
  PLAY_FLAG_COMPLETE = 1 << 5,
  PLAY_FLAG_HARD = 1 << 6,
  PLAY_FLAG_EXTRA_MAP = 1 << 7,
  PLAY_FLAG_STATSCREENPAGE_SHIFT = 0,
  PLAY_FLAG_STATSCREENPAGE_MASK = PLAY_FLAG_STATSCREENPAGE0 | PLAY_FLAG_STATSCREENPAGE1
};
enum PlaySt_Weather
{
  WEATHER_FINE = 0,
  WEATHER_SNOW = 1,
  WEATHER_SNOWSTORM = 2,
  WEATHER_NIGHT = 3,
  WEATHER_RAIN = 4,
  WEATHER_FLAMES = 5,
  WEATHER_SANDSTORM = 6,
  WEATHER_CLOUDS = 7
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
struct UnkSprite
{
  int oam01;
  u16 oam2;
  short x;
  short y;
};
struct OamSection
{
  u16 *buf;
  void *oam;
  u16 offset;
  u16 count;
};
struct OamView
{
  u16 oam0;
  u16 oam1;
  u16 oam2;
  u16 aff;
};
extern u16 gOam[0x200];
extern u16 *gOamHiPutIt;
extern u16 *gOamLoPutIt;
extern struct OamView *gOamAffinePutIt;
extern u16 gOamAffinePutId;
void InitOam(int loSz);
int GetOamSplice(void);
void SyncHiOam(void);
void SyncLoOam(void);
void SetObjAffine(int id, short pa, short pb, short pc, short pd);
void PutUnkSprite(struct UnkSprite *sprites, int xBase, int yBase);
void Sound_FadeOutSE(int speed);
void OverrideBgm(int song);
void m4aSongNumStart(u16 n);
struct ProcEventDragonsSpritefx
{
  const struct ProcCmd *proc_script;
  const struct ProcCmd *proc_scrCur;
  ProcFunc proc_endCb;
  ProcFunc proc_idleCb;
  const char *proc_name;
  ProcPtr proc_parent;
  ProcPtr proc_child;
  ProcPtr proc_next;
  ProcPtr proc_prev;
  s16 proc_sleepTime;
  u8 proc_mark;
  u8 proc_flags;
  u8 proc_lockCnt;
  ProcPtr approc[3];
  s16 x_1[3];
  s16 y_1[3];
  s16 x_2[3];
  s16 y_2[3];
  s16 unk50[3];
  s16 unk56[3];
  u16 unk5C[3];
  u8 unk62[3];
  unsigned char _pad_0x65[0x6A - 0x65];
  u8 unk6A;
  u8 unk6B;
};
void EventDragonsSpritefx_Loop(struct ProcEventDragonsSpritefx *proc)
{
  int i;
  int x;
  int y;
  int ret = 0;
  for (i = 0; i < 3; i++)
  {
    if (proc->approc[i])
    {
      if ((proc->x_1[i] != proc->x_2[i]) || (proc->y_1[i] != proc->y_2[i]))
      {
        proc->unk56[i] += proc->unk50[i];
        if (proc->unk56[i] > 0x100)
        {
          proc->unk56[i] = 0x100;
        }
        if (proc->unk50[i] == 0)
        {
          proc->unk56[i] = 0x100;
        }
        x = ((proc->x_1[i] * (0x100 - proc->unk56[i])) + (proc->x_2[i] * proc->unk56[i])) / 0x100;
        y = ((proc->y_1[i] * (0x100 - proc->unk56[i])) + (proc->y_2[i] * proc->unk56[i])) / 0x100;
        if (proc->unk56[i] == 0x100)
        {
          proc->x_1[i] = proc->x_2[i];
          proc->y_1[i] = proc->y_2[i];
          SetSpriteAnimId(((struct ProcSpriteAnim *) proc->approc[i])->anim, proc->unk62[i]);
        }
        ret = 1;
      }
      else
      {
        x = proc->x_1[i];
        y = proc->y_1[i];
      }
      x = x - gBmSt.camera.x;
      y = y - gBmSt.camera.y;
      if (y < (-0x40))
      {
        y = 0xCC;
      }
      x = x & 0x01FF;
      y = y & 0x00FF;
      SetSpriteAnimProcParameters(proc->approc[i], x, y + proc->unk5C[i], -1);
    }
  }

  if (ret != 0)
  {
    if (((proc->unk6B++) / 0x18) == 0)
    {
      if (!gPlaySt.cfgDisableSoundEffects)
      {
        m4aSongNumStart(0x2E0);
      }
    }
  }
}
