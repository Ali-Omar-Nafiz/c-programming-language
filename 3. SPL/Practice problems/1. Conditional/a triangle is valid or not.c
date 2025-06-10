#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the angles: ");
    scanf("%d %d %d",&a,&b,&c);
    if((a+b+c)==180)
    {
        printf("Yes");
        
    }
    else{
        printf("No");
    }


return 0;
}