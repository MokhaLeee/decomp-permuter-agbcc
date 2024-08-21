#include "include.h"

void func_fe6_0807B4C0(struct PrepMenuProc * proc)
{
    int i, j;
    u16 _scroll_timer;

    if (proc->scroll_timer == 0)
    {
        proc->unk_29 = TRUE;
        proc->in_unit_sel_screen = TRUE;
        proc->unk_2B = TRUE;

        PrepScreen_DrawScreenInfo(proc);
        TmFillRect(gBg0Tm, 12, 19, 0);
        TmFillRect(gBg1Tm, 12, 19, 0);
        func_fe6_08079D84(proc);
    }

    proc->scroll_timer = proc->scroll_timer + 0x10 -  proc->scroll_timer / 0xC;
    _scroll_timer = (proc->scroll_timer) >> 0x3;

    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < _scroll_timer; j++)
        {
            gBg0Tm[TM_OFFSET(j, i)] = gUnk_0200E8A4[TM_OFFSET(j, i + 10)];
            gBg1Tm[TM_OFFSET(j, i)] = gUnk_0200E8A4[TM_OFFSET(j - _scroll_timer + 13, i + 10)];
        }
    }

    EnableBgSync(BG0_SYNC_BIT | BG1_SYNC_BIT);

    if (_scroll_timer > 12)
        Proc_Break(proc);
}
