#include<stdio.h>
int main()
{
    /*float Area,r,num;
    scanf("%f %f",&r,&num);
    Area = 3.1416*r*r;
    switch(Area>=num)
    {
    case 1:
        printf("OK");
        break;
    case 0:
        printf("No");
        break;
    }*/
    float Area,r,num;
    scanf("%f %f",&r,&num);
    Area = 3.1416*r*r;
    (Area>=num)?printf("OK"):printf("NO");
        return 0;
    }
