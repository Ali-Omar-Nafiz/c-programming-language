#include<stdio.h>
void valuetransfer(char k);
int main()
{
char n;
scanf("%c",&n);
valuetransfer(n);


    return 0;
}
void valuetransfer(char k)
{
    printf("Value received from main:%c",k);
}