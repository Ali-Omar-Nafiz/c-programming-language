#include <stdio.h>
int main()
{
    int m, n, p, q;
    printf("Enter mxn and pxq:");
    scanf("%d %d %d %d", &m, &n, &p, &q);
    if (n != p)
    {
        printf("Not multiplyable!");
        return 1;
    }
    int a[m][n], b[p][q], c[m][q];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("b[%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < p; k++)
            {
                c[i][j] += (a[i][k] * b[k][j]);
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}