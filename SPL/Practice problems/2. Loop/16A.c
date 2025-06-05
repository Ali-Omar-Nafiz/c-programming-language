#include <stdio.h>
int main()
{
    int a, b, originA, originB;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    originA = a;
    originB = b;
    if ((a <= 0) || (b <= 0))
    {
        printf("\nEnter two positive integers only!");
        return 1;
    }

    if (a > b)
    {
        while (a > 0)
        {
            if ((originA % a == 0) && (originB % a == 0))
            {
                printf("GCD: %d\n", a);
                break;
            }
            a--;
        }
        while (b > 0)
        {
            if ((b % originA == 0) && (b % originB == 0))
            {
                printf("LCM: %d\n", b);
                break;
            }
            b++;
        }
    }
    else
    {
        while (b > 0)
        {
            if ((originA % b == 0) && (originB % b == 0))
            {
                printf("GCD: %d\n", b);
                break;
            }
            b--;
        }
        while (a > 0)
        {
            if ((a % originA == 0) && (a % originB == 0))
            {
                printf("LCM: %d\n", a);
                break;
            }
            a++;
        }
    }

    return 0;
}