#include <stdio.h>

int main(){

    char str[20] = "Geeks";

    // Pointer variable which stores
    // the starting address of
    // the character array str
    char* ptr = str;

    // While loop will run till
    // the character value is not
    // equal to null character
    printf("%s\n",str);
    while (*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }
    return 0;
}
