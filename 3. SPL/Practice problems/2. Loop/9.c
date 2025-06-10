#include<stdio.h>
int main()
{
    int i=1,n;
    float atd,asg,ct,mid,fin,m;
    printf("Enter the total number of students: ");
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%f %f %f %f %f",&atd,&asg,&ct,&mid,&fin);
        m=(atd+asg+ct+mid+fin);
        if(m>=90)
    {
        printf("\nStudent %d: A",i);
    }
    else if(m<90 && m>85)
    {
        printf("\nStudent %d: A-",i);
    }
    else if(m<86 && m>81)
    {
        printf("\nStudent %d: B+",i);
    }
    else if(m<82 && m>77)
    {
        printf("\nStudent %d: B",i);
    }
    else if(m<78 && m>73)
    {
        printf("\nStudent %d: B-",i);
    }
    else if(m<74 && m>69)
    {
        printf("\nStudent %d: C+",i);
    }
    else if(m<70 && m>65)
    {
        printf("\nStudent %d: C",i);
    }
    else if(m<66 && m>61)
    {
        printf("\nStudent %d: C-",i);
    }
    else if(m<62 && m>57)
    {
        printf("\nStudent %d: D+",i);
    }
    else if(m<58 && m>54)
    {
        printf("\nStudent %d: ",i);
    }
    else if(m<55)
    {
        printf("\nStudent %d: F",i);
    }
    i++;
    }

    return 0;
}