#include<stdio.h>
int main()
{
    int i=1,n,multi=1;
    printf("Enter the'N':");
    scanf("%d",&n);
    printf("%d!=",n);
    while(i<=n)
    {
        if(i==n)
        {
            multi*=i;
            printf("%d",i);
        }
        else
        {
            multi*=i;
            printf("%d X ",i);
        }
        i++;
    }
    printf("=%d",multi);




}