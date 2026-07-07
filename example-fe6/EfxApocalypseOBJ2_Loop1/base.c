#include "include.h"

extern CONST_DATA AnimScr AnimScr_EfxApocalypseOBJ2_2[];
extern u16 Img_EfxApocalypseOBJ2_2[];

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

void EfxApocalypseOBJ2_Loop1(struct ProcEfxApocalypseOBJ2 *proc)
{
	struct Anim *anim2 = proc->anim2;

	proc->timer++;

	if (proc->timer > proc->phase1_duration) {
		proc->timer = 0;
		anim2->script = AnimScr_EfxApocalypseOBJ2_2;
		anim2->scrCur = AnimScr_EfxApocalypseOBJ2_2;
		anim2->timer = 0;
		SpellFx_RegisterObjGfx(Img_EfxApocalypseOBJ2_2, 0x1000);
		Proc_Break(proc);
	}
}
