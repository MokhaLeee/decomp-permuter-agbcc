	.syntax unified

	.align	2, 0
	.globl	NewEfxApocalypseBGCOL2
	.type	 NewEfxApocalypseBGCOL2,function
	.thumb_func
NewEfxApocalypseBGCOL2: @ 0x0805304C
	push {r4, r5, lr}
	adds r4, r0, #0
	adds r5, r1, #0
	ldr r1, .L0805307C @ =gEfxBgSemaphore
	ldr r0, [r1]
	adds r0, #1
	str r0, [r1]
	ldr r0, .L08053080 @ =ProcScr_EfxApocalypseBGCOL2
	movs r1, #3
	bl SpawnProc
	str r4, [r0, #0x5c]
	movs r1, #0
	strh r1, [r0, #0x2c]
	strh r1, [r0, #0x2e]
	strh r5, [r0, #0x30]
	str r1, [r0, #0x44]
	ldr r1, .L08053084 @ =FrameArray_EfxApocalypseBGCOL2
	str r1, [r0, #0x48]
	ldr r1, .L08053088 @ =Pals_EfxApocalypseBGCOL2
	str r1, [r0, #0x4c]
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
.L0805307C: .4byte gEfxBgSemaphore
.L08053080: .4byte ProcScr_EfxApocalypseBGCOL2
.L08053084: .4byte FrameArray_EfxApocalypseBGCOL2
.L08053088: .4byte Pals_EfxApocalypseBGCOL2
