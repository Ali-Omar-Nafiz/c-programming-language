#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n:");
    scanf("%d", &n);

    for (int i = 1, l = 1; i <= 2 * n - 1; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j <= l)
                printf("*");

            else
                printf(" ");
        }
        if (i < n)
            l++;
        else
            l--;

        printf("\n");
    }

    return 0;
}