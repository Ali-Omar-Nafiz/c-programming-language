#include <stdio.h>

int main()
{
    // Open file in read mode
    FILE *fptr = fopen("sample.txt", "r");
    if (fptr == NULL)
    {
        printf("Failed to open file\n");
        return 0;
    }

    // Buffers to store read data
    char info[1000];
    char info2[1000];  // Note: This variable is declared but never used
    char info3[1000];

    // Read first line using fgets()
    fgets(info, sizeof(info), fptr);
    printf("First line (fgets): %s", info);

    // Reset file pointer to beginning
    fseek(fptr, 0, SEEK_SET);

    // Read entire file character by character using fgetc()
    printf("Entire file (fgetc):\n");
    char c;
    while ((c = fgetc(fptr)) != EOF)               //safest way
    {
        printf("%c",c);
    }


    /*or,    while(1)
        {
            char c = fgetc(fptr);
            if(feof(fptr))break;
            printf("%c", c);
        }
    */

    printf("\n");

    // Reset file pointer to beginning again
    fseek(fptr, 0, SEEK_SET);

    // Read first word using fscanf()
    fscanf(fptr, "%s", info3);
    printf("First word (fscanf): %s\n", info3);

    // Clean up
    fclose(fptr);
    return 0;
}
