#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf(" %d", &n);
    int array[n], ind = 0;
    while (ind < n)
    {
        printf("\narray[%d]=", ind);
        scanf(" %d", &array[ind]);
        ind++;
    }
    ind = 0;
    while (ind < n)
    {
        if (array[ind] % 3 == 0)
        {
            array[ind] = -1;
        }
        ind++;
    }
    ind = 0;
    while (ind < n)
    {
        printf("\narray[%d]=%d", ind, array[ind]);
        ind++;
    }

    return 0;
}