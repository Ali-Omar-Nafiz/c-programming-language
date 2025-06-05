#include <stdio.h>
int main()
{
    int m, n;
    printf("Enter m and n:");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 && j == 0)
                printf("Row-wise:%d ", arr[i][j]);
            else
                printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m; i++)
        {
            if (i == 0 && j == 0)
                printf("Column wise:%d ", arr[i][j]);
            else
                printf("%d ", arr[i][j]);
        }
    }


    return 0;
}