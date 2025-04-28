#include <stdio.h>
int main()
{
    int n, half;
    printf("Enter the n:");
    scanf("%d", &n);
    half=(n/2)+1;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (i == half || j == n/2 )
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