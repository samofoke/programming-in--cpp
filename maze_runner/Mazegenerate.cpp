#include "maze.h"

void    MazeGenerator(int gx, int gy)
{
    int dblx = gx * 2;
    int dbly = gy * 2;
    int ph = rand() % 2 ? 1 : 3;

    maze[dblx][dbly] = 0;

    for (int x = 0, sp = rand() % 4; x < 4; x++, sp = (sp + ph) % 4)
    {
        if (dbly + dy[sp] - 1 != mzgy && maze[dblx + 2 * dx[sp]][dbly + 2 * dy[sp]])
        {
            maze[dblx + dx[sp]][dbly + dy[sp]] = 0;
            if (gen_prcs)
            {
                system("clear");
                PrintMase(dblx + dx[sp], dbly + dy[sp]);
                if (!aut_ps)
                {
                    printf("Press Enter to continue.");
                    getchar();
                }
                else
                {
                    system(instructions);
                }
                
            }
            MazeGenerator(gx + dx[sp], gy + dy[sp]);
        }
    }
}