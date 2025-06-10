#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the 'N'=");
    scanf("%d", &n);
    if(n<1)
    {
        printf("Invalid Input!");
        return 1;
    }
    while (n > 0)
    {
        if (n == 1)
        {
            sum += (n * n);
            printf("%d^2", n);
        }
        else
        {
            sum += (n * n);
            printf("%d^2+", n);
        }
        n--;
    }
    printf("=%d", sum);

    return 0;
}