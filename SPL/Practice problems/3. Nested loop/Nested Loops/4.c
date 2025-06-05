#include <stdio.h>
int main()
{
    int i, j, k, m, n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j > (n - i))
            {
                printf("%-1d", i);
            }
            else
                printf("_");
        }
        printf("\n");
    }

    return 0;
}