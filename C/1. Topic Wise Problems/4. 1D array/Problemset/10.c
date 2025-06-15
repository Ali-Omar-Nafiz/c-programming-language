#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'n':");
    scanf("%d", &n);
    int array[n], ind = 0, search,sumind=0;
    while (ind < n)
    {
        printf("\narray[%d]=", ind);
        scanf("%d", &array[ind]);
        ind++;
    }
    printf("\nSearch=");
    scanf("%d", &search);
    ind = 0;
    printf("\nFOUND at index position:");
    while (ind < n)
    {
        if (array[ind] == search)
        {
            printf("%d", ind);
            sumind+=ind;
        }
        ind++;
    }
    if(sumind<1)printf("None\nNot found");

    return 0;
}