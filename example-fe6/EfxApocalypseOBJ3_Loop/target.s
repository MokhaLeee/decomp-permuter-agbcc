	.syntax unified

	.align	2, 0
	.globl	EfxApocalypseOBJ3_Loop
	.type	 EfxApocalypseOBJ3_Loop,function
	.thumb_func
EfxApocalypseOBJ3_Loop: @ 0x08053568
	push {r4, r5, r6, r7, lr}
	adds r4, r0, #0
	ldrh r0, [r4, #0x2c]
	adds r0, #1
	movs r1, #0
	mov ip, r1
	strh r0, [r4, #0x2c]
	lsls r0, r0, #0x10
	ldrh r2, [r4, #0x2e]
	lsls r1, r2, #0x10
	cmp r0, r1
	bne .L08053594
	ldr r1, .L08053590 @ =gEfxBgSemaphore
	ldr r0, [r1]
	subs r0, #1
	str r0, [r1]
	adds r0, r4, #0
	bl Proc_Break
	b .L080535E4
	.align 2, 0
.L08053590: .4byte gEfxBgSemaphore
.L08053594:
	ldrh r0, [r4, #0x30]
	adds r0, #1
	strh r0, [r4, #0x30]
	lsls r0, r0, #0x10
	asrs r0, r0, #0x10
	ldr r1, [r4, #0x44]
	cmp r0, r1
	bne .L080535E4
	mov r0, ip
	strh r0, [r4, #0x30]
	movs r0, #2
	str r0, [r4, #0x44]
	ldr r3, .L080535EC @ =DuraArray_EfxApocalypseOBJ3RND
	ldr r1, [r4, #0x4c]
	lsls r2, r1, #2
	adds r0, r2, r3
	ldr r7, [r0]
	ldr r0, .L080535F0 @ =LoArray_EfxApocalypseOBJ3RND
	adds r0, r2, r0
	ldr r6, [r0]
	ldr r0, .L080535F4 @ =StateArray_EfxApocalypseOBJ3RND
	adds r2, r2, r0
	ldr r5, [r2]
	adds r1, #1
	str r1, [r4, #0x4c]
	lsls r1, r1, #2
	adds r1, r1, r3
	ldr r1, [r1]
	movs r0, #1
	rsbs r0, r0, #0
	cmp r1, r0
	bne .L080535D8
	mov r1, ip
	str r1, [r4, #0x4c]
.L080535D8:
	ldr r0, [r4, #0x5c]
	adds r1, r7, #0
	adds r2, r6, #0
	adds r3, r5, #0
	bl NewEfxApocalypseOBJ3RND
.L080535E4:
	pop {r4, r5, r6, r7}
	pop {r0}
	bx r0
	.align 2, 0
.L080535EC: .4byte DuraArray_EfxApocalypseOBJ3RND
.L080535F0: .4byte LoArray_EfxApocalypseOBJ3RND
.L080535F4: .4byte StateArray_EfxApocalypseOBJ3RND
