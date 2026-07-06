#include "include.h"

void func_fe6_08047B6C(const u16 *src, u16 *dst, u32 a, u32 b, u32 c);

void EfxApocalypseBGCOL2_Loop(struct ProcEfxBGCOL *proc)
{
	int ret;

	ret = EfxAdvanceFrameLut((i16 *)&proc->timer, (i16 *)&proc->frame,
				 proc->frame_config);

	if (ret >= 0)
		func_fe6_08047B6C(proc->pal, (u16 *)((char *)gPal + 2), ret, 0xf, 0xf);

	proc->timer2++;

	if (proc->timer2 > proc->terminator) {
		gEfxBgSemaphore--;
		Proc_Break(proc);
	}
}
