#include <stdio.h>

int main() {
    char str[20];

    // Using scanset in scanf
    // to read until newline
    //scanf("%19[^\n]s", str);

    // Printing the read string
   // printf("%s", str);

   // (with spaces) using fgets
    fgets(str, 20, stdin);

    printf("%s", str);

    return 0;

}
