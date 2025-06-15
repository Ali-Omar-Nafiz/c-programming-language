#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    int k=n,arr[n+1], ind = 0,number,position;
    while (ind < n)
    {
        printf("\narray[%d]=", ind);
        scanf("%d", &arr[ind]);
        ind++;
    }
    printf("\nEnter the number and position:");
    scanf("%d%d", &number, &position);
    while (k >= position)
    {
        arr[k] = arr[k - 1];
        k--;
    }
    arr[position - 1] = number;
    ind = 0;
    while (ind < (n + 1))
    {
        printf("\narr[%d]=%d", ind, arr[ind]);
        ind++;
    }

    return 0;
}