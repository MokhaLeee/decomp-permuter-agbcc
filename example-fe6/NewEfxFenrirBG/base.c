#include "include.h"

extern CONST_DATA struct ProcScr ProcScr_EfxFenrirBG[];
extern u16 Img_EfxFenrirBG[];
extern u16 Tsa_EfxFenrirBG[];

void NewEfxFenrirBG(struct Anim *anim, int duration)
{
	struct ProcEfxBG *proc;

	gEfxBgSemaphore++;

	proc = SpawnProc(ProcScr_EfxFenrirBG, PROC_TREE_3);
	proc->anim = anim;
	proc->timer = 0;
	proc->terminator = duration;

	SpellFx_RegisterBgGfx(Img_EfxFenrirBG, 32 * 8 * CHR_SIZE);
	SpellFx_ClearBG1();

	LZ77UnCompWram(Tsa_EfxFenrirBG, gEkrTsaBuffer);
	EfxTmCpyBG(gEkrTsaBuffer, gBg1Tm, 0x20, 0x20,
		   BGPAL_EFX_SPELL_BG, VRAMOFF_BANIM_SPELL_BG / CHR_SIZE);

	EnableBgSync(BG1_SYNC_BIT);
	SpellFx_SetSomeColorEffect();
	SetWinEnable(0, 0, 0);
}
