#include <stdio.h>
#include <stdlib.h>
/*
Clipto Number
1. Sum of the first and Last digit < 8 and
2. Sum of digits is divisible by 6
*/
int main()
{
    int n, first,sum=0;
    scanf("%d",&n);
    int num=n;
    int last=n%10;

    while(n!=0){
        int digit=n%10;
        sum+=digit;
        n=n/10;
        if(n==0){
            first=digit;
        }
    }
    if((first+last)<8 && sum%6==0){
        printf("Clipto number");
    }else{
    printf("Not Clipto number");}
    return 0;
}
