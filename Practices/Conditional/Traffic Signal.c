#include <stdio.h>
int main()
{
    char input;
    scanf("%c", &input);
    switch (input)
    {
    case 'R':
        printf("Stop");
        break;
    case 'Y':
        printf("Ready");
        break;
    case'G':
        printf("Go");
        break;
        default :{ printf("Invalid Input"); }
        return 0;
    }
}