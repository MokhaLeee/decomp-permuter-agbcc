#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxFenrirBGCOL[];
extern u16 const FrameArray_EfxFenrirBGCOL[];
extern u16 Pal_EfxFenrirBGCOL[];

void NewEfxFenrirBGCOL(struct Anim *anim, int duration)
{
	struct ProcEfxBGCOL *proc;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxFenrirBGCOL, PROC_TREE_3);
	proc->anim = anim;
	proc->timer = 0;
	proc->timer2 = 0;
	proc->terminator = duration;
	proc->frame = 0;
	proc->frame_config = FrameArray_EfxFenrirBGCOL;
	proc->pal = Pal_EfxFenrirBGCOL;

	SpellFx_RegisterBgPal(Pal_EfxFenrirBGCOL, 0x20);
}
