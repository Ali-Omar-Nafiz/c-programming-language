#include <stdio.h>      // For printf()
#include <stdlib.h>     // For strtol() (string to long conversion)

int main()
{
    // The input string representing a number in decimal format
    const char str[] = "123364634";

    // Convert the string to a long integer using base 10 (decimal)
    // - str: The string to convert
    //NULL
    // - 10: The base (10 = decimal, 16 = hex, 8 = octal, 0 = auto-detect)
    long num = strtol(str,NULL, 10);

    // Print the parsed number
    printf("Parsed: %ld\n", num);

    return 0;  // Indicates successful execution
}
