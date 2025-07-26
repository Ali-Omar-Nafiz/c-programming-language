#include <stdio.h>
int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    // using nested if-else condition
    /*if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("Number %d is larger",num1);
        }
    }
    else if (num2 > num3)
    {
        printf("Number %d is larger",num2);
    }
    else
    {
        printf("Number %d is larger",num3);
    }*/
    // using simple if-else condition
    /*if (num1 > num2 && num1 > num3)
    {
        printf("Number %d is larger", num1);
    }
    else if (num2 > num3)
    {
        printf("Number %d is larger", num2);
    }
    else
    {
        printf("Number %d is larger", num3);
    }*/
    switch (num1 > num2 && num1 > num3)
    {
    case 1:
        printf("Number %d is larger", num1);
        break;
    case 0:
        switch (num2 > num3)
        {
        case 1:
            printf("Number %d is larger", num2);
            break;
        case 0:
            printf("Number %d is larger", num3);
            break;
        }
        break;
    }

    return 0;
}