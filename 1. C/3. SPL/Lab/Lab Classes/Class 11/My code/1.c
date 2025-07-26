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
    struct person s1;
    strcpy(s1.name,"Narendra Modi");
    s1.age=100;
    s1.CGPA=1.33;
    printf("Name= %s,Age=%d,CGPA= %.2f\n",s1.name,s1.age,s1.CGPA);
    printf("change Name,age and CGPA\n");
    getchar();
    fgets(s1.name,sizeof(s1.name),stdin);
    scanf("%d%f",&s1.age,&s1.CGPA);
    printf("Name= %s,Age=%d,CGPA= %.2f",s1.name,s1.age,s1.CGPA);
    return 0;

}
