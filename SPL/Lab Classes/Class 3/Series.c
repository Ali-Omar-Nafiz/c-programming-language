#include <stdio.h>
#include <math.h>
/*
5
1. 1 X 2 + 3 X 4 + 5 = 19 
2. 1 X 2 X 3 X 4 X 5
3. 5.4 + 4.3 + 3.2 + 2.1
4. 5^2 + 4^2 + 3^2 + 2^2 + 1^2
*/
int main()
{
    int n;
    scanf("%d", &n);
    int mul =1, sum =0;
    for (int i = 1; i <= n; i++)
    {
        printf("%d", i);
        if (i != n)
        {
            if (i % 2 == 0)
            {
                printf(" + ");
            }
            else
            {
                printf(" X ");
            }
        }

        if(i%2!=0){
            mul = i;
        }
        else{
            mul = mul *i;
            sum+=mul;
        }
    
    }
    if(n%2==0){
        printf(" = %d", sum);
    }
    else{
        printf(" = %d", sum+mul);
    }
    
}