#include <stdio.h>
#include <limits.h>
int main()
{
    int max = INT_MAX, min = INT_MIN, n, ind = 0,index;
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
index=ind;
        }
        ind++;
    }
    printf("\nMax=%d\nIndex=%d", min,index);
    ind = 0;
    while (ind < n)
    {
        if (array[ind] < max)
        {
            max = array[ind];
            index=ind;
        }
        ind++;
    }
    printf("\nMin=%d\nIndex=%d", max,index);

    return 0;
}