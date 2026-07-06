#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxApocalypseBGCOL2[];
extern u16 const FrameArray_EfxApocalypseBGCOL2[];
extern u16 Pals_EfxApocalypseBGCOL2[];

void NewEfxApocalypseBGCOL2(struct Anim *anim, int duration)
{
	struct ProcEfxBGCOL *proc;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxApocalypseBGCOL2, PROC_TREE_3);
	proc->anim = anim;
	proc->timer = 0;
	proc->timer2 = 0;
	proc->terminator = duration;
	proc->frame = 0;
	proc->frame_config = FrameArray_EfxApocalypseBGCOL2;
	proc->pal = Pals_EfxApocalypseBGCOL2;
}
