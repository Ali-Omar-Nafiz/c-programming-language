#include<stdio.h>
int main()
{int a,b,c;
    //a,b,c are the length of the triangle
    scanf("%d%d%d",&a,&b,&c);
    if((a>0 && b>0 && c>0)&&((a+b)>c && (b+c)>a && (c+a)>b))
    {
        printf("Valid");
    }
    else
    {
        printf("Not valid");
    }

//a,b,c are the angle of the triangle
scanf("%d%d%d",&a,&b,&c);
if((a>0 && b>0 && c>0)&&(a+b+c==180))
{
    printf("Valid");
}
else
{
    printf("Not valid");
}


    return 0;
}