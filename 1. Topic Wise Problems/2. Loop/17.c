#include <stdio.h>
#include<math.h>
int main()
{
    int n, originN;
    scanf("%d", &n);
    originN = n;
    if (n == 1)
        printf("Not prime");
    else
    {
        while (sqrt(n) > 0)
        {
            if (((originN % n) == 0) && (originN != n)&&(n!=1))
            {
                printf("Not prime");
                break;
            }
            else if (n == 1)
            {
                printf("Prime");
            }
            n--;
        }
    }

    return 0;
}