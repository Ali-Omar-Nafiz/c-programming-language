#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,digit,count=0;
    scanf("%d",&n);
    printf("Last digit=%d\n",n%10);
    while(n!=0){
        digit=n%10;//4321, digit=1, 432, digit=2,digit=3,digit=4
        count++;
        n/=10;//n=432, 43, 4, 0
        if(n==0){//f,f ,f, t
            printf("First digit=%d\n",digit);//4
        }
    }printf("total digit=%d\n",count);

    return 0;
}
