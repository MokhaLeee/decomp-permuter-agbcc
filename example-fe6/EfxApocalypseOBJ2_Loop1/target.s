	.syntax unified

	.align	2, 0
	.globl	EfxApocalypseOBJ2_Loop1
	.type	 EfxApocalypseOBJ2_Loop1,function
	.thumb_func
EfxApocalypseOBJ2_Loop1: @ 0x080534BC
	push {r4, r5, lr}
	adds r4, r0, #0
	ldr r2, [r4, #0x60]
	ldrh r0, [r4, #0x2c]
	adds r0, #1
	movs r3, #0
	strh r0, [r4, #0x2c]
	lsls r0, r0, #0x10
	ldrh r5, [r4, #0x2e]
	lsls r1, r5, #0x10
	cmp r0, r1
	ble .L080534EE
	strh r3, [r4, #0x2c]
	ldr r0, .L080534F4 @ =AnimScr_EfxApocalypseOBJ2_2
	str r0, [r2, #0x24]
	str r0, [r2, #0x20]
	strh r3, [r2, #6]
	ldr r0, .L080534F8 @ =Img_EfxApocalypseOBJ2_2
	movs r1, #0x80
	lsls r1, r1, #5
	bl SpellFx_RegisterObjGfx
	adds r0, r4, #0
	bl Proc_Break
.L080534EE:
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
.L080534F4: .4byte AnimScr_EfxApocalypseOBJ2_2
.L080534F8: .4byte Img_EfxApocalypseOBJ2_2
