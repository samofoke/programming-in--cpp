#include "maze.h"

void    BFS(int x, int y)
{
    Q.push(make_pair(x, y));
    while (!Q.empty())
    {
        int xspx;
        int xspy;
        x = Q.front().first;
        y = Q.front().second;
        Quptd = 0;

        for (int sp = 0; sp < 4; sp++)
        {
            if ((x + dx[sp] > 0) && (x + dx[sp] <= mzgx) && (y + dy[sp] > 0) && 
            (y + dy[sp] <= mzgy) && !maze[x + dx[sp]][y + dy[sp]])
            {
                xspx = x + dx[sp];
                xspy = y + dy[sp];
                maze[xspx][xspy] = 17;
                Q.push(make_pair(xspx, xspy));
                Quptd = 1;

                
            }
        }
    }
}