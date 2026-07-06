#include "include.h"

void EfxApocalypseBgFlash2_Loop1(struct ProcEfxFlashing *proc)
{
	proc->timer++;

	if (proc->timer > proc->terminator) {
		proc->timer = 0;
		Proc_Break(proc);
	}
}
