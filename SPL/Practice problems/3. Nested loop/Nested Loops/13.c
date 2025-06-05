#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1, m = 1; j <= 2 * n - 1; j++)
        {
            if (j <= i || j >= (2 * n - i))
            {
                if (j <= i)
                {
                    printf("%d", m);
                    m++;
                }
                else if (j == n + 1)
                {
                    m = j - 2;
                    printf("%d", m);
                }
                else
                {
                    m--;
                    printf("%d", m);
                }
            }
            else
                printf("_");
        }

        printf("\n");
    }

    return 0;
}