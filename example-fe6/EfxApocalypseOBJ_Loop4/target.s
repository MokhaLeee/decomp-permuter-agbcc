	.syntax unified

	.align	2, 0
	.globl	EfxApocalypseOBJ_Loop4
	.type	 EfxApocalypseOBJ_Loop4,function
	.thumb_func
EfxApocalypseOBJ_Loop4: @ 0x08052FB4
	push {r4, r5, r6, lr}
	sub sp, #4
	adds r5, r0, #0
	ldr r4, [r5, #0x60]
	movs r0, #0x2c
	ldrsh r3, [r5, r0]
	movs r6, #0x32
	str r6, [sp]
	movs r0, #1
	movs r1, #0
	movs r2, #0xb4
	bl Interpolate
	ldrh r2, [r5, #0x30]
	movs r3, #0x80
	lsls r3, r3, #4
	adds r1, r2, r3
	strh r1, [r5, #0x30]
	lsrs r2, r1, #8
	ldr r3, .L08053044 @ =gSinLut
	lsls r1, r2, #1
	adds r1, r1, r3
	adds r2, #0x40
	lsls r2, r2, #1
	adds r2, r2, r3
	movs r3, #0
	ldrsh r1, [r1, r3]
	lsls r0, r0, #0x10
	asrs r0, r0, #0x10
	muls r1, r0, r1
	lsls r1, r1, #4
	movs r3, #0
	ldrsh r2, [r2, r3]
	muls r0, r2, r0
	lsls r0, r0, #4
	asrs r1, r1, #0x10
	ldrh r2, [r5, #0x32]
	adds r1, r2, r1
	asrs r0, r0, #0x10
	ldrh r3, [r5, #0x3a]
	adds r0, r3, r0
	strh r1, [r4, #2]
	strh r0, [r4, #4]
	ldrh r0, [r5, #0x2c]
	adds r0, #1
	strh r0, [r5, #0x2c]
	lsls r0, r0, #0x10
	asrs r0, r0, #0x10
	cmp r0, #0x32
	ble .L0805301A
	strh r6, [r5, #0x2c]
.L0805301A:
	ldrh r0, [r5, #0x2e]
	adds r0, #1
	strh r0, [r5, #0x2e]
	lsls r0, r0, #0x10
	asrs r0, r0, #0x10
	cmp r0, #0x32
	ble .L0805303C
	ldr r0, .L08053048 @ =gEfxBgSemaphore
	ldr r1, [r0]
	subs r1, #1
	str r1, [r0]
	ldr r0, [r5, #0x60]
	bl BasRemove
	adds r0, r5, #0
	bl Proc_Break
.L0805303C:
	add sp, #4
	pop {r4, r5, r6}
	pop {r0}
	bx r0
	.align 2, 0
.L08053044: .4byte gSinLut
.L08053048: .4byte gEfxBgSemaphore
