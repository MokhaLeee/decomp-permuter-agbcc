#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxApocalypseBG2[];
extern u16 const FrameArray_EfxApocalypseBG2[];
extern CONST_DATA u16 *TsaArray_EfxApocalypseBG2[];
extern CONST_DATA u16 *ImgArray_EfxApocalypseBG2[];
extern u16 Pal_EfxApocalypseBG2[];

void NewEfxApocalypseBG2(struct Anim *anim, int duration)
{
	struct ProcEfxBG *proc;
	struct Anim *anim_other;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxApocalypseBG2, PROC_TREE_3);
	proc->anim = anim;
	proc->timer = 0;
	proc->terminator = 0;
	proc->unk30 = duration;
	proc->frame = 0;
	proc->frame_config = FrameArray_EfxApocalypseBG2;
	proc->tsal = TsaArray_EfxApocalypseBG2;
	proc->tsar = TsaArray_EfxApocalypseBG2;
	proc->img = ImgArray_EfxApocalypseBG2;

	SpellFx_RegisterBgPal(Pal_EfxApocalypseBG2, 0x20);
	SpellFx_SetSomeColorEffect();
	SetBgOffset(BG_1, 0, 0);

	if (GetEkrDragonStateType() != 0) {
		anim_other = GetAnimAnotherSide(proc->anim);

		gDispIo.bg0_ct.priority = 0;
		gDispIo.bg3_ct.priority = 1;
		gDispIo.bg1_ct.priority = 2;
		gDispIo.bg2_ct.priority = 3;

		anim->oam2 = (anim->oam2 & ~OAM2_LAYER_MASK) | OAM2_LAYER(1);
		anim_other->oam2 = (anim_other->oam2 & ~OAM2_LAYER_MASK) | OAM2_LAYER(1);
	}
}
