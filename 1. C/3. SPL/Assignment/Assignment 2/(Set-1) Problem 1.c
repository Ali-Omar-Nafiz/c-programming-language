#include<stdio.h>
void removeSpecialCharacters(char str[]);
char changeAlphabet(char alphabet);
void encoder(char *p);
int main()
{
    char str[1000];
    printf("Enter the string: ");
    scanf("%[^\n]s",str);
    encoder(str);
    return 0;
}
void encoder(char *p)
{

    for(int i=0; p[i]!='\0'; i++)
    {
        if((p[i]>='a'&&p[i]<='z')||(p[i]>='A'&&p[i]<='Z'))p[i]=changeAlphabet(p[i]);
    }
    removeSpecialCharacters(p);
    printf("%s",p);

}
char changeAlphabet(char alphabet)
{
    if(alphabet>='a'&&alphabet<='z')return (122-(alphabet-'a'));
    else return (90-(alphabet-'A'));
}
void removeSpecialCharacters(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]<'A'||(str[i]>'Z'&&str[i]<'a')||(str[i]>'z'))str[i]=' ';
        i++;
    }
}
