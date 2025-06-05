#include<stdio.h>
int main()
{
    /*int a;
    scanf("%d",&a);
    if(a == 0)
    {
        printf("Zero");
    }
    else if (a == 1)
    {
        printf("One");
    }
    else if (a == 2)
    {
        printf("Two");
    }
    else if (a == 3)
    {
        printf("Three");
    }
    else if (a == 4)
    {
        printf("four");
    }
    else if (a == 5)
    {
        printf("Five");
    }
    else if (a == 6)
    {
        printf("six");
    }
    else if (a == 7)
    {
        printf("Seven");
    }
    else if (a == 8)
    {
        printf("Eight");
    }
    else if (a == 9)
    {
        printf("Nine");
    }
    int t;
    scanf("%d",&t);
    if(t<0)
    {
           printf("Freezing");
    }
    else if(t>0 && t<15)
    {
           printf("Cold");
    }
    else if(t>14 && t<26)
    {
           printf("Warm");
    }
    else if(t>25 && t<36)
    {
           printf("Hot");
    }
    else
    {
           printf("Very Hot");
    }*/

    /*scanf("%d",&t);
        if(t<0)
        {
               printf("Freezing");
        }
        else if(t>0 && t<15)
        {
               printf("Cold");
        }
        else if(t>14 && t<26)
        {
               printf("Warm");
        }
        else if(t>25 && t<36)
        {
               printf("Hot");
        }
        else
        {
               printf("Very Hot");
        }*/

    int main()
    {
        int year;

        // Ask the user for the year
        printf("Enter a year: ");
        scanf("%d", &year);

        // Check if the year is divisible by 4
        // But not divisible by 100 unless divisible by 400
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        {
            printf("%d is a leap year.\n", year);
        }
        else
        {
            printf("%d is not a leap year.\n", year);
        }


        getch();
        return 0;
    }

