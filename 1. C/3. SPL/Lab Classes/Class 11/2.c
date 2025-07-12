#include <stdio.h>
#include <string.h>

 struct person
{
    char name[40];
    char fname[40];
    int age;
    float CGPA;
} ;


int main()
{

    int n;
    scanf("%d", &n);
    getchar();
    struct person people[n];

    for (int i = 0; i < n; i++)
    {

        printf("Enter the value of person %d: \n", i + 1);
        printf("Name: ");
        //char nameString[40], fnameString[40];

        fgets(people[i].name, sizeof(people[i].name), stdin);
        people[i].name[strcspn(people[i].name, "\n")] = '\0';
        //strcpy(people[i].name, nameString);

        printf("Age: ");
        scanf("%d", &people[i].age);

        printf("CGPA: ");
        scanf("%f", &people[i].CGPA);
        getchar();

        printf("Father name: ");
        fgets(people[i].fname, sizeof(people[i].fname), stdin);
        people[i].fname[strcspn(people[i].fname, "\n")] = '\0';
        //strcpy(people[i].fname, fnameString);


    }

    for (int i = 0; i < n; i++)
    {
        printf("\nPerson No. %d", i+1);
        printf("\nName: %s", people[i].name);
        printf("\nFather name: %s", people[i].fname);
        printf("\nAge: %d", people[i].age);
        printf("\nCGPA: %.3f", people[i].CGPA);
        printf("\n");
    }

    return 0;
}
