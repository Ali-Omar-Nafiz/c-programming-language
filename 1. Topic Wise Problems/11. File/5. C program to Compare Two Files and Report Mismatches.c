#include <stdio.h>

// Function prototype for comparing two files
void compare_file(FILE *fptr1, FILE *fptr2);

int main()
{
    // Open both files in read mode
    FILE *fptr1 = fopen("sample1.txt", "r");
    FILE *fptr2 = fopen("sample2.txt", "r");

    // Check if either file failed to open
    if (fptr1 == NULL || fptr2 == NULL)
        return 0;

    // Call function to compare file contents
    compare_file(fptr1, fptr2);

    // Close both files after comparison
    fclose(fptr1);
    fclose(fptr2);

    return 0;
}

// Function to compare contents of two files character by character
void compare_file(FILE *fptr1, FILE *fptr2)
{
    // Read initial characters from both files
    char c1 = fgetc(fptr1);
    char c2 = fgetc(fptr2);

    // Initialize line and position counters, and error count
    int pos1 = 0, line1 = 1, line2 = 1, pos2 = 0, errorcount = 0;

    // Loop until end of both files is reached
    while (1)
    {
        // Increment character positions for both files
        pos1++;
        pos2++;

        // If both files reached EOF, stop comparison
        if (c1 == EOF && c2 == EOF) break;

        // If both characters are not EOF, compare them
        else if (c1 != EOF && c2 != EOF)
        {
            // If newline encountered, increment line count and reset position
            if (c1 == '\n')
            {
                line1++;
                pos1 = 0;
            }
            if (c2 == '\n')
            {
                line2++;
                pos2 = 0;
            }

            // If characters don't match, print the mismatch details
            if (c1 != c2)
            {
                errorcount++;
                printf("File 1: Line: %d, Position: %d\tFile 2: Line: %d, Position: %d\n", line1, pos1, line2, pos2);
            }
        }

        // If file 1 reached EOF but file 2 has extra characters
        else if (c2 != EOF)
        {
            if (c2 == '\n')
            {
                line2++;
                pos2 = 0;
            }
            errorcount++;
            printf("Extra text in Line: %d, Position: %d\n", line2, pos2);
        }

        // If file 2 reached EOF but file 1 has extra characters
        else if (c1 != EOF)
        {
            if (c1 == '\n')
            {
                line1++;
                pos1 = 0;
            }
            errorcount++;
            printf("Missing text in Line: %d, Position: %d\n", line1, pos1);
        }

        // Read next characters from both files
        c1 = fgetc(fptr1);
        c2 = fgetc(fptr2);
    }

    // Print total number of mismatches
    printf("Total error: %d\n", errorcount);
}
