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

                Qpre[xspx][xspy][0] = x;
                Qpre[xspx][xspy][1] = y;
                QnexNum[x][y]++;

                if (srch_prcs)
                {
                    system("clear");
                    PrintMase(xspx, xspy);
                    if (!aut_ps)
                    {
                        printf("Please to continue.");
                        getchar();
                    }
                    else
                    {
                        system(instructions);
                    }
                    if (xspx == tmlx && xspy ==tmly)
                    {
                        do
                        {
                            maze[xspx][xspy] = 15;
                            int tmpx = Qpre[xspx][xspy][0];
                            xspy = Qpre[xspx][xspy][1];
                            xspx = tmpx;
                        } while (xspx && xspy);
                        
                        system("clear");
                        PrintMase(tmlx, tmly);
                        Path_exit = 1;
                        printf("We haave reached the end position.\n");
                        printf("Press Enter to continue.");
                        getchar();
                        getchar();
                    }
                    
                }
            }
        }
        if () 
    }
}