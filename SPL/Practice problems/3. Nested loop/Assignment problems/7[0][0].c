#include <stdio.h>
int main()
{
    int n, count = 1;
    printf("Enter the n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (i == n || j == n || j >= (n - i + 1))
            {

                if (count > n)
                {
                    count = 1;
                }
                printf("%d", count);
                count++;
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