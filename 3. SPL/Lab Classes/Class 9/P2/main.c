#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b){
    int c=a;
    a=b;
    b=c;
}
void pointer_swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int a=5, b=7;
    swap(a,b);
    printf("After swap: a=%d, b=%d\n",a,b);
    pointer_swap(&a,&b);
    printf("After pointer swap: a=%d, b=%d\n",a,b);
    return 0;
}
