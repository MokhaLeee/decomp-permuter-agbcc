	.syntax unified

	.align	2, 0
	.globl	EventDragonsSpritefx_Loop
	.type	 EventDragonsSpritefx_Loop,function
	.thumb_func
EventDragonsSpritefx_Loop: @ 0x0807F258
	push {r4, r5, r6, r7, lr}
	mov r7, sl
	mov r6, sb
	mov r5, r8
	push {r5, r6, r7}
	sub sp, #0x10
	mov r8, r0
	movs r5, #0
	movs r0, #0
	str r0, [sp]
	mov sl, r0
	mov r1, r8
	adds r1, #0x2c
	str r1, [sp, #0xc]
_0807F274:
	ldr r2, [sp, #0xc]
	ldr r0, [r2]
	cmp r0, #0
	bne _0807F27E
	b _0807F396
_0807F27E:
	mov r0, r8
	adds r0, #0x38
	add r0, sl
	mov sb, r0
	mov r0, r8
	adds r0, #0x44
	add r0, sl
	str r0, [sp, #4]
	mov r4, r8
	adds r4, #0x3e
	mov r3, r8
	adds r3, #0x4a
	str r3, [sp, #8]
	mov r6, sb
	ldrh r6, [r6]
	ldrh r7, [r0]
	cmp r6, r7
	bne _0807F2B2
	mov r0, sl
	adds r1, r4, r0
	adds r0, r3, #0
	add r0, sl
	ldrh r2, [r1]
	ldrh r0, [r0]
	cmp r2, r0
	beq _0807F354
_0807F2B2:
	mov r0, r8
	adds r0, #0x56
	mov r3, sl
	adds r5, r0, r3
	subs r0, #6
	adds r1, r0, r3
	ldrh r6, [r5]
	ldrh r7, [r1]
	adds r0, r6, r7
	strh r0, [r5]
	lsls r0, r0, #0x10
	asrs r0, r0, #0x10
	movs r2, #0x80
	lsls r2, r2, #1
	mov ip, r2
	cmp r0, ip
	ble _0807F2D8
	mov r3, ip
	strh r3, [r5]
_0807F2D8:
	movs r6, #0
	ldrsh r0, [r1, r6]
	cmp r0, #0
	bne _0807F2E4
	mov r7, ip
	strh r7, [r5]
_0807F2E4:
	mov r1, sb
	movs r2, #0
	ldrsh r0, [r1, r2]
	movs r3, #0
	ldrsh r2, [r5, r3]
	mov r6, ip
	subs r3, r6, r2
	adds r1, r0, #0
	muls r1, r3, r1
	ldr r7, [sp, #4]
	movs r6, #0
	ldrsh r0, [r7, r6]
	muls r0, r2, r0
	adds r1, r1, r0
	cmp r1, #0
	bge _0807F306
	adds r1, #0xff
_0807F306:
	asrs r6, r1, #8
	mov r0, sl
	adds r7, r4, r0
	movs r1, #0
	ldrsh r0, [r7, r1]
	adds r1, r0, #0
	muls r1, r3, r1
	ldr r3, [sp, #8]
	add r3, sl
	movs r4, #0
	ldrsh r0, [r3, r4]
	muls r0, r2, r0
	adds r1, r1, r0
	cmp r1, #0
	bge _0807F326
	adds r1, #0xff
_0807F326:
	asrs r4, r1, #8
	movs r1, #0
	ldrsh r0, [r5, r1]
	cmp r0, ip
	bne _0807F350
	ldr r2, [sp, #4]
	ldrh r0, [r2]
	mov r1, sb
	strh r0, [r1]
	ldrh r0, [r3]
	strh r0, [r7]
	ldr r2, [sp, #0xc]
	ldr r0, [r2]
	ldr r0, [r0, #0x50]
	mov r1, r8
	adds r1, #0x62
	ldr r3, [sp]
	adds r1, r1, r3
	ldrb r1, [r1]
	bl SetSpriteAnimId
_0807F350:
	movs r5, #1
	b _0807F35E
_0807F354:
	mov r4, sb
	movs r7, #0
	ldrsh r6, [r4, r7]
	movs r0, #0
	ldrsh r4, [r1, r0]
_0807F35E:
	ldr r1, _0807F3F0 @ =gBmSt
	movs r2, #0xc
	ldrsh r0, [r1, r2]
	subs r6, r6, r0
	movs r3, #0xe
	ldrsh r0, [r1, r3]
	subs r4, r4, r0
	movs r0, #0x40
	rsbs r0, r0, #0
	cmp r4, r0
	bge _0807F376
	movs r4, #0xcc
_0807F376:
	ldr r0, _0807F3F4 @ =0x000001FF
	ands r6, r0
	movs r0, #0xff
	ands r4, r0
	ldr r7, [sp, #0xc]
	ldr r0, [r7]
	mov r1, r8
	adds r1, #0x5c
	add r1, sl
	ldrh r1, [r1]
	adds r2, r1, r4
	adds r1, r6, #0
	movs r3, #1
	rsbs r3, r3, #0
	bl SetSpriteAnimProcParameters
_0807F396:
	movs r0, #2
	add sl, r0
	ldr r1, [sp, #0xc]
	adds r1, #4
	str r1, [sp, #0xc]
	ldr r2, [sp]
	adds r2, #1
	str r2, [sp]
	cmp r2, #2
	bgt _0807F3AC
	b _0807F274
_0807F3AC:
	cmp r5, #0
	beq _0807F3DE
	mov r2, r8
	adds r2, #0x6b
	ldrb r0, [r2]
	adds r1, r0, #1
	strb r1, [r2]
	lsls r0, r0, #0x18
	lsrs r0, r0, #0x18
	movs r1, #0x18
	bl __umodsi3
	lsls r0, r0, #0x18
	cmp r0, #0
	bne _0807F3DE
	ldr r0, _0807F3F8 @ =gPlaySt
	adds r0, #0x41
	ldrb r0, [r0]
	lsls r0, r0, #0x1e
	cmp r0, #0
	blt _0807F3DE
	movs r0, #0xb8
	lsls r0, r0, #2
	bl m4aSongNumStart
_0807F3DE:
	add sp, #0x10
	pop {r3, r4, r5}
	mov r8, r3
	mov sb, r4
	mov sl, r5
	pop {r4, r5, r6, r7}
	pop {r0}
	bx r0
	.align 2, 0
_0807F3F0: .4byte gBmSt
_0807F3F4: .4byte 0x000001FF
_0807F3F8: .4byte gPlaySt
