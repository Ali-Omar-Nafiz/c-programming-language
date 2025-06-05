#include<stdio.h>
int main()
{
    int in,l,rs,rm,rev=0;
    printf("Enter the number: ");
    scanf("%d",&in);
    rs=in;
    while(rs>0)
    {
        rm=rs%10;
        rev=(rev*10)+rm;
        rs=rs/10;
    }
    printf("%d",rev);

    return 0;

}