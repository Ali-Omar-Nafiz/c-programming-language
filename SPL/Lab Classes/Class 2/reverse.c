#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

//    while(n!=0){
//        int last=n%10;
//        printf("%d",last);
//        //update the number
//        n=n/10;
//    }

int original=n;int reverse=0;
while(n!=0){
    int last=n%10;
    reverse=reverse*10+last;
    n=n/10;
}
printf("reverse=%d\n",reverse);
if(original==reverse)
    {printf("Palindrome.");
    }
else{printf("Not Palindrome.");
}
    return 0;
}
