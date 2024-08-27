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

typedef u8  bool8;
typedef u16 bool16;
typedef u32 bool32;

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

#define TRUE  1
#define FALSE 0

#define IWRAM_DATA
#define EWRAM_DATA

#define ALIGNED(n) __attribute__((aligned(n)))

#define SOUND_INFO_PTR (*(struct SoundInfo **)0x3007FF0)
#define INTR_CHECK     (*(u16 *)0x3007FF8)
#define INTR_VECTOR    (*(void **)0x3007FFC)

#define EWRAM_START gAnims
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

#define RGB(r, g, b) ((r) | ((g) << 5) | ((b) << 10))

#define RGB_BLACK RGB(0, 0, 0)
#define RGB_WHITE RGB(31, 31, 31)

#define WIN_RANGE(a, b) (((a) << 8) | (b))

#define SECTION(name) __attribute__((section(name)))

#define CONST_DATA
#define EWRAM_OVERLAY(id)

#define ARRAY_COUNT(array) (sizeof(array) / sizeof((array)[0]))

#define RED_VALUE(color) ((color) & 0x1F)
#define GREEN_VALUE(color) (((color) >> 5) & 0x1F)
#define BLUE_VALUE(color) (((color) >> 10) & 0x1F)

#define ABS(aValue) ((aValue) >= 0 ? (aValue) : -(aValue))

#define SIN(aAngle) (gSinLookup[(aAngle&0xFF)])
#define COS(aAngle) (gSinLookup[0x40 + (aAngle&0xFF)])

#define RECT_DISTANCE(aXA, aYA, aXB, aYB) (ABS((aXA) - (aXB)) + ABS((aYA) - (aYB)))

#define LIMIT_AREA(num, min, max)   \
    if (num > max)                  \
        num = max;                  \
    if (num < min)                  \
        num = min;

#define LIMIT_AREA_(num, min, max)  \
    if (num < min)                  \
        num = min;                  \
    else if (num > max)             \
        num = max;

#if !MODERN
#  define STRUCT_PAD(from, to) unsigned char _pad_ ## from[(to) - (from)]
#else
#  define STRUCT_PAD(from, to)
#endif


#ifndef __STDBOOL_H__
typedef s8 bool;
enum { false, true };
#define false	false
#define true	true
#define __bool_true_false_are_defined	1
#endif /* bool */

typedef void (* Func)(void);
typedef void * ProcPtr;
typedef void(* ProcFunc)(ProcPtr proc);

struct Vec2 {
    s16 x, y;
};

struct Vec2u {
    u16 x, y;
};

enum glb_pos {
    POS_L = 0,
    POS_R = 1,
    POS_INVALID = -1
};

struct SMSHandle;
struct Unit;
struct UnitDefinition;
struct BattleHit;
struct SupportBonuses;

struct BattleAnimDef {
    u16 wtype;
    u16 index;
};

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
void SoundBiasReset(void);
void SoundBiasSet(void);
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
int Div(int, int);
int DivArm(int, int);
int DivRem(int, int);
void HuffUnComp(void const * src, void * dst);
void LZ77UnCompVram(const void *src, void *dest);
void RLUnCompWram(const void *src, void *dest);
void RLUnCompVram(const void *src, void *dest);


enum interpolate_method_idx {
    INTERPOLATE_LINEAR,
    INTERPOLATE_SQUARE,
    INTERPOLATE_CUBIC,
    INTERPOLATE_POW4,
    INTERPOLATE_RSQUARE,
    INTERPOLATE_RCUBIC,
};

int Interpolate(int method, int lo, int hi, int x, int end);
// ??? nullsub_33
bool StringEquals(char const * strA, char const * strB);
void StringCopy(char * dst, char const * src);
// ??? sub_08013614
// ??? sub_08013658
void Decompress(void const * src, void * dst);

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

struct Proc;

// typedef void * ProcPtr;
// typedef void( *ProcFunc)(ProcPtr proc);

struct ProcCmd {
    short opcode;
    short dataImm;
    const void * dataPtr;
};

#define PROC_END                                     { 0x00, 0x0000, 0 }
#define PROC_NAME(aName)                             { 0x01, 0x0000, aName }
#define PROC_CALL(apRoutine)                         { 0x02, 0x0000, (apRoutine) }
#define PROC_REPEAT(apRoutine)                       { 0x03, 0x0000, (apRoutine) }
#define PROC_SET_END_CB(apRoutine)                   { 0x04, 0x0000, (apRoutine) }
#define PROC_START_CHILD(ap6CChild)                  { 0x05, 0x0000, (ap6CChild) }
#define PROC_START_CHILD_BLOCKING(ap6CChild)         { 0x06, 0x0001, (ap6CChild) }
#define PROC_START_MAIN_BUGGED(ap6CMain)             { 0x07, 0x0000, (ap6CMain) }
#define PROC_WHILE_EXISTS(ap6CToCheck)               { 0x08, 0x0000, (ap6CToCheck) }
#define PROC_END_EACH(ap6CToCheck)                   { 0x09, 0x0000, (ap6CToCheck) }
#define PROC_BREAK_EACH(ap6CToCheck)                 { 0x0A, 0x0000, (ap6CToCheck) }
#define PROC_LABEL(aLabelId)                         { 0x0B, aLabelId, 0 }
#define PROC_GOTO(aLabelId)                          { 0x0C, aLabelId, 0 }
#define PROC_JUMP(ap6CCode)                          { 0x0D, 0x0000, (ap6CCode) }
#define PROC_SLEEP(aTime)                            { 0x0E, aTime,  0 }
#define PROC_MARK(aMark)                             { 0x0F, aMark,  0 }
#define PROC_BLOCK                                   { 0x10, 0x0000, 0 }
#define PROC_END_IF_DUPLICATE                        { 0x11, 0x0000, 0 }
#define PROC_SET_BIT4                                { 0x12, 0x0000, 0 }
#define PROC_13                                      { 0x13, 0x0000, 0 }
#define PROC_WHILE(aprRoutine)                       { 0x14, 0x0000, (aprRoutine) }
#define PROC_15                                      { 0x15, 0x0000, 0 }
#define PROC_CALL_2(aprRoutine)                      { 0x16, 0x0000, (aprRoutine) }
#define PROC_END_DUPLICATES                          { 0x17, 0x0000, 0 }
#define PROC_CALL_ARG(aprRoutine, aArgument)         { 0x18, (aArgument), (aprRoutine) }
#define PROC_19                                      { 0x19, 0x0000, 0 }
#define PROC_YIELD                                   PROC_SLEEP(0)

// allows local Proc structs to invoke the general Proc
// fields when creating local Proc definitions.
#define PROC_HEADER                                                                        \
    /* 00 */ const struct ProcCmd * proc_script; /* pointer to proc script */                        \
    /* 04 */ const struct ProcCmd * proc_scrCur; /* pointer to currently executing script command */ \
    /* 08 */ ProcFunc proc_endCb; /* callback to run upon delegint the process */                   \
    /* 0C */ ProcFunc proc_idleCb; /* callback to run once each frame. */                           \
                                   /* disables script execution when not null */                    \
    /* 10 */ const char * proc_name;                                                                 \
    /* 14 */ ProcPtr proc_parent; /* pointer to parent proc. If this proc is a root proc, */        \
                                  /* this member is an integer which is the root index. */          \
    /* 18 */ ProcPtr proc_child; /* pointer to most recently added child */                         \
    /* 1C */ ProcPtr proc_next; /* next sibling */                                                  \
    /* 20 */ ProcPtr proc_prev; /* previous sibling */                                              \
    /* 24 */ s16 proc_sleepTime;                                                                    \
    /* 26 */ u8 proc_mark;                                                                          \
    /* 27 */ u8 proc_flags;                                                                         \
    /* 28 */ u8 proc_lockCnt; /* wait semaphore. Process execution */                               \
                              /* is blocked when this is nonzero. */                                \

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

    /* 54 */ void * ptr;
    /* 58 */ int unk58;
    /* 5C */ int unk5C;
    /* 60 */ int unk60;
    /* 64 */ short unk64;
    /* 66 */ short unk66;
    /* 68 */ short unk68;
    /* 6A */ short unk6A;
};

struct ProcFindIterator {
    /* 00 */ struct Proc * proc;
    /* 04 */ const struct ProcCmd * script;
    /* 08 */ int count;
};

#define PROC_TREE_VSYNC ((ProcPtr) 0)
#define PROC_TREE_1     ((ProcPtr) 1)
#define PROC_TREE_2     ((ProcPtr) 2)
#define PROC_TREE_3     ((ProcPtr) 3)
#define PROC_TREE_4     ((ProcPtr) 4)
#define PROC_TREE_5     ((ProcPtr) 5)
#define PROC_TREE_6     ((ProcPtr) 6)
#define PROC_TREE_7     ((ProcPtr) 7)
#define PROC_IS_ROOT(aProc) ((uintptr_t)aProc <= (u32)PROC_TREE_7)

#define ROOT_PROC(treenum) (*(gProcTreeRootArray + (treenum)))

extern struct Proc * gProcTreeRootArray[8];

void Proc_Init(void);
ProcPtr Proc_Start(const struct ProcCmd* script, ProcPtr parent);
ProcPtr Proc_StartBlocking(const struct ProcCmd* script, ProcPtr parent);
void Proc_End(ProcPtr proc);
void Proc_Run(ProcPtr proc);
void Proc_Break(ProcPtr proc);
ProcPtr Proc_Find(const struct ProcCmd* script);
void Proc_Goto(ProcPtr proc, int label);
void Proc_GotoScript(ProcPtr proc, const struct ProcCmd* script);
void Proc_SetMark(ProcPtr proc, int mark);
void Proc_SetEndCb(ProcPtr proc, ProcFunc func);
void Proc_ForAll(ProcFunc func);
void Proc_ForEach(const struct ProcCmd *script, ProcFunc func);
void Proc_ForEachMarked(int mark, ProcFunc func);
void Proc_BlockEachMarked(int mark);
void Proc_UnblockEachMarked(int mark);
void Proc_EndEachMarked(int mark);
void Proc_EndEach(const struct ProcCmd *script);
void Proc_BreakEach(const struct ProcCmd* script);
void Proc_SetRepeatCb(ProcPtr proc, ProcFunc func);
// ??? Proc_FindAfter(???);
// ??? Proc_FindAfterWithParent(???);
// ??? sub_80034D4(???);
// ??? sub_80034FC(???);
void Proc_FindBegin(struct ProcFindIterator* it, const struct ProcCmd* script);
ProcPtr Proc_FindNext(struct ProcFindIterator* it);

#define Proc_Exists(script) (Proc_Find((script)) ? TRUE : FALSE)

enum { UNIT_DEFINITION_ITEM_COUNT = 4 };
enum { UNIT_SUPPORT_MAX_COUNT = 7 };
enum item_slot_idx {
    // 0..4 are unit inventory

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

#define UNIT_ITEM_COUNT ITEMSLOT_INV_COUNT /* port from fe6 --> fireemblem8u */

struct CharacterData {
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
    /* 25 */ u8 _u25;
    /* 26 */ u8 _u26;
    /* 27 */ u8 _u27;

    /* 28 */ u32 attributes;

    /* 2C */ const struct SupportData* pSupportData;
    /* 30 */ u8 visit_group;

    /* 31 */ u8 _pad_[0x34 - 0x31];
};

extern CONST_DATA struct CharacterData gCharacterData[];

struct ClassData {
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

    /* 34 */ const void* pBattleAnimDef;
    /* 38 */ const s8* pMovCostTable[3]; // standard, rain, snow

    /* 44 */ const s8* pTerrainAvoidLookup;
    /* 48 */ const s8* pTerrainDefenseLookup;
    /* 4C */ const s8* pTerrainResistanceLookup;

    /* 50 */ const void* _pU50;
};

struct Unit {
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
    /* 1B */ u8 rescue;
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

int GetPlayerLeaderUnitId(void);
int GetItemIndex(int item);
void UnitHideIfUnderRoof(struct Unit * unit);
void CharStoreAI(struct Unit * unit, const struct UnitDefinition * uDef);
int GetUnitSupporterCount(struct Unit * unit);
int GetUnitSupporterInitialExp(struct Unit * unit, int num);
int GetAutoleveledStatIncrease(int growth, int levelCount);
int GetCurrentPromotedLevelBonus(void);
int GetStatIncrease(int growth);
void ClearUnitSupports(struct Unit * unit);
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
char * DecodeMsg(int id);
void EnableAllLightRunes(void);
void DisableAllLightRunes(void);
void PidStatsRecordBattleResult(void);
void PidStatsAddBattleAmt(struct Unit * unit);
int GetBallistaItemAt(int xPos, int yPos);
int GetUnitSupportBonuses(struct Unit * unit, struct SupportBonuses * bonuses);
bool sub_08028620(struct Unit * unit);
void PidStatsAddExpGained(u8 pid, int expGain);
int GetMapChangeIdAt(int x, int y);
void MU_EndAll(void);
void BeginBattleMapAnims(void);
void WriteSuspendSave(int slot);
void StartBgmVolumeChange(int volume_from, int volume_to, int duration, ProcPtr parent);
void CloseHelpBox(void);
void LoadHelpBoxGfx(void * vram, int palId);
void StartHelpBoxExt_Unk(int x, int y, int mid);

enum times_amt {
    FRAMES_PER_SECOND = 60,
    FRAMES_PER_MINUTE = 60 * FRAMES_PER_SECOND,
    FRAMES_PER_HOUR   = 60 * FRAMES_PER_MINUTE,
};

#define IO_ALIGNED(n) ALIGNED(4)

struct DispCnt {
    /* bit  0 */ u16 mode : 3;
    /* bit  3 */ u16 _ : 1;
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

struct DispStat {
    /* bit  0 */ u16 vblank : 1;
    /* bit  1 */ u16 hblank : 1;
    /* bit  2 */ u16 vcount : 1;
    /* bit  3 */ u16 vblank_int_enable : 1;
    /* bit  4 */ u16 hblank_int_enable : 1;
    /* bit  5 */ u16 vcount_int_enable : 1;
    /* bit  6 */ u16 _ : 2;
    /* bit  8 */ u16 vcount_compare : 8;
};

struct BgCnt {
    /* bit  0 */ u16 priority : 2;
    /* bit  2 */ u16 chr_block : 2;
    /* bit  4 */ u16 _ : 2;
    /* bit  6 */ u16 mosaic : 1;
    /* bit  7 */ u16 color_depth : 1;
    /* bit  8 */ u16 tm_block : 5;
    /* bit 13 */ u16 wrap : 1;
    /* bit 14 */ u16 size : 2;
};

struct WinCnt {
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

struct BlendCnt {
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

struct DispIo {
    /* 00 */ struct DispCnt disp_ct;
    /* 04 */ struct DispStat disp_stat;
    /* 08 */ STRUCT_PAD(0x08, 0x0C);
    /* 0C */ struct BgCnt bg0_ct;
    /* 10 */ struct BgCnt bg1_ct;
    /* 14 */ struct BgCnt bg2_ct;
    /* 18 */ struct BgCnt bg3_ct;
    /* 1C */ struct Vec2u bg_off[4];
    /* 2C */ u8 win0_right, win0_left, win1_right, win1_left;
    /* 30 */ u8 win0_bottom, win0_top, win1_bottom, win1_top;
    /* 34 */ struct WinCnt win_ct;
    /* 38 */ u16 mosaic;
    /* 3A */ STRUCT_PAD(0x3A, 0x3C);
    /* 3C */ struct BlendCnt blend_ct;
    /* 40 */ STRUCT_PAD(0x40, 0x44);
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
    /* 68 */ s8 color_addition;
};

struct KeySt {
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

enum bg_sync_bitfile {
    BG0_SYNC_BIT = (1 << 0),
    BG1_SYNC_BIT = (1 << 1),
    BG2_SYNC_BIT = (1 << 2),
    BG3_SYNC_BIT = (1 << 3),
};

enum bg_index {
    BG_0 = 0,
    BG_1,
    BG_2,
    BG_3,

    BG_INVALID = -1,
};

extern struct KeySt CONST_DATA *gpKeySt;
extern struct KeySt EWRAM_DATA gKeyStObj;

struct MoveStats {
    /* 00 */ int count;
    /* 04 */ int totalSize;
};

struct MoveEntry {
    /* 00 */ void const *src;
    /* 04 */ void *dest;
    /* 08 */ u16 size;
    /* 0A */ u16 mode;
};

#define DATA_MOV_LIST_MAX 0x20

extern struct MoveStats EWRAM_DATA gMoveStats;
extern struct MoveEntry EWRAM_DATA gMoveList[DATA_MOV_LIST_MAX];

enum data_move_mode {
    MOVE_MODE_COPY,
    MOVE_MODE_COPY_FAST,
    MOVE_MODE_FILL_FAST,
};

enum {
    BG_SIZE_256x256 = 0,
    BG_SIZE_512x256 = 1,
    BG_SIZE_256x512 = 2,
    BG_SIZE_512x512 = 3,
};

enum softreset_arg {
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

extern u8 EWRAM_DATA gBuf[0x2100];
extern u16 EWRAM_DATA gPal[0x200];
extern u16 EWRAM_DATA gBg0Tm[0x400];
extern u16 EWRAM_DATA gBg1Tm[0x400];
extern u16 EWRAM_DATA gBg2Tm[0x400];
extern u16 EWRAM_DATA gBg3Tm[0x400];
extern void *EWRAM_DATA gBgMapVramTable[4];
extern Func EWRAM_DATA MainFunc;
extern struct DispIo gDispIo;
extern const s16 gSinLut[0x40];

extern Func gOnHBlankA;
extern Func gOnHBlankB;

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
#define PAL_BUF_COLOR(buf, palid, colornum) buf[PAL_COLOR_OFFSET((palid), (colornum))]
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
void SetBgOffset(u16 bgid, u16 x_offset, u16 y_offset);
void func_fe6_08001AE4(void);
void func_fe6_08001B18(u8 a, u8 b);
void func_fe6_08001B4C(u16 * a, u16 * b);
void func_fe6_08001B8C(void * tm, void const * in_data, u8 base, u8 linebits);
void func_fe6_08001C68(u16 * tm, short const * in_data, int unused);
void ColorFadeInit(void);
void func_fe6_08001D44(u16 const * in_pal, int bank, int count, int unk);
void func_fe6_08001E68(int a, int b, int c, int d);
void func_fe6_08001F88(int a, int b, int c);
void ColorFadeSetupFromColorToBlack(s8 component_step);
void ColorFadeSetupFromBlack(s8 component_step);
void ColorFadeSetupFromColorToWhite(s8 component_step);
void ColorFadeSetupFromWhite(s8 component_step);
void ColorFadeTick2(void);
void InitBgs(u16 const * config);
u16 * GetBgTilemap(int bg);
void SoftResetIfKeyCombo(void);
void func_fe6_0800285C(int unk);
void SetOnHBlankA(Func func);
void SetOnHBlankB(Func func);
int GetBgFromPtr(u16 *ptr);
void RegisterDataMove(void const * src, void * dst, int size);
void RegisterDataFill(u32 value, void * dst, int size);
void ApplyDataMoves(void);

typedef u32 AnimScr;

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

    /* 20 */ const AnimScr * pScrCurrent;
    /* 24 */ const AnimScr * pScrStart;
    /* 28 */ const void * pImgSheet;
    /* 2C */ void * pImgSheetBuf;
    /* 30 */ const void * pSpriteDataPool; // aka "OAM data"

    /* 34 */ struct Anim * pPrev;
    /* 38 */ struct Anim * pNext;

    /* 3C */ const void * pSpriteData;
    /* 40 */ const void * pUnk40;
    /* 44 */ void * pUnk44;
};

enum Anim_state {
    ANIM_BIT_ENABLED = (1 << 0),
    ANIM_BIT_HIDDEN  = (1 << 1),
    ANIM_BIT_2       = (1 << 2),
    ANIM_BIT_FROZEN  = (1 << 3),
};

enum Anim_state2 {
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

enum Anim_state3 {
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

enum AnimRoundData_type_identifier {
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
enum {
    ANIM_MAX_COUNT = 50,
};

enum {
    // Animation Command Identifiers
    // TODO: complete during battle animation decomp

