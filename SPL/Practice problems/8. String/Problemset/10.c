#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000],new[1000];
    //fgets(str,sizeof(str),stdin);
    scanf("%[^\n]s", str);
    int count=0,k=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        count++;
    }
    for(int i=(count-1); i>=0; i--,k++)
    {
        new[k]=str[i];
    }
    new[k]='\0';
    if(strcmp(str,new)==0)printf("Palindrome");           //returns 0 if they are identical
    else printf("Not palindrome");

    return 0;
}





