#include "maze.h"

void    PrintMase(int px, int py)
{
    for (int x = 1; x <= mzgx; x++)
    {
        for (int y = 1; y <= mzgy; y++)
        {
            if (prnt_mode == 2)
            {
                if (x == px && y == py)
                {
                    printf("#");
                }
                else
                {
                    switch (maze[x][y])
                    {
                    case 0: printf( "   " );
                        break;
					case 1: printf( "d " ); 
                        break;
					case 2: printf( "g " );
                        break;
					case 3: printf( "s " ); 
                        break;
					case 4: printf( "t " );
                        break;
					case 5: printf( "c " );
                        break;
					case 6: printf( "a " ); 
                        break;
					case 7: printf( "o " ); 
                        break;
					case 8: printf( "w " );
                        break;
					case 9: printf( "q " );
                        break;
					case 10: printf( "v " );
                        break;
					case 11: printf( "h " );
                        break;
					case 12: printf( "p " );
                        break;
					case 13: printf( "e " );
                        break;
					case 14: printf( "z " );
                        break;
					case 15: printf( "\u00B7\u00B7 " );
                        break;
					case 16: printf( "xx " ); 
                        break;
					case 17: printf( "<> " ); 
                        break;
                    }
                }
                if (y == mzgy)
                {
                    printf("\n");
                }
            }
            if (prnt_mode != 2)
            {
                if (x == px && y == py)
                {
                    printf("0");
                }
                else
                {
                    switch ( maze[x][y] )
					{
					case 0: printf( "  " ); break;
					case 15:
						if ( prnt_mode == 0 )
							printf( "\u00B7\u00B7" );
						else printf( ".." ); break;
					case 16: printf( "xx" ); break;
					case 17: printf( "<>" ); break;
					default:
						if ( prnt_mode == 0 )
							printf( "\u2588\u2588" );
						else printf( "KK" );
						break;
					}
                }
                if (y == mzgy)
                {
                    printf("\n");
                }
                
            }
        }
    }
}