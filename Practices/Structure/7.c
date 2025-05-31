#include<stdio.h>
struct student
{
    char name[20];
    char id[20];
    float cgpa;
};
int main()
{
    struct student n1,n2;
    scanf(" %[^\n]s",n1.name);
    scanf(" %[^\n]s",n1.id);
    scanf(" %f",&n1.cgpa);
     scanf(" %[^\n]s",n2.name);
    scanf(" %[^\n]s",n2.id);
    scanf(" %f",&n2.cgpa);
     printf("%s\n",n1.name);
    printf("%s\n",n1.id);
    printf("%.2f\n",n1.cgpa);
     printf("%s\n",n2.name);
    printf("%s\n",n2.id);
    printf("%.2f\n",n2.cgpa);


    return 0;
}
