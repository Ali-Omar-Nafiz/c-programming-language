#include <stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char str[1000],sub_str[1000];
    printf("Enter the Origin string:");
    scanf("%[^\n]s",str);
    printf("Enter the Sub string:");
    scanf(" %[^\n]s",sub_str);

    char* p;
    int count=0;
    while(1)
    {
        p=strstr(str,sub_str);
        if(p!=NULL)
        {
            printf("new p=%s\n",p);
            strcpy(str,p+strlen(sub_str));
            printf("new str=%s\n",str);
            count++;
        }
        else break;
    }
    printf("%d",count);

    return 0;
}
