#include <stdio.h>
#include<math.h>
int main()
{
    float a, b;
    int op,op2;
    printf("Enter the real numbers: ");
    scanf("%f %f", &a, &b);
    printf("Menu:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Quotient\nEnter your choice: ");
    scanf(" %d", &op);
    switch (op)
    {
    case 1:
        printf("Addition: %.0f", a + b);
        break;
    case 2:
        printf("Subtraction: %.0f", a - b);
        break;
    case 3:
        printf("Multiplication: %.0f", a * b);
        break;
    case 4:
        if(b==0)
        {
            printf("Divisor zero is not valid");
        }
        else
        {
            printf("Menu:\n1.Quotient\n2.Remainder\nEnter your choice:");
            scanf("%d",&op2);
            switch(op2)
            {
                case 1:
                printf("Quotient: %.0f",floor(-(a/b)));
                break;
                case 2:
                printf("Reminder: %d",(int)a%(int)b);
                break;
                default:
                printf("Invalid Choice");
                break;
            }
        }
        break;
        default:
        printf("Invalid Choice");
        break;
    }
    return 0;
}