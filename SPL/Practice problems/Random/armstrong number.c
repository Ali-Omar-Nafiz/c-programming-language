#include <stdio.h>
#include <math.h>
int main()
{
    int n, count = 0, sum = 0, m;
    scanf("%d", &n);
    for (int i = n; i > 0; i /= 10)
    {
        count++;
    }
    for (int i = n; i > 0; i /= 10)
    {
        m = i % 10;
        sum += pow(m, count);
    }
    if(sum==n)
    {
        printf("Armstrong");
    }
    else{
        printf("Not");
    }

    return 0;
}