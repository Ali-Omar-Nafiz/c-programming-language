#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter m and n:");
    scanf("%d %d", &m, &n);
    if (m != n)
    {
        printf("m and n have to be same!");
        return 1;
    }
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Major diagonal:");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                printf("%d ", arr[i][j]);
        }
        
    }
    printf("Minor diagonal:");
    for (int i = 1; i < m+1; i++)
    {
        for (int j = 1; j < n+1; j++)
        {
            if (i + j == (n + 1))
                printf("%d ", arr[i-1][j-1]);
        }
       
    }

    return 0;
}