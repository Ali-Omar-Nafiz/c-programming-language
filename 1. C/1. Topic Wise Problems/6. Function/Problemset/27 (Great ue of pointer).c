#include<stdio.h>
void Get_Number_And_Base ();
void Convert_Number (int* a,int* b);
void Show_Converted_Number(int* c);
int main()
{
    Get_Number_And_Base ();
    return 0;
}
void Get_Number_And_Base ()
{
    int a,b;
    printf("Enter number and base:");
    scanf("%d%d",&a,&b);
    if(b<2 || b>16 )
    {
        printf("Base not within proper range!");
        return;
    }
    Convert_Number (&a,&b);
}
void Convert_Number (int* a,int* b)
{
    int reverse=0;
    for(; *a>0; *a/=*b)
    {
        reverse=(reverse*10)+(*a%*b);
    }
    int original=0;
    for(; reverse>0; reverse/=10)
    {
        original=(original*10)+(reverse%10);
    }
    Show_Converted_Number(&original);
}
void Show_Converted_Number(int* c)
{
    printf("%d",*c);
}
