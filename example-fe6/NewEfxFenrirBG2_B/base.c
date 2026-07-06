#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxFenrirBG2[];
extern u16 const FrameConf_EfxFireHITBG[];
extern CONST_DATA u16 *TsaArray_EfxFireHITBG[];
extern CONST_DATA u16 *ImgArray_EfxFireHITBG[];
extern u16 Pal_EfxFenrirBG2_B[];

void NewEfxFenrirBG2_B(struct Anim *anim)
{
	struct ProcEfxBG *proc;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxFenrirBG2, PROC_TREE_3);
	proc->anim = anim;
	proc->timer = 0;
	proc->frame = 0;
	proc->frame_config = FrameConf_EfxFireHITBG;
	proc->tsal = TsaArray_EfxFireHITBG;
	proc->tsar = TsaArray_EfxFireHITBG;
	proc->img = ImgArray_EfxFireHITBG;

	SpellFx_RegisterBgPal(Pal_EfxFenrirBG2_B, 0x20);
	SpellFx_SetSomeColorEffect();

	if (gEkrDistanceType != EKR_DISTANCE_CLOSE) {
		if (GetAnimPosition(proc->anim) == POS_L)
			SetBgOffset(BG_1, 0x18, 0);
		else
			SetBgOffset(BG_1, 0xE8, 0);
	}
}
