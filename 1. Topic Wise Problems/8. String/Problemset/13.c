#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[1000],new[1000];
    printf("Enter the Origin string:");
    scanf("%[^\n]s",str);
    int count=0;
    int length=strlen(str);
for(int i=0;str[i]!='\0';i++)
{
    for(int j=i+1;str[j]!='\0';)
    {
        if(str[i]==str[j])
        {
            for(int k=j;str[k]!='\0';k++)                        //actual logic
            {
                str[k]=str[k+1];
            }
            str[length-1]='\0';
                length--;
                j=i+1;
        }
        else j++;
    }
}
printf("%s",str);


    return 0;
}

