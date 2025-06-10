#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0, sum1 = 0;
    printf("Enter the 'N':");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i == n)
        {

            if (i % 2 != 0)
            {
                sum = sum1 + i;
                printf("%d", i);
            }
            else
            {
                sum = sum1 + (i * (i - 1));
                printf("%d", i);
            }
        }
        else if (i % 2 != 0)
        {
            sum = sum1 + i;
            printf("%d*", i);
        }
        else
        {
            sum = sum1 + (i * (i - 1));
            sum1 = sum;
            printf("%d+", i);
        }
        i++;
    }
    printf("=%d", sum);

    return 0;
}