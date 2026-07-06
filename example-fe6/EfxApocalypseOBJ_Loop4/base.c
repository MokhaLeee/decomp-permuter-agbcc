#include "include.h"

void EfxApocalypseOBJ_Loop4(struct ProcEfxOBJ *proc)
{
	struct BaSprite *anim2 = proc->anim2;
	register i16 cap asm("r6");
	i16 interp;
	int timer;
	unsigned oldAngle;
	register unsigned angle asm("r1");
	register unsigned index asm("r2");
	i16 xSin;
	i16 ySin;
	int x;
	int y;
	int xPos;
	int yPos;

	timer = proc->timer;
	cap = 0x32;
	interp = Interpolate(1, 0, 0xB4, timer, cap);

	oldAngle = proc->unk30;
	angle = oldAngle + 0x800;
	proc->unk30 = angle;
	index = angle >> 8;
	xSin = gSinLut[index];
	ySin = gSinLut[index + 0x40];
	x = (xSin * (i16)interp) << 4;
	y = ((i16)interp * ySin) << 4;
	xPos = proc->unk32 + (x >> 16);
	yPos = proc->unk3A + (y >> 16);
	anim2->xPosition = xPos;
	anim2->yPosition = yPos;

	proc->timer++;

	if (proc->timer > 0x32)
		proc->timer = cap;

	proc->terminator++;

	if (proc->terminator > 0x32) {
		gEfxBgSemaphore--;
		BasRemove(proc->anim2);
		Proc_Break(proc);
	}
}
