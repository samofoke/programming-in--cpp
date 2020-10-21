#include "maze.h"

void    UserInput()
{
    int cxt_pt;
    int inpx;
    int inpy;

    printf("which mode\t(dft - 0 ASCII - 1 amzing-stuff - 2)\n\t");
    scanf("%d", &prnt_mode);

    printf("place input 31 x 25\t(use space to seprate in a range 3-37)\n\t");
    scanf("%d %d", &inpy, &inpx);

    while (inpy<MIN_RANGE || inpy>MAX_RANGE || inpx<MIN_RANGE || inpx>MAX_RANGE)
    {
        printf("are you sure thouugh?\n");
        printf("please input the length correctly\n");
        scanf("%d %d", &inpy, &inpx);
    }

    grtex = inpx / 2;
    grtey = inpy / 2;
    mzgx = 2 * grtex + 1;
    mzgy = 2 * grtey + 1;
    tmlx = 2 * grtex;
    tmly = 2 * grtey + 1;

    printf("do you want to customize your terminal point?\t(N - 0 Y -1)\n\t");
    scanf("%d", &cxt_pt);
    if (cxt_pt)
    {
        
    }
}