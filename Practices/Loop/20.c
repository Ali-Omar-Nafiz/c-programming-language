#include <stdio.h>
#include <math.h>
int main()
{
    int i = 1, n,sum = 0, new = 0;
    scanf("%d", &n);

    while (i <= n)
    {
        new = new * 10 + i;
        sum = sum + new;
        i++;
    }

    printf("%d", sum);

    return 0;
}