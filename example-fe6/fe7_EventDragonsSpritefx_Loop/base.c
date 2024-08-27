#include "include.h"

void EventDragonsSpritefx_Loop(struct ProcEventDragonsSpritefx * proc)
{
    int i;
    int x, y;
    int ret = 0;

    for (i = 0; i < 3; i++)
    {
        if (proc->approc[i])
        {
            if (proc->x_1[i] != proc->x_2[i] || proc->y_1[i] != proc->y_2[i])
            {
                proc->unk56[i] += proc->unk50[i];
                if (proc->unk56[i] > 0x100)
                    proc->unk56[i] = 0x100;

                if (proc->unk50[i] == 0)
                    proc->unk56[i] = 0x100;

                x = ((proc->x_1[i] * (0x100 - proc->unk56[i])) + (proc->unk56[i] * proc->x_2[i])) / 0x100;
                y = ((proc->y_1[i] * (0x100 - proc->unk56[i])) + (proc->unk56[i] * proc->y_2[i])) / 0x100;

                if (proc->unk56[i] == 0x100)
                {
                    proc->x_1[i] = proc->x_2[i];
                    proc->y_1[i] = proc->y_2[i];

                    SetSpriteAnimId(
                        ((struct ProcSpriteAnim *)proc->approc[i])->anim,
                        proc->unk62[i]);
                }

                ret = 1;
            }
            else
            {
                x = proc->x_1[i];
                y = proc->y_1[i];
            }

            x = x - gBmSt.camera.x;
            y = y - gBmSt.camera.y;

            if (y < -0x40)
                y = 0xCC;

            x = OAM1_X(x);
            y = OAM0_Y(y);

            SetSpriteAnimProcParameters(
                proc->approc[i],
                x,
                y + proc->unk5C[i],
                -1
            );
        }
    }

    if (ret != 0)
    {
        if (((proc->unk6B++) / 0x18) == 0)
        {
            PlaySoundEffect(0x2E0);
        }
    }
}
