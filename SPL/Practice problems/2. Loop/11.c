#include <stdio.h>
int main()
{
    int n, i = 1, t, sum = 0;
    scanf("%d", &n);
    while (i <= n)
    {
        t = (i * i) * (i + 1);
        sum = sum + t;
        i++;
    }
    printf("%d", sum);

    return 0;
}