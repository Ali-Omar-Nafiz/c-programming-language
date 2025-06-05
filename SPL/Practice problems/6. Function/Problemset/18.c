#include<stdio.h>
#include<math.h>
int isprime(int k);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    if(isprime(n)==1)printf("Prime");
    else printf("Not prime");

    return 0;
}
int isprime(int k)
{

    for(int i=2; i<=sqrt(k); i++)
    {
        if(k%i ==0)return 0;

    }

    return 1;
}
/*#include<stdio.h>
#include<math.h>
void isprime(int k);
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    isprime(n);
    return 0;
}
void isprime(int k)
{

    for(int i=2; i<=sqrt(k); i++)
    {
        if(k%i ==0)
        {
            printf("Not Prime");
            return;
        }

    }

    printf("Prime");
}*/

