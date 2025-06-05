#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    int array[n], ind = 0;
    ;
    printf("\nEnter the values:");

    while (ind < n)
    {
        printf("\narray[%d]=", ind);
        scanf("%d", &array[ind]);
        ind++;
    }
    
    ind = (n - 1);
    printf("\nPrint the reverse array values:");
    while (ind >= 0)
    {
        printf("\narray[%d]=%d", ind, array[ind]);
        ind--;
    }

    return 0;
}