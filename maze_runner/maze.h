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

void    PrintMase(int px, py);
void    UserInput();
void    MazeGenerator(int gx, int gy);
void    Initialize();
void    BFS(int x, int y);
void    DFS(int x, int y);

#endif

