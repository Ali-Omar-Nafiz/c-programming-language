
#include <stdio.h>

// Define a union named 'Data'
union Data {
    int i;     // 4 bytes (typically) — shares memory with other members
    float f;   // 4 bytes — shares same memory as 'i' and 'c'
    char c;    // 1 byte — shares same memory
    // Total size of the union = size of the largest member (usually 4 bytes)
};

int main() {
    union Data data;  // Declare a variable of union 'Data'

    // Set the integer value
    data.i = 10;
    printf("After setting data.i = 10:\n");
    printf("data.i = %d\n", data.i);  // Will print 10
    printf("data.f = %f\n", data.f);  // May print garbage value (shared memory)
    printf("data.c = %c\n", data.c);  // May print garbage character

    // Set the float value (overwrites previous value)
    data.f = 3.14;
    printf("\nAfter setting data.f = 3.14:\n");
    printf("data.i = %d\n", data.i);  // Will print garbage value
    printf("data.f = %f\n", data.f);  // Will print 3.14
    printf("data.c = %c\n", data.c);  // May print garbage character

    // Set the char value (overwrites the first byte)
    data.c = 'A';
    printf("\nAfter setting data.c = 'A':\n");
    printf("data.i = %d\n", data.i);  // May print unexpected value
    printf("data.f = %f\n", data.f);  // May print garbage
    printf("data.c = %c\n", data.c);  // Will print 'A'

    return 0;
}
