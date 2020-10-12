#include "maze.h"

int main()
{
    printf("algo to use: DFS - 0 BFS - 1\n");
    scanf("%d", &algo_mode);

    printf("see the search path: No - 0 Yes - 1\n");
    scanf("%d", &srch_prcs);

    printf("run with default: No - 0 Yes - 1");
    int dt;
    scanf("%d", &dt);
    if (!dt)
    {
        UserInput();
    }
    Initialize();
    srand( (unsigned) time(NULL));
    MazeGenerator(rand() % grtex + 1, rand() % grtey + 1);

    if (algo_mode == 0)
    {
        DFS(otx, oty);
    }
    else
    {
        BFS(otx, oty);
    }
    if (!Path_exit)
    {
        printf("You are trapped...");
        PrintMase(0, 0);
        printf("Press Enter to continue.");
        getchar();
        getchar();
    }
    return(0);
    
}
