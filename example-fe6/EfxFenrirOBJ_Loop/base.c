#include "include.h"

void EfxFenrirOBJ_Loop(struct ProcEfxOBJ *proc)
{
	proc->timer++;

	if (proc->timer > proc->terminator) {
		gEfxBgSemaphore--;
		BasRemove(proc->anim2);
		Proc_Break(proc);
	}
}
