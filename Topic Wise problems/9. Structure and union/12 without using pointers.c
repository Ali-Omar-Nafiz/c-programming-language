#include<stdio.h>
struct info
{
    char name[20];
    char country[20];
    int run[3];
    int wickets[3];
    int points[3];
};
struct info points_calculator();
void point_printer(struct info a,struct info b);
int main()
{
    struct info p1,p2;
    p1=points_calculator();
    p2=points_calculator();
    point_printer(p1,p2);
    return 0;
}
struct info points_calculator()
{
    struct info p;
    scanf(" %[^\n]s",p.name);
    scanf(" %[^\n]s",p.country);
    for(int i=0; i<3; i++)
    {
        scanf(" %d",&p.run[i]);
        if(p.run[i]<=25)p.points[i]=5;
        else if(p.run[i]>25 && p.run[i]<=50)p.points[i]=10;
        else if(p.run[i]>50 && p.run[i]<=75)p.points[i]=15;
        else if(p.run[i]>75)p.points[i]=20;
    }
    for(int i=0; i<3; i++)
    {
        scanf(" %d",&p.wickets[i]);
    }
    for(int i=0; i<3; i++)
    {
        p.points[i]+=(p.wickets[i]*12);
    }
    return p;
}
void point_printer(struct info a,struct info b)
{
    int point_count_a=0,point_count_b=0;
    for(int i=0; i<3; i++)
    {
        printf("Match %d\n",i+1);
        printf("%s points: %d\n",a.name,a.points[i]);
        printf("%s points: %d\n",b.name,b.points[i]);
        if(a.points[i]>b.points[i])
        {
            printf("Player of the match: %s\n",a.name);
        }
        else
        {
            printf("Player of the match: %s\n",b.name);
        }
        point_count_a+=a.points[i];
        point_count_b+=b.points[i];
    }
    if(point_count_a > point_count_b)printf("Man of the Series: %s\n",a.name);
    else printf("Man of the Series: %s\n",b.name);
}
