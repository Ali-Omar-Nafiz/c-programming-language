#include <stdio.h>
#include <stdlib.h> // Required for strtol() function

int main()
{
    // Buffer to store binary input (32 bits + null terminator)
    char binary_str[33];

    // Prompt user for binary input
    printf("Enter a binary number: ");

    // Read input with safety limit (max 32 chars + null terminator)
    // Prevents buffer overflow vulnerability
    scanf("%32s", binary_str);

    /*****************************************************************
     * KEY CONVERSION CONCEPT:
     * strtol() - String to Long Integer conversion
     *
     * Parameters:
     * 1. binary_str: The input string containing binary number
     * 2. NULL: We don't need end pointer for error checking here
     * 3. 2: Base-2 (binary) conversion
     *
     * The function:
     * - Parses the string until invalid character or end
     * - Converts valid binary digits (0-1) to decimal
     * - Ignores leading whitespace
     * - Returns 0 if no valid conversion could be performed
     *****************************************************************/
    long decimal_num = strtol(binary_str, NULL, 2);

    // Print the converted decimal value
    // %ld format specifier for long integer
    printf("Decimal equivalent: %ld\n", decimal_num);

    return 0; // Indicates successful program termination
}
