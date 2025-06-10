#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char time[] = __TIME__;
    int hour;

    // Extract hour part
    char hour_str[3];
    hour_str[0] = time[0];
    hour_str[1] = time[1];
    hour_str[2] = '\0';

    hour = atoi(hour_str); // Convert to integer

    char result[20];
    if (hour == 0) {
        sprintf(result, "12%s A.M.", time + 2); // Midnight case
    } else if (hour == 12) {
        sprintf(result, "12%s P.M.", time + 2); // Noon case
    } else if (hour > 12) {
        sprintf(result, "%02d%s P.M.", hour - 12, time + 2); // Afternoon
    } else {
        sprintf(result, "%02d%s A.M.", hour, time + 2); // Morning
    }

    printf("Before: %s\n", time);
    printf("After:  %s\n", result);

    return 0;
}
