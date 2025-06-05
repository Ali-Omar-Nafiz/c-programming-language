#include <stdio.h>
#include<math.h>
int main()
{
    double n1, n2;
    char op;
    scanf("%lf", &n1);
    scanf(" %c", &op);
    scanf("%lf", &n2);
    switch (op)
    {
    case '+':
        printf("%lf + %lf= %lf", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%lf - %lf= %lf", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%lf * %lf= %.0lf", n1, n2, n1 * n2);
        break;
    case '/':
        if (n2 == 0)
        {
            printf("Zero as divisor is not valid");
        }
        else
        {
            printf("%lf / %lf= %lf", n1, n2, n1 / n2);
        }
        break;
    default:
        printf("Invalid Operator");
    }

    return 0;
}