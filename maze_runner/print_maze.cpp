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
					case 1: printf( "苟 " ); 
                        break;
					case 2: printf( "利 " );
                        break;
					case 3: printf( "国 " ); 
                        break;
					case 4: printf( "家 " );
                        break;
					case 5: printf( "生 " );
                        break;
					case 6: printf( "死 " ); 
                        break;
					case 7: printf( "以 " ); 
                        break;
					case 8: printf( "岂 " );
                        break;
					case 9: printf( "因 " );
                        break;
					case 10: printf( "祸 " );
                        break;
					case 11: printf( "福 " );
                        break;
					case 12: printf( "避 " );
                        break;
					case 13: printf( "趋 " );
                        break;
					case 14: printf( "之 " );
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