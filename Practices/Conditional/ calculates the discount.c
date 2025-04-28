#include<stdio.h>
int main()
{
    float p,pit;
    scanf("%f",&p);
    if(p<50)
    {
        printf("No discount\n");
        printf("Final amount after discount: %.2f",p);
    }
    else if(p>49 && p<101)
    {
        printf("5%% discount\n");
        pit = p - p*.05;
        printf("Final amount after discount is: %.2f",pit);
    }
    else if(p>100 && p<201)
    {
        printf("10%% discount\n");
        pit = p - p*.10;
        printf("Final amount after discount is: %.2f",pit);
    }
    else if(p>200 && p<501)
    {
        printf("15%% discount\n");
        pit = p - p*.15;
        printf("Final amount after discount is: %.2f",pit);
    }
    else if(p>500)
    {
        printf("20%% discount\n");
        pit = p - p*.2;
        printf("Final amount after discount is: %.2f",pit);
    }





    return 0;
}
