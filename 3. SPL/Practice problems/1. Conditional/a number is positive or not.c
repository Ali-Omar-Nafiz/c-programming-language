#include<stdio.h>
int main()
{
    double number;
    printf("Enter the number: ");
    scanf("%lf",&number);
    if(number>=0)
    {
        printf("%.2lf is a positive number",number);
    }
    else
    {
        printf("%.0lf is a negative number",number);
    }

    return 0;
}