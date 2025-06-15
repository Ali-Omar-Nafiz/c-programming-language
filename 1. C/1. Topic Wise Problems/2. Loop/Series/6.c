#include <stdio.h>
int main()
{
    int n;
    float sum = 0;
    printf("Enter the n:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {

            printf("1+");
        }
        else if (i == n)
        {

            printf("1/(%d^2)=", i);
        }
        else
        {
            printf("1/(%d^2)+", i);
        }
        sum += (1.0 / (i * i));
    }
    printf("%f", sum);

    return 0;
}