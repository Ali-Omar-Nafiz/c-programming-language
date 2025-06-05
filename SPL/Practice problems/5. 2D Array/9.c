#include <stdio.h>

int main()
{
    int m, n, sum = 0;
    printf("Enter n:");
    scanf("%d",&n);
    if(n%2!=0)
    {
        printf("Must be an odd input!");
        return 1;
    }
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);

            if (i == 1 || i == n-1 || j==n-i-1 || i == j)
            {
                sum += arr[i][j];
            }
        }
    }
    printf("Sum=%d",sum);

    return 0;
}