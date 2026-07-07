#include "include.h"

extern int DuraArray_EfxApocalypseOBJ3RND[];
extern int LoArray_EfxApocalypseOBJ3RND[];
extern int StateArray_EfxApocalypseOBJ3RND[];

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

void NewEfxApocalypseOBJ3RND(struct Anim *anim, int duration, int lo, int state);

void EfxApocalypseOBJ3_Loop(struct ProcEfxApocalypseOBJ3 *proc)
{
	register int *dura_arr asm("r3");
	int idx;
	int dura;
	int lo;
	int state;

	proc->timer++;

	if (proc->timer == proc->duration) {
		gEfxBgSemaphore--;
		Proc_Break(proc);
		return;
	}

	if (++proc->phase_counter != proc->spawn_threshold)
		return;

	proc->phase_counter = 0;
	proc->spawn_threshold = 2;

	dura_arr = DuraArray_EfxApocalypseOBJ3RND;
	idx = proc->rnd_index;
	dura = dura_arr[idx];
	lo = LoArray_EfxApocalypseOBJ3RND[idx];
	state = StateArray_EfxApocalypseOBJ3RND[idx];
	proc->rnd_index = idx + 1;

	if (dura_arr[proc->rnd_index] == -1)
		proc->rnd_index = 0;

	NewEfxApocalypseOBJ3RND(proc->anim, dura, lo, state);
}
