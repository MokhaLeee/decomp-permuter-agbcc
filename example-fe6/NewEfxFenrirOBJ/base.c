#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxFenrirOBJ[];
extern u32 AnimScr_EfxFenrirOBJ[];
extern u16 Pal_EfxFenrirOBJ[];
extern u16 Img_EfxFenrirOBJ[];

void NewEfxFenrirOBJ(struct Anim *anim, int duration)
{
	struct ProcEfxOBJ *proc;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxFenrirOBJ, PROC_TREE_3);
	proc->anim = anim;
	proc->timer = 0;
	proc->terminator = duration;
	proc->anim2 = EfxCreateFrontAnim(anim, AnimScr_EfxFenrirOBJ,
					 AnimScr_EfxFenrirOBJ,
					 AnimScr_EfxFenrirOBJ,
					 AnimScr_EfxFenrirOBJ);

	SpellFx_RegisterObjPal(Pal_EfxFenrirOBJ, 0x20);
	SpellFx_RegisterObjGfx(Img_EfxFenrirOBJ, 32 * 4 * CHR_SIZE);
}
