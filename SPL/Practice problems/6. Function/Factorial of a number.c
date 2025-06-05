#include<stdio.h>
int fact(int k);
int main()
{
   int n;
    printf("Enter the number:");
    scanf("%d",&n);
    int result=fact(n);
    printf("Factorial= %d",result);



    return 0;

}
int fact(int k)
{
    
    if(k>1)
    {
        return k*fact(k-1);
    }
    else
    {
        return k;
    }
}