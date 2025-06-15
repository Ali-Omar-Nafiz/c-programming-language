#include <stdio.h>
int main()
{
    int i, j, k, m, n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    for (i = 1, k = 1; i <= n; k++, i++)
    {
        for (j = (n - k), m = i; j < n; m++, j++)
        {
            printf("%d", m);
        }
        printf("\n");
    }

    return 0;
}