    ANIM_CMD_NOP     = 0x00,
    ANIM_CMD_WAIT_01 = 0x01, // wait for hp depletion
    ANIM_CMD_WAIT_02 = 0x02, // wait for dodge start, then dodge
    ANIM_CMD_WAIT_03 = 0x03, // wait for attack start
    ANIM_CMD_WAIT_04 = 0x04,
    ANIM_CMD_WAIT_05 = 0x05, // wait for spell animation?
    // TODO: more
    ANIM_CMD_WAIT_13 = 0x13, // unk
    ANIM_CMD_WAIT_18 = 0x18, // wait for dodge start, then forward dodge
    ANIM_CMD_WAIT_2D = 0x2D, // unk
    ANIM_CMD_WAIT_39 = 0x39, // unk
    ANIM_CMD_WAIT_52 = 0x52, // unk
};

// TODO: add macro helpers for writing animation scripts.
#define ANIM_IS_DISABLED(anim) ((anim)->state == 0)

enum anim_inst_type {
    ANIM_INS_TYPE_STOP    = 0,
    ANIM_INS_TYPE_END     = 1,
    ANIM_INS_TYPE_LOOP    = 2,
    ANIM_INS_TYPE_MOVE    = 3,
    ANIM_INS_TYPE_WAIT    = 4,
    ANIM_INS_TYPE_COMMAND = 5,
    ANIM_INS_TYPE_FRAME   = 6,
};

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

/* Anim Script commands */
#define ANIMSCR_FRAME(delay, img, oam2) \
    (ANFMT_NOT_FORCESPRITE + ANFMT_INST_TYPE(ANIM_INS_TYPE_FRAME) + ((delay) & 0xFFFF)), \
    (AnimScr)(img), \
    (AnimScr)(oam2)

#define ANIMSCR_BLOCKED \
    (ANFMT_NOT_FORCESPRITE + ANFMT_INST_TYPE(ANIM_INS_TYPE_STOP))

#define ANIMSCR_FORCE_SPRITE(anim_sprite, duration) \
    (ANFMT_FORCESPRITE + (AnimScr)(anim_sprite) + ANIMFMT_OAM_DURATION(duration))

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

#define ANIM_SPRITE_END {.header = 1}

void AnimUpdateAll(void);
void AnimClearAll(void);
struct Anim * AnimCreate_unused(const void * script);
struct Anim * AnimCreate(const void * script, u16 displayPriority);
void AnimSort(void);
void AnimDelete(struct Anim* anim);
void AnimDisplay(struct Anim* anim);








extern s8 MoveTable_Flying[];
extern s8 MoveTable_Ballista[];
extern char const *StatusNameStringLut[];
extern int Unk_081C8FCC[12][4];
extern u8 gArenaLevelBackup;
extern struct unk_type_0203A50C gUnk_0203A50C;

// ??? gUnk_080C0C50
// ??? gUnk_080C0C6C

// ??? gUnk_080C8174
// ??? gUnk_080C86D4
// ??? gUnk_080C86F4
// ??? gUnk_08187B5C
// ??? gUnk_0818AE2C
// ??? gUnk_0818B308
// ??? gUnk_0818B408
// ??? gUnk_0818B760
// ??? gUnk_0818BC3C
// ??? gUnk_0818F8E4
// ??? gUnk_0818F8F8
// ??? gUnk_0818F8FC
// ??? gUnk_0818F904
// ??? gUnk_0818F920
// ??? gUnk_0818F93C
// ??? gUnk_0818F958
// ??? gUnk_0818F960
// ??? gUnk_0818F980
// ??? gUnk_0818F990
// ??? gUnk_0818F9F0
// ??? gUnk_0818FE70
// ??? gUnk_0818FEB0
// ??? gUnk_0818FEEC

// ??? gUnk_08190188
// ??? gUnk_081901A8
// ??? gUnk_081901C8
// ??? gUnk_081901E8
// ??? gUnk_08190208
// ??? gUnk_08190228
// ??? gUnk_08190248
// ??? gUnk_08190268
// ??? gUnk_08190288
// ??? gUnk_081902A8
// ??? gUnk_081902C8
// ??? gUnk_081902E8
// ??? gUnk_08190764
// ??? gUnk_08190784
// ??? gUnk_08190BDC
// ??? gUnk_08190BFC
// ??? gUnk_08191054
// ??? gUnk_08191074
// ??? gUnk_081911D4
// ??? gUnk_0819128C
// ??? gUnk_08191410
// ??? gUnk_08191700
// ??? gUnk_08191720
// ??? gUnk_08191740
// ??? gUnk_08191760
// ??? gUnk_08191780
// ??? gUnk_081918C4
// ??? gUnk_08191A58
// ??? gUnk_08191B04
// ??? gUnk_08191BD8
// ??? gUnk_08191C28
// ??? gUnk_08191D7C
// ??? gUnk_08191ED4
// ??? gUnk_08192178
// ??? gUnk_081923EC
// ??? gUnk_081929D4
// ??? gUnk_08192F48
// ??? gUnk_08192F68
// ??? gUnk_08192F88
// ??? gUnk_08193260
// ??? gUnk_0819381C
// ??? gUnk_08193CB8
// ??? gUnk_08193CD8
// ??? gUnk_0819436C
// ??? gUnk_0819438C
// ??? gUnk_08194AF8
// ??? gUnk_08194D78
// ??? gUnk_08194F8C
// ??? gUnk_08194FAC
// ??? gUnk_08195034
// ??? gUnk_081950CC
// ??? gUnk_0819510C
// ??? gUnk_0819514C
// ??? gUnk_08195668
// ??? gUnk_08195688
// ??? gUnk_08196DAC
// ??? gUnk_08196DCC
// ??? gUnk_081970AC
// ??? gUnk_081980C0
// ??? gUnk_081980E0
// ??? gUnk_0819839C
// ??? gUnk_08198AE4
// ??? gUnk_08198B04
// ??? gUnk_08198CC8
// ??? gUnk_08198D78
// ??? gUnk_08198D98
// ??? gUnk_08199250
// ??? gUnk_08199290
// ??? gUnk_081A7634
// ??? gUnk_081A7F00
// ??? gUnk_081AC808
// ??? gUnk_081ACA20
// ??? gUnk_081ACA40
// ??? gUnk_081BD14C
// ??? gUnk_081BD514
// ??? gUnk_081BD534
// ??? gUnk_081BD6C4
// ??? gUnk_081BD6E4
// ??? gUnk_081BDEE8
// ??? gUnk_081BECCC
// ??? gUnk_081BEF08
// ??? gUnk_081BEF28
// ??? gUnk_081BF2E0
// ??? gUnk_081BF4E0
// ??? gUnk_081BF61C
// ??? gUnk_081C0A50
// ??? gUnk_081C0A70
// ??? gUnk_081C0A90
// ??? gUnk_081C1068
// ??? gUnk_081C1CA4
// ??? gUnk_081C1EA4
// ??? gUnk_081C2358
// ??? gUnk_081C2974
// ??? gUnk_081C2D44
// ??? gUnk_081C3850
// ??? gUnk_081C564C
// ??? gUnk_081C6BAC
// ??? gUnk_081C6C34
// ??? gUnk_081C6E34
// ??? gUnk_081C83E8
// ??? gUnk_081C855C
// ??? gUnk_081C85F0
// ??? gUnk_081C8610
// ??? gUnk_081C8AF8
// ??? gUnk_081C8B18

// ??? gUnk_0842D270
// ??? gUnk_0842D338
// ??? gUnk_0842D710
// ??? gUnk_0842D730
// ??? gUnk_0842D7B0
// ??? gUnk_0842D7B3
// ??? gUnk_0842D7C3
// ??? gUnk_0842D7E4
// ??? gUnk_0842D800
// ??? gUnk_0842D860
// ??? gUnk_0842DD14
// ??? gUnk_0842FD94
// ??? gUnk_0842FF00
// ??? gUnk_0843165C
// ??? gUnk_08432594
// ??? gUnk_08432694
// ??? gUnk_08432AE8
// ??? gUnk_08432B28
// ??? gUnk_08432D74
// ??? gUnk_08432DE4
// ??? gUnk_08432E44
// ??? gUnk_08432E88
// ??? gUnk_08432FF8
// ??? gUnk_08433A90
// ??? gUnk_08433C0C
// ??? gUnk_08433CA0
// ??? gUnk_08433CC8
// ??? gUnk_08434448
// ??? gUnk_08434460
// ??? gUnk_08434468
// ??? gUnk_08434DD0
// ??? gUnk_084352DC
// ??? gUnk_084352FC
// ??? gUnk_08436460
// ??? gUnk_08436480
// ??? gUnk_084364A0
// ??? gUnk_08438954
// ??? gUnk_08438D90
// ??? gUnk_08439190
// ??? gUnk_0843927C
// ??? gUnk_0843929C
// ??? gUnk_084392DC
// ??? gUnk_08439338
// ??? gUnk_08439348
// ??? gUnk_084393C4
// ??? gUnk_084393D0
// ??? gUnk_084393D8
// ??? gUnk_084393E4
// ??? gUnk_08439414
// ??? gUnk_0843941C
// ??? gUnk_0843942C
// ??? gUnk_0843943C
// ??? gUnk_08439BE4
// ??? gUnk_08439BE8
// ??? gUnk_08439BF0
// ??? gUnk_0843E7EC
// ??? gUnk_0843EA3C
// ??? gUnk_0843EA50
// ??? gUnk_0843EF2C
// ??? gUnk_0843EFB0
// ??? gUnk_0843F084
// ??? gUnk_0843F0E4
// ??? gUnk_0843F144
// ??? gUnk_0843F164
// ??? gUnk_0843F1A4
// ??? gUnk_0843FB60
// ??? gUnk_0843FBE0
// ??? gUnk_0843FDC8
// ??? gUnk_0843FDE8
// ??? gUnk_08440300
// ??? gUnk_08440320
// ??? gUnk_08440838
// ??? gUnk_0844182C
// ??? gUnk_0844186C
// ??? gUnk_0844BCB8
// ??? gUnk_0844BCD0
// ??? gUnk_0844BF6C
// ??? gUnk_0844BFA0
// ??? gUnk_0844C0B8
// ??? gUnk_0844C5A0
// ??? gUnk_0844C614
// ??? gUnk_0844C9E8
// ??? gUnk_0844F1E8
// ??? gUnk_0844F5CC
// ??? gUnk_0844F64C
// ??? gUnk_08452AD4
// ??? gUnk_08452C74
// ??? gUnk_08452D90
// ??? gUnk_08452E70
// ??? gUnk_08452E90
// ??? gUnk_08453438
// ??? gUnk_08453538
// ??? gUnk_0857E570
// ??? gUnk_08583EE4
// ??? gUnk_085AE7BC
// ??? gUnk_0860A86C
// ??? gUnk_0860A8EC
// ??? gUnk_0860F964
// ??? gUnk_0860FE18
// ??? gUnk_0860FE98
// ??? gUnk_086151B8
// ??? gUnk_08615A4C
// ??? gUnk_08615F00
// ??? gUnk_08615F40
// ??? gUnk_08615F80
// ??? gUnk_086167D0
// ??? gUnk_0861684C
// ??? gUnk_086168C8
// ??? gUnk_08616D7C
// ??? gUnk_0861766C
// ??? gUnk_08617B20
// ??? gUnk_08618410
// ??? gUnk_08618430
// ??? gUnk_0861882C
// ??? gUnk_08618CE0
// ??? gUnk_08618D20
// ??? gUnk_0861A360
// ??? gUnk_0861A380
// ??? gUnk_0861A3A0
// ??? gUnk_0861A3E0
// ??? gUnk_0861A420
// ??? gUnk_0861A460
// ??? gUnk_0861A914
// ??? gUnk_0861AB70
// ??? gUnk_08622B38
// ??? gUnk_08622BEC
// ??? gUnk_08622C24
// ??? gUnk_08622C44
// ??? gUnk_08622C48
// ??? gUnk_08622C4C
// ??? gUnk_08622C50
// ??? gUnk_08622C54
// ??? gUnk_08622C58
// ??? gUnk_08622C5C
// ??? gUnk_08622C70
// ??? gUnk_08622C7C
// ??? gUnk_08622C9C
// ??? gUnk_086282F8
// ??? gUnk_086284F8
// ??? gUnk_0862B5B4
// ??? gUnk_0862E4D0
// ??? gUnk_0862E778
// ??? gUnk_0862E798
// ??? gUnk_0862EA60
// ??? gUnk_0862F448
// ??? gUnk_0862F468
// ??? gUnk_08630288
// ??? gUnk_08630338
// ??? gUnk_086496C8
// ??? gUnk_0864A790
// ??? gUnk_0864AC94
// ??? gUnk_0864ACB4
// ??? gUnk_0864ACD4
// ??? gUnk_0864ACF4
// ??? gUnk_0864AD14
// ??? gUnk_0864AD34
// ??? gUnk_0864AD54
// ??? gUnk_08661544
// ??? gUnk_08661564
// ??? gUnk_086618E8
// ??? gUnk_086A511C
// ??? gUnk_086B6E70
// ??? gUnk_086B6E90
// ??? gUnk_086B7184
// ??? gUnk_086B73E0
// ??? gUnk_086B7400
// ??? gUnk_086BB234
// ??? gUnk_086BB6E8
// ??? gUnk_086BB708
// ??? gUnk_086BBF90
// ??? gUnk_086BC444
// ??? gUnk_086BC4E4
// ??? gUnk_086BF118
// ??? gUnk_086BF37C
// ??? gUnk_086BF39C
// ??? gUnk_086C0674
// ??? gUnk_086C08D0
// ??? gUnk_086C08F0
// ??? gUnk_086C0C4C
// ??? gUnk_086C10B4
// ??? gUnk_086C10D4
// ??? gUnk_086C2238
// ??? gUnk_086C25FC
// ??? gUnk_086C261C
// ??? gUnk_086C38F4
// ??? gUnk_086C3CF8
// ??? gUnk_086C3D18
// ??? gUnk_086C40D0
// ??? gUnk_086C44D4
// ??? gUnk_086C44EC
// ??? gUnk_086C450C
// ??? gUnk_086C4524
// ??? gUnk_086C4544
// ??? gUnk_086C4560
// ??? gUnk_086C45F0
// ??? gUnk_086C46A4
// ??? gUnk_086C46D4
// ??? gUnk_086C46EC
// ??? gUnk_086C4770
// ??? gUnk_086C4788
// ??? gUnk_086C47C4
// ??? gUnk_086C47D4
// ??? gUnk_086C4808
// ??? gUnk_086EA858
// ??? gUnk_086EA8D0
// ??? gUnk_08BBB370

// ??? gUnk_081C9108
// ??? gUnk_081C9150
// ??? gUnk_081C9170
// ??? gUnk_081C91A4

// ??? gUnk_081C9238
// ??? gUnk_081C9254
// ??? gUnk_081C925C
// ??? gUnk_081C9294
// ??? gUnk_081C92B0
// ??? gUnk_081C92B8
// ??? gUnk_081C92C0
// ??? gUnk_081C92C8
// ??? gUnk_081C92DC
// ??? gUnk_081C92E4
// ??? gUnk_081C9304
// ??? gUnk_081C9310
// ??? gUnk_081C9318
// ??? gUnk_081C9334
// ??? gUnk_081C9344
// ??? gUnk_081C9350
// ??? gUnk_081C9358
// ??? gUnk_081C9360
// ??? gUnk_081C9368
// ??? gUnk_081C9370
// ??? gUnk_081C9378
// ??? gUnk_081C93AC
// ??? gUnk_081C93E4
// ??? gUnk_081C9422
// ??? gUnk_081C9474
// ??? gUnk_081C947C
// ??? gUnk_081C94A0

// ??? gUnk_081C94C8
// ??? gUnk_081C94CA
// ??? gUnk_081C97A8
// ??? gUnk_081C9808
// ??? gUnk_081C9814
// ??? gUnk_081C9818
// ??? gUnk_081C9820
// ??? gUnk_081C983C
// ??? gUnk_081C9844
// ??? gUnk_081C984C
// ??? gUnk_081C9850
// ??? gUnk_081C9858
// ??? gUnk_081C9860
// ??? gUnk_081C9868
// ??? gUnk_081C9870
// ??? gUnk_081C9874
// ??? gUnk_081C987C
// ??? gUnk_081CA0B4
// ??? gUnk_081CA2A4
// ??? gUnk_081CA888
// ??? gUnk_081CB3E0
// ??? gUnk_081CBC70
// ??? gUnk_081CC2AC
// ??? gUnk_081CC680
// ??? gUnk_081CC8AC
// ??? gUnk_081CD028
// ??? gUnk_081CD248
// ??? gUnk_081CD3E0
// ??? gUnk_081CD5EC
// ??? gUnk_081CD738
// ??? gUnk_081CD798
// ??? gUnk_081CD818
// ??? gUnk_081CD858
// ??? gUnk_081CD898
// ??? gUnk_081CD938
// ??? gUnk_081CD958
// ??? gUnk_081CD978
// ??? gUnk_081CD998
// ??? gUnk_081CD9B8
// ??? gUnk_081CD9D8
// ??? gUnk_081CD9F8
// ??? gUnk_081CDA18
// ??? gUnk_081CDA58
// ??? gUnk_081CDB10
// ??? gUnk_081CDD60
// ??? gUnk_081CE034
// ??? gUnk_081CE348
// ??? gUnk_081CE7F8
// ??? gUnk_081CECB8
// ??? gUnk_081CF168
// ??? gUnk_081CF61C
// ??? gUnk_081CF77C
// ??? gUnk_081CF79C
// ??? gUnk_081CF7BC
// ??? gUnk_081CF7DC
// ??? gUnk_081CF7FC
// ??? gUnk_081D0E50
// ??? gUnk_081D0ED0
// ??? gUnk_081D1384
// ??? gUnk_081D1564
// ??? gUnk_081D15E0
// ??? gUnk_081D3790
// ??? gUnk_081D3AB0
// ??? gUnk_081D3AF0
// ??? gUnk_081D768C
// ??? gUnk_081D7BF0
// ??? gUnk_081D7CF0
// ??? gUnk_081D7E20
// ??? gUnk_081D7EBC
// ??? gUnk_081D7F74
// ??? gUnk_081D7F94
// ??? gUnk_081D83B0
// ??? gUnk_081D83D0
// ??? gUnk_081D8E2C
// ??? gUnk_081D8EEC
// ??? gUnk_081D8EF8
// ??? gUnk_081D8F04
// ??? gUnk_081D8F0C
// ??? gUnk_081D8F88
// ??? gUnk_081D92F4
// ??? gUnk_081D93F8
// ??? gUnk_081D93FC
// ??? gUnk_081D9408
// ??? gUnk_081D940C
// ??? gUnk_081D9470
// ??? gUnk_081D9474
// ??? gUnk_081D9490
// ??? gUnk_081D94A0
// ??? gUnk_081DABC8
// ??? gUnk_081DACFE
// ??? gUnk_081DADEC
// ??? gUnk_081DAE7D
// ??? gUnk_081DAE86
// ??? gUnk_081DAE90
// ??? gUnk_081DAE9C
// ??? gUnk_081DAEBC
// ??? gUnk_081DAEC8
// ??? gUnk_081DAECB
// ??? gUnk_081DAED8
// ??? gUnk_081DAEE9
// ??? gUnk_081DAEF4
// ??? gUnk_081DAF4C
// ??? gUnk_081DAF54
// ??? gUnk_081DAF6E
// ??? gUnk_081DAF82
// ??? gUnk_081DAF8A
// ??? gUnk_081DAF98
// ??? gUnk_081DAFC0
// ??? gUnk_081DAFC4
// ??? gUnk_081DB000
// ??? gUnk_081DB008
// ??? gUnk_081DB00C
// ??? gUnk_081DB00F
// ??? gUnk_081DB018
// ??? gUnk_081DB024
// ??? gUnk_081DB02C
// ??? gUnk_081DB034
// ??? gUnk_081DB039
// ??? gUnk_081DB040
// ??? gUnk_081DB048
// ??? gUnk_081DB054
// ??? gUnk_081DB07C
// ??? gUnk_081DB086
// ??? gUnk_081DB08C
// ??? gUnk_081DB0A0
// ??? gUnk_081DB0A4
// ??? gUnk_081DB0AC
// ??? gUnk_081DB0B4
// ??? gUnk_081DB0BC
// ??? gUnk_081DB0D4
// ??? gUnk_081DB0D8
// ??? gUnk_081DB0E8
// ??? gUnk_081DB0F8
// ??? gUnk_081DB148
// ??? gUnk_081DB150
// ??? gUnk_081DB163
// ??? gUnk_081DB16B
// ??? gUnk_081DB173
// ??? gUnk_081DB178
// ??? gUnk_081DB17A
// ??? gUnk_081DB17C
// ??? gUnk_081DB18A
// ??? gUnk_081DB1A2
// ??? gUnk_081DB210
// ??? gUnk_081DB252
// ??? gUnk_081DB272
// ??? gUnk_081DB28C
// ??? gUnk_081DB2A0
// ??? gUnk_081DB2BA
// ??? gUnk_081DB2D8
// ??? gUnk_081DB320
// ??? gUnk_081DB32E
// ??? gUnk_081DB33C
// ??? gUnk_081DB34A
// ??? gUnk_081DB358
// ??? gUnk_081DB3B8
// ??? gUnk_081DB3C0
// ??? gUnk_081DB3CE
// ??? gUnk_081DB400
// ??? gUnk_081DB490
// ??? gUnk_081DBD64
// ??? gUnk_081DD7F4
// ??? gUnk_081DDA48
// ??? gUnk_081DDAC8
// ??? gUnk_081DDB58
// ??? gUnk_081DDB74
// ??? gEfxQuakeVecs
// ??? gUnk_081DDBE0
// ??? gUnk_081DDC2A
// ??? gUnk_081DDC74
// ??? gUnk_081DDCBE
// ??? gUnk_081DDD28
// ??? gUnk_081DDE44
// ??? gUnk_081DDEDA
// ??? gUnk_081DE00C
// ??? gUnk_081DE036
// ??? gUnk_081DE058
// ??? gUnk_081DE07A
// ??? gUnk_081DE0A8
// ??? gUnk_081DE17C
// ??? gUnk_081DE186
// ??? gUnk_081DE190
// ??? gUnk_081DE19A
// ??? gUnk_081DE1A4
// ??? gUnk_081DE1AE
// ??? gUnk_081DE1B8
// ??? gUnk_081DE1C2
// ??? gUnk_081DE1CC
// ??? gUnk_081DE1D6

// ??? gUnk_081DE20D
// ??? gUnk_081DE212
// ??? gUnk_081DE218
// ??? gUnk_081DE222
// ??? gUnk_081DE2B8
// ??? gUnk_081DE528
// ??? gUnk_081DE730
// ??? gUnk_081DE780
// ??? gUnk_081DE7EC
// ??? gUnk_081DE83C
// ??? gUnk_081DE8A8
// ??? gUnk_081DE95C
// ??? gUnk_081DEA10
// ??? gUnk_081DEAE4
// ??? gUnk_081DEBC4
// ??? gUnk_081DEC14
// ??? gUnk_081DEC94
// ??? gUnk_081DED34
// ??? gUnk_081DEDE4
// ??? gUnk_081DEFA4
// ??? gUnk_081DF024
// ??? gUnk_081DF224
// ??? gUnk_081DF2A4
// ??? gUnk_081DF2E4
// ??? gUnk_081DF3A4

// ??? gUnk_081DF464
// ??? gUnk_081DF764
// ??? gUnk_081DFA64
// ??? gUnk_081DFBC4
// ??? gUnk_081DFC30
// ??? gUnk_081DFC50
// ??? gUnk_081DFE78
// ??? gUnk_081DFE98
// ??? gUnk_081DFEB8
// ??? gUnk_081DFED8
// ??? gUnk_081E034C
// ??? gUnk_081E07EC
// ??? gUnk_081E0C60
// ??? gUnk_081E0EAC
// ??? gUnk_081E0FA8
// ??? gUnk_081E0FC8
// ??? gUnk_081E11DC
// ??? gUnk_081E11FC
// ??? gUnk_081E1258
// ??? gUnk_081E1358
// ??? gUnk_081E1378
// ??? gUnk_081E1404
// ??? gUnk_081E3A70
// ??? gUnk_081E4210
// ??? gUnk_081E9B28
// ??? gUnk_081EAC10
// ??? gUnk_081EB2D0
// ??? gUnk_081EB350
// ??? gUnk_081EB9AC
// ??? gUnk_081EBC44
// ??? gUnk_081EDC6C
// ??? gUnk_081EDC70
// ??? gUnk_081EDCDE
// ??? gUnk_081EDD00
// ??? gUnk_081EDDDA
// ??? gUnk_081EDE20
// ??? gUnk_081EDEC2
// ??? gUnk_081EDECC
// ??? gUnk_081EDF0E
// ??? gUnk_081EDF40
// ??? gUnk_081EDF96
// ??? gUnk_081EDFEC
// ??? gUnk_081EE05A
// ??? gUnk_081EE088
// ??? gUnk_081EE0CE
// ??? gUnk_081EE100
// ??? gUnk_081EE176
// ??? gUnk_081EE1E4
// ??? gUnk_081EE242
// ??? gUnk_081EE248
// ??? gUnk_081EE2CE
// ??? gUnk_081EE444
// ??? gUnk_081EE476
// ??? gUnk_081EE488
// ??? gUnk_081EE53E
// ??? gUnk_081EE54E
// ??? gUnk_081EE5CE
// ??? gUnk_081EE5DC
// ??? gUnk_081EE5EC
// ??? gUnk_081EE5FC
// ??? gUnk_081EE60C
// ??? gUnk_081EE67A
// ??? gUnk_081EE688
// ??? gUnk_081EE6DE
// ??? gUnk_081EE6F4
// ??? gUnk_081EE706
// ??? gUnk_081EE70C
// ??? gUnk_081EE7AE
// ??? gUnk_081EE7E4
// ??? gUnk_081EE822
// ??? gUnk_081EE924
// ??? gUnk_081EE92A
// ??? gUnk_081EE930
// ??? gUnk_081EE936
// ??? gUnk_081EE93C
// ??? gUnk_081EE97E
// ??? gUnk_081EE9C0
// ??? gUnk_081EE9F2
// ??? gUnk_081EEA34
// ??? gUnk_081EEA46
// ??? gUnk_081EEA4E
// ??? gUnk_081EEA56
// ??? gUnk_081EEB58
// ??? gUnk_081EEB5E
// ??? gUnk_081EEC3C
// ??? gUnk_081EEC72
// ??? gUnk_081EECBC
// ??? gUnk_081EEDBE
// ??? gUnk_081EEDF4
// ??? gUnk_081EEEBE
// ??? gUnk_081EEEC4
// ??? gUnk_081EEEEA
// ??? gUnk_081EEF04
// ??? gUnk_081EEF0A
// ??? gUnk_081EEF48
// ??? gUnk_081EEF7A
// ??? gUnk_081EEFB0
// ??? gUnk_081EEFC2
// ??? gUnk_081EEFD4
// ??? gUnk_081EF02A
// ??? gUnk_081EF07C
// ??? gUnk_081EF0AA
// ??? gUnk_081EF0DC
// ??? gUnk_081EF0F6
// ??? gUnk_081EF108
// ??? gUnk_081EF17A
// ??? gUnk_081EF1AC
// ??? gUnk_081EF1EA
// ??? gUnk_081EF298
// ??? gUnk_081EF2C4
// ??? gUnk_081EF306
// ??? gUnk_081EF330
// ??? gUnk_081EF346
// ??? gUnk_081EF34C
// ??? gUnk_081EF36E
// ??? gUnk_081EF390
// ??? gUnk_081EF3AE
// ??? gUnk_081EF3BC
// ??? gUnk_081EF406
// ??? gUnk_081EF4AC
// ??? gUnk_081EF4DE
// ??? gUnk_081EF4E8
// ??? gUnk_081EF52A
// ??? gUnk_081EF530
// ??? gUnk_081EF572
// ??? gUnk_081EF5F8
// ??? gUnk_081EF9F8
// ??? gUnk_081EFA18
// ??? gUnk_081EFA54
// ??? gUnk_081EFC84
// ??? gUnk_081EFCA4
// ??? gUnk_081EFEC0
// ??? gUnk_081EFEE0
// ??? gUnk_081F00F8
// ??? gUnk_081F0118
// ??? gUnk_081F0334
// ??? gUnk_081F0354
// ??? gUnk_081F0580
// ??? gUnk_081F05A0
// ??? gUnk_081F07E8
// ??? gUnk_081F0808
// ??? gUnk_081F0A40
// ??? gUnk_081F0A60
// ??? gUnk_081F0CC4
// ??? gUnk_081F0CE4
// ??? gUnk_081F0F54
// ??? gUnk_081F0F74
// ??? gUnk_081F11A4
// ??? gUnk_081F11C4
// ??? gUnk_081F13E0
// ??? gUnk_081F1400
// ??? gUnk_081F1574
// ??? gUnk_081F2E08
// ??? gUnk_081F3CC8
// ??? gUnk_081F3DC8
// ??? gUnk_081F4190
// ??? gUnk_081F4E90
// ??? gUnk_081F4EB0
// ??? gUnk_081F5750
// ??? gUnk_081F5F34
// ??? gUnk_081F5F54
// ??? gUnk_081F5F74
// ??? gUnk_081F5F94
// ??? gUnk_081F74D8
// ??? gUnk_081F85B8
// ??? gUnk_081F87B8
// ??? gUnk_081F8C58
// ??? gUnk_081F90B4
// ??? gUnk_081F9174
// ??? gUnk_081F9194
// ??? gUnk_081F9238
// ??? gUnk_081F9600
// ??? gUnk_081FC214
// ??? gUnk_081FDFA0
// ??? gUnk_081FECF4
// ??? gUnk_081FFC38
// ??? gUnk_082008AC
// ??? gUnk_08200C58
// ??? gUnk_082010C8
// ??? gUnk_082010E8
// ??? gUnk_08201108
// ??? gUnk_08201128
// ??? gUnk_082019E4
// ??? gUnk_08201E10
// ??? gUnk_082022A8
// ??? gUnk_08202348
// ??? gUnk_08202F40
// ??? gUnk_08204478
// ??? gUnk_08204A74
// ??? gUnk_0820D68C
// ??? gUnk_0820F194
// ??? gUnk_08210150
// ??? gUnk_08210350
// ??? gUnk_08210598
// ??? gUnk_08210810
// ??? gUnk_082131F8
// ??? gUnk_08219AF4
// ??? gUnk_0822181C
// ??? gUnk_082224D4
// ??? gUnk_0822CD7C
// ??? gUnk_0822CD9C
// ??? gUnk_0822F2D8
// ??? gUnk_0822F6D8
// ??? gUnk_0822FB18
// ??? gUnk_0822FED0
// ??? gUnk_08238824
// ??? gUnk_08243F48
// ??? gUnk_08243F68
// ??? gUnk_08247FBC
// ??? gUnk_08248128
// ??? gUnk_08250388
// ??? gUnk_082503A8
// ??? gUnk_082524D4
// ??? gUnk_082529A0
// ??? gUnk_08252E38
// ??? gUnk_08253234
// ??? gUnk_08253254
// ??? gUnk_082539B4
// ??? gUnk_08253B94
// ??? gUnk_08257D54
// ??? gUnk_08257D74
// ??? gUnk_0825C39C
// ??? gUnk_0825CF18
// ??? gUnk_0825CF38
// ??? gUnk_0826F688
// ??? gUnk_0826F94C
// ??? gUnk_0826F96C
// ??? gUnk_0826FAFC
// ??? gUnk_0827045C
// ??? gUnk_0827065C
// ??? gUnk_082708B0
// ??? gUnk_082708D0
// ??? gUnk_082710C8
// ??? gUnk_08271A28
// ??? gUnk_08272388
// ??? gUnk_082725A8
// ??? gUnk_08273048
// ??? gUnk_08273248
// ??? gUnk_08273448
// ??? gUnk_08275ECC
// ??? gUnk_08276B04
// ??? gUnk_082784F0
// ??? gUnk_08278A10
// ??? gUnk_08278A30
// ??? gUnk_08279658
// ??? gUnk_08279758
// ??? gUnk_08279F78
// ??? gUnk_0827AE44
// ??? gUnk_0827BC24
// ??? gUnk_0827BE0C
// ??? gUnk_0827BE2C
// ??? gUnk_0827BE4C
// ??? gUnk_0827BE6C
// ??? gUnk_0827C304
// ??? gUnk_0827C724
// ??? gUnk_0827C864
// ??? gUnk_0827D0F0
// ??? gUnk_0827D600
// ??? gUnk_0827D620
// ??? gUnk_0827FB18
// ??? gUnk_0827FB38
// ??? gUnk_0827FDA0
// ??? gUnk_08280370
// ??? gUnk_08280864
// ??? gUnk_08280884
// ??? gUnk_08281C7C
// ??? gUnk_08281C9C
// ??? gUnk_08281F58
// ??? gUnk_082838A8
// ??? gUnk_0828CE4C
// ??? gUnk_0829311C
// ??? gUnk_08293E50
// ??? gUnk_082946D8
// ??? gUnk_082946F8
// ??? gUnk_0829472C
// ??? gUnk_0829474C
// ??? gUnk_08295974
// ??? gUnk_08295A34
// ??? gUnk_08295E90
// ??? gUnk_082962EC
// ??? gUnk_082965C8
// ??? gUnk_08296FDC
// ??? gUnk_082972A0
// ??? gUnk_082972C0
// ??? gUnk_08297D90
// ??? gUnk_08297EE0
// ??? gUnk_08298640
// ??? gUnk_08298820
// ??? gUnk_0829B4C4
// ??? gUnk_0829C068
// ??? gUnk_0829C468
// ??? gUnk_0829C488
// ??? gUnk_0829C878
// ??? gUnk_0829CA18
// ??? gUnk_0829CBC4
// ??? gUnk_0829DC30
// ??? gUnk_0829DCB0
// ??? gUnk_0829E0E4
// ??? gUnk_0829E4D0
// ??? gUnk_0829E550
// ??? gUnk_0829E9AC
// ??? gUnk_0829E9CC
// ??? gUnk_0829FBE4
// ??? gUnk_082A0DB0
// ??? gUnk_082A0E30
// ??? gUnk_082A1C90
// ??? gUnk_082A1DD0
// ??? gUnk_082A222C
// ??? gUnk_082A2C1C
// ??? gUnk_082A2C9C
// ??? gUnk_082A2F14
// ??? gUnk_082A3700
// ??? gUnk_082A3720
// ??? gUnk_082A3A2C
// ??? gUnk_082A3A4C
// ??? gUnk_082A43C4
// ??? gUnk_082B4BD4
// ??? gUnk_082B6970
// ??? gUnk_082B6ED0
// ??? gUnk_082B6EF0
// ??? gUnk_082B782C
// ??? gUnk_082B9224
// ??? gUnk_082B9244
// ??? gUnk_082B96A0
// ??? gUnk_082B99D0
// ??? gUnk_082B99F0
// ??? gUnk_082BE028
// ??? gUnk_082CB87C
// ??? gUnk_082CDB44
// ??? gUnk_082D3338
// ??? gUnk_082DDED4
// ??? gUnk_082DF474
// ??? gUnk_082DF8E8
// ??? gUnk_082DF908
// ??? gUnk_082DFEB4
// ??? gUnk_082E2700
// ??? gUnk_082E3E64
// ??? gUnk_082E4074
// ??? gUnk_082E420C
// ??? gUnk_082E421E
// ??? gUnk_082E4318
// ??? gUnk_082E431E
// ??? gUnk_082E4418
// ??? gUnk_082E441E
// ??? gUnk_082E4430
// ??? gUnk_082E4442
extern u8 Img_EkrDragon_082E445C[];
extern u8 Tsa_EkrDragon_082E445C[];
extern u8 Tsa_EkrDragon_082E6E8C[];
// ??? gUnk_082E7418
// ??? gUnk_082E76A4
// ??? gUnk_082E8584
// ??? gUnk_082E9240
// ??? gUnk_082E9CD8
// ??? gUnk_082E9CF8
// ??? gUnk_082E9DD8
// ??? gUnk_082EA7C8
// ??? gUnk_082EA7E8
// ??? gUnk_082EA9A4

// ??? gUnk_082EB530
// ??? gUnk_082EB740
// ??? gUnk_082EB74E
// ??? gUnk_082EB760
// ??? gUnk_082EB76C
// ??? gUnk_082EB78C
// ??? gUnk_082EB7AC
// ??? gUnk_082EB81E
// ??? gUnk_082EB864
// ??? gUnk_082EB88C
// ??? gUnk_082EB8B4
// ??? gUnk_082EB8C4
// ??? gUnk_082EB8CA
// ??? gUnk_082EB8F8
// ??? gUnk_082EB912
// ??? gUnk_082EB954
// ??? gUnk_082EB968
// ??? gUnk_082EB976
// ??? gUnk_082EB984
// ??? gUnk_082EC328
// ??? gUnk_082ECD18
// ??? gUnk_082EDD3C
// ??? gUnk_082EE6F4
// ??? gUnk_082EF0C0
// ??? gUnk_082EFA68
// ??? gUnk_082EFD88
// ??? gUnk_082F015C
// ??? gUnk_082F0590
// ??? gUnk_082F0950
// ??? gUnk_082F0E88
// ??? gUnk_082F15C4
// ??? gUnk_082F1D50
// ??? gUnk_083F28D0
// ??? gUnk_083F2F90
// ??? gUnk_083F371C
// ??? gUnk_083F3778
// ??? gUnk_083F4464
// ??? gUnk_083F44FC
// ??? gUnk_083F641C
// ??? gUnk_083F64B8
// ??? gUnk_083F9094
// ??? gUnk_083F9548
// ??? gUnk_083F95C8
// ??? gUnk_083F96B8
// ??? gUnk_083F9820
// ??? gUnk_083F9964
// ??? gUnk_083F9AF0
// ??? gUnk_083F9CB8
// ??? gUnk_083F9ECC
// ??? gUnk_083F9F2C
// ??? gUnk_083FA1B8
// ??? gUnk_083FA9B8
// ??? gUnk_083FAA20
// ??? gUnk_083FAAE4
// ??? gUnk_083FAC48
// ??? gUnk_083FAC68
// ??? gUnk_083FAC88
// ??? gUnk_083FACA8
// ??? gUnk_083FAD4C
// ??? gUnk_083FAE28
// ??? gUnk_083FAEE0
// ??? gUnk_083FB16C
// ??? gUnk_083FB1AC
// ??? gUnk_083FB310
// ??? gUnk_083FB664
// ??? gUnk_083FB684
// ??? gUnk_083FB8E4
// ??? gUnk_083FB904
// ??? gUnk_083FBC04
// ??? gUnk_083FBC24
// ??? gUnk_083FBC64
// ??? gUnk_083FC770
// ??? gUnk_083FCD70
// ??? gUnk_083FCD90
// ??? gUnk_083FCDB0
// ??? gUnk_083FCF24
// ??? gUnk_083FD11C
// ??? gUnk_083FD3D8
// ??? gUnk_083FD418
// ??? gUnk_083FD7F4
// ??? gUnk_083FDAAC
// ??? gUnk_083FDACC
// ??? gUnk_083FDB20
// ??? gUnk_083FDB40
// ??? gUnk_083FDC40
// ??? gUnk_083FDC60
// ??? gUnk_083FDC84
// ??? gUnk_083FDEF0
// ??? gUnk_083FEBC4
// ??? gUnk_083FEE30
// ??? gUnk_083FF230
// ??? gUnk_083FF508
// ??? gUnk_083FF528
// ??? gUnk_083FF5F8
// ??? gUnk_083FFA38
// ??? gUnk_083FFB48
// ??? gUnk_083FFB68
// ??? gUnk_083FFCA0
// ??? gUnk_0840085C
// ??? gUnk_084009F0
// ??? gUnk_08400BA8
// ??? gUnk_084027B0
// ??? gUnk_08402A4C
// ??? gUnk_08402BF0
// ??? gUnk_08402F68
// ??? gUnk_08402F84
// ??? gUnk_08402FB0
// ??? gUnk_08403050
// ??? gUnk_08403398
// ??? gUnk_084033A0
// ??? gUnk_084033AC
// ??? gUnk_084033B4
// ??? gUnk_084033C4
// ??? gUnk_084033D8
// ??? gUnk_084033F4
// ??? gUnk_08403400
// ??? gUnk_0840340C
// ??? gUnk_0840341C
// ??? gUnk_08403428
// ??? gUnk_08403434
// ??? gUnk_0840343C
// ??? gUnk_08403454
// ??? gUnk_08403464
// ??? gUnk_08403474
// ??? gUnk_0840348C
// ??? gUnk_0840349C
// ??? gUnk_084034EC
// ??? gUnk_08403560
// ??? gUnk_084035D0
// ??? gUnk_0840364C
// ??? gUnk_0840366C
// ??? gUnk_0840368C
// ??? gUnk_08403730
// ??? gUnk_084038AC
// ??? gUnk_084038CC
// ??? gUnk_08403908
// ??? gUnk_0840392C
// ??? gUnk_08404024
// ??? gUnk_08404124
// ??? gUnk_0840417C
// ??? gUnk_084041FC
// ??? gUnk_0840431C
// ??? gUnk_08404734
// ??? gUnk_084047B4
// ??? gUnk_08404814
// ??? gUnk_08404874
// ??? gUnk_084048D4
// ??? gUnk_08404B0C
// ??? gUnk_08404B2C
// ??? gUnk_08404BB4
// ??? gUnk_08404BD4
// ??? gUnk_08404D90
// ??? gUnk_08404DA2
// ??? gUnk_08404DC2
// ??? gUnk_08404EA2
// ??? gUnk_08404EC2
// ??? gUnk_08404ED0
// ??? gUnk_08405010
// ??? gUnk_08405FD0
// ??? gUnk_084061F8
// ??? gUnk_08406218
// ??? gUnk_08407E9C
// ??? gUnk_0840828C
// ??? gUnk_084086C4
// ??? gUnk_08408BD4
// ??? gUnk_08408CC8
// ??? gUnk_08408CE8
// ??? gUnk_08409020
// ??? gUnk_08409040
// ??? gUnk_08409060
// ??? gUnk_0841ADDC
// ??? gUnk_0841B080
// ??? gUnk_0841B0E0
// ??? gUnk_0841B594
// ??? gUnk_0841BB50
// ??? gUnk_0841BBB0
// ??? gUnk_0841BC44
// ??? gUnk_0841BC84
// ??? gUnk_0841BCA8
// ??? gUnk_0841BE00
// ??? gUnk_0841C554
// ??? gUnk_0841C5D4
// ??? gUnk_0841C654
// ??? gUnk_0841C6D4
// ??? gUnk_0841C754
// ??? gUnk_0841C774
// ??? gUnk_0841C794
// ??? gUnk_0841C7B4
// ??? gUnk_0841C80C
// ??? gUnk_0841CA98
// ??? gUnk_0841CAA4
// ??? gUnk_0841CAAC
// ??? gUnk_0841CAB8
// ??? gUnk_0841CACC
// ??? gUnk_0841CB54
// ??? gUnk_0841CBB8
// ??? gUnk_0841CC78
// ??? gUnk_0841CCD8
// ??? gUnk_0841CD28
// ??? gUnk_0841CD78
// ??? gUnk_0841CD7C
// ??? gUnk_0841CD80
// ??? gUnk_0841CD84
// ??? gUnk_0841CD8C
// ??? gUnk_0841CD90
// ??? gUnk_0841CDA0
// ??? gUnk_0841CDA6
// ??? gUnk_0841CDBE
// ??? gUnk_0841D06C
// ??? gUnk_0841D074
// ??? gUnk_0841D07C
// ??? gUnk_0841D084
// ??? gUnk_0841D08C
// ??? gUnk_0841D094
// ??? gUnk_0841D098
// ??? gUnk_0841D0A0
// ??? gUnk_0841D0A8
// ??? gUnk_0841D0B0
// ??? gUnk_0841D0BC
// ??? gUnk_0841D0C0
// ??? gUnk_0841D0CC
// ??? gUnk_0841D0D4
// ??? gUnk_0841D0DC
// ??? gUnk_0841D0E8
// ??? gUnk_0841D0EC
// ??? gUnk_0841D0F4
// ??? gUnk_0841D0FC
// ??? gUnk_0841D100
// ??? gUnk_0841D120
// ??? gUnk_0841D614
// ??? gUnk_0841D838
// ??? gUnk_0841DBCC
// ??? gUnk_0841DE88
// ??? gUnk_0841DFE0
// ??? gUnk_0841E084
// ??? gUnk_0841E0A4
// ??? gUnk_0841E45C
// ??? gUnk_0841E49C
// ??? gUnk_0841E634
// ??? gUnk_0841E7F4
// ??? gUnk_0841E814
// ??? gUnk_0841EC70
// ??? gUnk_0841ECB0
// ??? gUnk_0841ECD0
// ??? gUnk_0841EF4C
// ??? gUnk_0841F9F4
// ??? gUnk_0842035C
// ??? gUnk_08420810
// ??? gUnk_08420CC4
// ??? gUnk_0842162C
// ??? gUnk_08421644
// ??? gUnk_08421684
// ??? gUnk_08421C24
// ??? gUnk_08421C64
// ??? gUnk_08426FF2
// ??? gUnk_08427954
// ??? gUnk_08427974
// ??? gUnk_08427A48
// ??? gUnk_08427BFC
// ??? gUnk_08428114
// ??? gUnk_08428A40
// ??? gUnk_08428A80
// ??? gUnk_08428B00
// ??? gUnk_08428DB4
// ??? gUnk_084291AC
// ??? gUnk_08429278
// ??? gUnk_084292A0
// ??? gUnk_084295B4
// ??? gUnk_08429638
// ??? gUnk_08429658
// ??? gUnk_0842971C
// ??? gUnk_0842973C
// ??? gUnk_0842A0A4
// ??? gUnk_0842A558
// ??? gUnk_0842AA0C
// ??? gUnk_0842B374
// ??? gUnk_0842B4BC
// ??? gUnk_0842B57C
// ??? gUnk_0842BA30
// ??? gUnk_0842BF0C
// ??? gUnk_0842C3C0
// ??? gUnk_0842C874
// ??? gUnk_0842CCF4
// ??? gUnk_0842CE04
// ??? gUnk_0842CE14
// ??? gUnk_0842CE1C
// ??? gUnk_0842CE28
// ??? gUnk_0842CE2C
// ??? gUnk_0842CE30
// ??? gUnk_0842CE38
// ??? gUnk_0842CE40
// ??? gUnk_0842CF1C
// ??? gUnk_0842CF2C
// ??? gUnk_0842CF3C
// ??? gUnk_0842CF5C
// ??? gUnk_0842CF64
// ??? gUnk_0842CF6C
// ??? gUnk_0842CF74
// ??? gUnk_0842CF84
// ??? gUnk_0842CF94
// ??? gUnk_0842CFA4
// ??? gUnk_0842CFAC
// ??? gUnk_0842CFB4
// ??? gUnk_0842CFBC
// ??? gUnk_0842CFC4
// ??? gUnk_0842CFCC
// ??? gUnk_0842CFDC
// ??? gUnk_0842CFFC
// ??? gUnk_0842D004
// ??? gUnk_0842D00C
// ??? gUnk_0842D010
// ??? gUnk_0842D014
// ??? gUnk_0842D01C
// ??? gUnk_0842D024
// ??? gUnk_0842D02C
// ??? gUnk_0842D034
// ??? gUnk_0842D03C
// ??? gUnk_0842D044
// ??? gUnk_0842D064
// ??? gUnk_0842D07C
// ??? gUnk_0842D084
// ??? gUnk_0842D0C4
// ??? gUnk_0842D0D4
// ??? gUnk_0842D0E0
// ??? gUnk_0842D0EC
// ??? gUnk_0842D0F4
// ??? gUnk_0842D0FC
// ??? gUnk_0842D108
// ??? gUnk_0842D110
// ??? gUnk_0842D150
// ??? gUnk_0842D158
// ??? gUnk_0842D160
// ??? gUnk_0842D170
// ??? gUnk_0842D17C
// ??? gUnk_0842D184
// ??? gUnk_0842D18C
// ??? gUnk_0842D1C0
// ??? gUnk_0842D1C8
// ??? gUnk_0842D1D0
// ??? gUnk_0842D1D8
// ??? gUnk_0842D1E4
// ??? gUnk_0842D1EC
// ??? gUnk_0842D1F0
// ??? gUnk_0842D1F4
// ??? gUnk_0842D1FC
// ??? gUnk_0842D204
// ??? gUnk_0842D208
// ??? gUnk_0842D214
// ??? gUnk_0842D220
// ??? gUnk_0842D224
// ??? gUnk_0842D238
// ??? gUnk_0842D254

// ??? gUnk_08BBFCA8
// ??? gUnk_08BBFCC0
// ??? gUnk_08BBFCD8
// ??? gUnk_08BBFCE8
// ??? gUnk_08BBFD28
// ??? gUnk_08BBFD90
// ??? gUnk_08BC0590
// ??? gUnk_08BC05C4
// ??? gUnk_08BC05D4
// ??? gUnk_08BC1FEC
// ??? gUnk_08BDC134
// ??? gUnk_08BDC1E0

// ??? gUnk_08BFF7B8
// ??? gUnk_08BFF7C0
// ??? gUnk_08BFF7C8
// ??? gUnk_08BFF7D0
// ??? gUnk_08BFF7D8
// ??? gUnk_08BFF7E0
// ??? gUnk_08BFF7E8
// ??? gUnk_08BFF7F0
// ??? gUnk_08BFF7F8
// ??? gUnk_08BFF808
// ??? gUnk_08BFF828
// ??? gUnk_08BFF842
// ??? gUnk_08BFF85C
// ??? gUnk_08BFF882
// ??? gUnk_08BFF8A8
// ??? gUnk_08BFF8DA
// ??? gUnk_08BFF90C
// ??? gUnk_08BFF93E
// ??? gUnk_08BFF970
// ??? gUnk_08BFF9A8
// ??? gUnk_08BFF9E0
// ??? gUnk_08BFF9F4
// ??? gUnk_08BFFA04
// ??? gUnk_08BFFA12
// ??? gUnk_08BFFA20
// ??? gUnk_08BFFA50
// ??? gUnk_08BFFA68
// ??? gUnk_08BFFA80
// ??? gUnk_08BFFB20
// ??? gUnk_08BFFB30
// ??? gUnk_08BFFB68
// ??? gUnk_08BFFB6C
// ??? gUnk_08BFFB84
// ??? gUnk_08BFFBB4
// ??? gUnk_08BFFBBC
// ??? gUnk_08BFFBDC
// ??? gUnk_08BFFBFC
// ??? gUnk_08BFFC3C
// ??? gUnk_08BFFC7C
// ??? gUnk_08BFFC9C
// ??? gUnk_08BFFCAC
// ??? gUnk_08BFFCBC
// ??? gUnk_08BFFCD4
// ??? gUnk_08BFFCFC
// ??? gUnk_08BFFD2C
// ??? gUnk_08BFFD3C
// ??? gUnk_08BFFD4C
// ??? gUnk_08BFFD7C
// ??? gUnk_08BFFD9C
// ??? gUnk_08BFFDB6
// ??? gUnk_08BFFE18
// ??? gUnk_08BFFE58
// ??? gUnk_08BFFE70
// ??? gUnk_08BFFE88
// ??? gUnk_08BFFE8C
// ??? gUnk_08BFFE90
// ??? gUnk_08BFFEF0
// ??? gUnk_08BFFEF8
// ??? gUnk_08BFFF30
// ??? gUnk_08BFFF58
// ??? gUnk_08BFFF78
// ??? gUnk_08C00018
// ??? gUnk_08C00038
// ??? gUnk_08C0003C
// ??? gUnk_08C0024C
// ??? gUnk_08C00798
// ??? gUnk_08C00C18
// ??? gUnk_08C00C28
// ??? gUnk_08C00C48
// ??? gUnk_08C00C60
// ??? gUnk_08C00C88
// ??? gUnk_08C00CC8
// ??? gUnk_08C00CE8
// ??? gUnk_08C00CF8
// ??? gUnk_08C00D20
// ??? gUnk_08C00D44
// ??? gUnk_08C00D84
// ??? gUnk_08C00DC4
// ??? gUnk_08C00DEC
// ??? gUnk_08C00E24
// ??? gUnk_08C00E5C
// ??? gUnk_08C00E9C
// ??? gUnk_08C00EDC
// ??? gUnk_08C00F1C
// ??? gUnk_08C00F5C
// ??? gUnk_08C00F7C
// ??? gUnk_08C00FAC
// ??? gUnk_08C00FC4
// ??? gUnk_08C00FE0
// ??? gUnk_08C00FF8
// ??? gUnk_08C01004
// ??? gUnk_08C01020
// ??? gUnk_08C01094
// ??? gUnk_08C010BC
// ??? gUnk_08C010EC
// ??? gUnk_08C01124
// ??? gUnk_08C01144
// ??? gUnk_08C0115C
// ??? gUnk_08C0117C
// ??? gUnk_08C011CC
// ??? gUnk_08C01224
// ??? gUnk_08C0127C
// ??? gUnk_08C012BC
// ??? gUnk_08C012FC
// ??? gUnk_08C013C8
// ??? gUnk_08C013F0
// ??? gUnk_08C015DC
// ??? gUnk_08C0162C
// ??? gUnk_08C01654
// ??? gUnk_08C01674
// ??? gUnk_08C0169C
// ??? gUnk_08C016FC
// ??? gUnk_08C01714
// ??? gUnk_08C01744

// ??? gUnk_08C01B84
// ??? gUnk_08C01BA4
// ??? gUnk_08C01BC4
// ??? gUnk_08C01BDC
// ??? gUnk_08C01BF4
// ??? gUnk_08C01C14
// ??? gUnk_08C01C34
// ??? gUnk_08C01C54
// ??? gUnk_08C01C74
// ??? gUnk_08C01CA4
// ??? gUnk_08C01CBC
// ??? gUnk_08C01CC0
// ??? gUnk_08C01CC4
// ??? gUnk_08C01CCC
// ??? gUnk_08C01CDC
// ??? gUnk_08C01CEC
// ??? gUnk_08C01D0C
// ??? gUnk_08C01DAC
// ??? gUnk_08C01DBC

// ??? gUnk_08C01FE4
// ??? gUnk_08C02052
// ??? gUnk_08C0206C
// ??? gUnk_08C020DC
// ??? gUnk_08C020E8
// ??? gUnk_08C020F4
// ??? gUnk_08C0211C
// ??? gUnk_08C0212C

// ??? gUnk_08C0256C
// ??? gUnk_08C02570
// ??? gUnk_08C025F8
// ??? gUnk_08C02600
// ??? gUnk_08C02618
// ??? gUnk_08C02630
// ??? gUnk_08C02828
// ??? gUnk_08C02870
// ??? gUnk_08C028A8
// ??? gUnk_08C028C0
// ??? gUnk_08C028E8
// ??? gUnk_08C02938
// ??? gUnk_08C02958
// ??? gUnk_08C029A8
// ??? gUnk_08C029C0
// ??? gUnk_08C029E8
// ??? gUnk_08C02A28
// ??? gUnk_08C02A48
// ??? gUnk_08C02AB0
// ??? gUnk_08C02AD0
// ??? gUnk_08C02AF0
// ??? gUnk_08C02B30
// ??? gUnk_08C02B58
// ??? gUnk_08C02B88
// ??? gUnk_08C02BA8
// ??? gUnk_08C02BF0
// ??? gUnk_08C02DD8
// ??? gUnk_08C02E30
// ??? gUnk_08C02E50
// ??? gUnk_08C02E88
// ??? gUnk_08C02ECC
// ??? gUnk_08C02F10
// ??? gUnk_08C02F38
// ??? gUnk_08C02F60
// ??? gUnk_08C02F78
// ??? gUnk_08C02F90
// ??? gUnk_08C02FA8
// ??? gUnk_08C02FC8
// ??? gUnk_08C03000
// ??? gUnk_08C03018
// ??? gUnk_08C03060
// ??? gUnk_08C03098
// ??? gUnk_08C030C8
// ??? gUnk_08C03100
// ??? gUnk_08C03104
// ??? gUnk_08C03114
// ??? gUnk_08C031D4

// ??? gUnk_08C0340E
// ??? gUnk_08C03416
// ??? gUnk_08C0341E
// ??? gUnk_08C03426
// ??? gUnk_08C0342E
// ??? gUnk_08C03436
// ??? gUnk_08C03440
// ??? gUnk_08C03450
// ??? gUnk_08C034D0

// ??? gUnk_08C03574
// ??? gUnk_08C035B4
// ??? gUnk_08C0366C
// ??? gUnk_08C0368C
// ??? gUnk_08C036A4
// ??? gUnk_08C036BC
// ??? gUnk_08C036D4
// ??? gUnk_08C03728
// ??? gUnk_08C03784
// ??? gUnk_08C037D8
// ??? gUnk_08C03834
// ??? gUnk_08C03884
// ??? gUnk_08C038A4
// ??? gUnk_08C04B04
// ??? gUnk_08C04B28
// ??? gUnk_08C04B4C
// ??? gUnk_08C04B70
// ??? gUnk_08C04B94
// ??? gUnk_08C04BB8
// ??? gUnk_08C04BDC
// ??? gUnk_08C04C00
// ??? gUnk_08C04C24
// ??? gUnk_08C04C6C
// ??? gUnk_08C04C90
// ??? gUnk_08C04CB4
// ??? gUnk_08C04CD8
// ??? gUnk_08C04CFC
// ??? gUnk_08C04D20
// ??? gUnk_08C04D44
// ??? gUnk_08C04D68
// ??? gUnk_08C04DB0
// ??? gUnk_08C04DD4
// ??? gUnk_08C04DF4
// ??? gUnk_08C04E14
// ??? gUnk_08C04E34
// ??? gUnk_08C04E54
// ??? gUnk_08C04E74
// ??? gUnk_08C04E94
// ??? gUnk_08C04EB4
// ??? gUnk_08C04ED4
// ??? gUnk_08C04EF4
// ??? gUnk_08C04F14
// ??? gUnk_08C04F34
// ??? gUnk_08C04F54
// ??? gUnk_08C04F74
// ??? gUnk_08C04F94
// ??? gUnk_08C04FB4
// ??? gUnk_08C04FD4
// ??? gUnk_08C05414
// ??? gUnk_08C05464
// ??? gUnk_08C054C4
// ??? gUnk_08C054D0
// ??? gUnk_08C05540
// ??? gUnk_08C05558
// ??? gUnk_08C0557E
// ??? gUnk_08C055A9
// ??? gUnk_08C055CC
// ??? gUnk_08C055F4
// ??? gUnk_08C0561C
// ??? gUnk_08C05684
// ??? gUnk_08C056CC
// ??? gUnk_08C05700
// ??? gUnk_08C05704
// ??? gUnk_08C0571C
// ??? gUnk_08C05C54
// ??? gUnk_08C05C64
// ??? gUnk_08C05C7E
// ??? gUnk_08C05CA0
// ??? gUnk_08C05CC8
// ??? gUnk_08C05CD0
// ??? gUnk_08C05D08
// ??? gUnk_08C05D10
// ??? gUnk_08C05E30
// ??? gUnk_08C05FF0
// ??? gUnk_08C06008
// ??? gUnk_08C06028
// ??? gUnk_08C0602C
// ??? gUnk_08C06030
// ??? gUnk_08C060A8
// ??? gUnk_08C060B4
// ??? gUnk_08C06104
// ??? gUnk_08C06154
// ??? gUnk_08C061A4
// ??? gUnk_08C061A8
// ??? gUnk_08C061C0
// ??? gUnk_08C061E0
// ??? gUnk_08C061E8
// ??? gUnk_08C06218
// ??? gUnk_08C06250
// ??? gUnk_08C06270
// ??? gUnk_08C062F0
// ??? gUnk_08C06308
// ??? gUnk_08C0636C
// ??? gUnk_08C06370
// ??? gUnk_08C06378
// ??? gUnk_08C06388
// ??? gUnk_08C06398
// ??? gUnk_08C0639C
// ??? gUnk_08C063D4
// ??? gUnk_08C06494
// ??? gUnk_08C06550
// ??? gUnk_08C06564
// ??? gUnk_08C065BC
// ??? gUnk_08C07CA4
// ??? gUnk_08C07CB0
// ??? gUnk_08C07CBC
// ??? gUnk_08C07D20
// ??? gUnk_08C07D84
// ??? gUnk_08C07D88
// ??? gUnk_08C07DA8
// ??? gUnk_08C07DAA
// ??? gUnk_08C07DAC
// ??? gUnk_08C07DB0
// ??? gUnk_08C07DD0
// ??? gUnk_08C07DF8
// ??? gUnk_08C07E20
// ??? gUnk_08C07E48
// ??? gUnk_08C07E68
// ??? gUnk_08C07E80
// ??? gUnk_08C07E98
// ??? gUnk_08C07EB0
// ??? gUnk_08C07EC0
// ??? gUnk_08C07ED0
// ??? gUnk_08C07F80
// ??? gUnk_08C07F8C
// ??? gUnk_08C07F98
// ??? gUnk_08C080F8
// ??? gUnk_08C081B8
// ??? gUnk_08C081C8
// ??? gUnk_08C081D8
// ??? gUnk_08C08258
// ??? gUnk_08C08348
// ??? gUnk_08C08368
// ??? gUnk_08C08844
// ??? gUnk_08C088E4
// ??? gUnk_08C08904
// ??? gUnk_08C08924
// ??? gUnk_08C089E4
// ??? gUnk_08C08B00
// ??? gUnk_08C08B80
// ??? gUnk_08C08BC4
// ??? gUnk_08C08BCC
// ??? gUnk_08C08BDC
// ??? gUnk_08C08BF0
// ??? gUnk_08C08C98
// ??? gUnk_08C08CC4
// ??? gUnk_08C08CD8
// ??? gUnk_08C08CE0
// ??? gUnk_08C08CE8
// ??? gUnk_08C08D18
// ??? gUnk_08C08D34
// ??? gUnk_08C08E34
// ??? gUnk_08C08E4C
// ??? gUnk_08C08E6C
// ??? gUnk_08C08E92
// ??? gUnk_08C08EB8
// ??? gUnk_08C08EF8
// ??? gUnk_08C08F20
// ??? gUnk_08C08F24
// ??? gUnk_08C08F74
// ??? gUnk_08C08FC4
// ??? gUnk_08C08FE4
// ??? gUnk_08C08FF4
// ??? gUnk_08C09014
// ??? gUnk_08C0907C
// ??? gUnk_08C09098
// ??? gUnk_08C090B4
// ??? gUnk_08C09264
// ??? gUnk_08C09354
// ??? gUnk_08C09444
// ??? gUnk_08C094E4
// ??? gUnk_08C0953C
// ??? gUnk_08C09574
// ??? gUnk_08C095AC
// ??? gUnk_08C095C4
// ??? gUnk_08C095DC
// ??? gUnk_08C095F4
// ??? gUnk_08C09624
// ??? gUnk_08C0969C
// ??? gUnk_08C096DC
// ??? gUnk_08C096F4
// ??? gUnk_08C09704
// ??? gUnk_08C09724
// ??? gUnk_08C0972C
// ??? gUnk_08C0974C
// ??? gUnk_08C09760
// ??? gUnk_08C0976C
// ??? gUnk_08C09784
// ??? gUnk_08C097BA
// ??? gUnk_08C097F4
// ??? gUnk_08C097FC
// ??? gUnk_08C09814
// ??? gUnk_08C0982C
// ??? gUnk_08C09834
// ??? gUnk_08C09848
// ??? gUnk_08C09860
// ??? gUnk_08C0986C
// ??? gUnk_08C09884
// ??? gUnk_08C0989C
// ??? gUnk_08C098A4
// ??? gUnk_08C098AC
// ??? gUnk_08C098B4
// ??? gUnk_08C09924
// ??? gUnk_08C09934
// ??? gUnk_08C09944
// ??? gUnk_08C09B0C
// ??? gUnk_08C09B78
// ??? gUnk_08C09B84
// ??? gUnk_08C09B94
// ??? gUnk_08C09BA4
// ??? gUnk_08C09BB4
// ??? gUnk_08C09BBC
// ??? gUnk_08C09BDC
// ??? gUnk_08C09BF4
// ??? gUnk_08C09C34
// ??? gUnk_08C09C3C
// ??? gUnk_08C09C54
// ??? gUnk_08C09C64
// ??? gUnk_08C09C74
// ??? gUnk_08C09C80
// ??? gUnk_08C09CB0
// ??? gUnk_08C09CE4
// ??? gUnk_08C09CE8
// ??? gUnk_08C09D08
// ??? gUnk_08C09D30
// ??? gUnk_08C09D48
// ??? gUnk_08C09D60
// ??? gUnk_08C09D90
// ??? gUnk_08C09DA8
// ??? gUnk_08C09DD8
// ??? gUnk_08C09E14
// ??? gUnk_08C09E50
// ??? gUnk_08C09E68
// ??? gUnk_08C09E80
// ??? gUnk_08C09E98
// ??? gUnk_08C09EB0
// ??? gUnk_08C09EC8
// ??? gUnk_08C09EE0
// ??? gUnk_08C09EF8
// ??? gUnk_08C09F10
// ??? gUnk_08C09F38
// ??? gUnk_08C09F70
// ??? gUnk_08C09F98
// ??? gUnk_08C09FC0
// ??? gUnk_08C09FE8
// ??? gUnk_08C0A000
// ??? gUnk_08C0A030
// ??? gUnk_08C0A068
// ??? gUnk_08C0A088
// ??? gUnk_08C0A0A0
// ??? gUnk_08C0A0B8
// ??? gUnk_08C0A0E0
// ??? gUnk_08C0A0F8
// ??? gUnk_08C0A150
// ??? gUnk_08C0A168
// ??? ProcScr_EfxHitQuake
// ??? ProcScr_efxFlashBG
// ??? ProcScr_efxWhiteOUT
// ??? ProcScr_efxWhiteIN
// ??? gUnk_08C0A218
// ??? gUnk_08C0A238
// ??? gUnk_08C0A260
// ??? gUnk_08C0A288
// ??? gUnk_08C0A2B0
// ??? gUnk_08C0A2E0
// ??? gUnk_08C0A320
// ??? gUnk_08C0A330
// ??? gUnk_08C0A350
// ??? gUnk_08C0A398
// ??? gUnk_08C0A3E8
// ??? gUnk_08C0A400
// ??? gUnk_08C0A420
// ??? gUnk_08C0A440
// ??? gUnk_08C0A460
// ??? gUnk_08C0A480
// ??? gUnk_08C0A4A0
// ??? gUnk_08C0A4C0
// ??? gUnk_08C0A4E0
// ??? gUnk_08C0A500
// ??? gUnk_08C0A520
// ??? gUnk_08C0A540
// ??? gUnk_08C0A560
// ??? gUnk_08C0A588
// ??? gUnk_08C0A5A0
// ??? gUnk_08C0A5C0
// ??? gUnk_08C0A5D8
// ??? gUnk_08C0A5E8
// ??? gUnk_08C0A610
// ??? gUnk_08C0A628
// ??? gUnk_08C0A640
// ??? gUnk_08C0A658
// ??? gUnk_08C0A688
// ??? gUnk_08C0A6B0
// ??? gUnk_08C0A6C8
// ??? gUnk_08C0BD7C
// ??? gUnk_08C0BE44
// ??? gUnk_08C0BED0
// ??? gUnk_08C0BF50
// ??? gUnk_08C0BFD0
// ??? gUnk_08C0CD3C
// ??? gUnk_08C0CDB0
// ??? gUnk_08C0D608
// ??? gUnk_08C0D638
// ??? gUnk_08C0D668
// ??? gUnk_08C0D684
// ??? gUnk_08C0D6C0
// ??? gUnk_08C1071C
// ??? gUnk_08C10828
// ??? gUnk_08C10830
// ??? gUnk_08C10850
// ??? gUnk_08C10868
// ??? gUnk_08C10888
// ??? gUnk_08C108A0
// ??? gUnk_08C108C0
// ??? gUnk_08C108D8
// ??? gUnk_08C108F0
// ??? gUnk_08C10908
// ??? gUnk_08C10920
// ??? gUnk_08C10938
// ??? gUnk_08C10958
// ??? gUnk_08C10970
// ??? gUnk_08C10990
// ??? gUnk_08C109A8
// ??? gUnk_08C109C0
// ??? gUnk_08C109D8
// ??? gUnk_08C109F0
// ??? gUnk_08C10A08
// ??? gUnk_08C10A20
// ??? gUnk_08C10A8C
// ??? gUnk_08C10AF8
// ??? gUnk_08C10B10
// ??? gUnk_08C10B28
// ??? gUnk_08C10B40
// ??? gUnk_08C10B58
// ??? gUnk_08C10B70
// ??? gUnk_08C10B88
// ??? gUnk_08C10BA0
// ??? gUnk_08C10BC0
// ??? gUnk_08C10BD8
// ??? gUnk_08C10BF0
// ??? gUnk_08C10C08
// ??? gUnk_08C10C20
// ??? gUnk_08C10C38
// ??? gUnk_08C10C58
// ??? gUnk_08C10C70
// ??? gUnk_08C10C90
// ??? gUnk_08C10CA8
// ??? gUnk_08C10CC0
// ??? gUnk_08C10CF0
// ??? gUnk_08C10D10
// ??? gUnk_08C10D28
// ??? gUnk_08C10D40
// ??? gUnk_08C10D58
// ??? gUnk_08C10D60
// ??? gUnk_08C10D68
// ??? gUnk_08C10D88
// ??? gUnk_08C10DA0
// ??? gUnk_08C10DB8
// ??? gUnk_08C10DD0
// ??? gUnk_08C10E00
// ??? gUnk_08C10E30
// ??? gUnk_08C10E48
// ??? gUnk_08C10E60
// ??? gUnk_08C10EB4
// ??? gUnk_08C10F08
// ??? gUnk_08C10F20
// ??? gUnk_08C10F40
// ??? gUnk_08C10F58
// ??? gUnk_08C10F70
// ??? gUnk_08C10F88
// ??? gUnk_08C10FA0
// ??? gUnk_08C10FB8
// ??? gUnk_08C10FD0
// ??? gUnk_08C10FFC
// ??? gUnk_08C11028
// ??? gUnk_08C11040
// ??? gUnk_08C11058
// ??? gUnk_08C11070
// ??? gUnk_08C11088
// ??? gUnk_08C110A0
// ??? gUnk_08C110CC
// ??? gUnk_08C110F8
// ??? gUnk_08C11120
// ??? gUnk_08C11160
// ??? gUnk_08C11180
// ??? gUnk_08C11198
// ??? gUnk_08C111B0
// ??? gUnk_08C11254
// ??? gUnk_08C112F8
// ??? gUnk_08C11340
// ??? gUnk_08C11370
// ??? gUnk_08C11388
// ??? gUnk_08C113B8
// ??? gUnk_08C113D0
// ??? gUnk_08C1149C
// ??? gUnk_08C11568
// ??? gUnk_08C11580
// ??? gUnk_08C11598
// ??? gUnk_08C115B0
// ??? gUnk_08C11634
// ??? gUnk_08C116B8
// ??? gUnk_08C1173C
// ??? gUnk_08C11754
// ??? gUnk_08C1176C
// ??? gUnk_08C118A4
// ??? gUnk_08C119DC
// ??? gUnk_08C11B14
// ??? gUnk_08C11B34
// ??? gUnk_08C11B6C
// ??? gUnk_08C11B8C
// ??? gUnk_08C11BA4
// ??? gUnk_08C11BBC
// ??? gUnk_08C11BEC
// ??? gUnk_08C11C0C
// ??? gUnk_08C11C24
// ??? gUnk_08C11C38
// ??? gUnk_08C11C4C
// ??? gUnk_08C11C64
// ??? gUnk_08C11C7C
// ??? gUnk_08C11C94
// ??? gUnk_08C11CA0
// ??? gUnk_08C11CAC
// ??? gUnk_08C11CC4
// ??? gUnk_08C11CDC
// ??? gUnk_08C11CF4
// ??? gUnk_08C11D0C
// ??? gUnk_08C11D24
// ??? gUnk_08C11D74
// ??? gUnk_08C11DC4
// ??? gUnk_08C11DD0
// ??? gUnk_08C11DDC
// ??? gUnk_08C11E30
// ??? gUnk_08C11E84
// ??? gUnk_08C11E9C
// ??? gUnk_08C11EB4
// ??? gUnk_08C11ECC
// ??? gUnk_08C11EE0
// ??? gUnk_08C11EF4
// ??? gUnk_08C11F0C
// ??? gUnk_08C11F2C
// ??? gUnk_08C11F44
// ??? gUnk_08C11F5C
// ??? gUnk_08C11F74
// ??? gUnk_08C11F8C
// ??? gUnk_08C11FA4
// ??? gUnk_08C11FBC
// ??? gUnk_08C11FD4
// ??? gUnk_08C12040
// ??? gUnk_08C120AC
// ??? gUnk_08C120F4
// ??? gUnk_08C1210C
// ??? gUnk_08C12124
// ??? gUnk_08C12144
// ??? gUnk_08C1215C
// ??? gUnk_08C1217C
// ??? gUnk_08C121A4
// ??? gUnk_08C121BC
// ??? gUnk_08C121D4
// ??? gUnk_08C122A0
// ??? gUnk_08C1236C
// ??? gUnk_08C12384
// ??? gUnk_08C1239C
// ??? gUnk_08C123BC
// ??? gUnk_08C123D4
// ??? gUnk_08C123EC
// ??? gUnk_08C12404
// ??? gUnk_08C1241C
// ??? gUnk_08C12434
// ??? gUnk_08C12454
// ??? gUnk_08C12474
// ??? gUnk_08C1248C
// ??? gUnk_08C124AC
// ??? gUnk_08C124CC
// ??? gUnk_08C124E4
// ??? gUnk_08C124FC
// ??? gUnk_08C1250C
// ??? gUnk_08C1252C
// ??? gUnk_08C12544
// ??? gUnk_08C12548
// ??? gUnk_08C12568
// ??? gUnk_08C12580
// ??? gUnk_08C12598
// ??? gUnk_08C125CC
// ??? gUnk_08C12600
// ??? gUnk_08C12620
// ??? gUnk_08C12638
// ??? gUnk_08C12650
// ??? gUnk_08C12698
// ??? gUnk_08C126B8
// ??? gUnk_08C126D0
// ??? gUnk_08C126E8
// ??? gUnk_08C12728
// ??? gUnk_08C12748
// ??? gUnk_08C12768
// ??? gUnk_08C127B0
// ??? gUnk_08C127C8
// ??? gUnk_08C127E0
// ??? gUnk_08C12814
// ??? gUnk_08C12848
// ??? gUnk_08C12868
// ??? gUnk_08C12880
// ??? gUnk_08C12898
// ??? gUnk_08C128B8
// ??? gUnk_08C12970
// ??? gUnk_08C12988
// ??? gUnk_08C129A0
// ??? gUnk_08C129B4
// ??? gUnk_08C129D4
// ??? gUnk_08C129F4
// ??? gUnk_08C12A0C
// ??? gUnk_08C12A24
// ??? gUnk_08C12A28
// ??? gUnk_08C12A2C
// ??? gUnk_08C12A30
// ??? gUnk_08C12A48
// ??? gUnk_08C12A6C
// ??? gUnk_08C12A8C
// ??? gUnk_08C12AA4
// ??? gUnk_08C12AB4
// ??? gUnk_08C12ACC
// ??? gUnk_08C12AE4
// ??? gUnk_08C12AFC
// ??? gUnk_08C12B00
// ??? gUnk_08C12B18
// ??? gUnk_08C12B30
// ??? gUnk_08C12BF0
// ??? gUnk_08C12C10
// ??? gUnk_08C12C38
// ??? gUnk_08C12C50
// ??? gUnk_08C12C80
// ??? gUnk_08C12CB0
// ??? gUnk_08C12CE0
// ??? gUnk_08C12CF8
// ??? gUnk_08C12D10
// ??? gUnk_08C12D40
// ??? gUnk_08C12D68
// ??? gUnk_08C12D80
// ??? gUnk_08C12D98
// ??? gUnk_08C12E98
// ??? gUnk_08C12EB8
// ??? gUnk_08C12ED8
// ??? gUnk_08C12EF8
// ??? gUnk_08C12F18
// ??? gUnk_08C12F30
// ??? gUnk_08C12F48
// ??? gUnk_08C12F60
// ??? gUnk_08C12F90
// ??? gUnk_08C12FB0
// ??? gUnk_08C12FD0
// ??? gUnk_08C12FF0
// ??? gUnk_08C13008
// ??? gUnk_08C13050
// ??? gUnk_08C13068
// ??? gUnk_08C13080
// ??? gUnk_08C130F0
// ??? gUnk_08C13110
// ??? gUnk_08C13130
// ??? gUnk_08C13148
// ??? gUnk_08C13178
// ??? gUnk_08C131A8
// ??? gUnk_08C131C0
// ??? gUnk_08C131D8
// ??? gUnk_08C13208
// ??? gUnk_08C13228
// ??? gUnk_08C13240
// ??? gUnk_08C13258
// ??? gUnk_08C13270
// ??? gUnk_08C13288
// ??? gUnk_08C132A8
// ??? gUnk_08C13378
// ??? gUnk_08C13390
// ??? gUnk_08C133B0
// ??? gUnk_08C133E0
// ??? gUnk_08C133F8
// ??? gUnk_08C13420
// ??? gUnk_08C13448
// ??? gUnk_08C13460
// ??? gUnk_08C13488
// ??? gUnk_08C134B0
// ??? gUnk_08C134C8
// ??? gUnk_08C134E8
// ??? gUnk_08C13508
// ??? gUnk_08C13520
// ??? gUnk_08C13538
// ??? gUnk_08C13550
// ??? gUnk_08C13568
// ??? gUnk_08C13580
// ??? gUnk_08C135A0
// ??? gUnk_08C135B8
// ??? gUnk_08C135D0
// ??? gUnk_08C135F8
// ??? gUnk_08C13610
// ??? gUnk_08C13640
// ??? gUnk_08C13658
// ??? gUnk_08C13690
// ??? gUnk_08C136C8
// ??? gUnk_08C136E0
// ??? gUnk_08C136F8
// ??? gUnk_08C13710
// ??? gUnk_08C13750
// ??? gUnk_08C13768
// ??? gUnk_08C13780
// ??? gUnk_08C13798
// ??? gUnk_08C137B0
// ??? gUnk_08C137C8
// ??? gUnk_08C137E0
// ??? gUnk_08C137F8
// ??? gUnk_08C13810
// ??? gUnk_08C13828
// ??? gUnk_08C13840
// ??? gUnk_08C13858
// ??? gUnk_08C13870
// ??? gUnk_08C13888
// ??? gUnk_08C13978
// ??? gUnk_08C13990
// ??? gUnk_08C139A8
// ??? gUnk_08C139B8
// ??? gUnk_08C139D8
// ??? gUnk_08C139F0
// ??? gUnk_08C13A08
// ??? gUnk_08C13A14
// ??? gUnk_08C13A34
// ??? gUnk_08C13A4C
// ??? gUnk_08C13A64
// ??? gUnk_08C13A7C
// ??? gUnk_08C13AB0
// ??? gUnk_08C13AE4
// ??? gUnk_08C13AFC
// ??? gUnk_08C13B24
// ??? gUnk_08C13B44
// ??? gUnk_08C13B6C
// ??? gUnk_08C13B84
// ??? gUnk_08C13BB4
// ??? gUnk_08C13BCC
// ??? gUnk_08C13BF4
// ??? gUnk_08C13C0C
// ??? gUnk_08C13C14
// ??? gUnk_08C13C34
// ??? gUnk_08C13C4C
// ??? gUnk_08C13C74
// ??? gUnk_08C13C8C
// ??? gUnk_08C13C90
// ??? gUnk_08C13CB0
// ??? gUnk_08C13CD0
// ??? gUnk_08C13CE8
// ??? gUnk_08C13D10
// ??? gUnk_08C13D28
// ??? gUnk_08C13DAC
// ??? gUnk_08C13E30
// ??? gUnk_08C1419C
// ??? gUnk_08C141F8
// ??? gUnk_08C14218
// ??? gUnk_08C14534
// ??? gUnk_08C14590
// ??? gUnk_08C145B0
// ??? gUnk_08C14650
// ??? gUnk_08C14660
// ??? gUnk_08C146DC
// ??? gUnk_08C146EC
// ??? gUnk_08C148D0
// ??? gUnk_08C14B24
// ??? gUnk_08C14D84
// ??? gUnk_08C14FE4
// ??? gUnk_08C150E8
// ??? gUnk_08C15184
// ??? gUnk_08C1597C
// ??? gUnk_08C159AC
// ??? gUnk_08C16604
// ??? gUnk_08C17264
// ??? gUnk_08C1757C
// ??? gUnk_08C175C4
// ??? gUnk_08C178E8
// ??? gUnk_08C17930
// ??? gUnk_08C17BD0
// ??? gUnk_08C17BE0
// ??? gUnk_08C17E2C
// ??? gUnk_08C17E3C
// ??? gUnk_08C189F4
// ??? gUnk_08C195F4
// ??? gUnk_08C1A224
// ??? gUnk_08C1AE54
// ??? gUnk_08C1BA90
// ??? gUnk_08C1CC3C
// ??? gUnk_08C1CD40
// ??? gUnk_08C1CD68
// ??? gUnk_08C1DEDC
// ??? gUnk_08C1DFE0
// ??? gUnk_08C1E008
// ??? gUnk_08C1F1AC
// ??? gUnk_08C1F2B0
// ??? gUnk_08C1F2D8
// ??? gUnk_08C2047C
// ??? gUnk_08C20580
// ??? gUnk_08C205A8
// ??? gUnk_08C2066C
// ??? gUnk_08C20710
// ??? gUnk_08C207B4
// ??? gUnk_08C20858
// ??? gUnk_08C208FC
// ??? gUnk_08C209A0
// ??? gUnk_08C20B34
// ??? gUnk_08C20CC8
// ??? gUnk_08C20E74
// ??? gUnk_08C21020
// ??? gUnk_08C211CC
// ??? gUnk_08C21374
// ??? gUnk_08C214B0
// ??? gUnk_08C215E8
// ??? gUnk_08C2184C
// ??? gUnk_08C21AB4
// ??? gUnk_08C21BD8
// ??? gUnk_08C21CFC
// ??? gUnk_08C22750
// ??? gUnk_08C2327C
// ??? gUnk_08C23694
// ??? gUnk_08C236C0
// ??? gUnk_08C23A1C
// ??? gUnk_08C23A48
// ??? gUnk_08C24818
// ??? gUnk_08C25638
// ??? gUnk_08C265CC
// ??? gUnk_08C28508
// ??? gUnk_08C28574
// ??? gUnk_08C285D4
// ??? gUnk_08C285DC
// ??? gUnk_08C28848
// ??? gUnk_08C28880
// ??? gUnk_08C289CC
// ??? gUnk_08C28DC4
// ??? gUnk_08C28DF8
// ??? gUnk_08C28E80
// ??? gUnk_08C29458
// ??? gUnk_08C29618
// ??? gUnk_08C29920
// ??? gUnk_08C29C1C
// ??? gUnk_08C2A8B4
// ??? gUnk_08C2A8E0
// ??? gUnk_08C2A90C
// ??? gUnk_08C2ACB0
// ??? gUnk_08C2D9FC
// ??? gUnk_08C2DA8C
// ??? gUnk_08C2EFA8
// ??? gUnk_08C2F01C
// ??? gUnk_08C305A8
// ??? gUnk_08C3061C
// ??? gUnk_08C33390
// ??? gUnk_08C3365C
// ??? gUnk_08C36340
// ??? gUnk_08C3B3AC
// ??? gUnk_08C3B52C
// ??? gUnk_08C3BAE0
// ??? gUnk_08C3BAF4
// ??? gUnk_08C3BB08
// ??? gUnk_08C3BB1C
// ??? gUnk_08C3BB30
// ??? gUnk_08C3BEA4
// ??? gUnk_08C3BEB0
// ??? gUnk_08C3BEBC
// ??? gUnk_08C3BEC8
// ??? gUnk_08C3BED4
// ??? gUnk_08C3FF94
// ??? gUnk_08C400E4
// ??? gUnk_08C40B04
// ??? gUnk_08C40B0C
// ??? gUnk_08C40B14
// ??? gUnk_08C40B1C
// ??? gUnk_08C40B40
// ??? gUnk_08C40B8C
// ??? gUnk_08C40BA8
// ??? gUnk_08C417A4
// ??? gUnk_08C417AC
// ??? gUnk_08C417B4
// ??? gUnk_08C417BC
// ??? gUnk_08C417C4
// ??? gUnk_08C417CC
// ??? gUnk_08C4181C
// ??? gUnk_08C41828
// ??? gUnk_08C41AF8
// ??? gUnk_08C41D18
// ??? gUnk_08C41D50
// ??? gUnk_08C41F78
// ??? gUnk_08C42AA4
// ??? gUnk_08C43190
// ??? gUnk_08C435EC
// ??? gUnk_08C43640
// ??? gUnk_08C4364C
// ??? gUnk_08C44720
// ??? gUnk_08C447B8
// ??? gUnk_08C44990
// ??? gUnk_08C44B94
// ??? gUnk_08C44F48
// ??? gUnk_08C452FC
// ??? gUnk_08C46040
// ??? gUnk_08C46060
// ??? gUnk_08C463C4
// ??? gUnk_08C463DC
// ??? gUnk_08C48338
// ??? gUnk_08C48524
// ??? gUnk_08C48648

// ??? gUnk_08C486EC
// ??? gUnk_08C4870C
// ??? gUnk_08C4872C
// ??? gUnk_08C48744
// ??? gUnk_08C48774
// ??? gUnk_08C4879C
// ??? gUnk_08C487B4
// ??? gUnk_08C487CC
// ??? gUnk_08C487EC
// ??? gUnk_08C48804
// ??? gUnk_08C48824
// ??? gUnk_08C4883C
// ??? gUnk_08C4885C
// ??? gUnk_08C48874
// ??? gUnk_08C4887C
// ??? gUnk_08C4889C
// ??? gUnk_08C488C4
// ??? gUnk_08C488E4
// ??? gUnk_08C488FC
// ??? gUnk_08C49EEC
// ??? gUnk_08C49FA4
// ??? gUnk_08C49FAC
// ??? gUnk_08C49FFC
// ??? gUnk_08C4A008
// ??? gUnk_08C4A288
// ??? gUnk_08C4A29C
// ??? gUnk_08C4A2B4
// ??? gUnk_08C4A2CC
// ??? gUnk_08C4A674
// ??? gUnk_08C4A690
// ??? gUnk_08C4A6AC
// ??? gUnk_08C4A6C8
// ??? gUnk_08C4A6E4
// ??? gUnk_08C4A704
// ??? gUnk_08C4A71C
// ??? gUnk_08C4A778
// ??? gUnk_08C4A7D4
// ??? gUnk_08C4A830
// ??? gUnk_08C4A848
// ??? gUnk_08C4A860
// ??? gUnk_08C4A880
// ??? gUnk_08C4A898
// ??? gUnk_08C4A8B8
// ??? gUnk_08C4A8D0
// ??? gUnk_08C4A8E8
// ??? gUnk_08C4A908
// ??? gUnk_08C4A9B8
// ??? gUnk_08C4A9D8
// ??? gUnk_08C4A9F8
// ??? gUnk_08C4AA38
// ??? gUnk_08C4AA60
// ??? gUnk_08C4AA78
// ??? gUnk_08C4AAA4
// ??? gUnk_08C4AAD0
// ??? gUnk_08C4AAE8
// ??? gUnk_08C4AB00
// ??? gUnk_08C4AB20
// ??? gUnk_08C4AB40
// ??? gUnk_08C4AB58
// ??? gUnk_08C4AB80
// ??? gUnk_08C4AB98
// ??? gUnk_08C4ABB0
// ??? gUnk_08C4ABC8
// ??? gUnk_08C4ABE0
// ??? gUnk_08C4ABF8
// ??? gUnk_08C4AC10
// ??? gUnk_08C4AC28
// ??? gUnk_08C4AC48
// ??? gUnk_08C4B110
// ??? gUnk_08C4B444
// ??? gUnk_08C4B4DC
// ??? gUnk_08C4B56C
// ??? gUnk_08C4B5FC
// ??? gUnk_08C4B688
// ??? gUnk_08C4B778
// ??? gUnk_08C4B8F0
// ??? gUnk_08C4BA44
// ??? gUnk_08C4BD0C
// ??? gUnk_08C4BD70
// ??? gUnk_08C4C058
// ??? gUnk_08C4C060
// ??? gUnk_08C4C0C8
// ??? gUnk_08C4C100
// ??? gUnk_08C4C124
// ??? gUnk_08C4C130
// ??? gUnk_08C4C158
// ??? gUnk_08C51538
// ??? gUnk_08C52B94
// ??? gUnk_08C52C98
// ??? gUnk_08C53805
// ??? gUnk_08C53846
// ??? gUnk_08C53AD0
// ??? gUnk_08C53B11
// ??? gUnk_08C53B52
// ??? gUnk_08C53B93
// ??? gUnk_08C53BD4
// ??? gUnk_08C53C15
// ??? gUnk_08C53C56
// ??? gUnk_08C53C97
// ??? gUnk_08C53CD8
// ??? gUnk_08C53D19
// ??? gUnk_08C53D5A
// ??? gUnk_08C53D9B
// ??? gUnk_08C53DDC
// ??? gUnk_08C53E1D
// ??? gUnk_08C53E5E
// ??? gUnk_08C53E9F
// ??? gUnk_08C53EE0
// ??? gUnk_08C53F21
// ??? gUnk_08C53F62
// ??? gUnk_08C53FA3
// ??? gUnk_08C53FE4
// ??? gUnk_08C54025
// ??? gUnk_08C54066
// ??? gUnk_08C540A7
// ??? gUnk_08C540E8
// ??? gUnk_08C54129
// ??? gUnk_08C5416A
// ??? gUnk_08C541AB
// ??? gUnk_08C541EC
// ??? gUnk_08C5422D
// ??? gUnk_08C5426E
// ??? gUnk_08C542AF
// ??? gUnk_08C542F0
// ??? gUnk_08D5E23C
// ??? gUnk_08D5FB8A
// ??? gUnk_08D5FB95
// ??? gUnk_08D5FB9B
// ??? gUnk_08D5FBA0
// ??? gUnk_08D5FBA5
// ??? gUnk_08D5FBA9
// ??? gUnk_08D5FBB5
// ??? gUnk_08D5FBCE
// ??? gUnk_08D5FBD9
// ??? gUnk_08D5FBDC
// ??? gUnk_08D5FBE1
// ??? gUnk_08D6136C
// ??? gUnk_08D613B8
// ??? gUnk_08D6164A
// ??? gUnk_08D61678
// ??? gUnk_08D61E78
// ??? gUnk_08D62110
// ??? gUnk_08D62170
// ??? gUnk_08D648F4
// ??? gUnk_08D64CE4
// ??? gUnk_08D64D98
// ??? gUnk_08D64DB0
// ??? gUnk_08D64DE0
// ??? gUnk_08D64E00
// ??? gUnk_08D64E10
// ??? gUnk_08D64E34
// ??? gUnk_08D64E78
// ??? gUnk_08D64EA6
// ??? gUnk_08D64ED2
// ??? gUnk_08D64EFE
// ??? gUnk_08D64F2C
// ??? gUnk_08D64F4C
// ??? gUnk_08D64F6C
// ??? gUnk_08D64F74
// ??? gUnk_08D64F7C
// ??? gUnk_08D64F7E
// ??? gUnk_08D64F84
// ??? gUnk_08D64F9C
// ??? gUnk_08D64FAC
// ??? gUnk_08D64FEC
// ??? gUnk_08D64FFC
// ??? gUnk_08D65014
// ??? gUnk_08D6509C
// ??? gUnk_08D650B4
// ??? gUnk_08D653CC
// ??? gUnk_08D6540C
// ??? gUnk_08D6544C
// ??? gUnk_08D6551C
// ??? gUnk_08D65574
// ??? gUnk_08D6561C
// ??? gUnk_08D656B4
// ??? gUnk_08D656D0
// ??? gUnk_08D656D8
// ??? gUnk_08D656F0
// ??? gUnk_08D65728
// ??? gUnk_08D65760
// ??? gUnk_08D657D8
// ??? gUnk_08D65800
// ??? gUnk_08D65850
// ??? gUnk_08D65878
// ??? gUnk_08D6587C
// ??? gUnk_08D658DC
// ??? gUnk_08D658FC
// ??? gUnk_08D6591C
// ??? gUnk_08D65954
// ??? gUnk_08D6597C
// ??? gUnk_08D659BC
// ??? gUnk_08D659EC
// ??? gUnk_08D65A04
// ??? gUnk_08D65A24
// ??? gUnk_08D65A5C
// ??? gUnk_08D65A8C
// ??? gUnk_08D65AA4
// ??? gUnk_08D65AEC
// ??? gUnk_08D65B14
// ??? gUnk_08D65B54
// ??? gUnk_08D65B94
// ??? gUnk_08D65BD4
// ??? gUnk_08D65C1C
// ??? gUnk_08D65C24
// ??? gUnk_08D65C64
// ??? gUnk_08D65C8C
// ??? gUnk_08D65CE4
// ??? gUnk_08D65CF4
// ??? gUnk_08D65D6C
// ??? gUnk_08D65D7C
// ??? gUnk_08D65D94
// ??? gUnk_08D65E54
// ??? gUnk_08D65E6C
// ??? gUnk_08D65E84
// ??? gUnk_08D65E9C
// ??? gUnk_08D65ECC
// ??? gUnk_08D668CC
// ??? gUnk_08D668E4
// ??? gUnk_08D6696C
// ??? gUnk_08D66A2C
// ??? gUnk_08D66A34
// ??? gUnk_08D66CE0
// ??? gUnk_08D67070
// ??? gUnk_08D670AC
// ??? gUnk_08D6716C
// ??? gUnk_08D6722C
// ??? gUnk_08D6792C
// ??? gUnk_08D67934
// ??? gUnk_08D68388
// ??? gUnk_08D68478
// ??? gUnk_08D68480
// ??? gUnk_08D68498
// ??? gUnk_08D684B0
// ??? gUnk_08D6F71C
// ??? gUnk_08D6F770
// ??? gUnk_08D6F798
// ??? gUnk_08D6F7B4
// ??? gUnk_08D6F7D4
// ??? gUnk_08D6F7EC
// ??? gUnk_08D6F81C
// ??? gUnk_08D6F834
// ??? gUnk_08D6F854
// ??? gUnk_08D6F8AC
// ??? gUnk_08D6F8BC
// ??? gUnk_08D6F95C
// ??? gUnk_08D6F9D4
// ??? gUnk_08D6FA14
// ??? gUnk_08D6FA2C
// ??? gUnk_08D6FAC4
// ??? gUnk_08D6FAE4
// ??? gUnk_08D6FB1C
// ??? gUnk_08D6FB5C
// ??? gUnk_08D6FC14
// ??? gUnk_08D6FC44
// ??? gUnk_08D80D24
// ??? gUnk_08D80D2E
// ??? gUnk_08D837E8
// ??? gUnk_08D837F8
// ??? gUnk_08D87684
// ??? gUnk_08D87F28
// ??? gUnk_08D87F48
// ??? gUnk_08D87F68
// ??? gUnk_08D8977C
// ??? gUnk_08D897EC
// ??? gUnk_08D8A0E0
// ??? gUnk_08D8A114
// ??? gUnk_08D8A148
// ??? gUnk_08D8A1B4
// ??? gUnk_08D8A220
// ??? gUnk_08D8A238
// ??? gUnk_08D8A358
// ??? gUnk_08D8A368
// ??? gUnk_08D8A380
// ??? gUnk_08D8A3C0
// ??? gUnk_08D8A3D4
// ??? gUnk_08D8A41C
// ??? gUnk_08D8A466
// ??? gUnk_08D8A530
// ??? gUnk_08D8A5D8
// ??? gUnk_08D8A610
// ??? gUnk_08D8A640
// ??? gUnk_08D8A650
// ??? gUnk_08D8A660
// ??? gUnk_08D8A704
// ??? gUnk_08D8A8E0
// ??? gUnk_08D8AA84
// ??? gUnk_08D8AB2C
// ??? gUnk_08D8ABD4
// ??? gUnk_08D8AC98
// ??? gUnk_08D8AE00
// ??? gUnk_08D8AF34
// ??? gUnk_08D8AF5C
// ??? gUnk_08D8AF84
// ??? gUnk_08D8AFA4
// ??? gUnk_08D8AFD4
// ??? gUnk_08D8AFE4
// ??? gUnk_08D8AFEC
// ??? gUnk_08D8B04C
// ??? gUnk_08D8B06C
// ??? gUnk_08D8B10C
// ??? gUnk_08D8B124
// ??? gUnk_08D8B134
// ??? gUnk_08D8B154
// ??? gUnk_08D8B15A
// ??? gUnk_08D8B16C
// ??? gUnk_08D8B172
// ??? gUnk_08D8B178
// ??? gUnk_08D8B190
// ??? gUnk_08D8B194
// ??? gUnk_08D8B197
// ??? gUnk_08D8B19A
// ??? gUnk_08D8B1A0
// ??? gUnk_08D8B200
// ??? gUnk_08D8B288
// ??? gUnk_08D8B2B8
// ??? gUnk_08D8B2D0
// ??? gUnk_08D8B2D5
// ??? gUnk_08D8B2D8
// ??? gUnk_08D8B338
// ??? gUnk_08D8B398
// ??? gUnk_08D8B3A6
// ??? gUnk_08D8B3AE
// ??? gUnk_08D8B3BC
// ??? gUnk_08D8B3CA
// ??? gUnk_08D8B3D2
// ??? gUnk_08D8B3E6
// ??? gUnk_08D8B3EE
// ??? gUnk_08D8B3F6
// ??? gUnk_08D8B3FE
// ??? gUnk_08D8B40C
// ??? gUnk_08D8B428
// ??? gUnk_08D8B440
// ??? gUnk_08D8B4F8
// ??? gUnk_08D8B578
// ??? gUnk_08D8B5A0
// ??? gUnk_08D8B5C0
// ??? gUnk_08D8B5E6
// ??? gUnk_08D8B5F4
// ??? gUnk_08D8B68C
// ??? gUnk_08D8B694
// ??? gUnk_08D8B69C
// ??? gUnk_08D8B6FC
// ??? gUnk_08D8B71C
// ??? gUnk_08D8B82C
// ??? gUnk_08D8B8F4
// ??? gUnk_08D8B98C
// ??? gUnk_08D8B9B4
// ??? gUnk_08D8B9BA
// ??? gUnk_08D8BA04
// ??? gUnk_08D8BA10
// ??? gUnk_08D8BA18
// ??? gUnk_08D8BA20
// ??? gUnk_08D8BAD8
// ??? gUnk_08D8BB00
// ??? gUnk_08D8C0A0
// ??? gUnk_08D8C0B8
// ??? gUnk_08D8C124
// ??? gUnk_08D8C154
// ??? gUnk_08D8C364
// ??? gUnk_08D8C3A4
// ??? gUnk_08D8C52E
// ??? gUnk_08D8C53C
// ??? gUnk_08D8C544
// ??? gUnk_08D8C55E
// ??? gUnk_08D8C5D8
// ??? gUnk_08D8C6AC
// ??? gUnk_08D8C6D4
// ??? gUnk_08D8C6E4
// ??? gUnk_08D8C73C
// ??? gUnk_08D8C744
// ??? gUnk_08D8C74C
// ??? gUnk_08D8C794
// ??? gUnk_08D8C7E8
// ??? gUnk_08D8C8AC
// ??? gUnk_08D8C8E4
// ??? gUnk_08D8C904
// ??? gUnk_08D8C94C
// ??? gUnk_08D8C96C
// ??? gUnk_08D8C984
// ??? gUnk_08D8C9A8
// ??? gUnk_08D8C9C0
// ??? gUnk_08D8CDA8
// ??? gUnk_08D8CDBC
// ??? gUnk_08D8CDD0
// ??? gUnk_08D8CDE4
// ??? gUnk_08D8CF74
// ??? gUnk_08D8CFBC
// ??? gUnk_08D8D10C
// ??? gUnk_08D8D118
// ??? gUnk_08D8D120
// ??? gUnk_08D8D1F0
// ??? gUnk_08D8D318
// ??? gUnk_08D8D410
// ??? gUnk_08D8D418
// ??? gUnk_08D8D4E8
// ??? gUnk_08D8D4F8
// ??? gUnk_08D8D51C
// ??? gUnk_08D8D538
// ??? gUnk_08D8D5F8
// ??? gUnk_08D8D60C
// ??? gUnk_08D8D620
// ??? gUnk_08D8D634
// ??? gUnk_08D8D674
// ??? gUnk_08D8D688
// ??? gUnk_08D8D720
// ??? gUnk_08D8D738
// ??? gUnk_08D8D744
// ??? gUnk_08D8D84C
// ??? gUnk_08D8DCD4
// ??? gUnk_08D8DD0C
// ??? gUnk_08D8DD68
// ??? gUnk_08D8DE48
// ??? gUnk_08D8DEB0
// ??? gUnk_08D8DEB8
// ??? gUnk_08D8DEC6
// ??? gUnk_08D8DED4
// ??? gUnk_08D8DEE2
// ??? gUnk_08D8DEF8
// ??? gUnk_08D8E040
// ??? gUnk_08D8E084
// ??? gUnk_08DA4190
// ??? gUnk_08DA41B0
// ??? gUnk_08DA9A98
// ??? gUnk_08DA9AB8
// ??? gUnk_08DA9AD8
// ??? gUnk_08DA9AF8
// ??? gUnk_08DA9B78
// ??? gUnk_08DA9B98
// ??? gUnk_08DA9BB8
// ??? gUnk_08DA9D18
// ??? gUnk_08DA9D38
// ??? gUnk_08DAD284
// ??? gUnk_08DAD294
// ??? gUnk_08DAD298
// ??? gUnk_08DAD29C
// ??? gUnk_08DAD33C
// ??? gUnk_08DAD354
// ??? gUnk_08DAD384
// ??? gUnk_08DAD3A4
// ??? gUnk_08DAD674
// ??? gUnk_08DAD784
// ??? gUnk_08DAD844
// ??? gUnk_08DAD848
// ??? gUnk_08DAD8A8
// ??? gUnk_08DAD8C2
// ??? gUnk_08DAD8FC
// ??? gUnk_08DAD904
// ??? gUnk_08DAD90C
// ??? gUnk_08DAD9D6
// ??? gUnk_08DAD9E4
// ??? gUnk_08DADA10
// ??? gUnk_08DADA3C
// ??? gUnk_08DADA64
// ??? gUnk_08DADA8C
// ??? gUnk_08DADAAC
// ??? gUnk_08DADAC8
// ??? gUnk_08DADAE8
// ??? gUnk_08DADD34
// ??? gUnk_08DADD50
// ??? gUnk_08DADD78
// ??? gUnk_08DADD84
// ??? gUnk_08DADD90
// ??? gUnk_08DADDB0
// ??? gUnk_08DADDC0
// ??? gUnk_08DADF00
// ??? gUnk_08DADF10
// ??? gUnk_08DADF40
// ??? gUnk_08DADF48
// ??? gUnk_08DADF68
// ??? gUnk_08DADF98
// ??? gUnk_08DADFC8
// ??? gUnk_08DADFF8
// ??? gUnk_08DAE004
// ??? gUnk_08DAE010
// ??? gUnk_08DAE01C
// ??? gUnk_08DAE028
// ??? gUnk_08DAE042
// ??? gUnk_08DAE068
// ??? gUnk_08DAE088
// ??? gUnk_08DAE090
// ??? gUnk_08DAE0AC
// ??? gUnk_08DAE0DC
// ??? gUnk_08DAE0FC
// ??? gUnk_08DAE11C
// ??? gUnk_08DAE1D4
// ??? gUnk_08DAE1DC
// ??? gUnk_08DAE1E4
// ??? gUnk_08DAE214
// ??? gUnk_08DAE222
// ??? gUnk_08DAE22C
// ??? gUnk_08DAE24C
// ??? gUnk_08DAE26C
// ??? gUnk_08DAE29C
// ??? gUnk_08DAE2B4
// ??? gUnk_08DAE2E4
// ??? gUnk_08DAE404
// ??? gUnk_08DAE424
// ??? gUnk_08DAE43C
// ??? gUnk_08DAE46C
// ??? gUnk_08DAE49C
// ??? gUnk_08DAE4C4
// ??? gUnk_08DAE4E4
// ??? gUnk_08DAE514
// ??? gUnk_08DAEB64
// ??? gUnk_08DAEB74
// ??? gUnk_08DAEB78
// ??? gUnk_08DAEC6C
// ??? gUnk_08DAEC70
// ??? gUnk_08DAEC74
// ??? gUnk_08DAEC78
// ??? gUnk_08DAEC7C
// ??? gUnk_08DAEC9C
// ??? gUnk_08DAECA0
// ??? gUnk_08DAECD0
// ??? gUnk_08DAEDE0
// ??? gUnk_08DAEDE8
// ??? gUnk_08DAEDF0
// ??? gUnk_08DAEDF8
// ??? gUnk_08DAEE18
// ??? gUnk_08DAEE38
// ??? gUnk_08DAEE40
// ??? gUnk_08DAEE4E
// ??? gUnk_08DAEEA8
// ??? gUnk_08DAEED0
// ??? gUnk_08DAEEF0
// ??? gUnk_08DAEF20
// ??? gUnk_08DAEF38
// ??? gUnk_08DAEF60
// ??? gUnk_08DAEF64
// ??? gUnk_08DAEF68
// ??? gUnk_08DAEF6C
// ??? gUnk_08DAEF70
// ??? gUnk_08DAEF74
// ??? gUnk_08DAEF78
// ??? gUnk_08DAF028
// ??? gUnk_08DAF054
// ??? gUnk_08DAF084
// ??? gUnk_08DAF0AA
// ??? gUnk_08DAF0C4
// ??? gUnk_08DAF3B0
// ??? gUnk_08DAF3D0
// ??? gUnk_08DAF408
// ??? gUnk_08DAF4B8
// ??? gUnk_08DAF58C
// ??? gUnk_08DAF5FC
// ??? gUnk_08DAF62C
// ??? gUnk_08DAF65C
// ??? gUnk_08DAF6B4
// ??? gUnk_08DAF6BC
// ??? gUnk_08DAF70C
// ??? gUnk_08DAF744
// ??? gUnk_08DAF78C
// ??? gUnk_08DAF82C
// ??? gUnk_08DAF874
// ??? gUnk_08DAF8C4
// ??? gUnk_08DAF8E4
// ??? gUnk_08DAF8F8
// ??? gUnk_08DAF900
// ??? gUnk_08DAF908
// ??? gUnk_08DB02D4
// ??? gUnk_08DB0454
// ??? gUnk_08DB04A4
// ??? gUnk_08DB077C
// ??? gUnk_08DB078C
// ??? gUnk_08DB0798
// ??? gUnk_08DB07A4
// ??? gUnk_08DB07DC
// ??? gUnk_08DB081C
// ??? gUnk_08DB0A84
// ??? gUnk_08DB0A94
// ??? gUnk_08DB0AA4
// ??? gUnk_08DB0ADC
// ??? gUnk_08DB0AF4
// ??? gUnk_08DB0AF8
// ??? gUnk_08DB0C58
// ??? gUnk_08DB0D68
// ??? gUnk_08DB0DC4
// ??? gUnk_08DB0DF4
// ??? gUnk_08DB0DFC
// ??? gUnk_08DB0E6A
// ??? gUnk_08DB0E8C
// ??? gUnk_08DB0EAC
// ??? gUnk_08DB0ECC
// ??? gUnk_08DB0EE4
// ??? gUnk_08DB0F0C
// ??? gUnk_08DB0F24
// ??? gUnk_08DB0F44
// ??? gUnk_08DB1004
// ??? gUnk_08DB101C
// ??? gUnk_08DB1034
// ??? gUnk_08DB104C
// ??? gUnk_08DB1074
// ??? gUnk_08DB10A4
// ??? gUnk_08DB10D4
// ??? gUnk_08DB6EBC
// ??? gUnk_08DB6ED6
// ??? gUnk_08DB6EE2
// ??? gUnk_08DB6EF2
// ??? gUnk_08DB6EFE
// ??? gUnk_08DB6F08
// ??? gUnk_08DB793C
// ??? gUnk_08DB7C54
// ??? gUnk_08DB7CFC
// ??? gUnk_08DB7D0C
// ??? gUnk_08DB7D14
// ??? gUnk_08DB7DC8
// ??? gUnk_08DB7DCC
// ??? gUnk_08DB7DD0
// ??? gUnk_08DB7E28
// ??? gUnk_08DB7E70
// ??? gUnk_08DB8118
// ??? gUnk_08DB85EC
// ??? gUnk_08DB85F4
// ??? gUnk_08DB875C
// ??? gUnk_08DB8814
// ??? gUnk_08DB8824
// ??? gUnk_08DB8828
// ??? gUnk_08DB88D8
// ??? gUnk_08DB88EC
// ??? gUnk_08DB890C
// ??? gUnk_08DB8944
// ??? gUnk_08DB8964
// ??? gUnk_08DB8A2C
// ??? gUnk_08DB8A4C
// ??? gUnk_08DB8A5A
// ??? gUnk_08DB8A68
// ??? gUnk_08DB8A76
// ??? gUnk_08DB8A84
// ??? gUnk_08DB8A92
// ??? gUnk_08DB8AA0
// ??? gUnk_08DB8B10
// ??? gUnk_08DB8B28
// ??? gUnk_08DB8B40
// ??? gUnk_08DB8B60
// ??? gUnk_08DB8B64
// ??? gUnk_08DB8B94
// ??? gUnk_08DB8CBC
// ??? gUnk_08DB8D1C
// ??? gUnk_08DB8DE4
// ??? gUnk_08DB8E34
// ??? gUnk_08DB8ED4
// ??? gUnk_08DB8ED8
// ??? gUnk_08DB8F80
// ??? gUnk_08DB8FA0
// ??? gUnk_08DB8FC0
// ??? gUnk_08DB8FC4
// ??? gUnk_08DB8FC8
// ??? gUnk_08DB8FCC
// ??? gUnk_08DB8FD0
// ??? gUnk_08DB9010
// ??? gUnk_08DB9030
// ??? gUnk_08DB91A8
// ??? gUnk_08DB91C0
// ??? gUnk_08DB9208
// ??? gUnk_08DB9228
// ??? gUnk_08DB9248
// ??? gUnk_08DB92C8
// ??? gUnk_08DB9320
// ??? gUnk_08DB9378
// ??? gUnk_08DB9398
// ??? gUnk_08DB93B0
// ??? gUnk_08DB93D0
// ??? gUnk_08DB93F0
// ??? gUnk_08DB941C
// ??? gUnk_08DB947C
// ??? gUnk_08DB9548
// ??? gUnk_08DB95D8
// ??? gUnk_08DB9674
// ??? gUnk_08DB9794
// ??? gUnk_08DB9A7C
// ??? gUnk_08DB9A84
// ??? gUnk_08DBA048
// ??? gUnk_08DBA258
// ??? gUnk_08DBA9FC
// ??? gUnk_08DBABD0
// ??? gUnk_08DBAD14
// ??? gUnk_08DC0390
// ??? gUnk_08E00008
// ??? gUnk_08FC0008
// ??? gUnk_08FD8008



#define EFX_BG_WIDTH 66
#define EFX_TILEMAP_LOC(aMap, aX, aY) (aMap + (aX) + EFX_BG_WIDTH * (aY))

enum ekr_battle_unit_position {
    EKR_POS_L,
    EKR_POS_R
};

extern struct Anim *gAnims[4];

enum gEkrDistanceType_index {
    EKR_DISTANCE_CLOSE,
    EKR_DISTANCE_FAR,
    EKR_DISTANCE_FARFAR,
    EKR_DISTANCE_3,
    EKR_DISTANCE_PROMOTION
};

extern s16 gEkrDistanceType;

struct ProcEkrSubAnimeEmulator {
    PROC_HEADER;

