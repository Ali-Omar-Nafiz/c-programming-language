#include <stdio.h>
int main()
{
    int i = 1, n, sum = 0, t;
    printf("Term number (N)= ");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            t = (-1) * i;
        }
        else
        {
            t = i;
        }
        sum = sum + t;
        i++;
    }
    printf("%d", sum);
    return 0;
}