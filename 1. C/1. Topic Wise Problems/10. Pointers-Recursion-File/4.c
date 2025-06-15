#include<stdio.h>
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    char *ptr=str;
    int count =0;
    for(int i=0; ptr[i]!='\0'; i++)
    {
       if(ptr[i]!='\n')count++;
    }
    printf("%d",count);


    return 0;
}