    /* 29 */ u8 type;
    /* 2A */ u8 valid;
    /* 2C */ s16 timer;
    /* 2E */ s16 scr_cur;

    STRUCT_PAD(0x30, 0x32);

    /* 32 */ s16 x1;
    /* 34 */ s16 x2;

    STRUCT_PAD(0x36, 0x3A);

    /* 3A */ s16 y1;
    /* 3C */ s16 y2;

    STRUCT_PAD(0x3E, 0x44);

    /* 44 */ u32 * anim_scr;
    /* 48 */ void * sprite;
    /* 4C */ int oam2Base;
    /* 50 */ int oamBase;
};


struct ProcEfx {
    PROC_HEADER;

    /* 29 */ u8 hitted;
    /* 2A */ u8 type;
    /* 2B */ STRUCT_PAD(0x2B, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 step;
    /* 30 */ s16 unk30;
    /* 32 */ u16 unk32;
    /* 34 */ STRUCT_PAD(0x34, 0x44);
    /* 44 */ u32 unk44;
    /* 48 */ u32 unk48;
    /* 4C */ u32 frame;
    /* 50 */ u32 speed;
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
    /* 32 */ s16 unk32;
    /* 34 */ s16 unk34;

    STRUCT_PAD(0x36, 0x3C);

    /* 3C */ s16 unk3C;

    STRUCT_PAD(0x3E, 0x44);

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
    /* 32 */ s16 unk32;

    STRUCT_PAD(0x34, 0x44);

    /* 44 */ u32 frame;
    /* 48 */ const u16 * frame_config;
    /* 4C */ void * pal;

    STRUCT_PAD(0x50, 0x5C);

    /* 5C */ struct Anim * anim;
};

struct ProcEfxRST {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x2C);
    /* 2C */ s16 timer;
    /* 2E */ s16 duration;

