#include <stdio.h>
#include <stdlib.h>

int main()
{
    //int arr[5]={10,20,30,40,50};
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    //for printing
    printf("\nYour array is:\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    //reverse
    printf("\nReverse Array:\n");
    for(int i=n-1; i>=0; i--){
        printf("%d ",arr[i]);
    }
    return 0;
}
