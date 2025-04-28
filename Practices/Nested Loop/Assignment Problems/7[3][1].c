#include <stdio.h>
int main()
{
    int n;
    printf("Enter the n:");
    scanf("%d", &n);

    for (int i = 1; i <= (n/2)+1 ; i++)
    {

        for (int j = 1; j <= n; j++)
        {
            if (j>=(i)&&j<=(n-i+1))printf("*");
           
                else printf(" ");
        }

        printf("\n");
    }

    return 0;
}