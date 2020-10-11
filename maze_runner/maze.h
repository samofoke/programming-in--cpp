/*******************************
 *this is maze game with C++.
 *inspired by kingsley.
 *using the BFS algorithm.
 * ****************************/

#ifndef MAZE_H
# define MAZE_H
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include <queue>

using namespace std;

#define MAX_RANGE 73
#define MIN_RANGE 3

queue <pair<int, int> > Q;

int     Qpre[MAX_RANGE][MAX_RANGE][2] = {0};
int     QnexNum[MAX_RANGE][MAX_RANGE] = {0};
int     Quptd;

int     grtex = 12;
int     grtey = 15;
int     otx = 2;
int     oty = 1;
int     tmlx = 2 * grtex;
int     tmly = 2 * grtey + 1;
int     mzgx = 2 * grtex + 1;
int     mzgy = 2 * grtey + 1;

int     gen_prcs = 0;
int     srch_prcs = 1;
int     prnt_mode = 0;
int     aut_ps = 1;
int     algo_mode = 1;
int     slp_tm = 600;

char    instructions[3];
int     maze[MAX_RANGE + 6][MAX_RANGE + 6];
int     dx[4] = {0, 1, 0, -1};
int     dy[4] = {1, 0, -1, 0};
int     Path_exit = 0;


void    PrintMase(int px, int py);
void    UserInput();
void    MazeGenerator(int gx, int gy);
void    Initialize();
void    BFS(int x, int y);
void    DFS(int x, int y);

#endif

