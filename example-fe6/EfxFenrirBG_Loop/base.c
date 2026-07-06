#include "include.h"

void EfxFenrirBG_Loop(struct ProcEfxBG *proc)
{
	gDispIo.bg_off[BG_1].y++;
	gDispIo.bg_off[BG_1].x--;

	proc->timer++;

	if (proc->timer > proc->terminator)
		Proc_Break(proc);
}
