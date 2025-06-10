#include <stdio.h>
int main()
{
    int m, n, s = 0;
    printf("Enter n:");
    scanf("%d",&n);
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d]=", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                s++;
            }
        }
    }
    if (s == 0)
    {
        printf("Symmetric");
    }
    else
    {
        printf("Not Symmetric");
    }

    return 0;
}