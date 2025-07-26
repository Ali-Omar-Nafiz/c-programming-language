#include <stdio.h>

/*
Array Passing to Function
*/

void printArray(int *t, int size){
    int i = 0;
    while(i<size){
        printf("%d ", *(t+i));
        //t++;
        i++;
    }
}

void printArray2(int arr[], int size){
    for(int i =0; i<size; i++){
        printf("%d ", arr[i]);
    }
}

int main()
{
    int myArr[] ={1,2,3,4,5};
    printArray(myArr,5);
    printf("\n\n");
    printArray2(myArr,5);
    return 0;
}
