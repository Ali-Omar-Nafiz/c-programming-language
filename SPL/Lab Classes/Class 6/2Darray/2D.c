#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int myArray[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d", myArray[i][j]);
        }
        printf("\n");
    }

    printf("Major Diagonal: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {  // sum+=myArray[i][j];
                printf("%d ", myArray[i][j]);
            }
        }
    }

    printf("\nMinor Diagonal: ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j==n-i-1)
            {
                printf("%d ", myArray[i][j]);
            }
        }
    }

    return 0;
}
