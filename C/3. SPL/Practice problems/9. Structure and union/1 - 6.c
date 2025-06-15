#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    char id[20];                          //declaring structure
    float cgpa;
};
int main()
{
    struct student s;                //declaring variable

    s = {"Nafiz","0112430348",3.72};
    //or,
    strcpy(s.name,"Nafiz");                           //initializing value
    strcpy(s.id,"0112430348");
    s.cgpa=3.82;

    printf("Name: %s\nId: %s\nCGPA: %.2f\n",s.name,s.id,s.cgpa);             //displaying value


    printf("Let's take these as the inputs:\n");
    printf("Name:");
    scanf("%[^\n]s",s.name);
    printf("ID:");
    scanf(" %[^\n]s",s.id);                                                 //populating (taking value as input)
    printf("CGPA:");
    scanf(" %f",&s.cgpa);
    printf("Name: %s\nId: %s\nCGPA: %.2f\n",s.name,s.id,s.cgpa);

    return 0;
}
