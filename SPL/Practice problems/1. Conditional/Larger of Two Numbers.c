#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    switch (num1 > num2)
    {
    case 1:
        printf("%d is larger", num1);
        break;
    case 0:
        switch (num1 == num2)
        {
        case 1:
            printf("Both are same");
            break;
        case 0:
            printf("%d is larger", num2);
            break;
        }
        break;
    }

    return 0;
}