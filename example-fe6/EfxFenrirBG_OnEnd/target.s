	.syntax unified

	.align	2, 0
	.globl	EfxFenrirBG_OnEnd
	.type	 EfxFenrirBG_OnEnd,function
	.thumb_func
EfxFenrirBG_OnEnd: @ 0x08054084
	push {lr}
	bl SpellFx_ClearBG1
	ldr r1, .L0805409C @ =gEfxBgSemaphore
	ldr r0, [r1]
	subs r0, #1
	str r0, [r1]
	bl SpellFx_ClearColorEffects
	pop {r0}
	bx r0
	.align 2, 0
.L0805409C: .4byte gEfxBgSemaphore
