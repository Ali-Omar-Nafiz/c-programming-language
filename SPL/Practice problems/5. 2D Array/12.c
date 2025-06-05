#include <stdio.h>
int main()
{
    int m,n;
    printf("Enter m and n:");
    scanf("%d %d",&m,&n);
    int arr[m][n],b[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d]=", i, j);
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j]=arr[i][n-1-j];
            printf("%-2d ",b[i][j]);

        }
        printf("\n");
    }

    return 0;
}