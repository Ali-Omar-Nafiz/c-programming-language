#include <stdio.h>
int main()
{
    int n;
    printf("Enter the 'N':");
    scanf("%d", &n);
    float array[n],sum=0,avg;
    int  ind = 0;
    ;
    printf("\nEnter the values:");

    while (ind < n)
    {
        printf("\narray[%d]=", ind);
        scanf("%f", &array[ind]);
        sum+=array[ind];

        ind++;
    }
    printf("\nSum=%.2f",sum);
    avg=sum/n;
    printf("\nAverage=%.2f",avg);
    return 0;
}