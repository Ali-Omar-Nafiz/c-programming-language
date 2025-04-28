#include <stdio.h>
int main()
{
    int n, m, max;
    printf("Enter the 'N':");
    scanf(" %d", &n);
    
    printf("\nEnter the 'M':");
    scanf(" %d", &m);
    max = (m > n) ? m : n;
    int B[max], A[max], temp[max];

    printf("\nEnter the values of A:");
    for (int ind = 0; ind < n; ind++)
    {
        printf("\nA[%d]=", ind);
        scanf(" %d", &A[ind]);
    }

    printf("\nEnter the values of B:");
    for (int ind = 0; ind < m; ind++)
    {
        printf("\nB[%d]=", ind);
        scanf(" %d", &B[ind]);
    }

    for (int ind = 0; ind < max; ind++)
    {
        temp[ind] = A[ind];
    }

    for (int ind = 0; ind < max; ind++)
    {
        A[ind] = B[ind];
    }

    for (int ind = 0; ind < max; ind++)
    {
        B[ind] = temp[ind];
    }

    for (int ind = 0; ind < m; ind++)
    {
        printf("\nA[%d]=%d", ind, A[ind]);
    }

    for (int ind = 0; ind < n; ind++)
    {
        printf("\nB[%d]=%d", ind, B[ind]);
    }

    return 0;
}