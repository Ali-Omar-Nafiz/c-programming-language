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

PERSON insertStructure(char name[40], char fname[40], int age, float cgpa){

    PERSON X;
    strcpy(X.name,name);
    strcpy(X.fname, fname);
    X.age=age;
    X.CGPA=cgpa;

    return X;

}


PERSON* insertStructure2(char name[40], char fname[40], int age, float cgpa){

    static PERSON X;
    strcpy(X.name,name);
    strcpy(X.fname, fname);
    X.age=age;
    X.CGPA=cgpa;

    return &X;

}

int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    PERSON people[n];

    for (int i = 0; i < n; i++)
    {
        char nameString[40], fnameString[40];
        int age;
        float cgpa;
        

        printf("Enter the value of person %d: \n", i + 1);
        printf("Name: ");
        char nameString[40], fnameString[40];
        fgets(nameString, sizeof(nameString), stdin);
        nameString[strcspn(nameString, "\n")] = '\0';

        printf("Age: ");
        scanf("%d", &age);
        printf("CGPA: ");
        scanf("%f", &cgpa);
        getchar();

        printf("Father name: ");
        fgets(fnameString, sizeof(fnameString), stdin);
        fnameString[strcspn(fnameString, "\n")] = '\0';
        PERSON *ptr;
        ptr = insertStructure2(nameString,fnameString, age, cgpa);
        people[i] = *ptr;
        // people[i] = insertStructure(nameString, fnameString, age, cgpa);

        
    }

    for (int i = 0; i < n; i++)
    {

        printf("\n\nPerson Number %d", i+1);
        printStructure(people[i]);

       
    }

    return 0;
}