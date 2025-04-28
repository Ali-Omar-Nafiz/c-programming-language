#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            if (j >= (n-i+1) && j <= (n+i-1))
                printf("*");
            if (j < (n-i+1))
                printf("_");
            else
                printf(" ");
        }
        
        printf("\n");
    }

    return 0;
}