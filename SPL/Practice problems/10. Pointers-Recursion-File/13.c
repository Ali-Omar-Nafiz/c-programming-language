#include<stdio.h>
int digitcount(int n,int count);
int main()
{
    int n,count =0;
    scanf("%d",&n);

    printf("%d",digitcount(n,count));

    return 0;
}
int digitcount(int n,int count)
{
    if(n<=0)
    {
        return count;
    }
    count++;
    return digitcount(n/10,count);
}

