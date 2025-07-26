#include <stdio.h>
#include <string.h>

typedef struct bday{
    int day;
    int month;
    int year;
}DOB;

typedef struct person
{
    char name[40];
    DOB birthDay;
    char fname[40];
    int age;
    float CGPA;
} PERSON;

void printStructure(PERSON X){
    
    printf("\nName: %s", X.name);
    printf("\nFather name: %s", X.fname);
    printf("\nBirthday: %d/%d/%d", X.birthDay.day, X.birthDay.month,
                X.birthDay.year);
    printf("\nAge: %d", X.age);
    printf("\nCGPA: %.3f", X.CGPA);
    printf("\n\n");
}


int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    PERSON people[n];

    for (int i = 0; i < n; i++)
    {
        

        printf("Enter the value of person %d: \n", i + 1);
        printf("Name: ");
        char nameString[40], fnameString[40];

        fgets(nameString, sizeof(nameString), stdin);
        nameString[strcspn(nameString, "\n")] = '\0';
        strcpy(people[i].name, nameString);

        printf("Age: ");
        scanf("%d", &people[i].age);

        printf("Birthday (dd/mm/yyyy): ");
       
        scanf("%d %d %d", &people[i].birthDay.day, 
            &people[i].birthDay.month, &people[i].birthDay.year);

        printf("CGPA: ");
        scanf("%f", &people[i].CGPA);
        getchar();

        printf("Father name: ");
        fgets(fnameString, sizeof(fnameString), stdin);
        fnameString[strcspn(fnameString, "\n")] = '\0';
        strcpy(people[i].fname, fnameString);

        
    }

    for (int i = 0; i < n; i++)
    {

        printf("\n\nPerson Number %d", i+1);
        printStructure(people[i]);

       
    }

    return 0;
}