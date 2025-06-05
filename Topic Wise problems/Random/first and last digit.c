#include<stdio.h>
#include<math.h>
int main()
{
    int n,count=0,reverse=0,i,sum=0,product=1;
    scanf("%d",&n);
    int last=n%10;
    for(i=n;i>0;i=i/10)
    {
        count++;
       sum+=i%10;
       product*=i%10;
        reverse=reverse*10+(i%10);
       

    }
    printf("First=%d, last=%d\n",i,last);
    int sum_of_first_last=i+last;
    printf("Sum=%d,reverse=%d\n",sum_of_first_last,reverse);
    printf("sum=%d, product=%d",sum,product);
   
    return 0;
}