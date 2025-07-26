#include <stdio.h>
#include <string.h>

int main()
{

    char S1[100];
    fgets(S1, sizeof(S1), stdin);
    S1[strcspn(S1, "\n")] = '\0';
    puts(S1);

    int i = 0;
    while (S1[i] != '\0')
    {
        int j = i-1;
        while(j>=0)
        {
            if(S1[i]==S1[j])
            { // MATCH FOUND
                int k = i;
                while(S1[k]!='\0')
                {
                    S1[k]=S1[k+1];
                    k++;
                }
                i--;
            }
            j--;
        }
        i++;
    }
    puts(S1);
}