#include "include.h"

struct ProcEfxOBJ {
    /* 00 */ PROC_HEADER;
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
    /* 5C */ struct BaSprite *anim;
    /* 60 */ struct BaSprite *anim2;
    /* 64 */ struct BaSprite *anim3;
    /* 68 */ struct BaSprite *anim4;
};

void EfxApocalypseOBJ_Loop2(struct ProcEfxOBJ *proc)
{
    struct BaSprite *sprite = proc->anim2;
    int interp = Interpolate(0, 0xB4, 0x32, proc->timer, 0x3C);
    unsigned angle = proc->unk30 + 0x300;

    proc->unk30 = angle;

    sprite->xPosition = proc->unk32 + ((interp * gSinLut[angle >> 8] * 0x10) >> 16);
    sprite->yPosition = proc->unk3A + ((interp * gSinLut[(angle >> 8) + 0x40] * 0x10) >> 16);

    proc->timer++;
    if (proc->timer > 0x3C)
        proc->timer = 0x3C;

    proc->terminator++;
    if (proc->terminator > 0x78) {
        proc->timer = 0;
        proc->terminator = 0;
        Proc_Break(proc);
    }
}
