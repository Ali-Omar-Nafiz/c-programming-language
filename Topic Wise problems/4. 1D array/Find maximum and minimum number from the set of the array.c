#include <stdio.h>
#include <limits.h>
int main()
{
    int max = INT_MAX, min = INT_MIN, n, ind = 0;
    printf("Enter the 'N':");
    scanf("%d", &n);
    int array[n];
    while (ind < n)
    {
        printf("\narray[%d]=", ind);
        scanf("%d", &array[ind]);
        ind++;
    }
    ind = 0;
    while (ind < n)
    {
        if (array[ind] > min)
        {
            min = array[ind];
        }
        ind++;
    }
    printf("\nMax=%d", min);
    ind = 0;
    while (ind < n)
    {
        if (array[ind] < max)
        {
            max = array[ind];
        }
        ind++;
    }
    printf("\nMin=%d", max);

    return 0;
}