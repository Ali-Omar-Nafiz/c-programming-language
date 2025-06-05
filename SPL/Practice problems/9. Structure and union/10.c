#include<stdio.h>
struct triangle
{
    int triangle_id;
    float base;
    float hight;
};
int main()
{
     struct triangle t1,t2,t3;
    scanf("%d",&t1.triangle_id);
    scanf("%f",&t1.base);
    scanf("%f",&t1.hight);
    scanf("%d",&t2.triangle_id);
    scanf("%f",&t2.base);
    scanf("%f",&t2.hight);
    scanf("%d",&t3.triangle_id);
    scanf("%f",&t3.base);
    scanf("%f",&t3.hight);
    float area1,area2,area3;
    area1=(t1.base * t1.hight)/2;
    printf("Area of %d=%.1f\n",t1.triangle_id,area1);
    area2=(t2.base * t2.hight)/2;
    printf("Area of %d=%.1f\n",t2.triangle_id,area2);
    area3=(t3.base * t3.hight)/2;
    printf("Area of %d=%.1f\n",t3.triangle_id,area3);

    return 0;
}