    STRUCT_PAD(0x30, 0x5C);

    /* 5C */ struct Anim * anim;

    STRUCT_PAD(0x60, 0x64);

    /* 64 */ struct ProcEfx * efxproc;
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
    /* 4C */ int unk4C;

    STRUCT_PAD(0x50, 0x5C);

    /* 5C */ struct Anim * anim;
    /* 60 */ struct Anim * anim2;
    /* 64 */ struct Anim * anim3;
    /* 68 */ struct Anim * anim4;
};

struct ProcEfxALPHA {
    PROC_HEADER;

    /* 29 */ u8 unk29;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ s16 timer;
    /* 2E */ s16 unk2E;
    /* 30 */ s16 unk30;

    STRUCT_PAD(0x32, 0x5C);

    /* 5C */ struct Anim * anim;
};

struct ProcEfxSCR {
    /* 00 */ PROC_HEADER;

    /* 29 */ STRUCT_PAD(0x29, 0x2C);

    /* 2C */ s16 timer;
    /* 2E */ s16 unk2E;
    /* 34 */ STRUCT_PAD(0x30, 0x44);
    /* 44 */ int unk44;
    /* 48 */ STRUCT_PAD(0x48, 0x5C);
    /* 5C */ struct ProcEfx * unk5C;
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
// ??? EkrLvupFanMain
// ??? sub_0804C8F4
// ??? sub_0804C944
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
// ??? EnableEkrGauge
// ??? DisableEkrGauge
// ??? sub_0804CCE0
// ??? ekrGaugeMain
// ??? sub_0804D13C
void NewEkrDispUP(void);
void EndEkrDispUP(void);
// ??? EkrDispUP_0804D584
// ??? EkrDispUP_0804D594
// ??? EkrDispUP_0804D5A4
// ??? EkrDispUP_0804D5B4
void EkrDispUP_SetPositionUnsync(u16 x, u16 y);
void EkrDispUP_SetPositionSync(u16 x, u16 y);
void SyncEkrDispUP(void);
void UnsyncEkrDispUP(void);
void AsyncEkrDispUP(void);
void UnAsyncEkrDispUP(void);
// ??? ekrDispUPMain
// ??? sub_0804D738
// ??? sub_0804D894
// ??? EfxPrepareScreenFx
// ??? sub_0804DC18
// ??? EkrEfxStatusClear
int sub_0804DD50(void);
// ??? CheckEfxHpBarExist
// ??? sub_0804DD80
// ??? sub_0804DE4C
// ??? sub_0804DF64
// ??? sub_0804E004
// ??? sub_0804E048
// ??? sub_0804E128
// ??? sub_0804E1E8
// ??? sub_0804E28C
// ??? sub_0804E3E0
// ??? sub_0804E458
// ??? sub_0804E474
// ??? sub_0804E54C
// ??? sub_0804E604
// ??? sub_0804E658
// ??? sub_0804E6AC
// ??? sub_0804E6D0
// ??? sub_0804E7AC
// ??? sub_0804E7D8
// ??? sub_0804E7F4
// ??? sub_0804E81C
// ??? sub_0804E89C
// ??? sub_0804E8CC
// ??? sub_0804E944
// ??? sub_0804E9A8
// ??? sub_0804E9D0
// ??? sub_0804EA10
// ??? sub_0804EA54
// ??? sub_0804EAC4
// ??? sub_0804EAE8
// ??? sub_0804EB48
// ??? sub_0804EBC0
// ??? sub_0804EC74
// ??? sub_0804ED50
// ??? sub_0804ED88
// ??? sub_0804EDB8
// ??? sub_0804EE24
// ??? sub_0804EEB8
ProcPtr NewEfxQuakePure(int, int);
// ??? sub_0804EF58
// ??? sub_0804EFC8
// ??? nullsub_48
void NewEfxQuake(int type);
// ??? sub_0804F0DC
// ??? NewEfxHitQuake
// ??? sub_0804F464
void NewEfxFlashBgWhite(struct Anim * anim, int duartion);
void NewEfxFlashBgRed(struct Anim * anim, int duartion);
void NewEfxFlashBgBlack(struct Anim * anim, int duartion);
void NewEfxFlashBgDirectly(struct Anim * anim, int duartion);
// ??? EfxFlashBgMain
// ??? EfxFlashRestorePalSync
// ??? NewEfxWhiteOUT
// ??? EfxWhiteOutMain1
// ??? EfxWhiteOutMain2
// ??? EfxWhiteOutRestorePalSync
// ??? NewEfxWhiteIN
// ??? EfxWhiteInMain1
// ??? sub_0804FA30
// ??? sub_0804FAC4
// ??? sub_0804FB58
// ??? EndEfxHPBarColorChange
// ??? sub_0804FC5C
// ??? sub_0804FC6C
// ??? sub_0804FC7C
// ??? sub_0804FD74
// ??? sub_0804FDB0
// ??? sub_0804FE1C
// ??? sub_0804FE74
// ??? EndEfxStatusUnits
// ??? sub_0804FFAC
// ??? sub_0804FFCC
// ??? sub_0804FFEC
// ??? sub_0805001C
// ??? sub_08050038
// ??? sub_080500DC
// ??? sub_080501E4
// ??? sub_0805022C
// ??? EndProcEfxWeaponIcon
// ??? sub_08050290
// ??? sub_080502A0
// ??? sub_080502B0
// ??? sub_08050318
// ??? sub_08050348
// ??? sub_080503A0
// ??? sub_080503B8
// ??? sub_080503D4
// ??? sub_08050438
// ??? sub_08050478
// ??? sub_080504F8
// ??? sub_08050530
// ??? sub_08050548
// ??? sub_08050560
// ??? sub_0805057C
// ??? sub_08050604
// ??? sub_08050654
// ??? sub_080506E0
// ??? sub_0805073C
// ??? SpellFx_Begin
// ??? SpellFx_Finish
// ??? SpellFx_ClearBG1Position
void SpellFx_ClearBG1(void);
void SpellFx_SetSomeColorEffect(void);
void SpellFx_ClearColorEffects(void);
void StartBattleAnimHitEffectsDefault(struct Anim * anim, int type);
// ??? sub_0805092C
// ??? StartBattleAnimHitEffects
// ??? StartBattleAnimResireHitEffects
// ??? sub_08050BBC
// ??? sub_08050BF8
// ??? sub_08050C54
void SpellFx_WriteBgMap(struct Anim * anim, const u16 * src1, const u16 * src2);
// ??? sub_08050D38
void SpellFx_RegisterObjGfx(const u16 * img, u32 size);
void SpellFx_RegisterObjPal(const u16 * pal, u32 size);
void SpellFx_RegisterBgGfx(const u16 * img, u32 size);
void SpellFx_RegisterBgPal(const u16 * pal, u32 size);
// ??? sub_08050E2C
// ??? sub_08050E58
// ??? sub_08050E88
s16 EfxAdvanceFrameLut(s16 *ptime, s16 *pcount, const s16 lut[]);
// ??? sub_08050F48
int EfxGetCamMovDuration(void);
// ??? sub_08050F74
void EfxTmFill(u32 val);
void SetEkrFrontAnimPostion(int pos, s16 x, s16 y);
int sub_08050FE4(void);
void sub_08050FF0(int);
void NewEfxspdquake(struct Anim * anim);
// ??? sub_08051020
// ??? sub_080510F4
bool SetupBanim(void);
void BeginAnimsOnBattleAnimations(void);
// ??? EkrBattleEndRountine
// ??? sub_08051214
// ??? sub_08051288
// ??? sub_0805129C
// ??? sub_080513B0
// ??? sub_080514B8
// ??? sub_08051558
// ??? sub_080515A0
// ??? sub_080515DC
// ??? sub_08051630
// ??? sub_08051690
// ??? sub_080516A8
// ??? sub_08051720
// ??? sub_08051774
// ??? sub_080517D0
// ??? sub_08051830
// ??? sub_080518BC
// ??? sub_0805194C
// ??? sub_08051A38
// ??? sub_08051A50
// ??? sub_08051E28
// ??? NewEkrUnitKakudai
// ??? UnitKakudai1
// ??? UnitKakudai2
// ??? sub_0805226C
// ??? NewEkrWindowAppear
// ??? CheckEkrWindowAppearUnexist
// ??? sub_080522DC
// ??? NewEkrNamewinAppear
// ??? sub_080523AC
// ??? sub_080523C0
// ??? sub_080523E0
// ??? sub_0805245C
// ??? sub_080524A4
// ??? sub_080524B8
// ??? PrepareBattleGraphicsMaybe
// ??? sub_08053040
// ??? sub_0805313C
// ??? sub_08053218
// ??? sub_080532F0
// ??? sub_08053438
// ??? ParseBattleHitToBanimCmd
// ??? CheckBattleHasHit
// ??? sub_08053A14
u16 * FilterBattleAnimCharacterPalette(s16 index, u16 item);
int GetAllegienceId(u32 arg);
void EkrPrepareBanimfx(struct Anim * anim, u16 index);
s16 GetBattleAnimRoundType(int index);
s16 GetBattleAnimRoundTypeFlags(int);
s16 GetEfxHp(int index);
// ??? GetEfxHpModMaybe
// ??? IsItemDisplayedInBattle
// ??? IsWeaponLegency
// ??? EkrCheckAttackRound
// ??? SetBattleScriptted
// ??? SetBattleUnscriptted
// ??? CheckBattleScriptted
void BattleAIS_ExecCommands(void);
void AnimScrAdvance(struct Anim * anim);
void NewEkrChienCHR(struct Anim * anim);
// ??? EkrChienCHRMain
void RegisterAISSheetGraphics(struct Anim * anim);
// ??? sub_08054798
int GetBanimPalette(int banim_id, int pos);
void UpdateBanimFrame(void);
void InitMainAnims(void);
void InitBattleAnimFrame(int round_type_left, int round_type_right);
void InitLeftAnim(int);
void InitRightAnim(int);
void SwitchAISFrameDataFromBARoundType(struct Anim * anim, int);
int GetAISLayerId(struct Anim * anim);
int GetAnimPosition(struct Anim * anim);
int CheckRoundMiss(s16 type);
int CheckRound1(s16 type);
int CheckRound2(s16 type);
int CheckRoundCrit(struct Anim * anim);
struct Anim * GetAnimAnotherSide(struct Anim * anim);
s16 GetAnimRoundType(struct Anim * anim);
s16 GetAnimNextRoundType(struct Anim * anim);
s16 GetAnimRoundTypeAnotherSide(struct Anim * anim);
s16 GetAnimNextRoundTypeAnotherSide(struct Anim * anim);
void SetAnimStateHidden(int pos);
void SetAnimStateUnHidden(int pos);
// ??? sub_080550B4
// ??? sub_08055250
// ??? sub_08055274
// ??? sub_080552D8
// ??? sub_08055474
// ??? sub_080555E8
// ??? sub_080555F8
// ??? sub_08055614
// ??? sub_08055624
// ??? sub_08055644
// ??? sub_08055658
// ??? sub_08055670
// ??? sub_08055690
// ??? sub_080556A4
// ??? sub_080556B0
// ??? sub_080556D8
// ??? sub_080556FC
// ??? sub_08055718
// ??? sub_08055AC4
// ??? sub_08055AF0
// ??? sub_08055B08
// ??? sub_08055C50
// ??? sub_08055CCC
// ??? GetBattleAnimArenaFlag
// ??? sub_08055CE4
// ??? sub_08055D2C
// ??? sub_08055D44
// ??? sub_08055D58
// ??? sub_08055D7C
// ??? sub_08055D94
// ??? sub_08055DA8
// ??? sub_08055E30
// ??? sub_08055EA4
// ??? sub_08055F08
// ??? sub_08055F1C
// ??? sub_08055F34
// ??? sub_08055F60
// ??? sub_08055FC4
// ??? sub_08055FF0
// ??? sub_08056024
// ??? sub_08056038
void StartSpellAnimation(struct Anim * anim);
// ??? nullsub_49
// ??? sub_080560A4
// ??? sub_080560E8
// ??? sub_080560F8
// ??? sub_0805618C
// ??? sub_080561D8
// ??? sub_080561F8
// ??? sub_08056228
// ??? sub_08056238
// ??? sub_08056284
// ??? sub_08056314
// ??? sub_080563C8
// ??? sub_080563F0
// ??? sub_08056418
// ??? sub_08056454
// ??? sub_08056490
// ??? sub_080564B8
// ??? sub_080565FC
// ??? sub_0805660C
// ??? sub_08056618
// ??? sub_080566F0
// ??? sub_08056738
// ??? sub_0805683C
// ??? sub_0805689C
// ??? sub_080569B8
// ??? sub_080569FC
// ??? sub_08056BC8
// ??? sub_08056BEC
// ??? sub_08056C40
// ??? sub_08056C78
// ??? sub_08056D14
// ??? sub_08056DB8
// ??? sub_08056E10
// ??? sub_08056E38
// ??? sub_08056EBC
// ??? sub_08056EFC
// ??? sub_08056F40
// ??? sub_08056F50
// ??? sub_08056F98
// ??? sub_08056FD0
// ??? sub_08057088
// ??? sub_080570F0
// ??? sub_08057120
// ??? sub_0805717C
// ??? sub_080571D8
// ??? sub_08057234
// ??? sub_08057290
// ??? sub_080572EC
// ??? sub_08057348
// ??? sub_080573A4
// ??? sub_08057400
// ??? sub_0805745C
// ??? sub_080574B8
// ??? sub_08057514
// ??? sub_080575BC
// ??? sub_08057634
// ??? sub_08057664
// ??? sub_0805769C
// ??? sub_080577AC
// ??? sub_0805780C
// ??? sub_08057888
// ??? sub_080578F0
// ??? sub_08057924
// ??? sub_0805795C
// ??? sub_08057A6C
// ??? sub_08057ABC
// ??? sub_08057B7C
// ??? sub_08057BF4
// ??? sub_08057C24
// ??? sub_08057C60
// ??? sub_08057CFC
// ??? sub_08057DBC
// ??? sub_08057DF0
// ??? sub_08057E34
// ??? sub_08057EFC
// ??? sub_08057F38
// ??? sub_08057F84
// ??? sub_08057FC0
// ??? sub_0805807C
// ??? sub_080580EC
// ??? sub_08058120
// ??? sub_08058158
// ??? sub_08058208
// ??? sub_080582B8
// ??? sub_08058318
// ??? sub_0805836C
// ??? sub_080583A0
// ??? sub_080583DC
// ??? sub_0805843C
// ??? sub_08058478
// ??? sub_080584F8
// ??? sub_0805856C
// ??? sub_08058584
// ??? sub_080585BC
// ??? sub_08058648
// ??? sub_08058698
// ??? sub_080586F0
// ??? sub_0805872C
// ??? sub_08058778
// ??? sub_080587F8
// ??? sub_0805882C
// ??? sub_08058868
// ??? sub_08058908
// ??? sub_0805898C
// ??? sub_08058A10
// ??? sub_08058A4C
// ??? sub_08058A98
// ??? sub_08058AF8
// ??? sub_08058B28
// ??? sub_08058B6C
// ??? sub_08058BB0
// ??? sub_08058CB8
// ??? sub_08058D18
// ??? sub_08058D70
// ??? sub_08058DFC
// ??? sub_08058E44
// ??? sub_08058EC8
// ??? sub_08058F2C
// ??? sub_08058FC4
// ??? sub_08058FF8
// ??? sub_0805903C
// ??? sub_08059084
// ??? sub_08059108
// ??? sub_08059138
// ??? sub_08059174
// ??? sub_080592AC
// ??? sub_08059330
// ??? sub_08059394
// ??? sub_08059418
// ??? sub_0805947C
// ??? sub_080594E0
// ??? sub_08059510
// ??? sub_0805955C
// ??? sub_08059588
// ??? sub_080596E0
// ??? sub_0805979C
// ??? sub_080597D8
// ??? sub_08059898
// ??? sub_080598EC
// ??? sub_08059948
// ??? sub_0805996C
// ??? sub_080599B0
// ??? sub_080599D4
// ??? sub_080599F8
// ??? sub_08059A2C
// ??? sub_08059A90
// ??? sub_08059B08
// ??? sub_08059B4C
// ??? sub_08059BAC
// ??? nullsub_50
// ??? sub_08059BF4
// ??? sub_08059C30
// ??? sub_08059D20
// ??? sub_08059DD0
// ??? sub_08059E80
// ??? sub_08059EE4
// ??? sub_08059F28
// ??? sub_08059F74
// ??? sub_08059F8C
// ??? sub_08059FC8
// ??? sub_0805A004
// ??? sub_0805A040
// ??? sub_0805A06C
// ??? sub_0805A090
// ??? sub_0805A0CC
// ??? sub_0805A210
// ??? sub_0805A29C
// ??? sub_0805A33C
// ??? sub_0805A3C0
// ??? sub_0805A45C
// ??? sub_0805A4C8
// ??? sub_0805A530
// ??? sub_0805A594
// ??? sub_0805A5C4
// ??? sub_0805A60C
// ??? sub_0805A648
// ??? sub_0805A700
// ??? sub_0805A780
// ??? sub_0805A838
// ??? sub_0805A87C
// ??? sub_0805A8B8
// ??? sub_0805A9E8
// ??? sub_0805AA38
// ??? sub_0805AAB4
// ??? sub_0805AAE8
// ??? sub_0805AB54
// ??? sub_0805ABC0
// ??? sub_0805ABD8
// ??? sub_0805AC14
// ??? sub_0805AE14
// ??? sub_0805AE68
// ??? sub_0805AEE0
// ??? sub_0805AF28
// ??? sub_0805AF74
// ??? sub_0805AFC8
// ??? sub_0805B04C
// ??? sub_0805B09C
// ??? sub_0805B110
// ??? sub_0805B210
// ??? sub_0805B264
// ??? sub_0805B2C0
// ??? sub_0805B32C
// ??? sub_0805B384
// ??? sub_0805B404
// ??? sub_0805B52C
// ??? sub_0805B5D8
// ??? sub_0805B610
// ??? sub_0805B678
// ??? sub_0805B6B4
// ??? sub_0805B7A4
// ??? sub_0805B828
// ??? sub_0805B8AC
// ??? sub_0805B930
// ??? sub_0805B9D4
// ??? sub_0805BA48
// ??? sub_0805BA78
// ??? sub_0805BAB4
// ??? sub_0805BC20
// ??? sub_0805BCB8
// ??? sub_0805BD1C
// ??? sub_0805BD74
// ??? sub_0805BE48
// ??? sub_0805BE90
// ??? sub_0805BEDC
// ??? sub_0805BF2C
// ??? sub_0805BF80
// ??? sub_0805C064
// ??? sub_0805C0DC
// ??? sub_0805C18C
// ??? sub_0805C230
// ??? sub_0805C260
// ??? sub_0805C2B4
// ??? sub_0805C35C
// ??? nullsub_51
// ??? sub_0805C3D8
// ??? sub_0805C414
// ??? sub_0805C5B4
// ??? sub_0805C624
// ??? sub_0805C6A8
// ??? sub_0805C700
// ??? sub_0805C77C
// ??? sub_0805C7F8
// ??? sub_0805C810
// ??? sub_0805C86C
// ??? sub_0805C8C8
// ??? sub_0805C924
// ??? sub_0805C96C
// ??? sub_0805C9CC
// ??? sub_0805CA20
// ??? sub_0805CA38
// ??? sub_0805CA74
// ??? sub_0805CC58
// ??? sub_0805CCE8
// ??? sub_0805CD04
// ??? sub_0805CD34
// ??? sub_0805CD7C
// ??? sub_0805CD8C
// ??? sub_0805CDCC
// ??? sub_0805CE2C
// ??? sub_0805CE60
// ??? sub_0805CEF0
// ??? sub_0805CF78
// ??? sub_0805D044
// ??? sub_0805D08C
// ??? sub_0805D0D8
// ??? sub_0805D158
// ??? sub_0805D1D8
// ??? sub_0805D200
// ??? sub_0805D328
// ??? sub_0805D350
// ??? sub_0805D4CC
// ??? sub_0805D4F4
// ??? sub_0805D670
// ??? sub_0805D698
// ??? sub_0805D824
// ??? sub_0805D8E0
// ??? sub_0805D994
// ??? sub_0805DA04
// ??? sub_0805DA74
// ??? sub_0805DAE4
// ??? sub_0805DB2C
// ??? sub_0805DB68
// ??? sub_0805DB84
// ??? sub_0805DC18
// ??? sub_0805DC78
// ??? sub_0805DCDC
// ??? sub_0805DD10
// ??? sub_0805DD44
// ??? sub_0805DD78
// ??? sub_0805DDC0
// ??? sub_0805DE8C
// ??? sub_0805DEC0
// ??? sub_0805DEF0
// ??? sub_0805DF20
// ??? sub_0805DFF4
// ??? sub_0805E044
// ??? sub_0805E0C4
// ??? sub_0805E110
// ??? sub_0805E158
// ??? sub_0805E23C
// ??? sub_0805E31C
// ??? sub_0805E368
// ??? sub_0805E3B0
// ??? sub_0805E3EC
// ??? sub_0805E510
// ??? sub_0805E564
// ??? sub_0805E5C8
// ??? sub_0805E640
// ??? sub_0805E650
// ??? sub_0805E68C
// ??? sub_0805E794
// ??? sub_0805E820
// ??? sub_0805E878
// ??? sub_0805E8D0
// ??? sub_0805E8E8
// ??? sub_0805E924
// ??? sub_0805EA24
// ??? sub_0805EAB0
// ??? sub_0805EB08
// ??? sub_0805EB60
// ??? sub_0805EBA4
// ??? sub_0805EBB4
// ??? sub_0805EBD8
// ??? sub_0805EBF8
// ??? sub_0805EC08
// ??? sub_0805EC44
// ??? sub_0805ED64
// ??? sub_0805EDB8
// ??? sub_0805EE1C
// ??? sub_0805EE74
// ??? sub_0805EE84
// ??? sub_0805EEC0
// ??? sub_0805EFA0
// ??? sub_0805F0C0
// ??? sub_0805F124
// ??? sub_0805F150
// ??? sub_0805F1B4
// ??? sub_0805F1C4
// ??? sub_0805F21C
// ??? sub_0805F234
// ??? sub_0805F270
// ??? sub_0805F2AC
// ??? sub_0805F2E8
// ??? sub_0805F324
// ??? sub_0805F360
// ??? sub_0805F39C
// ??? sub_0805F3D8
// ??? sub_0805F414
// ??? sub_0805F450
// ??? sub_0805F48C
// ??? sub_0805F4C8
// ??? sub_0805F594
// ??? sub_0805F5F0
// ??? sub_0805F648
// ??? sub_0805F6A0
// ??? sub_0805F6E0
// ??? sub_0805F6F8
// ??? sub_0805F734
// ??? sub_0805F808
// ??? sub_0805F860
// ??? sub_0805F8C4
// ??? sub_0805F950
// ??? sub_0805F9E4
// ??? sub_0805FA28
// ??? sub_0805FA70
// ??? sub_0805FAB8
// ??? sub_0805FB64
// ??? sub_0805FBBC
// ??? sub_0805FBE8
// ??? sub_0805FC24
// ??? sub_0805FE20
// ??? sub_0805FE7C
// ??? sub_0805FED4
// ??? sub_0805FEF4
// ??? sub_0805FFB0
// ??? sub_0805FFD0
// ??? sub_08060014
// ??? sub_08060108
// ??? sub_08060124
// ??? sub_08060150
// ??? sub_08060198
// ??? sub_080601A8
// ??? sub_080601E8
// ??? sub_0806026C
// ??? sub_080602D0
// ??? sub_0806030C
// ??? sub_0806037C
// ??? sub_08060414
// ??? sub_08060494
// ??? sub_0806052C
// ??? sub_0806055C
// ??? sub_080605A4
// ??? sub_080605E0
// ??? sub_08060730
// ??? sub_0806079C
// ??? sub_080607B8
// ??? sub_0806084C
// ??? sub_08060898
// ??? sub_080608B8
// ??? sub_080608FC
// ??? sub_0806090C
// ??? sub_08060948
// ??? sub_0806096C
// ??? sub_08060A1C
// ??? sub_08060A3C
// ??? sub_08060A80
// ??? sub_08060B64
// ??? sub_08060B80
// ??? sub_08060BA0
// ??? sub_08060BE4
// ??? sub_08060C2C
// ??? sub_08060D10
// ??? sub_08060D2C
// ??? sub_08060D4C
// ??? sub_08060D90
// ??? sub_08060DD8
// ??? sub_08060E44
// ??? sub_08060E70
// ??? sub_08060EAC
// ??? sub_08061094
// ??? sub_08061128
// ??? sub_080611CC
// ??? sub_08061274
// ??? sub_08061290
// ??? sub_080612D4
// ??? sub_0806137C
// ??? sub_08061398
// ??? sub_080613B8
// ??? sub_08061400
// ??? sub_08061448
// ??? sub_080614B0
// ??? sub_080614E4
// ??? sub_08061558
// ??? sub_08061570
// ??? sub_0806158C
// ??? sub_080615A8
// ??? sub_080615C4
// ??? sub_08061600
// ??? sub_08061758
// ??? sub_080617EC
// ??? sub_08061880
// ??? sub_08061914
// ??? sub_0806196C
// ??? sub_08061A50
// ??? sub_08061A6C
// ??? sub_08061A8C
// ??? sub_08061AD4
// ??? sub_08061B1C
// ??? sub_08061B7C
// ??? sub_08061BE0
// ??? sub_08061C1C
// ??? sub_08061D84
// ??? sub_08061DE8
// ??? sub_08061E40
// ??? sub_08061EE8
// ??? sub_08061F04
// ??? sub_08061F48
// ??? sub_08061FC4
// ??? sub_08062028
// ??? sub_0806205C
// ??? sub_08062094
// ??? sub_080620FC
// ??? sub_0806221C
// ??? sub_08062350
// ??? sub_0806238C
// ??? sub_0806250C
// ??? sub_08062558
// ??? sub_080625D0
// ??? sub_08062640
// ??? sub_08062658
// ??? sub_080626BC
// ??? sub_080626D4
// ??? sub_080626F0
// ??? sub_08062748
// ??? sub_080627C4
// ??? sub_08062824
// ??? sub_080628F0
// ??? sub_08062940
// ??? sub_080629CC
// ??? sub_08062A2C
// ??? sub_08062A3C
// ??? sub_08062A9C
// ??? sub_08062AAC
// ??? sub_08062AE8
// ??? sub_08062B24
// ??? sub_08062B60
// ??? sub_08062B9C
// ??? sub_08062C68
// ??? sub_08062C9C
// ??? sub_08062CC8
// ??? sub_08062D38
void NewEfxPierceCritical(struct Anim * anim);
// ??? sub_08062D88
// ??? sub_08062DB8
// ??? sub_08062E08
// ??? sub_08062E30
// ??? sub_08062E60
void NewEfxNormalEffect(struct Anim * anim);
// ??? sub_08062EBC
// ??? sub_08062EFC
// ??? sub_08062F88
void NewEfxYushaSpinShield(struct Anim * anim, int type);
// ??? sub_08063008
// ??? sub_08063014
// ??? sub_08063094
// ??? sub_080630FC
// ??? sub_08063124
// ??? sub_08063188
void NewEfxHurtmutEff00(struct Anim * anim);
// ??? sub_080631F4
// ??? sub_08063200
// ??? sub_08063244
// ??? sub_08063290
// ??? sub_080632DC
// ??? sub_08063300
// ??? sub_08063344
// ??? sub_08063390
// ??? sub_080633DC
void NewEfxMagfcast(struct Anim * anim, int);
// ??? sub_08063460
// ??? sub_0806347C
// ??? sub_0806355C
void NewEfxSunakemuri(struct Anim * anim, int);
// ??? sub_080635E4
// ??? sub_080635F0
// ??? sub_080637D4
void NewEfxLokmsuna(struct Anim * anim);
// ??? sub_08063830
// ??? sub_0806383C
// ??? sub_080638C0
void NewEfxKingPika(struct Anim * anim);
// ??? sub_0806390C
void NewEfxFlashFX(struct Anim * anim);
// ??? sub_08063998
// ??? sub_080639F8
// ??? sub_08063A6C
// ??? sub_08063ABC
// ??? sub_08063B30
void NewEfxSpecalEffect(struct Anim *anim);
// ??? sub_08063C14
// ??? sub_08063C20
// ??? sub_08063C40
// ??? sub_08063CB0
// ??? sub_08063CFC
// ??? sub_08063D24
// ??? sub_08063D44
// ??? sub_08063DC8
// ??? sub_08063DE8
// ??? sub_08063E2C
// ??? sub_08063E4C
// ??? sub_08063E94
// ??? sub_08063F30
void NewEfxMantBatabata(struct Anim *anim);
// ??? sub_08064140
// ??? sub_0806416C
void NewEfxChillEffect(struct Anim *anim);
// ??? sub_080641D0
// ??? sub_08064214
// ??? sub_0806426C
// ??? sub_080642C4
// ??? sub_080642F4
void NewEfxChillAnime(struct Anim * anim, int);
// ??? sub_080643DC
void sub_08064458(struct Anim * anim);
// ??? sub_08064478
// ??? sub_0806452C
// ??? sub_080645D4
// ??? sub_08064644
// ??? sub_0806466C
// ??? sub_080646EC
// ??? sub_08064724
// ??? sub_08064764
// ??? sub_08064788
// ??? sub_080647C8
// ??? sub_080647DC
// ??? sub_080647F8
// ??? sub_08064814
// ??? sub_08064820
// ??? sub_0806482C
// ??? sub_08064834
// ??? sub_0806488C
// ??? sub_080648BC
// ??? sub_08064910
// ??? sub_0806497C
// ??? sub_080649AC
// ??? sub_080649D4
// ??? sub_08064A04
// ??? sub_08064A2C
// ??? nullsub_52
// ??? sub_08064A54
// ??? sub_08064A74
// ??? sub_08064A94
// ??? sub_08064AD0
// ??? sub_08064AF4
// ??? sub_08064B40
// ??? sub_08064BC0
// ??? sub_08064BE4
// ??? sub_08064C04
// ??? sub_08064C2C
// ??? sub_08064C88
// ??? sub_08064D0C
// ??? sub_08064D40
// ??? sub_08064D80
// ??? sub_08064DFC
// ??? sub_08064E20
// ??? sub_08064E3C
// ??? sub_08064EB0
// ??? sub_08064F04
// ??? sub_08064F50
// ??? sub_08064F84
// ??? sub_08064FC4
// ??? sub_08064FF4
// ??? sub_08065010
// ??? sub_08065094
// ??? sub_080650F8
// ??? sub_08065120
// ??? sub_08065140
// ??? sub_08065158
// ??? sub_080651B0

/* banim_ekrdragon.h */

/* efxutils */
void sub_08067128(u16 * tm, u16 width, u16 height, int pal, int chr);
void FillBGRect(u16 * tm, u16 width, u16 height, int pal, int chr);
void sub_080671E0(u16 * tm, u16 width, u16 height, int pal, int chr);
void EfxTmModifyPal(u16 * tm, u16 width, u16 height);
void EfxTmCpyBG(const void * ptr1, void * ptr2, u16 width, u16 height, int pal, int chr);
void EfxTmCpyBgHFlip(const u16 * tsa, u16 * tm, u16 width, u16 height, int pal, int chr);
void EfxTmCpyExt(const u16 * src, s16 src_width, u16 * dst, s16 dst_width, u16 width, u16 hight, int pal, int chr);
void EfxTmCpyExtHFlip(const u16 * src, s16 src_width, u16 * dst, s16 dst_width, u16 width, u16 hight, int pal, int chr);
void sub_0806748C(u16 * tm, int arg1, int arg2);
void EkrModifyBarfx(u16 * tm, int arg);
bool EkrPalModifyUnused(u16 * pal_start, u16 * pal_end, u16 * dst, u16 amount, u16 start, u16 end);
void EfxPalBlackInOut(u16 * pal_buf, int line, int length, int ref);
void EfxPalWhiteInOut(u16 * pal_buf, int line, int length, int ref);
void EfxPalGrayInOut(u16 * pal_buf, int line, int length, int r0, int g0, int b0);
void EfxPalModifyPetrifyEffect(u16 * pal_buf, int line, int length);
void EfxSplitColor(u16 * pal, u8 * dst, u32 length);
void EfxSplitColorPetrify(u16 * src, u8 * dst, u32 length);
void sub_08067998(s8 * src1, s8 * src2, u16 * pal, u32 length, int ref);
void EfxDecodeSplitedPalette(u16 * dst, s8 * src1, s8 * src2, s16 * src3, u32 length, int ref, int unk);
void EfxChapterMapFadeOUT(int speed);
int sub_08067AD4(int a);
struct ProcEkrSubAnimeEmulator * NewEkrsubAnimeEmulator(int x, int y, u32 * anim_scr, int type, int oam2Base, int oamBase, ProcPtr parent);
void EkrsubAnimeEmulatorMain(struct ProcEkrSubAnimeEmulator * proc);
int GetAnimSpriteRotScaleX(u32 header);
int GetAnimSpriteRotScaleY(u32 header);
void BanimUpdateSpriteRotScale(void * src, struct AnimSpriteData * out, s16 x, s16 y, int unused);

/* efxsound */
struct ProcEfxSoundSE {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x2C);

