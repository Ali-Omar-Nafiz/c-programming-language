#include <stdio.h>

// Define a structure for a student
struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    // Declare an array of 1000 students
    struct Student students[1000];

    // Input data for each student   //For example, taking 3 student's detail
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Roll number: ");
        scanf("%d", &students[i].roll);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // read string with spaces
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Display student data
    printf("Student details:\n");
    for (int i = 0; i < 3; i++) {
        printf("Student %d - Roll: %d, Name: %s, Marks: %.2f\n",
               i + 1, students[i].roll, students[i].name, students[i].marks);
    }

    return 0;
}

