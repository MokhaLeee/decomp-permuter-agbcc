	.syntax unified

	.align	2, 0
	.globl	func_fe6_0807B4C0
	.type	func_fe6_0807B4C0,function
	.thumb_func
func_fe6_0807B4C0: @ 0x0807B4C0
	push {r4, r5, r6, r7, lr}
	mov r7, sl
	mov r6, sb
	mov r5, r8
	push {r5, r6, r7}
	sub sp, #4
	mov r8, r0
	mov r5, r8
	adds r5, #0x42
	ldrh r0, [r5]
	cmp r0, #0
	bne .L0807B50C
	mov r1, r8
	adds r1, #0x29
	movs r0, #1
	strb r0, [r1]
	adds r1, #1
	strb r0, [r1]
	adds r1, #1
	strb r0, [r1]
	mov r0, r8
	bl PrepScreen_DrawScreenInfo
	ldr r0, .L0807B594 @ =gBg0Tm
	movs r1, #0xc
	movs r2, #0x13
	movs r3, #0
	bl TmFillRect_thm
	ldr r0, .L0807B598 @ =gBg1Tm
	movs r1, #0xc
	movs r2, #0x13
	movs r3, #0
	bl TmFillRect_thm
	mov r0, r8
	bl func_fe6_08079D84
.L0807B50C:
	ldrh r4, [r5]
	adds r4, #0x10
	ldrh r0, [r5]
	movs r1, #0xc
	bl __udivsi3
	subs r4, r4, r0
	strh r4, [r5]
	lsls r4, r4, #0x10
	lsrs r7, r4, #0x13
	movs r0, #0
	rsbs r1, r7, #0
	str r1, [sp]
.L0807B526:
	adds r1, r0, #1
	mov ip, r1
	cmp r7, #0
	beq .L0807B56C

	ldr r3, .L0807B59C @ =gUnk_0200E8A4

	adds r2, r0, #0
	adds r2, #0xa
	lsls r2, r2, #6

	ldr r1, [sp]
	adds r1, #0xd @ off2 = -_scroll_timer + 13

	lsls r4, r0, #6

	ldr r0, .L0807B598 @ =gBg1Tm
	mov sl, r0
	ldr r0, .L0807B594 @ =gBg0Tm
	mov sb, r0

	adds r6, r7, #0
	lsls r1, r1, #1 @ off2 * 2
	adds r0, r4, r3
	adds r5, r1, r0
	adds r2, r2, r3
	adds r2, r1, r2
.L0807B550:
	mov r0, sl
	adds r1, r4, r0
	ldrh r0, [r2]
	strh r0, [r1]
	mov r0, sb
	adds r1, r4, r0
	ldrh r0, [r5]
	strh r0, [r1]
	adds r5, #2
	adds r2, #2
	adds r4, #2
	subs r6, #1
	cmp r6, #0
	bne .L0807B550
.L0807B56C:
	mov r0, ip
	cmp r0, #7
	ble .L0807B526
	movs r0, #3
	bl EnableBgSync
	cmp r7, #0xc
	ble .L0807B582
	mov r0, r8
	bl Proc_Break
.L0807B582:
	add sp, #4
	pop {r3, r4, r5}
	mov r8, r3
	mov sb, r4
	mov sl, r5
	pop {r4, r5, r6, r7}
	pop {r0}
	bx r0
	.align 2, 0
.L0807B594: .4byte gBg0Tm
.L0807B598: .4byte gBg1Tm
.L0807B59C: .4byte gUnk_0200E8A4
