#include<stdio.h>
#include<math.h>
#include<ctype.h>
int number_of_words(char str[]);
int nth_word_length(char str[], int n);
int is_prime(int number);
int is_spell(char str[]);
int main()
{
    char str[1000];
    scanf(" %[^\n]s",str);
    printf(is_spell(str)?"Yes":"No");
    return 0;
}
int is_spell(char str[])
{
    int tw=number_of_words(str),num=0;
    if(tw>9)return 0;
    else
    {

        for(int i=1; i<=tw; i++)
        {
            num=num*10+(nth_word_length(str,  i));
        }
    }
    if(is_prime(num))return 1;
    else return 0;

}
int number_of_words(char str[])
{
    int count=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]==' ')count++;
    }
    return count+1;
}
int nth_word_length(char str[], int n)
{
    int count=1,countw=0;
    for(int i=0; str[i]!='\0'; i++)
    {
        if(n==1)
        {
            for(int j=0; str[j]!=' '; j++)
            {
                if(isalpha(str[i]))
                    countw++;
            }
            break;
        }
        else
        {
            if(str[i]==' ')count++;
            if(count==n)
            {
                for(int j=i+1; str[j]!=' '; j++)
                {
                    if(str[j]=='\0')break;
                    if(isalpha(str[j]))
                        countw++;
                }
                break;
            }
        }

    }
    return countw;
}
int is_prime(int number)
{
    int count=0;
    for(int i=2; i<=sqrt(number); i++)
    {
        if(number%i==0)return 0;
    }
    return 1;
}
