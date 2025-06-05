#include<stdio.h>
#include<ctype.h>
int main()
{
    char i;
    printf("Enter the character:\n");
    scanf("%c",&i);
    if(isalpha(i)) printf("Alphabet");
    else if(isdigit(i))  printf("Digit");
    else
        printf("Special");
    return 0;
}
