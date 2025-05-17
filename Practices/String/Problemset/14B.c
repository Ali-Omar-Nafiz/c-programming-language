#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char str[1000],ch[1000];
    scanf("%[^\n]s",str);
    int length=strlen(str),count;
    int arr[length];
    for(int i=0; i<length; i++)
    {
        arr[i]=0;
    }
    int i;
    for(i=0; str[i]!='\0'; i++)
    {
        count=1;
        for(int j=i+1; str[j]!='\0';)
        {
            if(str[i]==tolower(str[j]) || str[i]==toupper(str[j]))
            {
                count++;
                for(int k=j; str[k]!='\0'; k++)
                {
                    str[k]=str[k+1];
                }
                str[length-1]='\0';
                length--;
                j=i+1;

            }
            else j++;
        }
        arr[i]=count;
        ch[i]=str[i];

    }
    int maxarr=arr[0],index=0,k=i-1;
    char maxch=ch[0];
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<k; j++)
        {
            if(arr[j]>maxarr)
            {
                maxarr=arr[j];
                index=j;
            }
            /*else if(arr[j]==arr[i])
            {
                if(ch[j]<ch[i])
                {
                    maxarr=arr[j];
                    index=j;
                }
                else if(ch[j]>ch[i])
                {
                    maxarr=arr[i];
                    index=i;
                }
                else
                {
                    maxarr=arr[i];
                    index=i;
                }
            }*/
        }
    }
    printf("%c (or %c)",toupper(ch[index]),tolower(ch[index]));


    return 0;
}
