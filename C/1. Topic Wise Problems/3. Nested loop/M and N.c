#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, k, h;
    float n;
    printf("Enter the row:");
    scanf("%f", &n);
    h = ceil(n / 2);
    printf("Half = %d\n", h);

    for (i = 1, k = 0; i <= n; i++, k++)
    {
        for (j = 1; j <= n; j++)
        {
            if (((i == j && i <= h) || j == 1 || j == n || (j == (n - k) && i <= h)))
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
    printf("\n\n\n");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if ((i == j) || j == 1 || j == n)
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