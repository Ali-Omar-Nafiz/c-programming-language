#include <stdio.h>
#include<string.h>

// Define a structure to hold student data
struct data {
    int serial;          // Student serial number
    char name[20];       // Student name (max 19 characters + null terminator)
    int marks;           // Student marks
};

int main() {
    // Open binary file for both writing and reading
    FILE *fptr = fopen("student_data.bin", "wb+");
    if (fptr == NULL) return 0; // Exit if file couldn't be opened

    int n;
    printf("Enter the total number of students: ");
    scanf("%d", &n); // Read number of students

    struct data student; // Declare a variable of struct type

    // Write a text label at the beginning (even though it's a binary file)
    char label[] = "Serial\tName\tMarks\n";
    fwrite(label, sizeof(label), 1, fptr);

    // Loop to collect data for each student
    for (int i = 1; i <= n; i++) {
        printf("Enter the name of student %d: ", i);
        getchar(); // Consume leftover newline from previous input
        scanf("%[^\n]", student.name); // Read full line as name (including spaces)

        printf("Enter the mark: ");
        scanf("%d", &student.marks); // Read student's marks

        student.serial = i; // Assign serial number

        // Write binary struct data to the file
        fwrite(&student, sizeof(student), 1, fptr);
    }

    // Reset file pointer to beginning for reading
    fseek(fptr, 0, SEEK_SET);

    // Read and print the label
    fread(label, sizeof(label), 1, fptr);
    printf("%s", label);

    // Read and print each student's data
    for (int i = 1; i <= n; i++) {
        fread(&student, sizeof(student), 1, fptr); // Read binary data into struct
        printf("%d\t%s\t%d\n", student.serial, student.name, student.marks); // Print student info
    }

    // Close the file
    fclose(fptr);

    return 0;
}
