#include "include.h"

void EfxFenrirBGCOL_Loop(struct ProcEfxBGCOL *proc)
{
	int ret;
	const u16 *pal;

	ret = EfxAdvanceFrameLut((i16 *)&proc->timer, (i16 *)&proc->frame,
				 proc->frame_config);

	if (ret >= 0) {
		pal = proc->pal;
		SpellFx_RegisterBgPal(pal + ret * 0x10, 0x20);
	}

	proc->timer2++;

	if (proc->timer2 > proc->terminator)
		Proc_Break(proc);
}
