#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxApocalypseBgFlash2[];

void NewEfxApocalypseBgFlash2(struct Anim *anim, int terminator, int duration)
{
	struct ProcEfxFlashing *proc;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxApocalypseBgFlash2, PROC_TREE_3);
	proc->timer = 0;
	proc->terminator = terminator;
	proc->terminator2 = duration;
	proc->anim = anim;
}
