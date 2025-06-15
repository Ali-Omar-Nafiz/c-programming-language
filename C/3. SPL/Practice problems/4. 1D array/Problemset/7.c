#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    int array[n], array2[n], ind = 0, i = 1;
    ;
    printf("\nEnter the values:");

    while (ind < n)
    {
        printf("\narray[%d]=", ind);
        scanf("%d", &array[ind]);
        ind++;
    }

    ind = 0;
    printf("\nPrint the reverse array values:");
    while (ind < n)
    {

        array2[ind] = array[n - i];

        ind++;
        i++;
    }
    ind = 0;
    while (ind < n)
    {

        array[ind] = array2[ind];
        printf("\narray[%d]=%d", ind, array[ind]);
        ind++;
    }

    return 0;
}