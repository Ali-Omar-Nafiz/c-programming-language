#include<stdio.h>
void printer(int a);
int main()
{
    int i=1;
    printer(i);
    return 0;
}
void printer(int a)
{
    if(a>10)return;
    printf("%d ",a);
    a++;
    printer(a);
}
