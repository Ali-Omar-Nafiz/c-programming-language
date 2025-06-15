#include <stdio.h>
#include <windows.h>

void blinking_prompt(const char *prompt, int times, int delay_ms) {
    for (int i = 0; i < times; i++) {
        printf("\r%s", prompt);
        fflush(stdout);
        Sleep(delay_ms);
        printf("\r%*s", (int)strlen(prompt), " ");
        fflush(stdout);
        Sleep(delay_ms);
    }
    printf("\r%s", prompt);
    fflush(stdout);
}

int main() {
    blinking_prompt("Enter your choice: ", 5, 300);
    return 0;
}