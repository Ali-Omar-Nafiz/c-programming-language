#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[1000];
    //fgets(str,sizeof(str),stdin);
    scanf("%[^\n]s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(isupper(str[i]))
        {
            str[i]=tolower(str[i]);
        }
        else
        {
            str[i]=toupper(str[i]);
        }
    }
    printf("%s",str);
    return 0;
}