    /* 2C */ s16 timer;

    STRUCT_PAD(0x2E, 0x44);

    /* 44 */ int volume;
    /* 48 */ int index;
};

void EfxPlaySE(int songid, int volume);
void Loop6C_efxSoundSE(struct ProcEfxSoundSE * proc);
// ??? DoM4aSongNumStop
// ??? EfxOverrideBgm
// ??? StopBGM1
// ??? UnregisterEfxSoundSeExist
// ??? RegisterEfxSoundSeExist
// ??? CheckEfxSoundSeExist
// ??? M4aPlayWithPostionCtrl
void EfxPlaySEwithCmdCtrl(struct Anim * anim, int);
// ??? GetEfxSoundType1FromTerrain
// ??? IsAnimSoundInPositionMaybe
// ??? GetEfxSoundType2FromBaseCon
s16 sub_080684B0(struct Anim * anim);
// ??? EfxPlayHittedSFX
// ??? EfxPlayCriticalHittedSFX
// ??? EfxCheckRetaliation
// ??? GetEfxHpChangeType
// ??? EkrPlayMainBGM
// ??? EkrRestoreBGM
// ??? GetBanimBossBGM
// ??? GetProperAnimSoundLocation
void PlaySFX(int, int, int, int);
// ??? PlaySfxAutomatically

/* ekrclasschg */
// ??? sub_08068A0C
// ??? sub_08068A24
// ??? sub_08068A38
// ??? sub_08068A68
// ??? sub_08068D24
// ??? sub_08068D2C
// ??? sub_08068D70
// ??? sub_08068DB4
// ??? sub_08068E24
// ??? sub_08068E40
// ??? sub_08068EA8
// ??? sub_08068EC4
// ??? sub_08068F28
// ??? sub_08068F74
// ??? sub_08068F8C
// ??? sub_080690A0
// ??? sub_080690F8
// ??? sub_08069118
// ??? nullsub_57
// ??? sub_08069180
// ??? sub_080691B8
// ??? sub_0806925C
// ??? sub_080692A0
// ??? CheckEkrLvupDone
// ??? EndEkrLevelUp
// ??? sub_08069314
// ??? sub_080696A0
// ??? sub_080696F8
// ??? sub_08069730
// ??? NewEkrLevelup
// ??? sub_080697C4
// ??? sub_08069830
// ??? sub_08069A84
// ??? sub_08069BB4
// ??? sub_08069BE4
// ??? sub_08069C28
// ??? sub_08069D50
// ??? sub_08069D7C
// ??? sub_08069DDC
// ??? sub_08069E64
// ??? sub_08069EB8
// ??? sub_08069F38
// ??? sub_08069F68
// ??? sub_0806A05C
// ??? sub_0806A08C
// ??? sub_0806A098
// ??? sub_0806A160
// ??? sub_0806A298
// ??? sub_0806A2D4
// ??? sub_0806A2EC
// ??? nullsub_58
// ??? sub_0806A364
// ??? sub_0806A370
// ??? nullsub_59
// ??? sub_0806A38C
// ??? sub_0806A414
// ??? sub_0806A4E0
// ??? sub_0806A4EC
// ??? sub_0806A4F8
// ??? sub_0806A584
// ??? sub_0806A5C0
// ??? sub_0806A610
// ??? sub_0806A658
// ??? sub_0806A6B0
// ??? sub_0806A6FC
// ??? sub_0806A740
// ??? sub_0806A7A0
// ??? sub_0806A7AC
// ??? sub_0806A7E0
// ??? sub_0806A844
// ??? sub_0806A880
// ??? sub_0806A888
// ??? sub_0806A8D8
// ??? sub_0806A93C
// ??? sub_0806A958
// ??? sub_0806A9C0
// ??? sub_0806AAA0
// ??? sub_0806ABB4
// ??? sub_0806AC24
// ??? sub_0806AC5C
// ??? sub_0806AC84
// ??? nullsub_10
// ??? sub_0806AC9C
// ??? sub_0806ACC0
// ??? sub_0806AEC4
// ??? sub_0806AEFC
// ??? sub_0806AFB4
// ??? sub_0806B040
// ??? sub_0806B088
// ??? sub_0806B134
// ??? sub_0806B15C
// ??? sub_0806B194
// ??? sub_0806B264
// ??? sub_0806B3E8
// ??? sub_0806B440
// ??? sub_0806B550
// ??? sub_0806B598
// ??? sub_0806B5C0
// ??? sub_0806B5F8
// ??? sub_0806B778
// ??? sub_0806B798
// ??? sub_0806B7DC
// ??? sub_0806B800
// ??? CheckEkrPopupDone
// ??? EndEkrPopup
// ??? EfxPlaySound5AVol100
// ??? sub_0806B88C
// ??? MakeBattlePopupTileMapFromTSA
// ??? DrawBattlePopup
// ??? NewEkrPopup
// ??? EkrPopup_Delay
// ??? EkrPopup_DrawWRankUp
// ??? ekrPopup_WaitWRankUp
// ??? ekrPopup_DrawWRankUp2
// ??? sub_0806BDE0
// ??? sub_0806BE18
// ??? sub_0806BE40
// ??? sub_0806BE78
// ??? sub_0806BEA0
// ??? sub_0806BEDC
// ??? nullsub_60
// ??? sub_0806BF10
// ??? sub_0806BF3C
// ??? sub_0806BF78
// ??? sub_0806BF94
// ??? sub_0806BFB8

struct EkrDragonStatus {

