#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    char array[n];
    int count = 0, ind = 0;
    while (ind < n)
    {
        printf("array[%d]=", ind);
        scanf(" %c", &array[ind]);
        if (array[ind] == 'A' || array[ind] == 'a' ||
            array[ind] == 'E' || array[ind] == 'e' ||
            array[ind] == 'I' || array[ind] == 'i' ||
            array[ind] == 'O' || array[ind] == 'o' ||
            array[ind] == 'U' || array[ind] == 'u')
        {
            count++;
        }
        ind++;
    }

    printf("Total=%d", count);

    return 0;
}