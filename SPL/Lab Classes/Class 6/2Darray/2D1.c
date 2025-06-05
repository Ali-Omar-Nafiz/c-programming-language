#include <stdio.h>

int main()
{
    //find sum of each row and column
    int row, col,sumr, sumc;
    scanf("%d %d", &row, &col);

    int myArray[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }

    printf("\nThe Array:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        sumr =0;
        //sumc=0;
        for (int j = 0; j < col; j++)
        {
            sumr+=myArray[i][j];
            //sumc+=myArray[j][i];
        }

        printf("sum of rows=%d\n",sumr);
       // printf("sum of col=%d\n",sumc);
    }

     for (int j = 0; j < col; j++)
    {
        //sumr =0;
        sumc=0;
        for (int i = 0; i < row; i++)
        {
            //sumr+=myArray[i][j];
            sumc+=myArray[i][j];
        }

        //printf("sum of rows=%d\n",sumr);
        printf("sum of col=%d\n",sumc);
    }

    return 0;
}
