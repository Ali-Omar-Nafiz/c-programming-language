#include<stdio.h>
int main()
{
    char str[1000];
    //fgets(str,sizeof(str),stdin);
    scanf("%[^\n]s", str);
    int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')count++;
    }

    printf("%d",count+1);

    return 0;
}