    /* 00 */ u16 type;
    /* 02 */ u16 attr;
    /* 04 */ ProcPtr proc;
    /* 08 */ u32 unk08;
    /* 0C */ struct Anim * anim;
};

enum dragonstatue_attr {
    /* EkrDragonStatus::attr */
    EKRDRGON_ATTR_START = 1 << 0,
    EKRDRGON_ATTR_BANIMFX_PREPARED = 1 << 1,
    EKRDRGON_ATTR_BANIMFINISH = 1 << 2,
    EKRDRGON_ATTR_END = 1 << 3,
    EKRDRGON_ATTR_DEAD = 1 << 12,
};

extern struct EkrDragonStatus gEkrDragonStatusLeft, gEkrDragonStatusRight;

void ResetEkrDragonStatus(void);
struct EkrDragonStatus * GetEkrDragonStatus(struct Anim * anim);
u16 GetEkrDragonStatusAttr(struct Anim * anim);
void AddEkrDragonStatusAttr(struct Anim * anim, u16 attr_bitfile);
u32 GetEkrDragonStatusType(struct Anim * anim);
u32 GetEkrDragonStatusType_(struct Anim * anim);
void AddEkrDragonStatusType(struct Anim * anim, u16 type_bitfile);
int CheckInEkrDragon(void);
void EkrDragonTmCpyHFlip(int x, int y);
void EkrDragonTmCpyExt(int x, int y);
void EkrDragonTmCpyWithDistance(void);
bool EkrDragonIntroDone(struct Anim * anim);
bool CheckEkrDragonEndingDone(struct Anim * anim);
void SetEkrDragonExit(struct Anim * anim);
void SetEkrDragonDead(struct Anim * anim);
bool CheckEkrDragonDead(struct Anim * anim);

struct ProcEkrDragonIntroFx {
    PROC_HEADER;

