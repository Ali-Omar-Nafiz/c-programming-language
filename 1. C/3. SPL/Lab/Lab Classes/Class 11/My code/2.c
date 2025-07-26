#include<stdio.h>
#include<string.h>
struct person
{
    char name[20];
    int age;
    float CGPA;
};
int main()
{
    struct person s1[1000];
    for(int i=0; i<1000; i++)
        {
            printf("Enter the name: ");
            getchar();
            fgets(s1[i].name,sizeof(s1[i].name),stdin);
            printf("Enter the age and cgpa: ");
            scanf("%d%f",&s1[i].age,&s1[i].CGPA);
            printf("Name= %s,Age=%d,CGPA= %.2f\n",s1[i].name,s1[i].age,s1[i].CGPA);
            getchar();
        }
    return 0;

}

