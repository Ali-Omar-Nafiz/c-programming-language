#include <stdio.h>
#include <string.h>

int main()
{

    char S1[100];
    fgets(S1, sizeof(S1), stdin);
    S1[strcspn(S1, "\n")]='\0';
    int size = strlen(S1);
    int i =size-1;
    while(i>=0){
        printf("%c", S1[i]);
        i--;
    }

}