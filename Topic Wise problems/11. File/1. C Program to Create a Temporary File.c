#include<stdio.h>

int main()
{
    // Create a temporary file. It will be deleted automatically when the program ends.
    FILE *fptr = tmpfile();

    // Check if the file was created successfully
    if(fptr == NULL) return 0;

    int n, mark;

    // Prompt the user for the number of students
    printf("Enter the total number of students: ");
    scanf("%d", &n);

    char name[20];

    // Write the header line to the file
    fputs("Serial\tName\tMarks\n", fptr);

    for(int i = 1; i <= n; i++)
    {
        // Prompt for student name
        printf("Enter the name of the student %d: ", i);

        getchar();   // Consume the leftover newline character from previous input

        // Read a full line (including spaces) into the name array
        scanf("%[^\n]s", name);

        // Write serial number and name to the file
        fprintf(fptr, "%d\t%s\t", i, name);

        // Prompt for student marks
        printf("Enter the mark: ");
        scanf("%d", &mark);

        // Write marks to the file
        fprintf(fptr, "%d\n", mark);
    }

    // Move file pointer to the beginning for reading
    fseek(fptr, 0, SEEK_SET);

    // Read and display the contents of the file character by character
    while(1)
    {
        char c = fgetc(fptr);  // Read a character
        printf("%c", c);       // Print the character

        // Break the loop at end of file
        if(feof(fptr)) break;
    }

    return 0;
}
