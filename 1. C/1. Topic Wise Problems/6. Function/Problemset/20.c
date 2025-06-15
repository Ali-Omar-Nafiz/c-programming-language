#include<stdio.h>
#include<math.h>
void isprime(int k,int m);
void GenNthPrime(int l);
int main()
{
    int n;
    printf("Enter the Nth number:");
    scanf("%d",&n);
    GenNthPrime(n);

    return 0;
}
int count=1;
void isprime(int k,int m)
{

    for(int i=2; i<=sqrt(k); i++)
    {
        if(k%i ==0)
        {

            return;
        }

    }
    if(count==m)printf("%dth prime: %d",m,k);
    count++;
}
void GenNthPrime(int l)
{
    for(int i=2; i>1; i++)
    {
        isprime(i,l);
        if(count==(l+1))return;

    }
}


