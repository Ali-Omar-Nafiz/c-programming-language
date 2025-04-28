#include<stdio.h>
int main()
{
    int n,originN,rem,new=0;
    scanf("%d",&n);
    originN=n;
    while(n>0)
    {
       
        rem=n%10;
        new=(new*10)+rem;
        n=n/10;
    }
    if (new==originN)
    {
        printf("Palindrome");
    }
    else printf("No");



    return 0;
}