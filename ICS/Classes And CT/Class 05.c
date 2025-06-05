#include<stdio.h>
int main()
{

    /*int a,b,c,d,sum;
     a=21;
     b=15;
     c=34;
     d=6;
     int a=21,b=13,c=34,d=6,sum;
     sum=a*b+(a-c)/d+b;
     printf("%d*%d+(%d-%d)/%d+%d=%d",a,b,a,c,d,b,sum);
     printf("***********************************\n");
     printf("*                                 *\n");
     printf("*           Nafiz's Code          *\n");
     printf("*                                 *\n");
     printf("***********************************\n");
     printf("*****************************************\n");
     printf("*\t\t\t\t\t*\n");
     printf("*\t\t\t\t\t*\n");
     printf("*****************************************\n");
     int n;
     printf("Enter a number:");
     scanf("%d",&n);
     printf("Input is  : %d",n);
     int a,b;
     scanf("%d",&a);
     scanf("%d",&b);
     int sum = a+b;
     printf("summation is: %d",sum);

     int a,b;
     scanf("%d%d",&a,&b);
     int sum = a+b;
     printf("summation is:  %d",sum);

        int a,b;
     scanf("%d%d",&a,&b);
     int sum1= a+b,sum2=a-b,sum3=a*b,sum4=a/b,sum5=a%b;
     printf("summation is:  %d\n",sum1);
      printf("summation is:  %d\n",sum2);
       printf("summation is:  %d\n",sum3);
        printf("summation is:  %d\n",sum4);
         printf("summation is:  %d\n",sum5);
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d+%d= %d\n",a,b,a+b);
    printf("%d-%d= %d\n",a,b,a-b);
    printf("%d*%d= %d\n",a,b,a*b);
    printf("%d/%d= %d\n",a,b,a/b);
    printf("%d %% %d= %d\n",a,b,a%b);*/

    float width,length,road_width,garden_area,total_area;
    printf("Enter width of the garden: ");
    scanf("%f",&width);
    printf("Enter length of the garden: ");
    scanf("%f",&length);
    printf("Enter the width of the road surrounding the garden: ");
    scanf("%f",&road_width);
    garden_area = width * length;
    total_area = (width + 2 * road_width) * (length + 2 * road_width);
    printf("The area of the garden is: %.2f\n",garden_area);
    printf("The total area covered by the garden and the surrounding road is : %.3f",total_area);

    getch();
    return 0;
}
