	.syntax unified

	.align	2, 0
	.globl	EfxApocalypseBgFlash1_Loop
	.type	 EfxApocalypseBgFlash1_Loop,function
	.thumb_func
EfxApocalypseBgFlash1_Loop: @ 0x0805318C
	push {r4, lr}
	adds r4, r0, #0
	ldrh r0, [r4, #0x2c]
	adds r0, #1
	strh r0, [r4, #0x2c]
	lsls r0, r0, #0x10
	ldrh r2, [r4, #0x2e]
	lsls r1, r2, #0x10
	cmp r0, r1
	ble .L080531B8
	ldr r1, .L080531C0 @ =gEfxBgSemaphore
	ldr r0, [r1]
	subs r0, #1
	str r0, [r1]
	ldr r0, [r4, #0x5c]
	movs r2, #0x30
	ldrsh r1, [r4, r2]
	bl NewEfxFlashBgWhite
	adds r0, r4, #0
	bl Proc_Break
.L080531B8:
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
.L080531C0: .4byte gEfxBgSemaphore
