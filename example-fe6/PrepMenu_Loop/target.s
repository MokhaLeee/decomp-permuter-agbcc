	.syntax unified

	.align	2, 0
	.globl	PrepMenu_Loop
	.type	 PrepMenu_Loop,function
	.thumb_func
PrepMenu_Loop: @ 0x0807AD78
	push {r4, r5, r6, r7, lr}
	mov r7, sl
	mov r6, sb
	mov r5, r8
	push {r5, r6, r7}
	sub sp, #0xc
	adds r6, r0, #0

	adds r0, #0x35
	ldrb r2, [r0]
	subs r0, #2
	adds r0, r0, r2
	ldrb r0, [r0]
	str r0, [sp]
	str r2, [sp, #4]

	adds r5, r6, #0
	adds r5, #0x29
	ldrb r4, [r5]

	cmp r4, #0
	beq .L0807ADA6
	cmp r4, #1
	bne .L0807ADA4
	b .L0807AF30
.L0807ADA4:
	b .L0807B0BC
.L0807ADA6:
	adds r0, r6, #0
	adds r0, #0x3d
	ldrb r1, [r0]
	mov sb, r0
	ldr r2, .L0807ADCC @ =gKeySt
	cmp r1, #0
	beq .L0807ADD0
	ldr r1, [r2]
	movs r0, #0x81
	lsls r0, r0, #1
	ldrh r1, [r1, #8]
	ands r0, r1
	cmp r0, #0
	beq .L0807ADD0
	bl CloseHelpBox
	mov r0, sb
	strb r4, [r0]
	b .L0807B0BC
	.align 2, 0
.L0807ADCC: .4byte gKeySt
.L0807ADD0:
	ldr r1, [r2]
	ldrh r3, [r1, #8]
	movs r0, #1
	ands r0, r3
	cmp r0, #0
	beq .L0807AE0C
	mov r1, sb
	ldrb r0, [r1]
	adds r4, r6, #0
	adds r4, #0x35
	cmp r0, #0
	bne .L0807AECC
	adds r0, r6, #0
	bl PrepMenuOnSelected
	lsls r0, r0, #0x18
	cmp r0, #0
	bne .L0807AECC
	ldr r0, .L0807AE08 @ =gPlaySt
	ldrb r0, [r0, #0x1d]
	lsls r0, r0, #0x1e
	cmp r0, #0
	blt .L0807AECC
	movs r0, #0x6c
	bl m4aSongNumStart
	b .L0807AECC
	.align 2, 0
.L0807AE08: .4byte gPlaySt
.L0807AE0C:
	movs r0, #0x80
	lsls r0, r0, #1
	ands r0, r3
	cmp r0, #0
	beq .L0807AE2A
	mov r2, sb
	ldrb r0, [r2]
	adds r4, r6, #0
	adds r4, #0x35
	cmp r0, #0
	bne .L0807AECC
	adds r0, r6, #0
	bl PrepMenuHelpbox
	b .L0807AECC
.L0807AE2A:
	ldrh r1, [r1, #6]
	movs r0, #0x40
	mov ip, r0
	ands r0, r1
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
	mov r8, r0
	cmp r0, #0
	beq .L0807AE6E
	adds r0, r6, #0
	adds r0, #0x35
	ldrb r5, [r0]
	adds r7, r6, #0
	adds r7, #0x33
	adds r2, r7, r5
	ldrb r1, [r2]
	adds r4, r0, #0
	cmp r1, #0
	beq .L0807AE56
	subs r0, r1, #1
	strb r0, [r2]
	b .L0807AECC
.L0807AE56:
	mov r0, ip
	ands r0, r3
	cmp r0, #0
	beq .L0807AECC
	adds r0, r5, #0
	bl GetPrepMenuItemAmount
	ldrb r2, [r4]
	adds r1, r2, r7
	subs r0, #1
	strb r0, [r1]
	b .L0807AECC
.L0807AE6E:
	movs r0, #0x80
	mov sl, r0
	ands r0, r1
	cmp r0, #0
	beq .L0807AEBA
	adds r4, r6, #0
	adds r4, #0x35
	ldrb r0, [r4]
	adds r7, r6, #0
	adds r7, #0x33
	adds r1, r7, r0
	ldrb r5, [r1]
	str r2, [sp, #8]
	bl GetPrepMenuItemAmount
	lsls r0, r0, #0x18
	lsrs r0, r0, #0x18
	subs r0, #1
	ldr r2, [sp, #8]
	cmp r5, r0
	bge .L0807AEA4
	ldrb r2, [r4]
	adds r1, r2, r7
	ldrb r0, [r1]
	adds r0, #1
	strb r0, [r1]
	b .L0807AECC
.L0807AEA4:
	ldr r1, [r2]
	mov r0, sl
	ldrh r1, [r1, #8]
	ands r0, r1
	cmp r0, #0
	beq .L0807AECC
	ldrb r1, [r4]
	adds r0, r1, r7
	mov r2, r8
	strb r2, [r0]
	b .L0807AECC
.L0807AEBA:
	movs r0, #2
	ands r0, r3
	adds r4, r6, #0
	adds r4, #0x35
	cmp r0, #0
	beq .L0807AECC
	adds r0, r6, #0
	bl func_fe6_0807AC9C
.L0807AECC:
	adds r1, r4, #0
	ldr r0, [sp, #4]
	ldrb r2, [r1]
	cmp r0, r2
	beq .L0807AED8
	b .L0807B0BC
.L0807AED8:
	adds r0, r6, #0
	adds r0, #0x33
	adds r0, r2, r0
	ldr r1, [sp]
	ldrb r0, [r0]
	cmp r1, r0
	bne .L0807AEE8
	b .L0807B0BC
.L0807AEE8:
	mov r2, sb
	ldrb r0, [r2]
	cmp r0, #0
	beq .L0807AEF6
	adds r0, r6, #0
	bl PrepMenuHelpbox
.L0807AEF6:
	ldrb r4, [r4]
	cmp r4, #1
	bne .L0807AF18
	ldr r4, [r6, #0x50]
	adds r0, r6, #0
	adds r0, #0x34
	ldrb r0, [r0]
	movs r1, #1
	bl func_fe6_0807CF2C
	adds r1, r0, #0
	lsls r1, r1, #0x18
	lsrs r1, r1, #0x18
	subs r1, #5
	adds r0, r4, #0
	bl func_fe6_0807B8B0
.L0807AF18:
	ldr r0, .L0807AF2C @ =gPlaySt
	ldrb r0, [r0, #0x1d]
	lsls r0, r0, #0x1e
	cmp r0, #0
	bge .L0807AF24
	b .L0807B0BC
.L0807AF24:
	movs r0, #0x66
	bl m4aSongNumStart
	b .L0807B0BC
	.align 2, 0
.L0807AF2C: .4byte gPlaySt
.L0807AF30:
	ldr r7, .L0807AF60 @ =gKeySt
	ldr r0, [r7]
	ldrh r1, [r0, #8]
	adds r3, r1, #0
	ands r3, r4
	cmp r3, #0
	beq .L0807AF68
	adds r0, r6, #0
	bl PrepMenuOnSelected
	lsls r0, r0, #0x18
	cmp r0, #0
	beq .L0807AF4C
	b .L0807B0BC
.L0807AF4C:
	ldr r0, .L0807AF64 @ =gPlaySt
	ldrb r0, [r0, #0x1d]
	lsls r0, r0, #0x1e
	cmp r0, #0
	bge .L0807AF58
	b .L0807B0BC
.L0807AF58:
	movs r0, #0x6c
	bl m4aSongNumStart
	b .L0807B0BC
	.align 2, 0
.L0807AF60: .4byte gKeySt
.L0807AF64: .4byte gPlaySt
.L0807AF68:
	movs r4, #2
	adds r0, r4, #0
	ands r0, r1
	cmp r0, #0
	beq .L0807B010
	adds r0, r2, #0
	cmp r0, #0
	bne .L0807AFB6

	ldr r0, .L0807AFA8 @ =gBg0Tm+0x28
	movs r1, #0xa
	movs r2, #3
	movs r3, #0
	bl TmFillRect_thm
	movs r0, #1
	bl EnableBgSync
	adds r1, r6, #0
	adds r1, #0x3c
	adds r0, r4, #0
	ldrb r2, [r1]
	ands r0, r2
	strb r0, [r1]
	adds r2, r6, #0
	adds r2, #0x31
	ldrb r1, [r2]
	adds r0, r1, #0
	cmp r0, #0xff
	beq .L0807AFAC
	movs r0, #0xff
	strb r0, [r2]
	b .L0807AFF8
	.align 2, 0
.L0807AFA8: .4byte gBg0Tm+0x28
.L0807AFAC:
	adds r0, r6, #0
	movs r1, #0xa
	bl Proc_Goto
	b .L0807AFF8
.L0807AFB6:
	cmp r0, #1
	bne .L0807AFF8
	strb r3, [r5]
	ldr r4, [r6, #0x50]
	adds r0, r6, #0
	adds r0, #0x34
	ldrb r0, [r0]
	movs r1, #1
	bl func_fe6_0807CF2C
	adds r1, r0, #0
	lsls r1, r1, #0x18
	lsrs r1, r1, #0x18
	subs r1, #5
	adds r0, r4, #0
	bl func_fe6_0807B8B0
	adds r0, r6, #0
	bl func_fe6_08079A94
	adds r1, r6, #0
	adds r1, #0x30
	ldrb r0, [r1]
	adds r2, r6, #0
	adds r2, #0x32
	strb r0, [r2]
	adds r0, r6, #0
	adds r0, #0x31
	ldrb r0, [r0]
	strb r0, [r1]
	adds r0, r6, #0
	bl func_fe6_080798EC
.L0807AFF8:
	ldr r0, .L0807B00C @ =gPlaySt
	ldrb r0, [r0, #0x1d]
	lsls r0, r0, #0x1e
	cmp r0, #0
	blt .L0807B0BC
	movs r0, #0x6b
	bl m4aSongNumStart
	b .L0807B0BC
	.align 2, 0
.L0807B00C: .4byte gPlaySt
.L0807B010:
	adds r0, r6, #0
	bl PrepUnitSel_Loop
	lsls r0, r0, #0x18
	lsrs r1, r0, #0x18
	cmp r0, #0
	beq .L0807B040
	lsls r0, r1, #0x18
	asrs r4, r0, #0x18
	movs r0, #1
	rsbs r0, r0, #0
	cmp r4, r0
	bne .L0807B032
	adds r0, r6, #0
	movs r1, #7
	bl Proc_Goto
.L0807B032:
	cmp r4, #1
	bne .L0807B0BC
	adds r0, r6, #0
	movs r1, #8
	bl Proc_Goto
	b .L0807B0BC
.L0807B040:
	ldr r1, [r7]
	movs r0, #0x80
	lsls r0, r0, #1
	ldrh r1, [r1, #8]
	ands r0, r1
	cmp r0, #0
	beq .L0807B06E
	adds r1, r6, #0
	adds r1, #0x3c
	movs r0, #3
	ldrb r1, [r1]
	ands r0, r1
	cmp r0, #3
	beq .L0807B06E
	adds r1, r6, #0
	adds r1, #0x3b
	movs r0, #6
	strb r0, [r1]
	adds r0, r6, #0
	movs r1, #3
	bl Proc_Goto
	b .L0807B0BC
.L0807B06E:
	ldr r0, .L0807B0CC @ =gKeySt
	ldr r1, [r0]
	movs r0, #4
	ldrh r1, [r1, #8]
	ands r0, r1
	cmp r0, #0
	beq .L0807B0BC
	adds r0, r6, #0
	adds r0, #0x35
	ldrb r0, [r0]
	cmp r0, #1
	beq .L0807B0BC
	ldr r2, .L0807B0D0 @ =gUnk_0200E7D8
	ldr r1, .L0807B0D4 @ =gPrepUnitList
	adds r0, r6, #0
	adds r0, #0x30
	ldrb r0, [r0]
	lsls r0, r0, #2
	adds r0, r0, r1
	ldr r0, [r0]
	ldr r0, [r0]
	ldrb r0, [r0, #4]
	str r0, [r2]
	ldr r0, .L0807B0D8 @ =gPlaySt
	ldrb r0, [r0, #0x1d]
	lsls r0, r0, #0x1e
	cmp r0, #0
	blt .L0807B0AC
	movs r0, #0x6a
	bl m4aSongNumStart
.L0807B0AC:
	adds r1, r6, #0
	adds r1, #0x3b
	movs r0, #9
	strb r0, [r1]
	adds r0, r6, #0
	movs r1, #0xd
	bl Proc_Goto
.L0807B0BC:
	add sp, #0xc
	pop {r3, r4, r5}
	mov r8, r3
	mov sb, r4
	mov sl, r5
	pop {r4, r5, r6, r7}
	pop {r0}
	bx r0
	.align 2, 0
.L0807B0CC: .4byte gKeySt
.L0807B0D0: .4byte gUnk_0200E7D8
.L0807B0D4: .4byte gPrepUnitList
.L0807B0D8: .4byte gPlaySt
