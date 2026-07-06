	.syntax unified

	.align	2, 0
	.globl	EfxFenrirBGCOL_Loop
	.type	 EfxFenrirBGCOL_Loop,function
	.thumb_func
EfxFenrirBGCOL_Loop: @ 0x08054128
	push {r4, lr}
	adds r4, r0, #0
	adds r0, #0x2c
	adds r1, r4, #0
	adds r1, #0x44
	ldr r2, [r4, #0x48]
	bl EfxAdvanceFrameLut
	lsls r0, r0, #0x10
	asrs r1, r0, #0x10
	cmp r1, #0
	blt .L0805414C
	ldr r0, [r4, #0x4c]
	lsls r1, r1, #5
	adds r0, r0, r1
	movs r1, #0x20
	bl SpellFx_RegisterBgPal
.L0805414C:
	ldrh r0, [r4, #0x2e]
	adds r0, #1
	strh r0, [r4, #0x2e]
	lsls r0, r0, #0x10
	ldrh r2, [r4, #0x30]
	lsls r1, r2, #0x10
	cmp r0, r1
	ble .L08054162
	adds r0, r4, #0
	bl Proc_Break
.L08054162:
	pop {r4}
	pop {r0}
	bx r0
