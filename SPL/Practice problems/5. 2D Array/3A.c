#include <stdio.h>
int main()
{
    int m, n, m1, m2;
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
    for (int i = 0; i < m; i++)
    {
        m1 = 1;
        m2 = 1;
        int q = 0;
        for (int j = 0; j < m; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (k != i && j != 0)
                {
                    q++;
                    if (q == 1 || q == 4)
                    {
                        m1 *= arr[j][k];
                    }
                    else
                    {
                        m2 *= arr[j][k];
                    }
                }
            }
        }
        printf("m1=%d and m2=%d\n", m1, m2);
        arr[0][i] *= (m1 - m2);
    }
    printf("[0][0]=%d\n", arr[0][0]);
    printf("[0][1]=%d\n", arr[0][1]);
    printf("[0][2]=%d\n", arr[0][2]);
    int result;
    result = arr[0][0] - arr[0][1] + arr[0][2];
    printf("Determination result:%d", result);

    return 0;
}