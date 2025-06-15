#include <stdio.h>
int main()
{
    int n, i = 3, first = 1, second = 1, next;
    scanf("%d", &n);
    if ((n == 1))
    {
        printf("%d", first);
    }
    else if (n == 2)
    {
        printf("%d, %d, ", first, second);
    }
    else
    {
        printf("%d, %d", first, second);
    }

    while (i <= n)
    {

        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;

        i++;
    }

    return 0;
}