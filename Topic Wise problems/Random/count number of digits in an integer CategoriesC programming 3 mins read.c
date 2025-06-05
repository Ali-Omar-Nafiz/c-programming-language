#include<stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=n;i>0;i=i/10)
    {
        count++;
    }
    printf("Total digits:%d",count);






    return 0;
}