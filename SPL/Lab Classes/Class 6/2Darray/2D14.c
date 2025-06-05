#include <stdio.h>

int main()
{

    int row, col;
    scanf("%d %d", &row, &col);

    int myArray[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }

    int checkerArray[row * col];
    int k = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int status = 1;
            int x = k - 1;
            while (x >= 0)
            {
                if (checkerArray[x] == myArray[i][j])
                {
                    status = 0;
                    break;
                }
                x--;
            }
            if(status==0){
                myArray[i][j]=-1;
            }

            else{
                checkerArray[k]=myArray[i][j];
                k++;
            }

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
    for (int i = 0; i < k; i++)
    {printf("%d ",checkerArray[i]);
    }

    return 0;
}
