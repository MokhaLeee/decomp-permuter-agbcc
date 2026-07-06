	.syntax unified

	.align	2, 0
	.globl	NewEfxApocalypseDummy
	.type	 NewEfxApocalypseDummy,function
	.thumb_func
NewEfxApocalypseDummy: @ 0x080530E4
	push {r4, r5, r6, lr}
	adds r4, r0, #0
	adds r6, r1, #0
	adds r5, r2, #0
	ldr r1, .L0805310C @ =gEfxBgSemaphore
	ldr r0, [r1]
	adds r0, #1
	str r0, [r1]
	ldr r0, .L08053110 @ =ProcScr_EfxApocalypseDummy
	movs r1, #3
	bl SpawnProc
	str r4, [r0, #0x5c]
	movs r1, #0
	strh r1, [r0, #0x2c]
	strh r5, [r0, #0x2e]
	str r6, [r0, #0x64]
	pop {r4, r5, r6}
	pop {r0}
	bx r0
	.align 2, 0
.L0805310C: .4byte gEfxBgSemaphore
.L08053110: .4byte ProcScr_EfxApocalypseDummy
