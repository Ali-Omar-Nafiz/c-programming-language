#include <stdio.h>
#include <ctype.h>
#include <string.h>
//reverse the word sequence
void printWord(char str[], int lb, int ub){
    for(int i =lb+1; i<ub; i++){
        printf("%c", str[i]);
    }
}

void reverseString2(char str[], int count)
{

    int i = 0;
    int indextrack[count], x = 1;
    indextrack[0]=-1;
    while (str[i] != '\0')
    {
        if (str[i] == ' ')
        {
            indextrack[x]=i;
            x++;
        }
        i++;
    }
    indextrack[x]=i;
    

    int lb, ub;
    for(int i = x; i>0; i--){
        lb = indextrack[i-1]; 
        ub = indextrack[i];
        printWord(str,lb,ub);
        // printf("%d %d\n", lb, ub);
        printf(" ");
    }
}

int main()
{
    char s1[1000];
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1,"\n")] = 0;
    int count = 0;
    int i = 0;
    while (s1[i] != '\0')
    {
        count++;
        i++;
    }
    reverseString2(s1,count);
    
}
