#include<stdio.h>
int main()
{
    float m;
    scanf("%f",&m);
    if(m>=90)
    {
        printf("Grade: A");
    }
    else if(m<90 && m>85)
    {
        printf("Grade: A-");
    }
    else if(m<86 && m>81)
    {
        printf("Grade: B+");
    }
    else if(m<82 && m>77)
    {
        printf("Grade: B");
    }
    else if(m<78 && m>73)
    {
        printf("Grade: B-");
    }
    else if(m<74 && m>69)
    {
        printf("Grade: C+");
    }
    else if(m<70 && m>65)
    {
        printf("Grade: C");
    }
    else if(m<66 && m>61)
    {
        printf("Grade: C-");
    }
    else if(m<62 && m>57)
    {
        printf("Grade: D+");
    }
    else if(m<58 && m>54)
    {
        printf("Grade: D");
    }
    else if(m<55)
    {
        printf("F");
    }
    else {printf("Invalid");}

    return 0;
}