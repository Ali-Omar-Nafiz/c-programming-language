#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter size of the array:\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<n; i++){
        if(arr[i]>50){
            for(int j=i; j<n-1; j++){
                arr[j]=arr[j+1];

            }n--;
       i--;
       }
    }

    //after deleting
     for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
