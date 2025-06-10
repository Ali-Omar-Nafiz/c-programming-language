#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the n:");
    scanf("%d", &n);
    printf("\n");
    for (int i = 1; i <= n; i++)
    {
        
        if (i == n)
        {
            printf("%d^2=", i);
        }
        else
        {
            printf("%d^2+", i);
        }
        sum += i * i;
    }
    printf("%d",sum);

    return 0;
}