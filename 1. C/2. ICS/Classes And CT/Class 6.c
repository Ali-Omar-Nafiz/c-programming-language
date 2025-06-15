#include<stdio.h>
int main()
{
   /* float m1;
    printf("Enter marks for friend 1 :") ;
    scanf("%f",&m1);
    char g1;
    printf("Enter grade for friend 1 :") ;
    //fflush(stdin);[to flush the buffer] or use a space before %c
    scanf(" %c",&g1);
    float m2;
    printf("Enter marks for friend 2 :") ;
    scanf("%f",&m2);
    char g2;
    printf("Enter grade for friend 2 :") ;
    //fflush(stdin);
    scanf(" %c",&g2);
    printf("Friend\tMarks\tGrade\n1\t%.1f\t%c\n2\t%.1f\t%c",m1,g1,m2,g2);
    float s,u,a,t;
    printf("Enter u,a and t : ");
    scanf("%f%f%f",&u,&a,&t);
    s= u*t + .5*a*(t*t);
    printf("The deplacement of a moving body s : %.1f",s);*/
    int a,b,c;
    printf("Height in cenimeter : ");
    scanf("%d",&a);
    b=a/100;
    c=a%100;
    printf("%d meter %d centimeter",b,c);



    getch();
    return 0;
}


