#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open file in append mode
    FILE *fptr= fopen("sample.txt", "a");;
    char filename[] = "sample.txt";
    if (fptr == NULL)
    {
        printf("Error opening file %s\n", filename);
        return 1;
    }

    // 1st line: append using fputs
    fputs("This line was added using fputs\n", fptr);

    // 2nd line: append using fputc (character by character)
    char line2[] = "This line was added using fputc\n";
    for (int i = 0; line2[i] != '\0'; i++)
    {
        fputc(line2[i], fptr);
    }

    // 3rd line: append using fprintf
    fprintf(fptr, "This line was added using fprintf\n");

    // Close the file
    fclose(fptr);

    printf("Three lines appended to %s successfully.\n", filename);

    return 0;
}
