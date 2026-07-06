#include "include.h"

void EfxApocalypseOBJ_Loop3(struct ProcEfxOBJ *proc)
{
	struct BaSprite *anim2 = proc->anim2;
	int zero;
	i16 interp = Interpolate(0, 0x32, 0, proc->timer, 0x50);
	unsigned oldAngle = proc->unk30;
	register unsigned angle asm("r1") = oldAngle + 0x300;
	register unsigned index asm("r2");
	i16 xSin;
	i16 ySin;
	int x;
	int y;
	int xPos;
	int yPos;

	zero = 0;
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

	if (proc->timer > 0x50)
		proc->timer = 0x50;

	proc->terminator++;

	if (proc->terminator > 0x50) {
		proc->timer = zero;
		proc->terminator = zero;
		Proc_Break(proc);
	}
}
