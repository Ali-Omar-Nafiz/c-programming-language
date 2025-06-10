#include <stdio.h>

int main() {
    int n;  // Stores the decimal input

    printf("Enter a decimal number: ");
    scanf("%d", &n);  // Reads decimal input

    // Print hexadecimal (lowercase) using %x
    printf("\nHexadecimal (lowercase): 0x%x", n);

    // Print hexadecimal (uppercase) using %X
    printf("\nHexadecimal (uppercase): 0X%X", n);

    return 0;
}
