#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);

    for (int i = 1, l = 1; i <= 2 * n - 1; i++)
    {
        if (l == 6)
        {
            l = 2;
        }
        for (int j = 1; j <= n; j++)
        {
            if (l == 1)
            {
                printf("*");
            }
            else if (l == 2)
            {
                printf(" ");
            }
            else if (l == 3)
            {
                if (j == 1 || j == n)
                    printf("*");
                else
                    printf(" ");
            }

            else if (l == 4)
            {
                if (j > 1 && j < n)
                    printf("_");
                else
                    printf(" ");
            }
            else
            {
                printf("*");
            }
        }

        printf("\n");
        l++;
    }

    return 0;
}