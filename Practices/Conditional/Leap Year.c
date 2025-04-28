#include <stdio.h>
int main()
{
    int Year;
    scanf("%d", &Year);
    /*
//using nested condition
    if (Year % 4 == 0)
    {
        if (Year % 100 == 0)
        {
            if (Year % 400 == 0)
            {
                printf("Leap Year");
            }
            else
            {
                printf("Not Leap Year");
            }
        }
        else
        {
            printf("Leap Year");
        }
    }
    else
    {
        printf("Not Leap Year");
    }

//using simple condition
    if ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
//using ternary operator
    ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)?printf("Leap Year"):printf("Not Leap Year");*/

// using switch case

    switch ((Year % 4 == 0 && Year % 100 != 0) || Year % 400 == 0)
    {
    case 1:
        printf("Leap Year");
        break;
    case 0:
        printf("Not Leap Year");
        break;
    default:
        printf("Invalid Option");
    }

    return 0;
}