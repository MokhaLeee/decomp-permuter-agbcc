#include "include.h"

struct ProcEfxApocalypseOBJ2 {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x2C);
	/* 2C */ i16 timer;
	/* 2E */ i16 phase1_duration;
	/* 30 */ i16 phase2_duration;
	STRUCT_PAD(0x32, 0x5C);
	/* 5C */ struct Anim *anim;
	/* 60 */ struct Anim *anim2;
};

void EfxApocalypseOBJ2_Loop2(struct ProcEfxApocalypseOBJ2 *proc)
{
    proc->timer++;

	if (proc->timer > proc->phase2_duration) {
		BasRemove(proc->anim2);
		gEfxBgSemaphore--;
		Proc_Break(proc);
	}
}
