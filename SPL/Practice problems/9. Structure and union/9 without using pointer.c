
#include<stdio.h>
struct student
{
    char name[20];
    char id[20];
    float cgpa;
};
void bettercg(struct student a,struct student b);
int main()
{
    struct student n1,n2;
    scanf(" %[^\n]s",n1.name);
    scanf(" %[^\n]s",n1.id);
    scanf(" %f",&n1.cgpa);
    scanf(" %[^\n]s",n2.name);
    scanf(" %[^\n]s",n2.id);
    scanf(" %f",&n2.cgpa);
    bettercg(n1,n2);



    return 0;
}
void bettercg(struct student a,struct student b)
{
    if(a.cgpa>b.cgpa)
    {
        printf("%s\n",a.name);
        printf("%s\n",a.id);
        printf("%.2f\n",a.cgpa);
    }
    else
    {
        printf("%s\n",b.name);
        printf("%s\n",b.id);
        printf("%.2f\n",b.cgpa);
    }
}

