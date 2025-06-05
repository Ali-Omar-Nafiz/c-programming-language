#include <stdio.h>

int main()
{
    int i, j, n,l;
    printf("Enter the row:");
    scanf("%d", &n);
    for (i = 1,l=0; i <= n; i++,l++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if ((j >= (n - l)) && (j <= (n + l)))
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