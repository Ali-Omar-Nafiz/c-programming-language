#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);

    for (int i = 1, l = 0; i <= n; l++, i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if ((i == j) || (i + j == (n + 1)))
                printf("*");

            else
                printf("_");
        }

        printf("\n");
    }

    return 0;
}