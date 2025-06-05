#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n:");
    scanf("%d", &n);

    for (int i = 1; i <= n - 1; i++)
    {
        int m = i+1;
        for (int j = 1; j <= 2 * (n - 1) - 1; j++)
        {
            if ((j >= n - i) && (j <= n + i - 2))
            {

                if(j<=(n-1))
                {
                    m--;
                    printf("%d",m);
                    
                }
                else
                {
                    m++;
                    printf("%d",m);
                    
                }
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