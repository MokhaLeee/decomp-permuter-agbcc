#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxApocalypseOBJ2[];
extern CONST_DATA AnimScr AnimScr_EfxApocalypseOBJ2_1[];
extern u16 Pal_EfxMistyrainOBJ1[];
extern u16 Img_EfxApocalypseOBJ2_1[];

struct ProcEfxApocalypseOBJ2 {
	PROC_HEADER;

	STRUCT_PAD(0x29, 0x2C);
	/* 2C */ i16 timer;
	/* 2E */ i16 phase1_duration;
	/* 30 */ i16 phase2_duration;
	STRUCT_PAD(0x32, 0x5C);
	/* 5C */ struct Anim *anim;
	/* 60 */ struct Anim *anim2;
};

void NewEfxApocalypseOBJ2(struct Anim *anim, int duration1, int duration2)
{
	struct ProcEfxApocalypseOBJ2 *proc;
	struct Anim *anim2;
	const AnimScr *scr;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxApocalypseOBJ2, PROC_TREE_3);
	proc->anim = anim;
	proc->timer = 0;
	proc->phase1_duration = duration1;
	proc->phase2_duration = duration2;

	scr = AnimScr_EfxApocalypseOBJ2_1;
	anim2 = EfxCreateFrontAnim(anim, scr, scr, scr, scr);
	proc->anim2 = anim2;
	anim2->xPosition = 0x78;
	anim2->yPosition = 0x48;
	anim2->priority = 0x14;
	BasSort();

	if (GetEkrDragonStateType() != 0)
		anim2->oam2 = (anim2->oam2 & ~OAM2_LAYER_MASK) | OAM2_LAYER(3);

	SpellFx_RegisterObjPal(Pal_EfxMistyrainOBJ1, 0x20);
	SpellFx_RegisterObjGfx(Img_EfxApocalypseOBJ2_1, 0x1000);
}
