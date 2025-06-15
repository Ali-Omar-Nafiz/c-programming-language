#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        arr2[i]=arr[i];
    }
    for(int i=0,j=n-1; i<n; i++,j--)
    {
        arr[i]=arr2[j];
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}
