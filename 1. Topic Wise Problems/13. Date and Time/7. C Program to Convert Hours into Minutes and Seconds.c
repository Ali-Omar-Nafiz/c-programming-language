#include <stdio.h>

int main() {
    float hours;
    int minutes;
    int seconds;

    // Input hours
    printf("Enter time in hours: ");
    scanf("%f", &hours);

    // Convert
    minutes = (int)(hours * 60);
    seconds = (int)(hours * 3600);

    // Output
    printf("Time in minutes: %d minutes\n", minutes);
    printf("Time in seconds: %d seconds\n", seconds);

    return 0;
}
