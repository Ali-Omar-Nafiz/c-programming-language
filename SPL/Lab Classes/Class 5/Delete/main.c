#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,pos;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter position of the element to delete:\n");
    scanf("%d",&pos);
    for(int i=pos-1; i<n-1; i++){
        arr[i]=arr[i+1];
    }//after deleting
     for(int i=0; i<n-1; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
