#include <stdio.h>

// Driver code
int main()
{
    int n;  // Declare an integer variable to store user input

    printf("Enter a decimal number: \n");  // Prompt user for input
    scanf("%d", &n);  // Read the decimal number and store in 'n'

    // Printing the octal representation using %o format specifier
    printf("\nOctal Representation is: %o", n);

    return 0;  // Exit successfully
}
