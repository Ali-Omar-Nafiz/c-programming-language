#include <stdio.h>
/*
8
1 X 2 + 3 X 4 + 5 X 6 + 7 X 8
5
1 X 2 + 3 X 4 + 5
*/
int main()
{

    int n, mul, sum = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            if (i % 2 != 0)
            {
                printf(" X ");
            }
            else
            {
                printf(" + ");
            }
        }

        if (i % 2 != 0)
        {
            mul = i;
        }
        else
        {
            mul *= i;
            sum += mul;
        }
    }

    if (n % 2 == 0)
    {
        printf(" = %d", sum);
    }
    else
    {
        printf(" = %d", sum + mul);
    }

    return 0;
}