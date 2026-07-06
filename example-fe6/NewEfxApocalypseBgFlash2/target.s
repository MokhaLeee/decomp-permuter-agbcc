	.syntax unified

	.align	2, 0
	.globl	NewEfxApocalypseBgFlash2
	.type	 NewEfxApocalypseBgFlash2,function
	.thumb_func
NewEfxApocalypseBgFlash2: @ 0x080531C4
	push {r4, r5, r6, lr}
	adds r6, r0, #0
	adds r4, r1, #0
	adds r5, r2, #0
	ldr r1, .L080531EC @ =gEfxBgSemaphore
	ldr r0, [r1]
	adds r0, #1
	str r0, [r1]
	ldr r0, .L080531F0 @ =ProcScr_EfxApocalypseBgFlash2
	movs r1, #3
	bl SpawnProc
	movs r1, #0
	strh r1, [r0, #0x2c]
	strh r4, [r0, #0x2e]
	strh r5, [r0, #0x30]
	str r6, [r0, #0x5c]
	pop {r4, r5, r6}
	pop {r0}
	bx r0
	.align 2, 0
.L080531EC: .4byte gEfxBgSemaphore
.L080531F0: .4byte ProcScr_EfxApocalypseBgFlash2
