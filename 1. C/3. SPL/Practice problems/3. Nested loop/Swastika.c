#include <stdio.h>

int main()
{
    int i, j, n, half;
    printf("Enter the row: ");
    scanf("%d", &n);
    half = n / 2+1;
    
    for (i = 1; i <=n; i++)
    {
        for (j = 1; j <=n; j++)
        {
            if (
                (i == 1 && (j <= half || j == n)) ||
                (i == half) ||
                (j == half) ||
                (i == n && (j >= half || j == 1)) ||
                (j == n && (i <= half || i == n)) ||
                (j == 1 && (i >= half || i == 1))
            )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
