#include <stdio.h>

int main() {
    double num = 3.14159265;
    char buffer[50];

     // Using snprintf (safer)
    snprintf(buffer, sizeof(buffer), "%lf", num); // With 4 decimal places
    printf("String: %s\n", buffer);

    // Using sprintf (be careful of buffer overflow)
    sprintf(buffer, "%lf", num);
    printf("String: %s\n", buffer);

    return 0;
}
