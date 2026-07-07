#include "include.h"

struct ProcEfxApocalypseOBJ3RND {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x2C);
	/* 2C */ i16 timer;
	/* 2E */ i16 duration;
	STRUCT_PAD(0x30, 0x32);
	/* 32 */ i16 x_center;
	STRUCT_PAD(0x34, 0x3A);
	/* 3A */ i16 y_center;
	STRUCT_PAD(0x3C, 0x44);
	/* 44 */ int lo;
	/* 48 */ int angle;
	STRUCT_PAD(0x4C, 0x5C);
	/* 5C */ struct Anim *anim;
	/* 60 */ struct Anim *anim2;
};

void EfxApocalypseOBJ3RND_Loop(struct ProcEfxApocalypseOBJ3RND *proc)
{
	struct Anim *anim2 = proc->anim2;
	i16 radius;
	u8 angle_idx;
	i16 x_sin;
	i16 y_sin;
	int x;
	int y;

	radius = Interpolate(INTERPOLATE_SQUARE, 0x6E, 0,
			     proc->timer, proc->duration);

	angle_idx = (Interpolate(INTERPOLATE_SQUARE, proc->lo, proc->angle,
				 proc->timer, proc->duration) << 16) >> 24;

	x_sin = SIN_Q12(angle_idx);
	y_sin = COS_Q12(angle_idx);
	x = (x_sin * radius) << 4;
	y = (y_sin * radius) << 4;

	{
		i16 x_pos = proc->x_center + (x >> 16);
		i16 y_pos = proc->y_center + (y >> 16);

		anim2->xPosition = x_pos;
		anim2->yPosition = y_pos;
	}

	proc->timer++;

	if (proc->timer > proc->duration) {
		BasRemove(proc->anim2);
		gEfxBgSemaphore--;
		Proc_Break(proc);
	}
}
