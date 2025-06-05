#include <stdio.h>
int main()
{
    int n, sum = 0;
    printf("Enter the n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {

        if (i == n)
        {
            if (i % 2 == 0)
            {
                sum -= i;
                printf("%d=", i);
            }
            else if (i % 2 != 0)
            {
                sum += i;
                printf("%d=", i);
            }
        }
        else if (i % 2 == 0)
        {
            sum -= i;
            printf("%d+", i);
        }
        else
            
            {
                sum += i;
                printf("%d-", i);
            }
    }
    printf("%d",sum);



    return 0;
}