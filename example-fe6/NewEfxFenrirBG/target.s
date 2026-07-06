	.syntax unified

	.align	2, 0
	.globl	NewEfxFenrirBG
	.type	 NewEfxFenrirBG,function
	.thumb_func
NewEfxFenrirBG: @ 0x08053FF4
	push {r4, r5, lr}
	sub sp, #8
	adds r4, r0, #0
	adds r5, r1, #0
	ldr r1, .L08054068 @ =gEfxBgSemaphore
	ldr r0, [r1]
	adds r0, #1
	str r0, [r1]
	ldr r0, .L0805406C @ =ProcScr_EfxFenrirBG
	movs r1, #3
	bl SpawnProc
	str r4, [r0, #0x5c]
	movs r1, #0
	strh r1, [r0, #0x2c]
	strh r5, [r0, #0x2e]
	ldr r0, .L08054070 @ =Img_EfxFenrirBG
	movs r1, #0x80
	lsls r1, r1, #6
	bl SpellFx_RegisterBgGfx
	bl SpellFx_ClearBG1
	ldr r0, .L08054074 @ =Tsa_EfxFenrirBG
	ldr r4, .L08054078 @ =gEkrTsaBuffer
	adds r1, r4, #0
	bl LZ77UnCompWram
	ldr r1, .L0805407C @ =gBg1Tm
	movs r0, #1
	str r0, [sp]
	adds r0, #0xff
	str r0, [sp, #4]
	adds r0, r4, #0
	movs r2, #0x20
	movs r3, #0x20
	bl EfxTmCpyBG
	movs r0, #2
	bl EnableBgSync
	bl SpellFx_SetSomeColorEffect
	ldr r2, .L08054080 @ =gDispIo
	movs r0, #0x21
	rsbs r0, r0, #0
	ldrb r1, [r2, #1]
	ands r0, r1
	movs r1, #0x41
	rsbs r1, r1, #0
	ands r0, r1
	movs r1, #0x7f
	ands r0, r1
	strb r0, [r2, #1]
	add sp, #8
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
.L08054068: .4byte gEfxBgSemaphore
.L0805406C: .4byte ProcScr_EfxFenrirBG
.L08054070: .4byte Img_EfxFenrirBG
.L08054074: .4byte Tsa_EfxFenrirBG
.L08054078: .4byte gEkrTsaBuffer
.L0805407C: .4byte gBg1Tm
.L08054080: .4byte gDispIo
