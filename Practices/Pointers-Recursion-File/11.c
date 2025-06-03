#include<stdio.h>
void fibonacci(int n,int m);
int main()
{
    int n,m;
    printf("Enter the 1st two numbers of the fibonacci series:");
    scanf("%d%d",&n,&m);
    printf("%d\n",n);
    printf("%d\n",m);
    printf("Control:\n\t1. Press 'Enter' to see the next member\n\t2. Press 'Space' to exit.\n");
    char c;
    scanf("%c",&c);              //to kill the /n buffer
    fibonacci(n,m);
    return 0;
}
void fibonacci(int n,int m)
{
    char c;
    scanf("%c",&c);
    if(c==' ')return;
    else if(c =='\n')
    {
        printf("%d\n",(n+m));
        int k=n;
        n=m;
        m=k+m;
        fibonacci(n,m);
    }
}
