#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    //fgets(str,sizeof(str),stdin);
    scanf("%[^\n]s", str);
    printf("%s",strupr(str));
    return 0;
}





