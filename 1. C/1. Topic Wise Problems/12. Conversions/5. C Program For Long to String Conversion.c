#include <stdio.h>

int main()
{
    long num = 123456789;
    char buffer[20]; // Must be large enough to hold the number + null terminator

    // Convert long to string safely
    snprintf(buffer, sizeof(buffer), "%ld", num);
    printf("Converted string: %s\n", buffer);

    return 0;
}
