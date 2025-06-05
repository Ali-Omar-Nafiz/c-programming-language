#include<stdio.h>
int main()
{
    float a,b;
    int Choice;
    int choice;
    printf("Enter the real numbers: ");
    scanf("%f %f",&a,&b);
    printf("Enter your choice: ");
    scanf("%d",&Choice);
    switch(Choice)
    {
    case 1:

        printf("Addition: %.0f",a+b);
        break;

    case 2:

        printf("Subtraction: %.0f",a-b);
        break;

    case 3:

        printf("Multiplication: %.0f",a*b);
        break;

    case 4:

        switch(b!=0)
        {
        case 1:

            printf("Enter your choice: ");
            scanf("%d",&choice);
            switch(choice)
            {
            case 1:
                printf("Quotient: %.0f",a/b);
                break;
            case 2:
                printf("Reminder: %.0f",a-(a/b));
                break;
            default:
                printf("Invalid Choice");
            }
            break;
        case 0:
            printf("Error: Divisor is zero");
            break;


        default:
            printf("Invalid Choice");
        }
    }
    return 0;
}
