	.syntax unified

	.align	2, 0
	.globl	EfxApocalypseBgFlash2_Loop1
	.type	 EfxApocalypseBgFlash2_Loop1,function
	.thumb_func
EfxApocalypseBgFlash2_Loop1: @ 0x080531F4
	push {lr}
	adds r2, r0, #0
	ldrh r0, [r2, #0x2c]
	adds r0, #1
	strh r0, [r2, #0x2c]
	lsls r0, r0, #0x10
	ldrh r3, [r2, #0x2e]
	lsls r1, r3, #0x10
	cmp r0, r1
	ble .L08053212
	movs r0, #0
	strh r0, [r2, #0x2c]
	adds r0, r2, #0
	bl Proc_Break
.L08053212:
	pop {r0}
	bx r0
