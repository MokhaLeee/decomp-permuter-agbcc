	.syntax unified

	.align	2, 0
	.globl	EfxFenrirBGCOL_OnEnd
	.type	 EfxFenrirBGCOL_OnEnd,function
	.thumb_func
EfxFenrirBGCOL_OnEnd: @ 0x08054118
	ldr r1, .L08054124 @ =gEfxBgSemaphore
	ldr r0, [r1]
	subs r0, #1
	str r0, [r1]
	bx lr
	.align 2, 0
.L08054124: .4byte gEfxBgSemaphore
