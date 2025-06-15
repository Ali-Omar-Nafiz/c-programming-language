#include <stdio.h>

int main()
{
    // Open file in write/update mode
    FILE *fptr = fopen("sample.txt", "w");
    if (fptr == NULL)
    {
        printf("Failed to open file\n");
        return 0;
    }

    // Data to be written
    char info1[100] = "1 Zahid";
    char info2[100] = "2 Tanvir";
    char info3[100] = "3 Atik";

    // Write first line using fputs()
    fputs(info1, fptr);
    fputs("\n", fptr);
    printf("Current position after line 1: %ld\n", ftell(fptr));

    // Write second line character by character using fputc()
    for (int i = 0; info2[i] != '\0'; i++)
    {
        fputc(info2[i], fptr);
    }
    fputc('\n', fptr);
    printf("Current position after line 2: %ld\n", ftell(fptr));

    // Write third line using fprintf()
    fprintf(fptr, "%s\n", info3);
    printf("Current position after line 3: %ld\n", ftell(fptr));

    // Close the file
    fclose(fptr);
    return 0;
}
