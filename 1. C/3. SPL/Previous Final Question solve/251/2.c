#include<stdio.h>
#include<string.h>
struct Course
{
    char code[20];
    char title[50];
    int enrolled;
    int instructors;
};
void addCourse(struct Course courses[],int coun);
void printSummary(struct Course courses[],int count);
int isOffered(char course_name[],char semester[],struct Course courses[],int count);
int count=0;
int main()
{
    struct Course list[50];
    int choice;
    do
    {
        printf("Course Registration System\n");
        printf("1. Add a new course\n");
        printf("2. Display all courses\n");
        printf("3. Find out if a course is offered or not\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        char name[50];
        char term[10];
        switch(choice)
        {
        case 1:
            addCourse(list,count);
            break;
        case 2:
            printSummary(list,count);
            break;
        case 3:

            printf("Give the course name that you want to inquire: ");
            getchar();
            fgets(name,50,stdin);
            name[strcspn(name,"\n")]='\0';
            printf("Term: ");
            scanf("%s",term);
            if(isOffered(name,term,list,count))printf("Offered\n");
            else printf("Not offered\n");
            break;
        case 4:
            printf("Exiting...\n");
            break;

        }
    }
    while(choice!=4);
}
void addCourse(struct Course courses[],int coun)
{
    printf("Enter course name: ");
    getchar();
    fgets(courses[count].title,50,stdin);
    courses[count].title[strcspn(courses[count].title,"\n")]='\0';
    printf("Enter course code: ");
    fgets(courses[count].code,20,stdin);
    courses[count].code[strcspn(courses[count].code,"\n")]='\0';
    printf("Enrolled students: ");
    scanf("%d",&courses[count].enrolled);
    printf("No. of Instructors: ");
    scanf("%d",&courses[count].instructors);
    printf("Course added successfully\n");
    count++;
}
void printSummary(struct Course courses[],int count)
{
    for(int i=0; i<count; i++)
    {
       float avg=courses[i].enrolled/courses[i].instructors;
       char credit = courses[i].code[strlen(courses[i].code) - 1];

       printf("Code: %s, Title: %s, Credit: %c, Enrolled students: %d, Instructors: %d, Average: %.2f\n",
       courses[i].code,
       courses[i].title,
       credit,
       courses[i].enrolled,
       courses[i].instructors,
       avg);
    }
}
int isOffered(char course_name[],char semester[],struct Course courses[],int count)
{
    char term;
    if(!(strcmp(semester,"Spring")))term='1';
    else if(!(strcmp(semester,"Summer")))term='2';
    else term='3';
    for(int i=0; i<count; i++)
    {
        if(!(strcmp(courses[i].title,course_name))&&(courses[i].code[strlen(courses[i].code)-3]==term))return 1;
    }
    return 0;
}
