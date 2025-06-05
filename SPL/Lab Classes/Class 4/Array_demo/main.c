#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size:\n");
    scanf("%d",&n);
//array initialization
//int arr[3]={10,20,30};
    int arr[n];
    //determining size of array using sizeop operator
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("size of array=%d\n",size);
    printf("Enter the elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    //reverse array
    printf("\nReverse Array:\n");
     for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
