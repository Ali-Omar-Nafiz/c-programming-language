#include <stdio.h>
int main()
{
    int m, n,sum=0;
    printf("Enter mand m and n:");
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
            sum+=arr[i][j];
        }
    }
    printf("Sum=%d",sum);
    
    return 0;
}