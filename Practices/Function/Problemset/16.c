#include<stdio.h>
void doubler(int* arr_in_function,int m);
int main()
{
    int n;
    printf("Enter the total elements of the array:");
    scanf("%d",&n);
    int    arr_in_main[n];
    printf("Enter the elements of the array:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr_in_main[i]);
    }
    doubler(arr_in_main,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr_in_main[i]);
    }

    return 0;
}
void doubler(int* arr_in_function,int m)
{
    for(int i=0; i<m; i++)
    {
        arr_in_function[i]=2*(arr_in_function[i]);
    }
}
//indirectly returned by pointers
