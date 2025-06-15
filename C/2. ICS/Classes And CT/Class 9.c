#include<stdio.h>
int main()
{
    /*int a,b;
     scanf("%d%d",&a,&b);
     if(a>b)
     {
         //''{}' is called coding block,= is assignment operator, == is equal operator
         printf("a is grater than b");
     }
     else
     {
         printf("a is less than b");
     }
     scanf("%d",&a);
     if(a%2 == 0)
     {
         //''{}' is called coding block,= is assignment operator, == is equal operator
         printf("%d is even",a);
     }
     else
     {
         printf("%d is odd",a);
     }*/
    /*scanf("%d",&a);
    if(a>0)
    {
        //''{}' is called coding block,= is assignment operator, == is equal operator
        printf("%d is positive",a);
    }
    else
    {
        printf("%d is negative",a);

    scanf("%d%d",&a,&b);
    if(a>b)
    {
        //''{}' is called coding block,= is assignment operator, == is equal operator
        printf("a is grater than b");
    }
    else if(a==b)
    {
        printf("a is equal b");
    }
    else
    {
        printf("a is less than b");
    }
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is maximum",a);
        }
        else
        {
            printf("%d is maximum",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is maximum",b);
        }
        else
        {
            printf("%d is maximum",c);
        }
    }
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is maximum",a);
    }

    else if(b>a && b>c)
    {
        printf("%d is maximum",b);
    }
    else
    {
        printf("%d is maximum",c);
    }*/
    // Take your mid number as a input , write a code such that it output the number's grade
    int number;
    scanf("%d",&number);
    if(number>=90)
        printf("A");
    else if(number>=86 && number<=89)
        printf("A-");
    getch();
    return 0;
}
