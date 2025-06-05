#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size;
    printf("Enter size\n");
    scanf("%d ",&size);
    int arr[size];
    for(int i=0; i<size; i++)
        {
            scanf("%d",&arr[i]);
        }
    int pos;
    printf("Enter the position of the element to delete:");
    scanf("%d",&pos);

    if(pos<1 || pos>size){
        printf("No such position in array");
    }
    else{
        for(int i=pos-1; i<size-1; i++){
            arr[i]=arr[i+1];
        }
        size--;


      for(int i=0; i<size; i++)
        {
            printf("%d ",arr[i]);
        }
        }
    return 0;
}
