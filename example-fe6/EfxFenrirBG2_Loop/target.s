	.syntax unified

	.align	2, 0
	.globl	EfxFenrirBG2_Loop
	.type	 EfxFenrirBG2_Loop,function
	.thumb_func
EfxFenrirBG2_Loop: @ 0x08054310
	push {r4, r5, r6, r7, lr}
	sub sp, #4
	adds r7, r0, #0
	adds r0, #0x2c
	adds r1, r7, #0
	adds r1, #0x44
	ldr r2, [r7, #0x48]
	bl EfxAdvanceFrameLut
	lsls r0, r0, #0x10
	asrs r4, r0, #0x10
	cmp r4, #0
	blt .L08054398
	ldr r5, [r7, #0x4c]
	ldr r6, [r7, #0x50]
	ldr r0, [r7, #0x54]
	lsls r4, r4, #2
	adds r0, r4, r0
	ldr r0, [r0]
	movs r1, #0x80
	lsls r1, r1, #6
	bl SpellFx_RegisterBgGfx
	ldr r0, [r7, #0x5c]
	adds r5, r4, r5
	ldr r1, [r5]
	adds r4, r4, r6
	ldr r2, [r4]
	bl SpellFx_WriteBgMap
	ldr r0, .L08054374 @ =gEkrDistanceType
	movs r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, #0
	beq .L080543B6
	ldr r0, [r7, #0x5c]
	bl GetAnimPosition
	adds r1, r0, #0
	cmp r1, #0
	bne .L0805437C
	ldr r0, .L08054378 @ =gBg1Tm
	str r1, [sp]
	movs r1, #3
	movs r2, #0x14
	movs r3, #0
	bl FillBGRect
	b .L0805438C
	.align 2, 0
.L08054374: .4byte gEkrDistanceType
.L08054378: .4byte gBg1Tm
.L0805437C:
	ldr r0, .L08054394 @ =gBg1Tm+0x3A
	movs r1, #0
	str r1, [sp]
	movs r1, #3
	movs r2, #0x14
	movs r3, #0
	bl FillBGRect
.L0805438C:
	movs r0, #2
	bl EnableBgSync
	b .L080543B6
	.align 2, 0
.L08054394: .4byte gBg1Tm+0x3A
.L08054398:
	movs r0, #1
	rsbs r0, r0, #0
	cmp r4, r0
	bne .L080543B6
	bl SpellFx_ClearBG1
	ldr r1, .L080543C0 @ =gEfxBgSemaphore
	ldr r0, [r1]
	subs r0, #1
	str r0, [r1]
	bl SpellFx_ClearColorEffects
	adds r0, r7, #0
	bl Proc_Break
.L080543B6:
	add sp, #4
	pop {r4, r5, r6, r7}
	pop {r0}
	bx r0
	.align 2, 0
.L080543C0: .4byte gEfxBgSemaphore
