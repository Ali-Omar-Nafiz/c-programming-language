#include <stdio.h>
#include <stdlib.h>
/*
Clipto Number
1. Sum of the first and Last digit < 8 and
2. Sum of digits is divisible by 6
*/
int main()
{
    int upper,lower, first,sum=0;
    printf("Enter the lower and upper bound:\n");
    scanf("%d %d",&lower,&upper);
    for(int j=lower; j<=upper; j++){
    int i=j;
    int last=i%10;

    while(i!=0){
        int digit=i%10;
        sum+=digit;
        i=i/10;
        if(i==0){
            first=digit;
        }
    }
    if((first+last<8) && (sum%6==0)){
        printf("%d\n",j);
    }
    }
    return 0;
}
