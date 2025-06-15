#include<stdio.h>
#include<math.h>
void isprime(int k);
void GeneratePrime(int l);
int main()
{
    int n;
    printf("Enter the Nth number:");
    scanf("%d",&n);
    GeneratePrime(n);

    return 0;
}
void isprime(int k)
{
    int count=0;
    for(int i=2; i<=sqrt(k); i++)
    {
        if(k%i ==0)
        {

            return;
        }

    }
    printf("%d ",k);
}
void GeneratePrime(int l)
{
    for(int i=2; i<=l; i++)
    {
        isprime(i);
    }
}

