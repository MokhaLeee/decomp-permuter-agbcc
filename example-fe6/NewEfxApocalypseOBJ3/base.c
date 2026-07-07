#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxApocalypseOBJ3[];

struct ProcEfxApocalypseOBJ3 {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x2C);
	/* 2C */ i16 timer;
	/* 2E */ i16 duration;
	/* 30 */ i16 phase_counter;
	STRUCT_PAD(0x32, 0x44);
	/* 44 */ int spawn_threshold;
	/* 48 */ int unk48;
	/* 4C */ int rnd_index;
	STRUCT_PAD(0x50, 0x5C);
	/* 5C */ struct Anim *anim;
};

void NewEfxApocalypseOBJ3(struct Anim *anim, int duration)
{
	struct ProcEfxApocalypseOBJ3 *proc;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxApocalypseOBJ3, PROC_TREE_3);
	proc->anim = anim;
	proc->timer = 0;
	proc->duration = duration;
	proc->phase_counter = 0;
	proc->spawn_threshold = 1;
	proc->unk48 = 0;
	proc->rnd_index = 0;
}
