#include "include.h"

void EfxFenrirBG2_Loop(struct ProcEfxBG *proc)
{
	int ret;
	u16 **tsal;
	u16 **tsar;

	ret = EfxAdvanceFrameLut((i16 *)&proc->timer, (i16 *)&proc->frame, proc->frame_config);

	if (ret >= 0) {
		tsal = proc->tsal;
		tsar = proc->tsar;

		SpellFx_RegisterBgGfx(proc->img[ret], 32 * 8 * CHR_SIZE);
		SpellFx_WriteBgMap(proc->anim, tsal[ret], tsar[ret]);

		if (gEkrDistanceType != 0) {
			if (GetAnimPosition(proc->anim) == 0)
				FillBGRect(gBg1Tm, 3, 0x14, 0, 0);
			else
				FillBGRect(gBg1Tm + TM_OFFSET(29, 0), 3, 0x14, 0, 0);

			EnableBgSync(2);
		}
	} else if (ret == -1) {
		SpellFx_ClearBG1();
		gEfxBgSemaphore--;
		SpellFx_ClearColorEffects();
		Proc_Break(proc);
	}
}
