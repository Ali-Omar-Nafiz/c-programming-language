#include<stdio.h>
int g_c_d(int a,int b,int lesser);
int l_c_m(int a,int b,int greater);
int main()
{
    int a,b,greater,lesser;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    greater=(a>b)?a:b;
    lesser=(a<b)?a:b;
    int gcd=g_c_d(a,b,lesser);
    int lcm=l_c_m(a,b,greater);
    printf("GCD: %d\nLCM: %d\n",gcd,lcm);

    return 0;
}
int g_c_d(int a,int b,int lesser)
{
    for(int i=lesser; i>0; i--)
    {
        if(a%i==0 && b%i==0)return i;
    }
}
int l_c_m(int a,int b,int greater)
{
    for(int i=greater; i>0; i++)
    {
        if(i%a==0 && i%b==0)return i;
    }
}
