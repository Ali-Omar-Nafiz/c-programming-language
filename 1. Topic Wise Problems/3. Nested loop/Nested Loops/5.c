#include <stdio.h>
int main()
{
    int i, j, k, m, n;
    printf("Enter the 'N':");
    scanf("%d", &n);
   
    for (i = 1; i <= n; i++)
    {
        for (j = 1,m=n; j <= n; j++,m--)
        {
            if (j <=i)
            {
                printf("%d", m);
            }
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}