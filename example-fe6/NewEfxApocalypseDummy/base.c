#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxApocalypseDummy[];

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

void NewEfxApocalypseDummy(struct Anim *anim, ProcPtr efxproc, int duration)
{
	struct ProcEfxApocalypseDummy *proc;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxApocalypseDummy, PROC_TREE_3);
	proc->anim = anim;
	proc->timer = 0;
	proc->duration = duration;
	proc->efxproc = efxproc;
}
