#include <stdio.h>
#include <windows.h>

void delay_print(const char *text, int delay_ms) {
    while (*text) {
        putchar(*text++);
        fflush(stdout);
        Sleep(delay_ms);
    }
}

int main() {
    delay_print("Typing this sentence like a typewriter...\n", 100);
    return 0;
}