
#include<stdio.h>
int main()
{ int a,b,c,d,e,f;
    scanf("%d%d%d",&a,&b,&c);
    d=(a+b*c);e=(b+a*c);f=(c+a*b);
    if(d>e && d>f){printf("maximum value: %d",d);}
    else if(e>d && e>f){printf("maximum value: %d",e);}
    else {printf("maximum value: %d",f);}



    return 0;
}