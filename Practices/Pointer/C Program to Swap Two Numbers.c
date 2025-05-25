#include<stdio.h>
void swapper(int* n,int* m);
void printer(int k,int l);
int main()
{
    int a,b;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    swapper(&a,&b);
    printer(a,b);
    return 0;
}
void swapper(int* n,int* m)
{
    /**n=*n+*m;
    *m=*n-*m;
    *n=*n-*m;*/
    int temp;
    temp=*n;
    *n=*m;
    *m=temp;
}
void printer(int k,int l)
{
    printf("%d %d",k,l);
}
