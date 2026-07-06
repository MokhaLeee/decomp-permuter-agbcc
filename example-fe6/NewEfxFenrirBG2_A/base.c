#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxFenrirBG2[];
extern u16 const FrameArray_EfxFenrirBG2_A[];
extern u16 * const TsaArray_EfxFenrirBG2_A[];
extern u16 * const ImgArray_EfxFenrirBG2_A[];
extern u16 Pal_EfxFenrirBG2_A[];

void NewEfxFenrirBG2_A(struct Anim *anim)
{
	struct ProcEfxBG *proc;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxFenrirBG2, PROC_TREE_3);
	proc->anim = anim;
	proc->timer = 0;
	proc->frame = 0;
	proc->frame_config = FrameArray_EfxFenrirBG2_A;
	proc->tsal = TsaArray_EfxFenrirBG2_A;
	proc->tsar = TsaArray_EfxFenrirBG2_A;
	proc->img = ImgArray_EfxFenrirBG2_A;

	SpellFx_RegisterBgPal(Pal_EfxFenrirBG2_A, 0x20);
	SpellFx_SetSomeColorEffect();

	SetBgOffset(BG_1, 0, 0);

	if (gEkrDistanceType != EKR_DISTANCE_CLOSE) {
		if (GetAnimPosition(proc->anim) == POS_L)
			SetBgOffset(BG_1, 0x18, 0);
		else
			SetBgOffset(BG_1, 0xE8, 0);
	}
}
