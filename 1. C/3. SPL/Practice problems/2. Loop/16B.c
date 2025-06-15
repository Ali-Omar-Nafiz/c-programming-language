#include <stdio.h>
int main()
{
    int a, b, temp, lcm, originA, originB;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);
    originA = a;
    originB = b;
    if ((a <= 0) || (b <= 0))
    {
        printf("\nEnter two positive integers only!");
        return 1;
        /*return 0 and return 1(or any non-zero value) both terminate the program immidieately on that line.
        However, return 0; indicates that the program ended successfully without any errors. 
        On the other hand, return 1; (or any non-zero value) indicates that the program encountered an error or abnormal termination.*/
    }
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD: %d", a);
    lcm = (originA * originB) / a;
    printf("\nLCM: %d", lcm);

    return 0;
}