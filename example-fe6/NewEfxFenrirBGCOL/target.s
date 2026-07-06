	.syntax unified

	.align	2, 0
	.globl	NewEfxFenrirBGCOL
	.type	 NewEfxFenrirBGCOL,function
	.thumb_func
NewEfxFenrirBGCOL: @ 0x080540D0
	push {r4, r5, lr}
	adds r4, r0, #0
	adds r5, r1, #0
	ldr r1, .L08054108 @ =gEfxBgSemaphore
	ldr r0, [r1]
	adds r0, #1
	str r0, [r1]
	ldr r0, .L0805410C @ =ProcScr_EfxFenrirBGCOL
	movs r1, #3
	bl SpawnProc
	str r4, [r0, #0x5c]
	movs r1, #0
	strh r1, [r0, #0x2c]
	strh r1, [r0, #0x2e]
	strh r5, [r0, #0x30]
	str r1, [r0, #0x44]
	ldr r1, .L08054110 @ =FrameArray_EfxFenrirBGCOL
	str r1, [r0, #0x48]
	ldr r1, .L08054114 @ =Pal_EfxFenrirBGCOL
	str r1, [r0, #0x4c]
	adds r0, r1, #0
	movs r1, #0x20
	bl SpellFx_RegisterBgPal
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
.L08054108: .4byte gEfxBgSemaphore
.L0805410C: .4byte ProcScr_EfxFenrirBGCOL
.L08054110: .4byte FrameArray_EfxFenrirBGCOL
.L08054114: .4byte Pal_EfxFenrirBGCOL
