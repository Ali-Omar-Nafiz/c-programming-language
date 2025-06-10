#include <stdio.h>
int main()
{
    int n, l = 1;
    printf("Enter the 'N':");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j >= (n/2 +1 - l+1) && j <= (n/2 +1 + l - 1))
                printf("*");
            if (j < (n/2 + - l + 1))
                printf("_");
            else
                printf(" ");
        }
        if (i < n / 2 + 1)
            l++;
        else
            l--;

        printf("\n");
    }

    return 0;
}