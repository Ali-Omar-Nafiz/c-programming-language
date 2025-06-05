#include <stdio.h>
int main()
{
        float num1, num2;
        char opt;
        printf("Enter The first Number :");
        scanf(" %f", &num1);
        printf("Enter The operator :");
        scanf(" %c", &opt);
        printf("Enter The second Number :");
        scanf(" %f", &num2);
        // using nested condition
        /*if (opt == '+')
        {
                printf("%f + %f = %f", num1, num2, num1 + num2);
        }
        else if (opt == '-')
        {
                printf("%f - %f = %f", num1, num2, num1 - num2);
        }
        else if (opt == '*')
        {
                printf("%f * %f = %f", num1, num2, num1 * num2);
        }
        else if (opt == '/')
        {
                printf("%f / %f = %f", num1, num2, num1 / num2);
        }
        else
        {
                printf("Invalid Operator");
        }*/
       //using switch case
       switch(opt){
        case '+':printf("%f",num1+num2);
        break;
        case '-':printf("%f",num1-num2);
        break;
        case '*':printf("%f",num1*num2);
        break;
        case '/':printf("%f",num1/num2);
        break;
        default:
        printf("Invalid Operator");
       }

        return 0;
}
