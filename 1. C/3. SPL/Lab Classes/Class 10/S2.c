#include <stdio.h>
#include <string.h>

int main()
{

    char S1[100], S2[100];
    fgets(S1, sizeof(S1), stdin);
    S1[strcspn(S1, "\n")] = '\0';
    fgets(S2, sizeof(S2), stdin);
    S2[strcspn(S2, "\n")] = '\0';

    int i = 0;
    while (S1[i] != '\0')
    {
        i++;
    }

    S1[i] = ' ';
    i++;

    int j = 0;
    while (S2[j] != '\0')
    {
        S1[i + j] = S2[j];
        j++;
    }
    S1[i + j] = '\0';

//    i = 0;
//    while (S1[i] != ' ')
//    {
//        printf("%c", S1[i]);
//        i++;
//    }
//
//    i++;
//    printf("\n");

//    while (S1[i] != '\0')
//    {
//        printf("%c\n", S1[i]);
//        i++;
//    }
     puts(S1);
}
