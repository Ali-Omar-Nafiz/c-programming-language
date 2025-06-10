#include<stdio.h>
int main()
{
    int *p,num1;
    int *q,num2;
    p=&num1;
    q=&num2;
    scanf("%d%d",&num1,&num2);
    printf("%d",(*p+*q));

    return 0;
}
