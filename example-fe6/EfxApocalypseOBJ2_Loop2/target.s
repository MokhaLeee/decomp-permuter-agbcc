	.syntax unified

	.align	2, 0
	.globl	EfxApocalypseOBJ2_Loop2
	.type	 EfxApocalypseOBJ2_Loop2,function
	.thumb_func
EfxApocalypseOBJ2_Loop2: @ 0x080534FC
	push {r4, lr}
	adds r4, r0, #0
	ldrh r0, [r4, #0x2c]
	adds r0, #1
	strh r0, [r4, #0x2c]
	lsls r0, r0, #0x10
	ldrh r2, [r4, #0x30]
	lsls r1, r2, #0x10
	cmp r0, r1
	ble .L08053524
	ldr r0, [r4, #0x60]
	bl BasRemove
	ldr r1, .L0805352C @ =gEfxBgSemaphore
	ldr r0, [r1]
	subs r0, #1
	str r0, [r1]
	adds r0, r4, #0
	bl Proc_Break
.L08053524:
	pop {r4}
	pop {r0}
	bx r0
	.align 2, 0
.L0805352C: .4byte gEfxBgSemaphore
