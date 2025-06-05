#include<stdio.h>
int find_maximum(int *ptr,int n,int max);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    int max=arr[0];
    max=find_maximum(arr,n,max);
    printf("%d",max);
    return 0;
}
int find_maximum(int *ptr,int n,int max)
{
    if(n==0)return max;
    if(*ptr>max)
        max=*ptr;
    n--;
    return find_maximum(ptr+1,n,max);
}

