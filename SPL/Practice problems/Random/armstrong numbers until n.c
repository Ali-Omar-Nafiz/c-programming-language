#include<stdio.h>
#include<math.h>
int main()
{
    int n, count, m, sum;
    scanf("%d", &n);
    for (int i = 1; i <= n; i ++)
    {
        count = 0, sum = 0;
        for (int j = i; j > 0; j /= 10)
        {
            for (int k = i; k > 0; k /= 10)
            {
                if(j!=i)break;
                count++;
            }

            m = j % 10;
            sum += pow(m, count);
        }
        if (sum == i)
        {

            printf("%d ",i);
        }
        
    }

    return 0;
}