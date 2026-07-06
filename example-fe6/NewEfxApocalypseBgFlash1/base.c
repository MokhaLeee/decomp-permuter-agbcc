#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxApocalypseBgFlash1[];

void NewEfxApocalypseBgFlash1(struct Anim *anim, int terminator, int duration)
{
	struct ProcEfxFlashing *proc;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxApocalypseBgFlash1, PROC_TREE_3);
	proc->timer = 0;
	proc->terminator = terminator;
	proc->terminator2 = duration;
	proc->anim = anim;
}
