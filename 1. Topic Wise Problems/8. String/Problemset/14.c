#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[1000];
    scanf("%[^\n]s",str);
    strlwr(str);
    int counter[26]= {0};
    for(int i=0; str[i]!='\0'; i++)
    {
        if(isalpha(str[i]))
        {
            counter[str[i]-'a']++;
        }
    }

    int max=counter[0],index=0;
    for(int i=0; i<26; i++)
    {
        for(int j=0; j<26; j++)
        {
            if(counter[j]>max)
            {
                max=counter[j];
                index=j;
            }
        }
    }

    printf("%c (or %c)", toupper(index + 'a'), index + 'a');



    return 0;
}