    /* 29 */ bool unk29;
    /* 2A */ u16 unk2A;
    /* 2C */ s16 timer;
    /* 2E */ s16 timer2;

    STRUCT_PAD(0x30, 0x32);

    /* 32 */ u16 x;
    /* 34 */ s16 x_hi;

    STRUCT_PAD(0x36, 0x3A);

    /* 3A */ s16 y;
    /* 3C */ s16 y_hi;

    STRUCT_PAD(0x3E, 0x44);

    /* 44 */ int duration;
    /* 48 */ int step;
    /* 4C */ int speed;
    /* 50 */ int unk50;
};

struct ProcEkrDragonFx {
    PROC_HEADER;

    /* 29 */ u8 done;
    /* 2A */ s16 unk2A;
    /* 2C */ s16 timer;
    /* 2E */ s16 step;
    /* 30 */ s16 unk30;
    /* 32 */ s16 x;

    STRUCT_PAD(0x34, 0x3A);

    /* 3A */ u16 y;
    /* 3C */ u16 y_hi;

    STRUCT_PAD(0x3E, 0x44);

    /* 44 */ u32 frame;
    /* 48 */ const s16 * conf;
    /* 4C */ u16 const * const * fx;
    /* 50 */ u32 unk50;
    /* 54 */ u32 round_cur;
    /* 58 */ u32 unk58;
    /* 5C */ struct Anim * anim;
    /* 60 */ struct Anim * anim2;
    /* 64 */ ProcPtr sprocfx;
};

struct ProcEkrDragon {
    PROC_HEADER;

