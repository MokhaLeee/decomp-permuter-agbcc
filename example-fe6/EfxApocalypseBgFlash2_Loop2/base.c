#include "include.h"

extern u16 Pal_EfxApocalypse_0817B418[];

void EfxPalWhiteInOut(u16 *pal_buf, int line, int length, int ref);

void EfxApocalypseBgFlash2_Loop2(struct ProcEfxFlashing *proc)
{
	int ret;

	ret = Interpolate(0, 0, 0x10, proc->timer, proc->terminator2);

	SpellFx_RegisterBgPal(Pal_EfxApocalypse_0817B418, 0x20);
	EfxPalWhiteInOut(gPal, 1, 1, ret);

	proc->timer++;

	if (proc->timer > proc->terminator2) {
		gEfxBgSemaphore--;
		Proc_Break(proc);
	}
}
