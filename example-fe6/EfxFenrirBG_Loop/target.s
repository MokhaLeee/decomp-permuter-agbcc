	.syntax unified

	.align	2, 0
	.globl	EfxFenrirBG_Loop
	.type	 EfxFenrirBG_Loop,function
	.thumb_func
EfxFenrirBG_Loop: @ 0x080540A0
	push {lr}
	adds r2, r0, #0
	ldr r0, .L080540CC @ =gDispIo
	ldrh r1, [r0, #0x22]
	adds r1, #1
	strh r1, [r0, #0x22]
	ldrh r1, [r0, #0x20]
	subs r1, #1
	strh r1, [r0, #0x20]
	ldrh r0, [r2, #0x2c]
	adds r0, #1
	strh r0, [r2, #0x2c]
	lsls r0, r0, #0x10
	ldrh r3, [r2, #0x2e]
	lsls r1, r3, #0x10
	cmp r0, r1
	ble .L080540C8
	adds r0, r2, #0
	bl Proc_Break
.L080540C8:
	pop {r0}
	bx r0
	.align 2, 0
.L080540CC: .4byte gDispIo
