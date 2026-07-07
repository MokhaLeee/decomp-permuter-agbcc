	.syntax unified

	.align	2, 0
	.globl	NewEfxApocalypseOBJ2
	.type	 NewEfxApocalypseOBJ2,function
	.thumb_func
NewEfxApocalypseOBJ2: @ 0x08053420
	push {r4, r5, r6, lr}
	mov r6, r8
	push {r6}
	sub sp, #4
	adds r5, r0, #0
	adds r6, r1, #0
	mov r8, r2
	ldr r1, .L080534A4 @ =gEfxBgSemaphore
	ldr r0, [r1]
	adds r0, #1
	str r0, [r1]
	ldr r0, .L080534A8 @ =ProcScr_EfxApocalypseOBJ2
	movs r1, #3
	bl SpawnProc
	adds r4, r0, #0
	str r5, [r4, #0x5c]
	movs r0, #0
	strh r0, [r4, #0x2c]
	strh r6, [r4, #0x2e]
	mov r0, r8
	strh r0, [r4, #0x30]
	ldr r3, .L080534AC @ =AnimScr_EfxApocalypseOBJ2_1
	str r3, [sp]
	adds r0, r5, #0
	adds r1, r3, #0
	adds r2, r3, #0
	bl EfxCreateFrontAnim
	adds r5, r0, #0
	str r5, [r4, #0x60]
	movs r0, #0x78
	strh r0, [r5, #2]
	movs r0, #0x48
	strh r0, [r5, #4]
	movs r0, #0x14
	strh r0, [r5, #0xa]
	bl BasSort
	bl GetEkrDragonStateType
	cmp r0, #0
	beq .L08053486
	ldr r0, .L080534B0 @ =0x0000F3FF
	ldrh r1, [r5, #8]
	ands r0, r1
	movs r2, #0xc0
	lsls r2, r2, #4
	adds r1, r2, #0
	orrs r0, r1
	strh r0, [r5, #8]
.L08053486:
	ldr r0, .L080534B4 @ =Pal_EfxMistyrainOBJ1
	movs r1, #0x20
	bl SpellFx_RegisterObjPal
	ldr r0, .L080534B8 @ =Img_EfxApocalypseOBJ2_1
	movs r1, #0x80
	lsls r1, r1, #5
	bl SpellFx_RegisterObjGfx
	add sp, #4
	pop {r3}
	mov r8, r3
	pop {r4, r5, r6}
	pop {r0}
	bx r0
	.align 2, 0
.L080534A4: .4byte gEfxBgSemaphore
.L080534A8: .4byte ProcScr_EfxApocalypseOBJ2
.L080534AC: .4byte AnimScr_EfxApocalypseOBJ2_1
.L080534B0: .4byte 0x0000F3FF
.L080534B4: .4byte Pal_EfxMistyrainOBJ1
.L080534B8: .4byte Img_EfxApocalypseOBJ2_1
