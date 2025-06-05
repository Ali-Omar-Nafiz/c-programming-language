#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Open the file in read mode
    FILE *fptr= fopen("sample.txt", "r");
    char filename[] = "sample.txt";
    char ch;
    int line_count = 0;
    // Check if file opened successfully
    if (fptr == NULL)
    {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // Count lines by counting newline characters
    while (1)
    {
        ch=fgetc(fptr);
        if (ch == '\n')
        {
            line_count++;
        }
        if(feof(fptr))break;
    }

    // The last line might not end with newline, so we need to count it
    // We do this by checking if we read at least one character (file not empty)
    // and if the last character wasn't a newline
    fseek(fptr, -1, SEEK_END); // Move to last character
    ch = fgetc(fptr);
    if (ch != '\n')
    {
        line_count++;
    }

    // Close the file
    fclose(fptr);

    // Print the result
    printf("Number of lines in %s: %d\n", filename, line_count);

    return 0;
}
