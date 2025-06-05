#include <stdio.h>

// Define a structure to hold student data
struct tottho {
    int sirial;         // Student serial number
    char nam[20];       // Student name (max 19 characters + null terminator)
    int nombor;         // Student marks
};

int main() {
    // Open the binary file in read-only mode
    FILE *fptr = fopen("student_data.bin", "rb");
    if (fptr == NULL) return 0; // Exit if file couldn't be opened

    // Buffer to hold the label line at the beginning of the file
    char uporer_lekha[19];  // WARNING: Must be same size as originally written (18 charecter + 1 Null terminator = 19)

    // Declare a variable of the same structure type
    struct tottho chatro;

    // Read the text label (heading) from the beginning of the file
    fread(uporer_lekha, sizeof(uporer_lekha), 1, fptr);
    printf("%s", uporer_lekha); // Print the heading

    // Read and display student records one by one
    while (1) {
        // Read one record of struct size from the file
        if (fread(&chatro, sizeof(chatro), 1, fptr) == 1) {
            // Print the student information
            printf("%d\t%s\t%d\n", chatro.sirial, chatro.nam, chatro.nombor);
        } else {
            // Break the loop if no more records are available
            break;
        }
    }

    // Close the file after reading
    fclose(fptr);

    return 0;
}
