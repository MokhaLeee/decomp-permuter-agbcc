	.syntax unified

	.align	2, 0
	.globl	NewEfxApocalypseBG2
	.type	 NewEfxApocalypseBG2,function
	.thumb_func
NewEfxApocalypseBG2: @ 0x0805327C
	push {r4, r5, r6, lr}
	adds r6, r0, #0
	adds r4, r1, #0
	ldr r1, .L08053320 @ =gEfxBgSemaphore
	ldr r0, [r1]
	adds r0, #1
	str r0, [r1]
	ldr r0, .L08053324 @ =ProcScr_EfxApocalypseBG2
	movs r1, #3
	bl SpawnProc
	adds r5, r0, #0
	str r6, [r5, #0x5c]
	movs r0, #0
	strh r0, [r5, #0x2c]
	strh r0, [r5, #0x2e]
	strh r4, [r5, #0x30]
	str r0, [r5, #0x44]
	ldr r0, .L08053328 @ =FrameArray_EfxApocalypseBG2
	str r0, [r5, #0x48]
	ldr r0, .L0805332C @ =TsaArray_EfxApocalypseBG2
	str r0, [r5, #0x4c]
	str r0, [r5, #0x50]
	ldr r0, .L08053330 @ =ImgArray_EfxApocalypseBG2
	str r0, [r5, #0x54]
	ldr r0, .L08053334 @ =Pal_EfxApocalypseBG2
	movs r1, #0x20
	bl SpellFx_RegisterBgPal
	bl SpellFx_SetSomeColorEffect
	movs r0, #1
	movs r1, #0
	movs r2, #0
	bl SetBgOffset
	bl GetEkrDragonStateType
	cmp r0, #0
	beq .L08053318
	ldr r0, [r5, #0x5c]
	bl GetAnimAnotherSide
	ldr r4, .L08053338 @ =gDispIo
	movs r2, #4
	rsbs r2, r2, #0
	adds r1, r2, #0
	ldrb r3, [r4, #0xc]
	ands r1, r3
	strb r1, [r4, #0xc]
	adds r1, r2, #0
	ldrb r3, [r4, #0x18]
	ands r1, r3
	movs r3, #1
	orrs r1, r3
	strb r1, [r4, #0x18]
	ldrb r1, [r4, #0x10]
	ands r2, r1
	movs r1, #2
	orrs r2, r1
	strb r2, [r4, #0x10]
	movs r1, #3
	ldrb r2, [r4, #0x14]
	orrs r1, r2
	strb r1, [r4, #0x14]
	ldr r1, .L0805333C @ =0x0000F3FF
	adds r2, r1, #0
	ldrh r3, [r6, #8]
	ands r2, r3
	movs r4, #0x80
	lsls r4, r4, #3
	adds r3, r4, #0
	orrs r2, r3
	strh r2, [r6, #8]
	ldrh r2, [r0, #8]
	ands r1, r2
	orrs r1, r3
	strh r1, [r0, #8]
.L08053318:
	pop {r4, r5, r6}
	pop {r0}
	bx r0
	.align 2, 0
.L08053320: .4byte gEfxBgSemaphore
.L08053324: .4byte ProcScr_EfxApocalypseBG2
.L08053328: .4byte FrameArray_EfxApocalypseBG2
.L0805332C: .4byte TsaArray_EfxApocalypseBG2
.L08053330: .4byte ImgArray_EfxApocalypseBG2
.L08053334: .4byte Pal_EfxApocalypseBG2
.L08053338: .4byte gDispIo
.L0805333C: .4byte 0x0000F3FF
