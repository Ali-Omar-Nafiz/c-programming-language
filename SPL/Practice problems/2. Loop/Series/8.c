#include<stdio.h>
int main()
{
    int n,sum=0,m=0;
    printf("Enter the n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        m=(m*10)+1;
        sum+=m;
        if(i==n)
        {
            printf("%d=",m);
        }
        else
        {
            printf("%d+",m);
        }
    }
printf("%d",sum);

    return 0;
}