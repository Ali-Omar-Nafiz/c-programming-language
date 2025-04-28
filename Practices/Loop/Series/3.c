#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the 'N':");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Invalid Input!");
        return 1;
    }
    while (n > 0)
    {
        if (n == 1)
        {
            printf("%d.%d", n, n - 1);
            sum += (n * (n - 1));
        }

        else
        {
            printf("%d.%d+", n, n - 1);
            sum += (n * (n - 1));
        }
        n--;
    }

    printf("=%d", sum);

    return 0;
}