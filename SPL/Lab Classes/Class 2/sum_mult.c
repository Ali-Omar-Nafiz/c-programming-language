#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num,sum=0,mult=1;
    printf("How many numbers?\n");
    scanf("%d",&n);
    printf("Enter the numbers:\n");
//    for(int i=1; i<=n; i++){
//        scanf("%d",&num);
//        sum=sum+num;
//        mult=mult*num;
//    }
//    int i=1;
//    while(i<=n){
//        scanf("%d",&num);
//        sum=sum+num;
//        mult=mult*num;
//    i++;}
    int i=1;
    do{
        scanf("%d",&num);
        sum=sum+num;
        mult=mult*num;
    i++;}while(i<=n);

    printf("summation=%d\n multiplication=%d\n",sum,mult);

    return 0;
}
