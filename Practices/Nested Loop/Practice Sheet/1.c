#include <stdio.h>
int main()
{
    int i = 1, j = 1, n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    while (i <= n)
    {
        j=1;
        while (j <= n)
        {
            printf("%d", j);
            j++;
        }
        printf("\n");

        i++;
    }

    return 0;
}