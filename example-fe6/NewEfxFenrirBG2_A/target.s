	.syntax unified

	.align	2, 0
	.globl	NewEfxFenrirBG2_A
	.type	 NewEfxFenrirBG2_A,function
	.thumb_func
NewEfxFenrirBG2_A: @ 0x080541FC
	push {r4, r5, lr}
	adds r4, r0, #0
	ldr r1, .L08054260 @ =gEfxBgSemaphore
	ldr r0, [r1]
	adds r0, #1
	str r0, [r1]
	ldr r0, .L08054264 @ =ProcScr_EfxFenrirBG2
	movs r1, #3
	bl SpawnProc
	adds r5, r0, #0
	str r4, [r5, #0x5c]
	movs r0, #0
	strh r0, [r5, #0x2c]
	str r0, [r5, #0x44]
	ldr r0, .L08054268 @ =FrameArray_EfxFenrirBG2_A
	str r0, [r5, #0x48]
	ldr r0, .L0805426C @ =TsaArray_EfxFenrirBG2_A
	str r0, [r5, #0x4c]
	str r0, [r5, #0x50]
	ldr r0, .L08054270 @ =ImgArray_EfxFenrirBG2_A
	str r0, [r5, #0x54]
	ldr r0, .L08054274 @ =Pal_EfxFenrirBG2_A
	movs r1, #0x20
	bl SpellFx_RegisterBgPal
	bl SpellFx_SetSomeColorEffect
	movs r0, #1
	movs r1, #0
	movs r2, #0
	bl SetBgOffset
	ldr r0, .L08054278 @ =gEkrDistanceType
	movs r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, #0
	beq .L08054286
	ldr r0, [r5, #0x5c]
	bl GetAnimPosition
	cmp r0, #0
	bne .L0805427C
	movs r0, #1
	movs r1, #0x18
	movs r2, #0
	bl SetBgOffset
	b .L08054286
	.align 2, 0
.L08054260: .4byte gEfxBgSemaphore
.L08054264: .4byte ProcScr_EfxFenrirBG2
.L08054268: .4byte FrameArray_EfxFenrirBG2_A
.L0805426C: .4byte TsaArray_EfxFenrirBG2_A
.L08054270: .4byte ImgArray_EfxFenrirBG2_A
.L08054274: .4byte Pal_EfxFenrirBG2_A
.L08054278: .4byte gEkrDistanceType
.L0805427C:
	movs r0, #1
	movs r1, #0xe8
	movs r2, #0
	bl SetBgOffset
.L08054286:
	pop {r4, r5}
	pop {r0}
	bx r0
