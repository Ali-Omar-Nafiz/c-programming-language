#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);
    // using simple condition
    /*if (num % 2 == 0)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
   //using ternery operator
   (num % 2 == 0)?printf("Even"):printf("Odd");*/

    // using switch case
    switch (num % 2 == 0)
    {
    case 1:
        printf("Even");
        break;
    case 0:
        printf("Odd");
        break;
    default:
        printf("Invalid Number");
    }

    return 0;
}