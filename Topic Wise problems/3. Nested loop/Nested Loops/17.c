#include <stdio.h>
int main()
{
    int n,m,l=1;
    printf("Enter the 'N':");
    scanf("%d", &n);
    m=n/2 +1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j==m || j==m -(l-1) || j==m+(l-1) || i==m)
                printf("$");

            else
                printf("_");
        }
        if(i<m)l++;
        else l--;

        printf("\n");
    }

    return 0;
}