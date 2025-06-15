#include <stdio.h>

int main() {
    int n;  // Stores the Hexadecimal input

    printf("Enter a Hexadecimal number: ");
    scanf("%x", &n);  // Reads Hexadecimal input

    // Print decimal using %d
    printf("\nDecimal: %d", n);

    return 0;
}
