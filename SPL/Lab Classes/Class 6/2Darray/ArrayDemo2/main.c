#include <stdio.h>
#include <stdlib.h>

int main()
{
    int NUM_ROW = 3;
    int NUM_COL = 4;
    int vals[3][4] = { {11, 12, 13, 14},
        {21, 22, 23, 24},
        {31, 32, 33, 34}
    };
// output the array
    for (int row = 0; row < NUM_ROW; row++)
    {
        for (int col = 0; col < NUM_COL; col++)
        {
            printf("%d ", vals[row][col]);
        }
        printf("\n");
    }
     printf("\n");
    //correct way to transpose
    for (int col = 0; col < NUM_COL; col++)
    {
        for (int row = 0; row < NUM_ROW; row++)
        {
            printf("%d ", vals[row][col]);
        }
        printf("\n");
    }
 printf("\n");
    for (int row = 0; row < NUM_ROW; row++)
    {
        for (int col = 0; col < NUM_COL; col++)
        {
            printf("%d ", vals[col][row]);
        }
        printf("\n");
    }
 printf("\n");
    for (int col = 0; col < NUM_COL; col++)
    {
        for (int row = 0; row < NUM_ROW; row++)
        {
            printf("%d ", vals[col][row]);
        }
        printf("\n");
    }

    return 0;
}
