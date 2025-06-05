#include<stdio.h>
void printer(int a,int n,int sum);
int main()
{
    int i=1,n,sum=0;
    scanf("%d",&n);
    printer(i,n,sum);
    return 0;
}
void printer(int a,int n,int sum)
{
    if(a>n)return;
    sum+=a;
    if(a==n)
    {
        printf("%d ",sum);
    }
    printer(a+1,n,sum);
}

