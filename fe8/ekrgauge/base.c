#include "include.h"

#define gBG0TilemapBuffer2D ((u16 (*)[1])gBG0TilemapBuffer)

void ekrGaugeMain(struct ProcEkrGauge * proc)
{
    struct Anim AStack_130;
    u16 auStack_e8[12];
    u16 local_d0[4];
    struct AnimSpriteData auStack_c8[8];
    s16 r7_;
    s16 r6_;
    s16 r8_;
    s16 sp_d4;
    int spD8;
    int spDC;
    int x;
    int y;
    int clk;
    s16 uVar8;
    s16 sVar16;
    s16 sVar5;
    s16 uVar15;

    spD8 = 0;
    clk = DivRem(GetGameClock() / 8, 3);

    if (proc->valid == 1)
        return;

    if (proc->battle_init == 0) {
        s16 r4;
        int r6, r7, r8, r9;

        r4 = proc->unk3A >> 3;
        r7 = (r4 << 5) + 0x1A0;

        if (r7 < 0)
            r7 = 0;

        r6 = r4 + 7;
        if (r6 > 7)
            r6 = 7;

        r8 = (7 - r6) * 30;

        switch (gEkrDistanceType) {
            case 0:
            case 1:
            case 2:
                r9 = 0;
                spDC = 15;

                break;

            case 3:
            case 4:
            default:
                spDC = 8;
                r9 = 8;

                break;
        }

        FillBGRect(gBG0TilemapBuffer + 0x1A0, 30, 8, 0, 0x80);

        if (0 == proc->unk4C) {
            EfxTmCpyBG(gUnknown_08802274 + r8, &gBG0TilemapBuffer2D[r7][r9], 15, r6, -1, -1);
            sub_8070D04(&gBG0TilemapBuffer2D[r7][r9], 15, r6, 2, 0x80);
        }

        if (0 == proc->unk50) {
            void *ptr;
            
            if (0 == proc->unk4C)
                ptr = gUnknown_08802348 + r8;
            else
                ptr = gUnknown_08802428 + r8;

            EfxTmCpyBG(ptr, &gBG0TilemapBuffer2D[r7][spDC], 16, r6, -1, -1);
            sub_8070D04(&gBG0TilemapBuffer2D[r7][spDC], 16, r6, 3, 128);
        }

        BG_EnableSyncByMask(1);
    }

    if (gEkrGaugeHpBak[0] != gEkrGaugeHp[0])
        spD8 = 1;

    if (gEkrGaugeHpBak[1] != gEkrGaugeHp[1])
        spD8 = 1;

    gEkrGaugeHpBak[0] = gEkrGaugeHp[0];
    gEkrGaugeHpBak[1] = gEkrGaugeHp[1];

    r7_ = gEkrGaugeHp[0];
    r6_ = gBanimMaxHP[0];
    r8_ = gEkrGaugeHp[1];
    sp_d4 = gBanimMaxHP[1];

    switch (gEkrDistanceType) {
        case 3:
            if (gUnknown_0203E104[0] == 1) {
                x = proc->unk32 + 0x38;
            } else {
                x = proc->unk32 - 0x38;
            }
            break;

        case 0:
        case 1:
        case 2:
            x = proc->unk32;
            break;

        case 4:
        default:
            x = proc->unk32 - 0x38;
            break;
    }


    if (proc->battle_init == 0) {
        y = proc->unk3A & 0xFFF8;
    } else {
        y = proc->unk3A;
    }

    local_d0[0] = Div(gEkrGaugeHp[0], 10);
    local_d0[1] = gEkrGaugeHp[0] - local_d0[0] * 10;

    if (local_d0[0] == 0) {
        local_d0[0] = 0xb;
    }

    local_d0[2] = Div(gEkrGaugeHp[1], 10);
    local_d0[3] = gEkrGaugeHp[1] - local_d0[2] * 10;

    if (local_d0[2] == 0) {
        local_d0[2] = 0xb;
    }

    if (gEkrGaugeHp[0] > 0x50) {
        local_d0[0] = 0xc;
        local_d0[1] = 0xc;
    }

    if (gEkrGaugeHp[1] > 0x50) {
        local_d0[2] = 0xc;
        local_d0[3] = 0xc;
    }

    if (spD8 == 1) {
        int i;
        int j;

        CpuFastFill(0, gUnk_Banim_02016DC8, 0x80);

        for (i = 0; i < 2; i++) {
            for (j = 0; j < 2; j++) {
                CpuCopy16(
                    gUnknown_088026E4 + local_d0[i * 2 + j] * 0x10,
                    gUnk_Banim_02016DC8 + ((i * 0x20) + (j * 0x10)),
                    0x20
                );
            }
        }

        RegisterDataMove(gUnk_Banim_02016DC8 + 0x00, (void *)0x060139C0, 0x40);
        RegisterDataMove(gUnk_Banim_02016DC8 + 0x20, (void *)0x06013DC0, 0x40);
    }

    AStack_130.oam2Base = 0x0000B1CE;
    AStack_130.oam2Base |= proc->unk44;
    
    AStack_130.xPosition = x + 9;
    AStack_130.yPosition = y + 0x91;
    AStack_130.state2 = 0;

    if (EkrEfxIsUnitHittedNow(0) != 1) {
        AStack_130.pSpriteData = gUnknown_085B940C;
        AStack_130.oamBase = 0;
    } else {
        AStack_130.pSpriteData = auStack_c8;
        AStack_130.oamBase = 0x200;
        AStack_130.xPosition = AStack_130.xPosition - 8;
        AStack_130.yPosition = AStack_130.yPosition - 8;
        BanimUpdateSpriteRotScale(gUnknown_085B940C, auStack_c8, 0x100, 0x80, 1);
    }

    if (proc->unk4C == 0) {
        AnimDisplay(&AStack_130);
    }

    AStack_130.oamBase = 0;
    
    AStack_130.oam2Base = 0x0000C1EE;
    AStack_130.oam2Base |= proc->unk44;
    
    AStack_130.xPosition = x + 0x81;
    AStack_130.yPosition = y + 0x91;
    AStack_130.state2 = 0;

    if (EkrEfxIsUnitHittedNow(1) != 1) {
        AStack_130.pSpriteData = gUnknown_085B940C;
        AStack_130.oamBase = 0;
    } else {
        AStack_130.pSpriteData = auStack_c8;
        AStack_130.oamBase = 0x200;
        AStack_130.xPosition = AStack_130.xPosition - 8;
        AStack_130.yPosition = AStack_130.yPosition - 8;
        BanimUpdateSpriteRotScale(gUnknown_085B940C, auStack_c8, 0x100, 0x80, 1);
    }

    if (proc->unk50 == 0) {
        AnimDisplay(&AStack_130);
    }

    uVar15 = (r7_ - 0x28);
    uVar8 = (r6_ - 0x28);
    sVar16 = (r7_);
    sVar5 = (r6_);
        
    if (uVar15 > 0x28) {
        uVar15 = 0x28;
    }
    
    if (uVar8 > 0x28) {
        uVar8 = 0x28;
    }
    
    if ((uVar15) < 0) {
        uVar15 = 0;
    }
    
    if ((uVar8) < 0) {
        uVar8 = 0;
    }
    
    if ((sVar16) > 0x28) {
        sVar16 = 0x28;
    }
    
    if (sVar5 > 0x28) {
        sVar5 = 0x28;
    }

    AStack_130.oam2Base = 0xb000;
    AStack_130.oam2Base |= proc->unk44;
    
    AStack_130.oamBase = 0;
    AStack_130.xPosition = x + 0x1d;
    AStack_130.pSpriteData = gUnknown_085B93D0;

    if (proc->unk4C == 0) {
        if (uVar8 != 0) {
            sub_8071068(auStack_e8, uVar15, uVar8);
            if (spD8 == 1) {
                sub_8050E40(auStack_e8, gUnk_Banim_02016E48);
            }
            
            AStack_130.yPosition = y + 0x8e;
            AStack_130.oam2Base &= 0xfc00;
            AStack_130.oam2Base |= 0;
            AStack_130.state2 = 0;
            
            AnimDisplay(&AStack_130);
        }
        
        sub_8071068(auStack_e8, sVar16, sVar5);
        
        if (spD8 == 1) {
            sub_8050E40(auStack_e8, gUnk_Banim_02017248);
        }

        if (uVar8 != 0) {
            AStack_130.yPosition = y + 0x95;
        } else {
            AStack_130.yPosition = y + 0x91;
        }

        AStack_130.oam2Base &= 0xfc00;
        AStack_130.oam2Base |= 0x20;
        AStack_130.state2 = 0;
        
        AnimDisplay(&AStack_130);
    }

    uVar15 = (r8_ - 0x28);
    uVar8 = (sp_d4 - 0x28);
    sVar16 = (r8_);
    sVar5 = (sp_d4);
    
    if (uVar15 > 0x28) {
        uVar15 = 0x28;
    }

    if (uVar8 > 0x28) {
        uVar8 = 0x28;
    }
    
    if ((uVar15) < 0) {
        uVar15 = 0;
    }
    
    if ((uVar8) < 0) {
        uVar8 = 0;
    }
    
    if (sVar16 > 0x28) {
        sVar16 = 0x28;
    }
    
    if (sVar5 > 0x28) {
        sVar5 = 0x28;
    }

    AStack_130.oam2Base = 0xc000;
    AStack_130.oam2Base |= proc->unk44;
    
    AStack_130.oamBase = 0;
    AStack_130.xPosition = x + 0x95;
    AStack_130.pSpriteData = gUnknown_085B93D0;

    if (proc->unk50 == 0) {
        if (uVar8 != 0) {
            sub_8071068(auStack_e8, uVar15, uVar8);
            if (spD8 == 1) {
                sub_8050E40(auStack_e8, gUnk_Banim_02017048);
            }
            
            AStack_130.yPosition = y + 0x8e;
            AStack_130.oam2Base &= 0xfc00;
            AStack_130.oam2Base |= 0x10;
            AStack_130.state2 = 0;
            
            AnimDisplay(&AStack_130);
        }

        sub_8071068(auStack_e8, sVar16, sVar5);
        
        if (spD8 == 1) {
            sub_8050E40(auStack_e8, gUnk_Banim_02017448);
        }
        
        if (uVar8 != 0) {
            AStack_130.yPosition = y + 0x95;
        } else {
            AStack_130.yPosition = y + 0x91;
        }
        
        AStack_130.oam2Base &= 0xfc00;
        AStack_130.oam2Base |= 0x30;
        AStack_130.state2 = 0;
        
        AnimDisplay(&AStack_130);
    }

    if (spD8 == 1) {
        RegisterDataMove((void *)gUnk_Banim_02016E48, (void *)0x06013000, 0x800);
    }

    if (proc->unk4C == 0) {
        AStack_130.oamBase = 0;
        AStack_130.pSpriteData = gUnknown_085B9424;
        AStack_130.oam2Base = 0x0000B1D0;
        AStack_130.oam2Base |= proc->unk44;
        
        AStack_130.xPosition = x + 0x12;
        AStack_130.yPosition = y + 0x70;
        AStack_130.state2 = 0;
        AnimDisplay(&AStack_130);
        AStack_130.oamBase = 0;
        
        AStack_130.pSpriteData = gUnknown_085B949C;
        AStack_130.oam2Base = 0x0000B1C0;
        AStack_130.oam2Base |= proc->unk44;
        
        AStack_130.xPosition = x + 0x65;
        AStack_130.yPosition = y + 0x78;
        AStack_130.state2 = 0;
        AnimDisplay(&AStack_130);
    }

    if (proc->unk50 == 0) {
        AStack_130.oamBase = 0;
        AStack_130.pSpriteData = gUnknown_085B9424;
        AStack_130.oam2Base = 0x0000C1F0;
        AStack_130.oam2Base |= proc->unk44;
        
        AStack_130.xPosition = x + 0xd8;
        AStack_130.yPosition = y + 0x70;
        AStack_130.state2 = 0;
        AnimDisplay(&AStack_130);

        AStack_130.oamBase = 0;
        AStack_130.pSpriteData = gUnknown_085B94F0;
        AStack_130.oam2Base = 0x0000C1C0;
        AStack_130.oam2Base |= proc->unk44;
        
        AStack_130.xPosition = x + 0x87;
        AStack_130.yPosition = y + 0x78;
        AStack_130.state2 = 0;
        AnimDisplay(&AStack_130);
    }

    if (proc->unk4C == 0) {
        AStack_130.oamBase = 0;
        if (gBanimWtaBonus[0] != 0) {
            sub_8051238((void*)&AStack_130, gBanimWtaBonus[0], clk);
            AStack_130.oam2Base = 0x1ca;
            AStack_130.oam2Base |= proc->unk44;
            
            AStack_130.xPosition = x + 0x36;
            AStack_130.yPosition = y + 0x79;
            AStack_130.state2 = 0;
            AnimDisplay(&AStack_130);
        }

        AStack_130.pSpriteData = gUnknown_085B9544;
        AStack_130.oam2Base = 0x0000D1DC;
        AStack_130.oam2Base |= proc->unk44;
        
        AStack_130.xPosition = x + 0x2c;
        AStack_130.yPosition = y + 0x79;
        AStack_130.state2 = 0;
        AnimDisplay(&AStack_130);
    }
    
    if (proc->unk50 == 0) {
        AStack_130.oamBase = 0;
        if (gBanimWtaBonus[1] != 0) {
            
            sub_8051238((void*)&AStack_130, gBanimWtaBonus[1], clk);
            AStack_130.oam2Base = 0x1ca;
            AStack_130.oam2Base |= proc->unk44;
            
            AStack_130.xPosition = x + 0x85;
            AStack_130.yPosition = y + 0x79;
            AStack_130.state2 = 0;
            AnimDisplay(&AStack_130);
        }
        
        AStack_130.pSpriteData = gUnknown_085B9544;
        AStack_130.oam2Base = 0x0000E1DE;
        AStack_130.oam2Base |= proc->unk44;
        
        AStack_130.xPosition = x + 0x7b;
        AStack_130.yPosition = y + 0x79;
        AStack_130.state2 = 0;
        AnimDisplay(&AStack_130);
    }

    return;
}
