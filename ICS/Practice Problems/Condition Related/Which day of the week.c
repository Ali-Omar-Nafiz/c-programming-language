#include <stdio.h>
int main()
{
    int notd;
    scanf("%d", &notd);
    // using nested condition
    /*if (notd == 1)
    {
        printf("Monday");
    }
    else if (notd == 2)
    {
        printf("Tuesday");
    }
    else if (notd == 3)
    {
        printf("Wednesday");
    }
    else if (notd == 4)
    {
        printf("Thusday");
    }
    else if (notd == 5)
    {
        printf("Friday");
    }
    else if (notd == 6)
    {
        printf("Satuarday");
    }
    else if (notd == 7)
    {
        printf("Sunday");
    }
    else
    {
        printf("Invalid Input");
    }*/

    // using switch case
    switch (notd)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thusday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Satuarday");
        break;
    case 7:
        printf("Sunday");
        break;
        default:
        printf("Invalid Input");
    }
    return 0;
}