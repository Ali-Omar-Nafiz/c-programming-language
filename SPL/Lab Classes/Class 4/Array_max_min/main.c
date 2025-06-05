#include <stdio.h>
#include <stdlib.h>
#include<limits.h>
int main()
{
    int max=INT_MIN,index;
    int min=INT_MAX;
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
            index=i;
        }
    }printf("maximum=%d, index=%d\n",max,index);
    for(int i=0; i<n; i++){
        if(min>arr[i]){
            min=arr[i];
            index=i;
        }
    }printf("minimum=%d, index=%d",min,index);
    return 0;
}
