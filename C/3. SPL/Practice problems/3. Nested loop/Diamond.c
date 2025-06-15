#include <stdio.h>
int main()
{
    int i, j, N;

    printf("Enter number of rows: ");
    scanf("%d", &N);
    int l = 0;

    for (i = 1; i <= 2 * N - 1; i++)
    {
        for (j = 1; j <= (2 * N - 1); j++)
        {
            if (j >= (N - l) && j <= (N + l))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
        if (i < N)
        {
            l++;
        }
        else
        {
            l--;
        }
    }
    return 0;
}