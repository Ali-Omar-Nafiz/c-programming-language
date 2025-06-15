#include<stdio.h>
#include<ctype.h>
void take_input();
void counter(char str[1000]);
int main()
{
    take_input();


    return 0;
}
void take_input()
{
    char str[1000];
    printf("Enter the String:");
    scanf("%[^\n]s",str);
    counter(str);
}
void counter(char str[1000])
{
    char counter;
    int count=0;
    printf("Character to count:");
    scanf(" %c",&counter);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==toupper(counter) ||
            str[i]==tolower(counter))count++;
    }
    printf("%d",count);
}

