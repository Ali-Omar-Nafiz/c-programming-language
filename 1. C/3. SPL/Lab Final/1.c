#include<stdio.h>
int get_length(char str[]);
int count_vowel(char str[]);
int count_consonant(char str[]);
int main()
{
    char str[1000];
    scanf("%s",str);
    int totalConsonant=count_consonant(str);
    printf("%d",totalConsonant);
    return 0;
}
int get_length(char str[])
{
    int length=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        length++;
    }
    return length;
}
int count_vowel(char str[])
{
    int totalVowel=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')totalVowel++;
    }
    return totalVowel;
}
int count_consonant(char str[])
{
    return (get_length(str)-count_vowel(str));
}
