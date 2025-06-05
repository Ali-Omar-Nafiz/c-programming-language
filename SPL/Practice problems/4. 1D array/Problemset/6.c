#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    int a1[n], a2[n], sum[n], ind = 0;
    printf("\nEnter the values of 1st array:");
    while (ind < n)
    {
        printf("\na1[%d]=", ind);
        scanf("%d", &a1[ind]);
        ind++;
    }
    ind = 0;
    printf("\nEnter the values of 2nd array:");
    while (ind < n)
    {
        printf("\na2[%d]=", ind);
        scanf("%d", &a2[ind]);
        ind++;
    }
    ind = 0;
    while (ind < n)
    {
        sum[ind] = a1[ind] + a2[ind];
        printf("\nsum[%d]=%d", ind, sum[ind]);

        ind++;
    }

    return 0;
}