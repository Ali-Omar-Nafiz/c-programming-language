#include<stdio.h>
struct triangle
{
    int triangle_id;
    float base;
    float hight;
};
float a1,a2,a3;
void input();
void area(struct triangle a);
int main()
{
    input();
    input();
    input();
    (a1>a2 && a1>a3)? printf("Area of 1=%.1f\n",a1) : ((a2>a3)? printf("Area of 2=%.1f\n",a2): printf("Area of 3=%.1f\n",a3));
    return 0;
}
void input()
{
    struct triangle t;
    scanf("%d",&t.triangle_id);
    scanf("%f",&t.base);
    scanf("%f",&t.hight);
    area(t);
}
void area(struct triangle a)
{
    float area;
    area=(a.base * a.hight)/2;
    if(a.triangle_id ==1)a1=area;
    else if(a.triangle_id ==2)a2==area;
    else if(a.triangle_id ==3)a3==area;
}
