#include<stdio.h>
int main()
{
int a;
scanf("%d",&a);
if(a==2 || a==3 || a==5 || a==7){printf("Yes");}
else if((a%2!=0 && a%3!=0 && a%5!=0 && a%7!=0)&&(a/a ==1))
{
    printf("Yes");
}
else{printf("No");}

    return 0;
}