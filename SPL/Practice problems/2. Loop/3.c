#include<stdio.h>
int main()
{
    int count=1,n;
    printf("Enter the Nth term:\n");
    scanf("%d",&n);
    while(count<=n)
    {
        if(count%2==0)
        {
            printf("0");

        }
        else
        {
            printf("1");
        }
        count+=1;

    }

    return 0;
}