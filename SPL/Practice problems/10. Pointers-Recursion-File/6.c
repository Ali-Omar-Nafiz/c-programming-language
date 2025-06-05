#include<stdio.h>
int main()
{
    char str[1000];
    fgets(str,sizeof(str),stdin);
    char *ptr=str;
    int countV =0,countC=0;
    for(int i=0; ptr[i]!='\0'; i++)
    {
        if(ptr[i]!='\n')
        {
            if(ptr[i] == 'a' ||
                    ptr[i]=='A' ||
                    ptr[i]=='e' ||
                    ptr[i]=='E' ||
                    ptr[i]=='i' ||
                    ptr[i]=='I' ||
                    ptr[i]=='o' ||
                    ptr[i]=='O' ||
                    ptr[i]=='u' ||
                    ptr[i]=='U')countV++;
            else countC++;
        }
    }
    printf("Vowels= %d\nConsonent= %d",countV,countC);


    return 0;
}

