#include<stdio.h>
void arrayprint(int *ptr,int n);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);

    }
    arrayprint(arr,n);
}
void arrayprint(int *ptr,int n)
{
    if(n==0)return;
    printf("%d ",*ptr);
    n--;
    arrayprint(ptr+1,n);
}
