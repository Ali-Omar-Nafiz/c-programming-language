#include <stdio.h>

int main()
{
    int n, sum = 0, k = 0, origin, q;
    printf("Enter the number:");
    scanf("%d", &n);
    origin = n;
    for (; n > 0;)
    {
        
        int m = n % 10;
        n = n / 10;
        sum = (sum * 10) + m;
    }
    printf("Reverse:%d\n", sum);
    int pal = sum;
    if (k % 2 == 0)
    {
        sum = 0, q = 1, n = origin;
        for (; n > 0;)
        {
            if (q % 2 != 0)
            {
                sum += (n % 10);
            }
            n = n / 10;
            q++;
        }
       
    }
    else
    {
        sum = 0, q = 1, n = origin;
        for (; n > 0;)
        {
            if (q % 2 == 0)
            {
                sum += (n % 10);
            }
            n = n / 10;
            q++;
        }
        
    }
    printf("Sum of even digit(0,2,4,..):%d\n",sum);
    if ((origin == pal) && (sum % 2 != 0))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}