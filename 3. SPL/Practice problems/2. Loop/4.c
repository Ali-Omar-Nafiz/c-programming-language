#include<stdio.h>
int main()
{
    int n,i=1;
    float input,sum=0,avg;
    printf("Enter the number of inputs:\n");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("Enter the input no %d:\n",i);
        scanf("%f",&input);
        sum=sum+input;
        i++;

    }
    avg=(sum)/n;
    printf("Avg of %d inputs is: %f",n,avg);



    return 0;
}