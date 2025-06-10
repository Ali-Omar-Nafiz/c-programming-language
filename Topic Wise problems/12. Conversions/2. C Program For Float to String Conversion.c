#include <stdio.h>

int main() {
    float num = 3.14159265;
    char buffer[50];


    // Using snprintf (safer)
    snprintf(buffer, sizeof(buffer), "%f", num); // With 4 decimal places
    printf("String: %s\n", buffer);

    // Using sprintf (be careful of buffer overflow)
    sprintf(buffer, "%f", num);
    printf("String: %s\n", buffer);

    return 0;
}
