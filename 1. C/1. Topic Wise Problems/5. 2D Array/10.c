#include <stdio.h>

int main()
{
    int m, n, sum = 0,half;
    printf("Enter n:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Must be an odd input!");
        return 1;
    }
    half=n/2+1;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("arr[%d][%d]:", i, j);
            scanf("%d", &arr[i][j]);

            if (
                (i == 0 && (j <= half || j == n-1)) ||
                (i == half) ||
                (j == half) ||
                (i == n-1 && (j >= half || j == 0)) ||
                (j == n-1 && (i <= half || i == n-1)) ||
                (j == 0 && (i >= half || i == 0))
            )
            {
                sum += arr[i][j];
            }
        }
    }
    printf("Sum=%d",sum);

    return 0;
}