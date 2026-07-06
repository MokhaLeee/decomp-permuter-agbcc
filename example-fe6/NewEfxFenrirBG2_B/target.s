	.syntax unified

	.align	2, 0
	.globl	NewEfxFenrirBG2_B
	.type	 NewEfxFenrirBG2_B,function
	.thumb_func
NewEfxFenrirBG2_B: @ 0x0805428C
	push {r4, r5, lr}
	adds r4, r0, #0
	ldr r1, .L080542E4 @ =gEfxBgSemaphore
	ldr r0, [r1]
	adds r0, #1
	str r0, [r1]
	ldr r0, .L080542E8 @ =ProcScr_EfxFenrirBG2
	movs r1, #3
	bl SpawnProc
	adds r5, r0, #0
	str r4, [r5, #0x5c]
	movs r0, #0
	strh r0, [r5, #0x2c]
	str r0, [r5, #0x44]
	ldr r0, .L080542EC @ =FrameConf_EfxFireHITBG
	str r0, [r5, #0x48]
	ldr r0, .L080542F0 @ =TsaArray_EfxFireHITBG
	str r0, [r5, #0x4c]
	str r0, [r5, #0x50]
	ldr r0, .L080542F4 @ =ImgArray_EfxFireHITBG
	str r0, [r5, #0x54]
	ldr r0, .L080542F8 @ =Pal_EfxFenrirBG2_B
	movs r1, #0x20
	bl SpellFx_RegisterBgPal
	bl SpellFx_SetSomeColorEffect
	ldr r0, .L080542FC @ =gEkrDistanceType
	movs r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, #0
	beq .L0805430A
	ldr r0, [r5, #0x5c]
	bl GetAnimPosition
	cmp r0, #0
	bne .L08054300
	movs r0, #1
	movs r1, #0x18
	movs r2, #0
	bl SetBgOffset
	b .L0805430A
	.align 2, 0
.L080542E4: .4byte gEfxBgSemaphore
.L080542E8: .4byte ProcScr_EfxFenrirBG2
.L080542EC: .4byte FrameConf_EfxFireHITBG
.L080542F0: .4byte TsaArray_EfxFireHITBG
.L080542F4: .4byte ImgArray_EfxFireHITBG
.L080542F8: .4byte Pal_EfxFenrirBG2_B
.L080542FC: .4byte gEkrDistanceType
.L08054300:
	movs r0, #1
	movs r1, #0xe8
	movs r2, #0
	bl SetBgOffset
.L0805430A:
	pop {r4, r5}
	pop {r0}
	bx r0
