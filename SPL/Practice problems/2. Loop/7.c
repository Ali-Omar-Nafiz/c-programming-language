#include <stdio.h>
int main()
{
    int n = 1;
    char input;
    while (n > 0)
    {
        scanf(" %c", &input);
        if (input == 'A')
        {
            break;
        }
        else
        {
            printf("Input %d: %c\n", n, input);
        }
        n++;
    }

    return 0;
}