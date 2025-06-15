#include <stdio.h>
int main()
{
    int i = 1, j = 1,k=-1, n, m;
    printf("Enter the 'N':");
    scanf("%d", &n);
    m = n;
    while (i <= n)
    {

        j = i;
        k++;
        while (j <= (i + k))
        {
            printf("%d", j);
            j++;
        }
        printf("\n");

        i++;
        n++;
        if (n == m+m)
            break;
    }

    return 0;
}