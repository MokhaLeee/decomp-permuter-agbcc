	.syntax unified

	.align	2, 0
	.globl	EfxFenrirOBJ_Loop
	.type	 EfxFenrirOBJ_Loop,function
	.thumb_func
EfxFenrirOBJ_Loop: @ 0x080541C8
	push {r4, lr}
	adds r4, r0, #0
	ldrh r0, [r4, #0x2c]
	adds r0, #1
	strh r0, [r4, #0x2c]
	lsls r0, r0, #0x10
	ldrh r2, [r4, #0x2e]
	lsls r1, r2, #0x10
	cmp r0, r1
	ble .L080541F0
	ldr r0, .L080541F8 @ =gEfxBgSemaphore
	ldr r1, [r0]
	subs r1, #1
	str r1, [r0]
	ldr r0, [r4, #0x60]
	bl BasRemove
	adds r0, r4, #0
	bl Proc_Break
.L080541F0:
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
.L080541F8: .4byte gEfxBgSemaphore
