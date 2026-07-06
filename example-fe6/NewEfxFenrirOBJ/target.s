	.syntax unified

	.align	2, 0
	.globl	NewEfxFenrirOBJ
	.type	 NewEfxFenrirOBJ,function
	.thumb_func
NewEfxFenrirOBJ: @ 0x08054168
	push {r4, r5, r6, lr}
	sub sp, #4
	adds r5, r0, #0
	adds r6, r1, #0
	ldr r1, .L080541B4 @ =gEfxBgSemaphore
	ldr r0, [r1]
	adds r0, #1
	str r0, [r1]
	ldr r0, .L080541B8 @ =ProcScr_EfxFenrirOBJ
	movs r1, #3
	bl SpawnProc
	adds r4, r0, #0
	str r5, [r4, #0x5c]
	movs r0, #0
	strh r0, [r4, #0x2c]
	strh r6, [r4, #0x2e]
	ldr r3, .L080541BC @ =AnimScr_EfxFenrirOBJ
	str r3, [sp]
	adds r0, r5, #0
	adds r1, r3, #0
	adds r2, r3, #0
	bl EfxCreateFrontAnim
	str r0, [r4, #0x60]
	ldr r0, .L080541C0 @ =Pal_EfxFenrirOBJ
	movs r1, #0x20
	bl SpellFx_RegisterObjPal
	ldr r0, .L080541C4 @ =Img_EfxFenrirOBJ
	movs r1, #0x80
	lsls r1, r1, #5
	bl SpellFx_RegisterObjGfx
	add sp, #4
	pop {r4, r5, r6}
	pop {r0}
	bx r0
	.align 2, 0
.L080541B4: .4byte gEfxBgSemaphore
.L080541B8: .4byte ProcScr_EfxFenrirOBJ
.L080541BC: .4byte AnimScr_EfxFenrirOBJ
.L080541C0: .4byte Pal_EfxFenrirOBJ
.L080541C4: .4byte Img_EfxFenrirOBJ
