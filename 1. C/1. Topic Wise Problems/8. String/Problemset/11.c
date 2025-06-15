#include<stdio.h>
#include<ctype.h>
int main()
{
    char str[1000];
    //fgets(str,sizeof(str),stdin);
    scanf("%[^\n]s", str);
    int sum=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if( isdigit( str[i]) )
        {
            sum+=(str[i]-'0');
        }
    }
        printf("%d",sum);
        return 0;
    }





