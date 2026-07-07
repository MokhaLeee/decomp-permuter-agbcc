#include "include.h"

void EfxApocalypseBG2_Loop(struct ProcEfxBG *proc)
{
	struct Anim *anim_other;
	int ret;

	anim_other = GetAnimAnotherSide(proc->anim);

	ret = EfxAdvanceFrameLut((i16 *)&proc->timer, (i16 *)&proc->frame,
				 proc->frame_config);

	if (ret >= 0) {
		u16 **tsal = proc->tsal;
		u16 **tsar = proc->tsar;
		u16 **img = proc->img;

		SpellFx_RegisterBgGfx(*(img + ret), 0x2000);
		SpellFx_WriteBgMap(proc->anim, *(tsal + ret), *(tsar + ret));
	}

	proc->terminator++;

	if (proc->terminator != proc->unk30)
		return;

	if (GetEkrDragonStateType() != 0) {
		gDispIo.bg0_ct.priority = 0;
		gDispIo.bg1_ct.priority = 1;
		gDispIo.bg3_ct.priority = 2;
		gDispIo.bg2_ct.priority = 3;

		proc->anim->oam2 &= ~OAM2_LAYER_MASK;
		proc->anim->oam2 |= OAM2_LAYER(2);
		anim_other->oam2 = (anim_other->oam2 & ~OAM2_LAYER_MASK) | OAM2_LAYER(2);
	}

	SpellFx_ClearBG1();
	gEfxBgSemaphore--;
	SpellFx_ClearColorEffects();
	Proc_End(proc);
}
