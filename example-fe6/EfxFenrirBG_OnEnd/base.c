#include "include.h"

void EfxFenrirBG_OnEnd(void)
{
	SpellFx_ClearBG1();
	gEfxBgSemaphore--;
	SpellFx_ClearColorEffects();
}
