#include "include.h"

void PrepMenu_Loop(struct PrepMenuProc * proc)
{
    int ret;
    int tmp;
    u8 pre_item = proc->unk_33[proc->unk_35];
    u8 pre_idx = proc->unk_35;

    switch (proc->unk_29) {
    case 0:
        if (proc->do_help && (gKeySt->pressed & (KEY_BUTTON_B | KEY_BUTTON_R)))
        {
            CloseHelpBox();
            proc->do_help = FALSE;
            return;
        }
        else
        {
            if (gKeySt->pressed & KEY_BUTTON_A)
            {
                if (proc->do_help == FALSE)
                {
                    if (PrepMenuOnSelected(proc) == FALSE)
                    {
                        PlaySe(0x6C);
                    }
                }
            }
            else if (gKeySt->pressed & KEY_BUTTON_R)
            {
                if (proc->do_help == FALSE)
                {
                    PrepMenuHelpbox(proc);
                }
            }
            else
            {
                if (gKeySt->repeated & KEY_DPAD_UP)
                {
                    if (proc->unk_33[proc->unk_35] != 0)
                        proc->unk_33[proc->unk_35]--;
                    else if (gKeySt->pressed & KEY_DPAD_UP)
                        proc->unk_33[proc->unk_35] = GetPrepMenuItemAmount(proc->unk_35) - 1;
                }
                else if (gKeySt->repeated & KEY_DPAD_DOWN)
                {
                    if (proc->unk_33[proc->unk_35] < GetPrepMenuItemAmount(proc->unk_35) - 1)
                        proc->unk_33[proc->unk_35]++;
                    else if (gKeySt->pressed & KEY_DPAD_DOWN)
                        proc->unk_33[proc->unk_35] = 0;
                }
                else if (gKeySt->pressed & KEY_BUTTON_B)
                    func_fe6_0807AC9C(proc);
            }
        }

        if (pre_idx == proc->unk_35)
        {
            if (pre_item != proc->unk_33[proc->unk_35])
            {
                if (proc->do_help != FALSE)
                    PrepMenuHelpbox(proc);
                if (proc->unk_35 == 1)
                    func_fe6_0807B8B0(proc->unk_50, func_fe6_0807CF2C(proc->unk_33[1], 1) - 5);
    
                PlaySe(0x66);
            }
        }
        break;

    case 1:
        if (gKeySt->pressed & KEY_BUTTON_A)
        {
            if (PrepMenuOnSelected(proc) == FALSE)
            {
                PlaySe(0x6C);
            }
        }
        else if (gKeySt->pressed & KEY_BUTTON_B)
        {
            register short _pre_idx;
            _pre_idx = pre_idx;
            if (_pre_idx == 0)
            {
                TmFillRect(gBg0Tm + TM_OFFSET(0x14, 0), 10, 3, 0);
                EnableBgSync(BG0_SYNC_BIT);

                proc->a_button_actions &= 2;
                if (proc->unk_31 != 0xFF)
                    proc->unk_31 = 0xFF;
                else
                    Proc_Goto(proc, 0xA);
            }
            else if (_pre_idx == 1)
            {
                proc->unk_29 = 0;
                func_fe6_0807B8B0(proc->unk_50, func_fe6_0807CF2C(proc->unk_33[1], 1) - 5);
                func_fe6_08079A94(proc);
                proc->unk_32 = proc->list_num_cur;
                proc->list_num_cur = proc->unk_31;
                func_fe6_080798EC(proc);
            }
            PlaySe(0x6B);
        }
        else
        {
            register unsigned char _ret;
            _ret = PrepUnitSel_Loop(proc);
            if (_ret != 0)
            {
                int __ret = (_ret << 0x18) >> 0x18;
                if (__ret == -1)
                    Proc_Goto(proc, 7);

                if (__ret == 1)
                    Proc_Goto(proc, 8);
            }
            else
            {
                if (gKeySt->pressed & KEY_BUTTON_R && (proc->a_button_actions & 3) != 3)
                {
                    proc->sub2_action = 6;
                    Proc_Goto(proc, 0x3);
                }
                else if (gKeySt->pressed & KEY_BUTTON_SELECT && proc->unk_35 != 1)
                {
                    gUnk_0200E7D8 = UNIT_PID(gPrepUnitList[proc->list_num_cur]);

                    PlaySe(0x6A);
                    proc->sub2_action = 9;
                    Proc_Goto(proc, 0xD);
                }
            }
        }
        break;
    }
}
