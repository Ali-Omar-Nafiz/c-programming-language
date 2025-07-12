#include <stdio.h>
#include <string.h>

int main()
{

    char myName[100];
    // gets(myName);
    fgets(myName, sizeof(myName), stdin);
    myName[strcspn(myName, "\n")]='\0';
    puts(myName);
    printf("%d\n",strlen(myName));

    // printf("%d",strlen(myName));
     int i = 0, count = 0;
     while (myName[i] != '\0')
     {
         if (myName[i] != ' ')
         {
             count++;
         }
         i++;
     }

     printf("%d", count);
}
