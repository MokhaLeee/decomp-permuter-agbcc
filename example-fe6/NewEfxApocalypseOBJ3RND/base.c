#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxApocalypseOBJ3RND[];
extern CONST_DATA AnimScr AnimScr_EfxApocalypseOBJ3RND_1[];
extern CONST_DATA AnimScr AnimScr_EfxApocalypseOBJ3RND_2[];
extern CONST_DATA AnimScr AnimScr_EfxApocalypseOBJ3RND_3[];

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

void NewEfxApocalypseOBJ3RND(struct Anim *anim, int duration, int lo, u32 state)
{
	struct ProcEfxApocalypseOBJ3RND *proc;
	const AnimScr *scr;
	struct Anim *anim2;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxApocalypseOBJ3RND, PROC_TREE_3);
	proc->anim = anim;
	proc->timer = 0;
	proc->duration = duration;
	proc->lo = lo;
	proc->angle = lo + (duration << 11);
	proc->x_center = 0x78;
	proc->y_center = 0x48;

	switch (state) {
	case 0:
		scr = AnimScr_EfxApocalypseOBJ3RND_3;
		break;
	case 1:
		scr = AnimScr_EfxApocalypseOBJ3RND_3;
		break;
	case 2:
		scr = AnimScr_EfxApocalypseOBJ3RND_3;
		break;
	case 3:
		scr = AnimScr_EfxApocalypseOBJ3RND_3;
		break;
	case 4:
		scr = AnimScr_EfxApocalypseOBJ3RND_3;
		break;
	case 5:
		scr = AnimScr_EfxApocalypseOBJ3RND_2;
		break;
	case 6:
		scr = AnimScr_EfxApocalypseOBJ3RND_1;
		break;
	default:
		scr = AnimScr_EfxApocalypseOBJ3RND_1;
		break;
	}

	anim2 = EfxCreateFrontAnim(anim, scr, scr, scr, scr);
	proc->anim2 = anim2;
	anim2->xPosition = 0x100;
	anim2->yPosition = 0x100;

	if (GetEkrDragonStateType() != 0)
		anim2->oam2 = (anim2->oam2 & 0xF3FF) | 0x400;
}
