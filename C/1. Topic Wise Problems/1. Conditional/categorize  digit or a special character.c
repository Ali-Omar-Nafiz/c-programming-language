#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>='0' && c<='9')
    {
        printf("Digit");
    }
    else if((c>='A' && c<='Z')||(c>=97 && c<=122))
    {
        printf("Alphabet");
    }
    else
    {
        printf("Special charecter");
    }

    return 0;
}