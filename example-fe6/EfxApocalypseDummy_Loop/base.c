#include "include.h"

struct ProcEfxApocalypseDummy {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x2C);
	/* 2C */ i16 timer;
	/* 2E */ i16 duration;
	STRUCT_PAD(0x30, 0x5C);
	/* 5C */ struct BaSprite *anim;
	STRUCT_PAD(0x60, 0x64);
	/* 64 */ ProcPtr efxproc;
};

void EfxApocalypseDummy_Loop(struct ProcEfxApocalypseDummy *proc)
{
	struct ProcEfx *efxproc = proc->efxproc;

	efxproc->frame = Interpolate(4, 0x80, 0, proc->timer, proc->duration);

	proc->timer++;

	if (proc->timer > proc->duration) {
		gEfxBgSemaphore--;
		Proc_Break(proc);
	}
}
