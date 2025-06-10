#include<stdio.h>
#include<math.h>
int main()
{
    int x;
    float sinx;
    scanf("%d",&x);
    sinx=x-(pow(x,3)/(3*2*1))+(pow(x,5)/(5*4*3*2*1))-(pow(x,7)/(7*6*5*4*3*2*1));
    printf("%f",sinx);


    return 0;
}