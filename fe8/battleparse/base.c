#include "include.h"

void ParseBattleHitToBanimCmd(void)
{
    s16 * anim_round;
    u32 i;
    s16 r3;
    s16 new_hp;
    u16 distance;
    u32 distance_r4;
    s16 * anim_round_r4;
    u16 * round_l;
    s16 * anim_round_round_l;
    struct Unit * unit_r6;
    struct BattleHit * hit = gBattleHitArray;
    u16 * round_r, efxhp_loffset, efxhp_roffset;
    u16 round_buf[2];
    struct BattleUnit * bul_sp04;
    struct BattleUnit * bur_sp08;
    int round_sp0C, ret_sp10;
    u32 distance_sp14, distance_sp18, distance_sp1C;

    for (i = 0; i < 0x14; i++)
        gAnimRoundData[i] = gAnimRoundData[i] | 0xFFFF;

    for (i = 0; i < 0x14; i++)
        gEfxHpLut[2 + i] = gEfxHpLut[2 + i] | 0xFFFF;

    gpEkrTriangleUnits[1] = NULL;
    gpEkrTriangleUnits[0] = NULL;

    if (gEkrDistanceType == EKR_DISTANCE_PROMOTION)
    {
        gAnimRoundData[0] = 4;
        gAnimRoundData[1] = 4;
        return;
    }

    if (gBattleStats.config & 0x40)
    {
        gAnimRoundData[0] = 0x6;
        gAnimRoundData[1] = 0x0;
        return;
    }

    /* _08058274 */
    distance = gEkrDistanceType;
    distance_sp14 = distance;
    distance_sp18 = distance;
    bul_sp04 = gpEkrBattleUnitLeft;
    bur_sp08 = gpEkrBattleUnitRight;

    if (GetItemIndex(bul_sp04->weaponBefore) == 0x11 && distance == 0)
        distance_sp14 = 1;
    if (GetItemIndex(bur_sp08->weaponBefore) == 0x11 && distance_sp18 == 0)
        distance_sp18 = 1;

    if (GetItemIndex(bul_sp04->weaponBefore) == 0x28 && distance_sp14 == 0)
        distance_sp14 = 1;
    if (GetItemIndex(bur_sp08->weaponBefore) == 0x28 && distance_sp18 == 0)
        distance_sp18 = 1;

    if (GetItemIndex(bul_sp04->weaponBefore) == 0x29 && distance_sp14 == 0)
        distance_sp14 = 1;
    if (GetItemIndex(bur_sp08->weaponBefore) == 0x29 && distance_sp18 == 0)
        distance_sp18 = 1;

    if (GetItemIndex(bul_sp04->weaponBefore) == 0x2C && distance_sp14 == 0)
        distance_sp14 = 1;
    if (GetItemIndex(bur_sp08->weaponBefore) == 0x2C && distance_sp18 == 0)
        distance_sp18 = 1;

    /* _08058332 */
    gEfxHpLut[0] = gEkrGaugeHp[0];
    gEfxHpLut[1] = gEkrGaugeHp[1];

    round_sp0C = 0;
    efxhp_roffset = 0;
    efxhp_loffset = 0;

    for (; 0 == (hit->info & BATTLE_HIT_INFO_END); hit++, round_sp0C++)
    {
        if (hit->info & BATTLE_HIT_INFO_RETALIATION)
            ret_sp10 = true;
        else
            ret_sp10 = false;

        if (gEkrInitialPosition[POS_L] == ret_sp10)
        {
            round_l = &round_buf[POS_L];
            round_r = &round_buf[POS_R];
            distance_r4 = distance_sp14;
            distance_sp1C = distance_sp18;
            unit_r6 = &bul_sp04->unit;
            r3 = 0;

            if (round_sp0C == 0)
                gEkrInitialHitSide = POS_L;
        }
        else
        {
            /* _08058398 */
            round_l = &round_buf[POS_R];
            round_r = &round_buf[POS_L];
            distance_r4 = distance_sp18;
            distance_sp1C = distance_sp14;
            unit_r6 = &bur_sp08->unit;
            r3 = 0;

            if (round_sp0C == 0)
                gEkrInitialHitSide = POS_R;
        }

        /* _080583B4 */
        if (hit->attributes & BATTLE_HIT_ATTR_TATTACK)
        {
            gpEkrTriangleUnits[0] = gBattleStats.taUnitA;
            gpEkrTriangleUnits[1] = gBattleStats.taUnitB;
        }

        /* _080583D0 */
        if (hit->attributes & BATTLE_HIT_ATTR_CRIT)
        {
            if (!UnitHasMagicRank(unit_r6))
                *round_l = gUnknown_080DAEA0[(s16)distance_r4];
            else
                *round_l = gUnknown_080DAEC8[(s16)distance_r4];
        }
        else if (hit->attributes & BATTLE_HIT_ATTR_SILENCER)
        {
            if (!UnitHasMagicRank(unit_r6))
                *round_l = gUnknown_080DAEA0[(s16)distance_r4];
            else
                *round_l = gUnknown_080DAEC8[(s16)distance_r4];
        }
        else if (r3 >= 0)
        {
            if (!UnitHasMagicRank(unit_r6))
                *round_l = gUnknown_080DAE8C[(s16)distance_r4];
            else
                *round_l = gUnknown_080DAEBE[(s16)distance_r4];
        }
        else
        {
            switch (sub_80716B0(2)) {
            case 0:
                *round_l = gUnknown_080DAED2[(s16)distance_r4];
                break;

            case 1:
                *round_l = gUnknown_080DAEDC[(s16)distance_r4];
                break;

            case 2:
                *round_l = gUnknown_080DAEE6[(s16)distance_r4];
                break;

            default:
                break;
            }
        }
        round_r++; round_r--;
        /* _0805848C */
        if (hit->attributes & BATTLE_HIT_ATTR_MISS)
        {
            if (!UnitHasMagicRank(unit_r6))
                *round_l = gUnknown_080DAE96[(s16)distance_r4];
            else
                *round_l = gUnknown_080DAEBE[(s16)distance_r4];

            *round_r = gUnknown_080DAEAA[(s16)distance_sp1C];
        }
        else
        {
            *round_r = gUnknown_080DAEB4[(s16)distance_sp1C];
        }
        /* _080584EC */
        anim_round = gAnimRoundData;
        anim_round_round_l = anim_round + round_sp0C * 2;
        *anim_round_round_l = round_buf[0];
        anim_round_r4 = anim_round + (round_sp0C * 2 + 1);
        *anim_round_r4 = round_buf[1];

        if (0 == (hit->attributes & BATTLE_HIT_ATTR_MISS))
        {
            if (hit->attributes & BATTLE_HIT_ATTR_DEVIL)
            {
                if (gEkrInitialPosition[POS_L] == ret_sp10)
                {
                    new_hp = GetEfxHp(efxhp_loffset * 2) - hit->hpChange;
                    if (new_hp < 0)
                        new_hp = 0;

                    efxhp_loffset = efxhp_loffset + 1;
                    gEfxHpLut[efxhp_loffset * 2] = new_hp;
                    *anim_round_round_l = (u32)*anim_round_round_l | ((s16)0x8000);
                }
                else
                {
                    new_hp = GetEfxHp(efxhp_roffset * 2 + 1) - hit->hpChange;
                    if (new_hp < 0)
                        new_hp = 0;

                    efxhp_roffset = efxhp_roffset + 1;
                    gEfxHpLut[efxhp_roffset * 2 + 1] = new_hp;
                    *anim_round_r4 = (u32)*anim_round_r4 | ((s16)0x8000);
                }
            }
            /* _080585B4 */
            else if (hit->attributes & BATTLE_HIT_ATTR_HPSTEAL)
            {
                if (gEkrInitialPosition[POS_L] == ret_sp10)
                {
                    new_hp = GetEfxHp(efxhp_roffset * 2 + 1) - hit->hpChange;
                    if (new_hp < 0)
                        new_hp = 0;

                    efxhp_roffset = efxhp_roffset + 1;
                    gEfxHpLut[efxhp_roffset * 2 + 1] = new_hp;

                    new_hp = GetEfxHp(efxhp_loffset * 2) + hit->hpChange;
                    if (new_hp > gEkrPairMaxHP[POS_L])
                        new_hp = gEkrPairMaxHP[POS_L];

                    efxhp_loffset = efxhp_loffset + 1;
                    gEfxHpLut[efxhp_loffset * 2] = new_hp;
                }
                else
                {
                    new_hp = GetEfxHp(efxhp_loffset * 2) - hit->hpChange;
                    if (new_hp < 0)
                        new_hp = 0;

                    efxhp_loffset = efxhp_loffset + 1;
                    gEfxHpLut[efxhp_loffset * 2] = new_hp;

                    new_hp = GetEfxHp(efxhp_roffset * 2 + 1) + hit->hpChange;
                    if (new_hp > gEkrPairMaxHP[POS_R])
                        new_hp = gEkrPairMaxHP[POS_R];

                    efxhp_roffset = efxhp_roffset + 1;
                    gEfxHpLut[efxhp_roffset * 2 + 1] = new_hp;
                }
            }
            /* _080586A0 */
            else
            {
                if (gEkrInitialPosition[POS_L] == ret_sp10)
                {
                    new_hp = GetEfxHp(efxhp_roffset * 2 + 1) - hit->hpChange;
                    if (new_hp < 0)
                        new_hp = 0;

                    efxhp_roffset = efxhp_roffset + 1;
                    gEfxHpLut[efxhp_roffset * 2 + 1] = new_hp;

                    if (hit->attributes & 0x40)
                        *anim_round_r4 |= 0x2000;

                    if (hit->attributes & 0x800)
                        *anim_round_round_l |= 0x1000;

                    if (hit->attributes & 0x4000)
                        *anim_round_round_l |= 0x800;

                    if (hit->attributes & 0x10000)
                        *anim_round_round_l |= 0x200;

                    if (hit->attributes & 0x8000)
                        *anim_round_round_l |= 0x400;
                }
                /* _0805876C */
                else
                {
                    new_hp = GetEfxHp(efxhp_loffset * 2) - hit->hpChange;
                    if (new_hp < 0)
                        new_hp = 0;

                    efxhp_loffset = efxhp_loffset + 1;
                    gEfxHpLut[efxhp_loffset * 2] = new_hp;

                    if (hit->attributes & 0x40)
                        *anim_round_round_l |= 0x2000;

                    if (hit->attributes & 0x800)
                        *anim_round_r4 |= 0x1000;

                    if (hit->attributes & 0x4000)
                        *anim_round_r4 |= 0x800;

                    if (hit->attributes & 0x10000)
                        *anim_round_r4 |= 0x200;

                    if (hit->attributes & 0x8000)
                        *anim_round_r4 |= 0x400;
                }
            }
        }
    }
}
