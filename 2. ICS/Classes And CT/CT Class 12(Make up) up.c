#include<stdio.h>
int main()
{
    //a code which will take input Alphabets,digit and other special charecters as input and will catagorised this in Alphabet,Digit and Specil
    char input;
    scanf("%c",&input);
    if((input>=65 && input<=90) || (input>=97 && input<=122) )
    {
        printf("Alphabet");
    }
    else if((input>=48 && input<=57) )
    {
        printf("Digit");
    }
    else
    {
        printf("Special");
    }

    return 0;

    return 0;
}
