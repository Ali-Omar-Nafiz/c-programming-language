#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    int A[n], B[n], ind = 0, i = 1;
    ;
    printf("\nEnter the values of A:");

    while (ind < n)
    {
        printf("\nA[%d]=", ind);
        scanf("%d", &A[ind]);
        ind++;
    }

    ind = 0;

    while (ind < n)
    {

        B[ind] = A[n - i];

        ind++;
        i++;
    }
    ind = 0;
    printf("\nArray A:");
    while (ind < n)
    {
        printf("%d", A[ind]);

        ind++;
    }
    ind=0;
    printf("\nArray B:");
    while (ind < n)
    {
        printf("%d", B[ind]);

        ind++;
    }

    return 0;
}