#include <stdio.h>
#include <limits.h>
int main()
{
    int m, n,o,p, max = INT_MIN;
    printf("Enter mxn:");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d]:", i, j);
            scanf("%d",&arr[i][j]);

            if (arr[i][j] > max)
            {
                max = arr[i][j];
                o = i;
                p = j;
            }
        }
    }
    printf("Max:%d\nLocation:[%d][%d]", max, o, p);

    return 0;
}