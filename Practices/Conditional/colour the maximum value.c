#include<stdio.h>
int main()
{int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        if(a%2==0 && a%3==0)
        {
            printf("Purple Number");
        }
        else if(a%2==0){printf("Red Number");}
        else if(a%3==0){printf("Blue Number");}
    }
    else if(b>c && b>a)
    {
        if(b%2==0 && b%3==0)
        {
            printf("Purple Number");
        }
        else if(b%2==0){printf("Red Number");}
        else if(b%3==0){printf("Blue Number");}
    }
    else{
        if(c%2==0 && c%3==0)
        {
            printf("Purple Number");
        }
        else if(c%2==0){printf("Red Number");}
        else if(c%3==0){printf("Blue Number");}
    }



    return 0;
}