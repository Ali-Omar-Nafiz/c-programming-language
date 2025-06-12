#include <stdio.h>
#include <windows.h>

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, 10); // Green
    printf("This is green text.\n");

    SetConsoleTextAttribute(hConsole, 12); // Red
    printf("This is red text.\n");

    SetConsoleTextAttribute(hConsole, 14); // Yellow
    printf("This is yellow text.\n");

    SetConsoleTextAttribute(hConsole, 7); // Reset
    return 0;
}