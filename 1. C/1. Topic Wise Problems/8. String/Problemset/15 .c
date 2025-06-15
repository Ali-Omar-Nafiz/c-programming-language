#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000], new[1000];
    scanf(" %[^\n]", str);

    int len = strlen(str);
    int end = len - 1;
    int new_index = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        if (str[i] == ' ' || i == 0)
        {
            int start = (i == 0) ? 0 : i + 1;
            for (int j = start; j <= end; j++)
            {
                new[new_index++] = str[j];
            }
            if (i != 0)
            {
                new[new_index++] = ' ';
            }
            end = i - 1;
        }
    }

    new[new_index] = '\0';
    printf("%s\n", new);

    return 0;
}
