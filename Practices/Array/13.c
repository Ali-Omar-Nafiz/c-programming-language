#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    int array[n], ind = 0, position;
    while (ind < n)
    {
        printf("\narray[%d]=", ind);
        scanf("%d", &array[ind]);
        ind++;
    }
    printf("\nEnter the position:");
    scanf("%d", &position);
    n--;
    while (position <= n)
    {
        array[position] = array[position+1];
        position++;
    }
    ind = 0;
    while (ind < n)
    {
        printf("\narray[%d]=%d", ind, array[ind]);
        ind++;
    }

    return 0;
}