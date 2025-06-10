#include<stdio.h>
char* takeinput();
int find_length(char* str);
int main()
{
    char* str1=takeinput();
    int length=find_length(str1);
    printf("%d",length);

    return 0;
}
char* takeinput()
{
    static char str[1000];
    scanf("%[^\n]s", str);
    return str;
}
int find_length(char* str)
{
    int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]!='"')count++;
    }
    return count;
}

