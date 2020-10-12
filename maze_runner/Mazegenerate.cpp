#include "maze.h"

void    MazeGenerator(int gx, int gy)
{
    int dblx = gx * 2;
    int dbly = gy * 2;
    int ph = rand() % 2 ? 1 : 3;

    maze[dblx][dbly] = 0;

    for (int x = 0, sp = rand() % 4; x < 4; x++, sp = (sp + ph) % 4)
    {
        if (dbly + dy[sp] - 1)
    }
}