    /* 29 */ u8 done;

    STRUCT_PAD(0x2A, 0x2C);

    /* 2C */ s16 timer;
    /* 2E */ s16 terminator;
    /* 30 */ s16 unk30;
    /* 32 */ s16 x; 

    STRUCT_PAD(0x34, 0x3A);

    /* 3A */ s16 y_lo;
    /* 3C */ s16 y_hi;

    STRUCT_PAD(0x3E, 0x44);

    /* 44 */ ProcPtr sproc_flashingobj;
    /* 48 */ ProcPtr sproc_bg2fx;
    /* 4C */ ProcPtr sproc_bg2scroll;
    /* 50 */ struct ProcEkrDragon * mainfxproc;
    /* 54 */ ProcPtr proc54;
    /* 58 */ ProcPtr sproc_bg2scrollhandle;
    /* 5C */ struct Anim * anim;
    /* 60 */ ProcPtr sproc1;
    /* 64 */ struct ProcEkrDragonIntroFx * procfx;
    /* 68 */ ProcPtr sproc_flashingbg;
};

extern struct ProcCmd CONST_DATA ProcScr_EkrDragon[];

void InitEkrDragonStatus(void);
void EkrDragonUpdateFlashingUnit(struct Anim * anim);
void EkrDragonUpdatePal_080654C8(struct Anim * anim);
// ??? EkrDragonUpdatePal_08065510
void NewEkrDragon(struct Anim * anim);
void EkrDragon_Preparefx(struct ProcEkrDragon * proc);
void EkrDragon_CustomBgFadeIn(struct ProcEkrDragon * proc);
void EkrDragon_080655A0(struct ProcEkrDragon * proc);
void EkrDragon_08065660(struct ProcEkrDragon * proc);
void EkrDragon_080656D8(struct ProcEkrDragon * proc);
void EkrDragon_0806574C(struct ProcEkrDragon * proc);
void EkrDragon_080657D4(struct ProcEkrDragon * proc);
void EkrDragon_080658F8(struct ProcEkrDragon * proc);
void EkrDragon_08065AB0(struct ProcEkrDragon * proc);
void EkrDragon_08065BA0(struct ProcEkrDragon * proc);
void EkrDragon_08065BC0(struct ProcEkrDragon * proc);
void EkrDragon_08065C14(struct ProcEkrDragon * proc);
void EkrDragon_08065C34(struct ProcEkrDragon * proc);
void EkrDragon_08065CC8(struct ProcEkrDragon * proc);
void EkrDragon_08065D20(struct ProcEkrDragon * proc);
void sub_08065D38(struct Anim * anim);
// ??? sub_08065D5C
// ??? sub_08065DC4
// ??? sub_08065DD0
// ??? sub_08065E38
// ??? sub_08065EA0
ProcPtr sub_08065EAC(struct Anim * anim);
// ??? sub_08065F0C
ProcPtr sub_08065F38(struct Anim * anim);
// ??? sub_08065F8C
// ??? sub_08065F98
// ??? sub_08065FEC
// ??? sub_08066030
// ??? sub_0806603C
// ??? sub_08066090
// ??? sub_0806609C
// ??? sub_080660C8
ProcPtr sub_080660F4(struct Anim * anim);
// ??? sub_08066118
ProcPtr sub_08066200(struct Anim * anim);
// ??? sub_08066224
ProcPtr sub_080662F4(struct Anim * anim);
// ??? nullsub_53
// ??? nullsub_54
ProcPtr sub_08066380(void);
// ??? sub_08066398
// ??? sub_080663EC
ProcPtr sub_08066414(struct Anim * anim);
// ??? sub_08066480
// ??? sub_0806648C
ProcPtr sub_080664CC(int, int, int, int);
// ??? sub_08066500
// ??? sub_08066590
void sub_080665B8(int, u16);
// ??? sub_08066634
// ??? sub_08066640
// ??? sub_080666A4
// ??? sub_080666D4
// ??? sub_08066804
// ??? sub_08066828
// ??? nullsub_55
// ??? sub_080668B8
// ??? sub_08066950
// ??? sub_080669A4
// ??? sub_080669E8
// ??? sub_08066AE0
// ??? nullsub_56
void sub_08066CAC(struct Anim * anim, int);
// ??? sub_08066D30
// ??? sub_08066D40
// ??? sub_08066DA0
// ??? sub_08066DD8
// ??? sub_08066F80
// ??? sub_08066FC0
// ??? sub_08067030
// ??? sub_08067088
// ??? sub_080670F8

extern u16 Pal_EkrDragon[0x10];
extern u16 Pal_EkrDragon_082E6C60[0x10];
extern u16 Pal_EkrDragon_082EB510[0x10];

extern int gEkrBg2ScrollFlip;
extern u16 * gpEkrLvupBg2ScrollOffsetStart;
extern u16 * gpEkrLvupBg2ScrollOffset;
extern u16 gpEkrLvupBg2ScrollOffsetTable1[];
extern u16 gpEkrLvupBg2ScrollOffsetTable2[];
extern int gEkrBg1ScrollFlip;
extern u16 * gpEkrLvupBg1ScrollOffsetStart;
extern u16 * gpEkrLvupBg1ScrollOffset;
extern u16 gpEkrLvupBg1ScrollOffsetList1[];
extern u16 gpEkrLvupBg1ScrollOffsetList2[];
void EkrDragonBgScroll_OnVBlank(void);
extern CONST_DATA struct ProcCmd ProcScr_EkrDragon_08C48804[];
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
extern s16 gUnk_08C4A008[];
extern CONST_DATA struct ProcCmd ProcScr_EkrDragon_08C4883C[];
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
ProcPtr NewEfxDragonDeadFallHeadFx(struct Anim * anim);
extern const u8 Tsa_EkrDragon_MainBg[];
void EkrDragonUpdatePal_08065510(int ref);
struct ProcEkrDragonBarkQuake {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x2C);

    /* 2C */ s16 timer, duration;

    STRUCT_PAD(0x30, 0x5C);

    /* 5C */ ProcPtr procfx;
    /* 60 */ ProcPtr procquake;
};
struct ProcEfxDrsmmoyaScroll {
    PROC_HEADER;

    STRUCT_PAD(0x29, 0x2C);

    /* 2C */ s16 timer;
    /* 2E */ s16 step;

    STRUCT_PAD(0x30, 0x44);

    /* 44 */ int duration;
    /* 48 */ int speed;

    STRUCT_PAD(0x4C, 0x5C);

    /* 5C */ struct Anim * anim;
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
extern u16 * gBanimTriAtkPalettes[2];
extern s16 gBanimUniquePaletteDisabled[2];



struct BattleAnim {
    char abbr[12];
    int * modes;
    char * script;
    char * oam_r;
    char * oam_l;
    u16 * pal;
};

extern struct BattleAnim banim_data[];

struct BattleAnimCharaPal {
    char abbr[12];
    u16 * pal;
};

extern struct BattleAnimCharaPal character_battle_animation_palette_table[];

struct BattleAnimTerrain {
    char abbr[12];
    char * tileset;
    u16 * palette;
    int null_1; // useless, always 00
};

extern struct BattleAnimTerrain battle_terrain_table[];

struct BanimModeData {
    const u32 * unk0;
    const u32 * img;
    u32 unk2;
};
void ApplyBanimUniquePalette(u32 * buf, int pos);
extern u16 * gpEfxUnitPaletteBackup[2];

u16 GetBattleAnimationId_WithUnique(struct Unit * unit, const void * pBattleAnimDef, u16, int * out);
s16 GetBattleAnimCharacterUniquePalIndex(struct Unit * unit, int index);

extern const u8 BanimDefaultModeConfig[ANIM_ROUND_MAX * 4];
extern const u8 BattleTypeToAnimModeEndOfDodge[5];
extern const u8 BanimTypesPosLeft[5];
extern const u8 BanimTypesPosRight[5];

struct AnimBuffer
{
    /* 00 */ u8 unk_00;
    /* 01 */ u8 genericPalId;
    /* 02 */ u16 xPos;
    /* 04 */ u16 yPos;
    /* 06 */ s16 animId;
    /* 08 */ s16 charPalId;
    /* 0A */ u16 roundType;
    /* 0C */ u16 state2;
    /* 0E */ u16 oam2Tile;
    /* 10 */ u16 oam2Pal;
    /* 14 */ struct Anim * anim1;
    /* 18 */ struct Anim * anim2;
    /* 1C */ void * pImgSheetBuf;
    /* 20 */ void * unk_20; // pal
    /* 24 */ void * unk_24; // rtlOam
    /* 28 */ void * unk_28; // frameData
    /* 2C */ const void * unk_2C; // sheetPointer
    /* 30 */ void * unk_30; // magicEffects
    /* 34 */ void * unk_34; // ProcPtr; Procs_ekrUnitMainMini
};
extern CONST_DATA u32 AnimScr_DefaultAnim[];

struct SpriteAnim {
    /* 00 */ u16 const * info;             // address of info
    /* 04 */ u16 const * sprites;          // address of sprite array
    /* 08 */ u16 const * script;           // address of script start (where we go back on loop)
    /* 0C */ u16 const * script_pc;        // address of script pc (where we are now)
    /* 10 */ u16 const * current_sprite;   // address of current sprite
    /* 14 */ u16 const * current_affine;   // address of current affine
    /* 18 */ s16 clock;                   // Cycle Timer
    /* 1A */ u16 clock_interval_q8;       // Cycle Time Step
    /* 1C */ u16 clock_decimal_q8;        // Sub frame time offset or something
    /* 1E */ u16 layer;                   // sprite layer
    /* 20 */ u8 need_sync_img_b;          // bool defining whether gfx needs update
    /* 21 */ u8 affine_slot;              // Rotation/Scale OAM Index
    /* 22 */ u16 oam2;                    // OAM Extra Data (Tile Index Root & OAM2 Stuff)
    /* 24 */ u8 const * img;               // address of graphics (if any)
};

#define ANIM_COUNT 20

struct ProcSpriteAnim {
    /* 00 */ PROC_HEADER;

    /* 29 */ u8 pad_29[0x50 - 0x29];

    /* 50 */ struct SpriteAnim * anim;
    /* 54 */ int x, y;
};

#define RESOLVE_REFTABLE(table, id) ((table) + ((table)[id] >> 1))

void InitSpriteAnims(void);
struct SpriteAnim * StartSpriteAnim(u16 const * info, u16 layer);
void EndSpriteAnim(struct SpriteAnim * anim);
bool DisplaySpriteAnim(struct SpriteAnim * anim, int x, int y);
void SetSpriteAnimId(struct SpriteAnim * anim, int id);
void SetSpriteAnimInfo(struct SpriteAnim * anim, u16 const * info);
struct SpriteAnim * FindSpriteAnim(u16 const * info);
ProcPtr StartSpriteAnimProc(u16 const * info, int x, int y, int oam2, int animid, int layer); // APProc_Create
void AnimProc_Update(struct ProcSpriteAnim * proc);
void AnimProc_OnEnd(struct ProcSpriteAnim * proc);
void SetSpriteAnimProcParameters(ProcPtr proc, int x, int y, int oam2);
void EndSpriteAnimProc(ProcPtr proc);
void EndEachSpriteAnimProc(void);
bool SpriteAnimProcExists(void);

#define ResetSpriteAnimClock(anim) \
    (anim)->clock = 0; \
    (anim)->clock_interval_q8 = 0x100

#define FreezeSpriteAnim(anim) \
    (anim)->clock = 0; \
    (anim)->clock_interval_q8 = 0

extern struct ProcCmd ProcScr_SpriteAnimProc[];

struct BmSt {
    /* 00 */ bool main_loop_ended;
    /* 01 */ s8 lock;
    /* 02 */ s8 lock_display;
    /* 03 */ u8 pad_03;
    /* 04 */ u8 flags;
    /* 05 */ // pad
    /* 06 */ u16 main_loop_end_scanline;
    /* 08 */ int pad_08;
    /* 0C */ struct Vec2 camera;
    /* 10 */ struct Vec2 camera_previous;
    /* 14 */ struct Vec2 cursor;
    /* 18 */ struct Vec2 cursor_previous;
    /* 1C */ struct Vec2 cursor_sprite_target;
    /* 20 */ struct Vec2 cursor_sprite;
    /* 24 */ struct Vec2 map_render_anchor;
    /* 28 */ struct Vec2 camera_max;
    /* 2C */ u16 inventory_item_overflow;
    /* 2E */ u16 convoy_item_overflow;
    /* 30 */ bool8 unk_30;
    /* 31 */ bool8 unk_31;
    /* 32 */ short unk_32;
    /* 34 */ short unk_34;
    /* 36 */ s8 unk_36;
    /* 37 */ s8 unk_37;
    /* 38 */ u8 alt_blend_a_ca;
    /* 39 */ u8 alt_blend_a_cb;
    /* 3A */ u8 alt_blend_b_ca;
    /* 3B */ u8 alt_blend_b_cb;
    /* 3C */ u8 just_resumed;
    /* 3D */ u8 partial_actions_taken;
    /* 3E */ u8 swap_action_range_count;
    /* 3F */ s8 unk_3F;
};

extern struct BmSt gBmSt;

enum BmSt_gameStateBits {
    BM_FLAG_0 = (1 << 0),
    BM_FLAG_1 = (1 << 1),
    BM_FLAG_2 = (1 << 2),
    BM_FLAG_3 = (1 << 3),
    BM_FLAG_4 = (1 << 4),
    BM_FLAG_5 = (1 << 5),
    BM_FLAG_LINKARENA = (1 << 6),
};

struct PlaySt {
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

    /* 20 */ char playerName[0x2B - 0x20];
    /* 2B */ u8 unk_2B_00 : 0x01;
             u8 unk_2B_01 : 0x03;
             u8 unk_2B_04 : 0x04;

    u32 unk2C_00 : 0x04;
    u32 unk2C_11 : 0x09;
    u32 unk2C_0D : 0x13;

    /* 30 */ int total_gold;
    /* 34 */ u32 unk_34_00 : 0x14;
             u32 unk_34_14 : 0x0C;

    u32 unk_38_1:8;
    u32 unk_38_2:20; // Used by bmdifficulty (Valni/Lagdou)
    u32 unk_38_3:4;

    /* 3C */ u32 unk_3C_00 : 6;
    /* 3C */ u32 combatRank : 3;
    /* 3D */ u32 expRank : 3;
    /* 3D */ u32 unk_3D_04 : 3;
    /* 3D */ u32 fundsRank : 3;
    /* 3E */ u32 tacticsRank : 3;
    /* 3E */ u32 survivalRank : 3;
    /* 3F */ u32 unk_3F_00 : 8;

    // option bits
    u32 cfgUnitColor:1; // 1
    u32 cfgDisableTerrainDisplay:1; // 1
    u32 cfgUnitDisplayType:2; // 2
    u32 cfgAutoCursor:1; // 1
    u32 cfgTextSpeed:2;
    u32 cfgGameSpeed:1; // 1
    u32 cfgDisableBgm:1; // 1
    u32 cfgDisableSoundEffects:1; // 1
    u32 config_window_theme:2;
    u32 unk41_5:1; // 1
    u32 unk41_6:1; // unk
    u32 cfgDisableAutoEndTurns:1; // 1
    u32 cfgNoSubtitleHelp:1; // 1
    u32 cfgDisableGoalDisplay:1; // unk
    u32 cfgAnimationType:2; // 2
    u32 cfgBattleForecastType:2; // 2
    u32 cfgController:1; // 1
    u32 cfgRankDisplay:1; // unk
    u32 debugControlRed:2; // 2 (!)
    u32 debugControlGreen:2; // 2
    u32 unk43_4:5; // unk
    u8  unk44[0x48 - 0x44];
    u16 unk48;
    u8 unk4A_1 : 1;
    u8 unk4A_2 : 3;
    u8 unk4A_5 : 4;
    u8 unk4B;
};

extern struct PlaySt gPlaySt;

enum PlaySt_chapterStateBits {
    PLAY_FLAG_STATSCREENPAGE0 = (1 << 0),
    PLAY_FLAG_STATSCREENPAGE1 = (1 << 1),
    PLAY_FLAG_POSTGAME        = (1 << 2),
    PLAY_FLAG_TUTORIAL        = (1 << 3),
    PLAY_FLAG_PREPSCREEN      = (1 << 4),
    PLAY_FLAG_COMPLETE        = (1 << 5),
    PLAY_FLAG_HARD            = (1 << 6),
    PLAY_FLAG_EXTRA_MAP       = (1 << 7),

    PLAY_FLAG_STATSCREENPAGE_SHIFT = 0,
    PLAY_FLAG_STATSCREENPAGE_MASK = PLAY_FLAG_STATSCREENPAGE0 | PLAY_FLAG_STATSCREENPAGE1,
};

enum PlaySt_Weather {
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

struct UnkSprite {
    /* 00 */ int oam01;
    /* 02 */ u16 oam2;
    /* 04 */ short x;
    /* 06 */ short y;
};

struct OamSection {
    u16 *buf;
    void *oam;
    u16 offset;
    u16 count;
};

struct OamView { u16 oam0, oam1, oam2, aff; };

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
void PutUnkSprite(struct UnkSprite * sprites, int xBase, int yBase);

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
#define OAM2_LAYER_MASK     0xC000
#define OAM2_PAL(ap)        (((ap) & 0xF) * 0x1000)
#define OAM2_PAL_MASK       0xF000

#define SetObjAffineAuto(id, angle, xScale, yScale) \
    SetObjAffine(id, \
        Div(+COS_Q12(angle) << 4, xScale), \
        Div(-SIN_Q12(angle) << 4, yScale), \
        Div(+SIN_Q12(angle) << 4, xScale), \
        Div(+COS_Q12(angle) << 4, yScale))

// GetCurrentBgmSong
// sub_80033D0
// sub_80033EC
// SetBgmVolume
// FadeBgmOut
// sub_8003550
void Sound_FadeOutSE(int speed);
// sub_8003684
// sub_80036F0
// sub_800376C
// sub_8003788
// sub_80037A8
// sub_8003858
void OverrideBgm(int song);
// RestoreBgm
// sub_8003A68
// MakeBgmOverridePersist
// StartBgmVolumeChange
// MusicVc_OnLoop
// DelaySong_OnLoop
// sub_8003D7C
// PlaySongCore
// sub_8003E48
// sub_8003E68
// sub_8003E9C
// sub_8003F04
// sub_8003F28
// sub_8003F94
// CallSomeSoundMaybe
// MusicProc4Exists
// sub_80040C0
// sub_80040F8
// sub_8004110
void m4aSongNumStart(u16 n);
#define PlaySoundEffect(id) \
    if (!gPlaySt.cfgDisableSoundEffects) \
        m4aSongNumStart((id))

struct ProcEventDragonsSpritefx {
    PROC_HEADER;

    /* 2C */ ProcPtr approc[3];
    /* 38 */ s16 x_1[3];
    /* 3E */ s16 y_1[3];
    /* 44 */ s16 x_2[3];
    /* 4A */ s16 y_2[3];
    /* 50 */ s16 unk50[3];
    /* 56 */ s16 unk56[3];
    /* 5C */ u16 unk5C[3];
    /* 62 */ u8 unk62[3];

    STRUCT_PAD(0x65, 0x6A);

    /* 6A */ u8 unk6A;
    /* 6B */ u8 unk6B;
};
