#include<stdio.h>
int findMax(int arr[],int size, int max);
int i=0;
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=findMax(arr,n,arr[i]);
    printf("Max: %d",max);
    return 0;
}
int findMax(int arr[],int size, int max)
{
    i++;
    if(i==size)return max;
    if(arr[i]>max)max=arr[i];
    findMax(arr,size,max);
}
