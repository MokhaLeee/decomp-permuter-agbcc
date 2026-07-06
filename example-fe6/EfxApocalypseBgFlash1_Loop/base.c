#include "include.h"

void NewEfxFlashBgWhite(struct Anim *anim, int duration);

void EfxApocalypseBgFlash1_Loop(struct ProcEfxFlashing *proc)
{
	proc->timer++;

	if (proc->timer > proc->terminator) {
		gEfxBgSemaphore--;
		NewEfxFlashBgWhite(proc->anim, proc->terminator2);
		Proc_Break(proc);
	}
}
