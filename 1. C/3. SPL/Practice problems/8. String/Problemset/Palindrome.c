#include<stdio.h>
int palindrome(int k);
int main()
{
    int k;
    printf("Enter the number:");
    scanf("%d",&k);
    (palindrome(k)==1)?printf("Palindrome"):printf("Not palindrome");


    return 0;
}
int palindrome(int k)
{
    int rev=0;
    for(int i=k; i>0; i/=10)
    {
        rev=(10*rev)+(i%10);
    }
    if(rev==k) return 1;
    else return 0;
}
