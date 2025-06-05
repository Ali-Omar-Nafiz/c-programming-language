#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, choise;
    printf("Menu\n1.Addition\n2.Subtraction\n3.Multiply\n4.Division\n5.Root\n6.Square\nEnter your choise:");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1:
        printf("Enter the numbers :");
        scanf("%d %d", &num1, &num2);
        printf("Result :%f\n", (float)num1 + num2);
        break;
    case 2:
        printf("Enter the numbers :");
        scanf("%d %d", &num1, &num2);
        printf("Result :%d\n", num1 - num2);
        break;
    case 3:
        printf("Enter the numbers :");
        scanf("%d %d", &num1, &num2);
        printf("Result :%d\n", num1 * num2);
        break;
    case 4:
        printf("Enter the numbers :");
        scanf("%d %d", &num1, &num2);
        switch (num2 != 0)
        {
        case 1:
            printf("Result :%f\n", (float)num1 / num2);
            break;
        case 0:
            printf("Number 2 can't be 0\n");
            break;
        }
        break;
    case 5:
        printf("Enter the number :");
        scanf("%d", &num1);
        float res1 = sqrt(num1);
        printf("Square Root :%f\n", res1);
        break;
    case 6:
        printf("Enter the number :");
        scanf("%d", &num1);
        float res2 = pow(num1, 2);
        printf("Square :%f", res2);
        break;
    default:
        printf("Invalid Choise");
    }
    return 0;
}
