#include <stdio.h>

// Function to print binary representation of an integer
void printBinary( int num) {
    // Size of integer in bits (typically 32)
    int size = sizeof(num) * 8;

    // Loop through each bit (from MSB to LSB)
    for (int i = size - 1; i >= 0; i--) {
        printf("%d", (num >> i) & 1);
        if (i % 4 == 0) printf(" "); // Optional: Add space every 4 bits
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a decimal number: ");
    scanf("%u", &n);

    printf("Binary: ");
    printBinary(n);

    return 0;
}
