#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    int array[n], ind = 0,sum=0;
    ;
    printf("\nEnter the values:");

    while (ind < n)
    {
        printf("\narray[%d]=", ind);
        scanf("%d", &array[ind]);
        sum+=array[ind];

        ind++;
    }
    printf("\nSum=%d",sum);
    return 0;
}