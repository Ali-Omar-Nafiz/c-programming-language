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
            if (j <=i)
            {
                printf("%d", j);
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}