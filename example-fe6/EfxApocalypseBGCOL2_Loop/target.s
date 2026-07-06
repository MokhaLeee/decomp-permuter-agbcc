	.syntax unified

	.align	2, 0
	.globl	EfxApocalypseBGCOL2_Loop
	.type	 EfxApocalypseBGCOL2_Loop,function
	.thumb_func
EfxApocalypseBGCOL2_Loop: @ 0x0805308C
	push {r4, lr}
	sub sp, #4
	adds r4, r0, #0
	adds r0, #0x2c
	adds r1, r4, #0
	adds r1, #0x44
	ldr r2, [r4, #0x48]
	bl EfxAdvanceFrameLut
	lsls r0, r0, #0x10
	asrs r3, r0, #0x10
	cmp r3, #0
	blt .L080530B6
	ldr r0, [r4, #0x4c]
	ldr r1, .L080530DC @ =gPal+0x2
	movs r2, #0xf
	str r2, [sp]
	adds r2, r3, #0
	movs r3, #0xf
	bl func_fe6_08047B6C
.L080530B6:
	ldrh r0, [r4, #0x2e]
	adds r0, #1
	strh r0, [r4, #0x2e]
	lsls r0, r0, #0x10
	ldrh r2, [r4, #0x30]
	lsls r1, r2, #0x10
	cmp r0, r1
	ble .L080530D4
	ldr r1, .L080530E0 @ =gEfxBgSemaphore
	ldr r0, [r1]
	subs r0, #1
	str r0, [r1]
	adds r0, r4, #0
	bl Proc_Break
.L080530D4:
	add sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
.L080530DC: .4byte gPal+0x2
.L080530E0: .4byte gEfxBgSemaphore
