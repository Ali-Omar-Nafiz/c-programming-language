#include<stdio.h>
#include<string.h>
int main()
{
    char org[1000],rev[1000];
    scanf("%[^\n]s",org);
    int len=(strlen(org));
    printf("%s\n",org);

    for(int i=0,j=len-1; i<len; i++,j--)
    {
        rev[i] = org[j];
    }
    rev[len]='\0';
    printf("%s\n",rev);
    if(strcmp(org,rev)==0)printf("Palindrome");
    else printf("Not Palindrome");


    return 0;
}
