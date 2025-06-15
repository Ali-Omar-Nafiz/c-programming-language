#include<stdio.h>
int main()
{
    int *p,num1;
    int *q,num2;
    p=&num1;
    q=&num2;
    scanf("%d%d",&num1,&num2);
    *p=(*p+*q);
    *q=(*p-*q);
    *p=(*p-*q);
    printf("%d %d",num1,num2);

    return 0;
}

