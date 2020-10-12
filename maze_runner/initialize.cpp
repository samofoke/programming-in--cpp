#include "maze.h"

void    Initialize()
{
    for (int x = 0; x <= grtex * 2 + 2; x++)
    {
        for (int y = 0; y <= grtey * 2 + 2; ++y)
        {
            maze[x][y] = (x + y - 2) % 14 + 1;
        }
    }
    for (int x = 0, y = 2 * grtex + 2; x <= 2 * grtey + 2; x++)
    {
        maze[0][1] = 0;
        maze[y][x] = 0;
    }
    for (int x = 0, y = 2 * grtey + 2; x <= 2 * grtex + 2; x++)
    {
        maze[0][1] = 0;
        maze[x][y] = 0;
    }
    
    maze[otx][oty] = 15; maze[tmlx][tmly] = 0;
}