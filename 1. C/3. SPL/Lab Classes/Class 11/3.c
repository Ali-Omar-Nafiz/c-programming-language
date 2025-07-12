#include <stdio.h>
#include <string.h>

typedef struct person
{
    char name[40];
    char fname[40];
    int age;
    float CGPA;
} PERSON;

void printStructure(PERSON X){   
    printf("\nName: %s", X.name);
    printf("\nFather name: %s", X.fname);
    printf("\nAge: %d", X.age);
    printf("\nCGPA: %.3f", X.CGPA);
    printf("\n\n");
}


void updateStructure(PERSON *X){

    // (*X).element OR X->element
    (*X).CGPA+=0.5;
    X->age+=2;
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
        updateStructure(&people[i]);
        printStructure(people[i]);

       
    }

    return 0;
}