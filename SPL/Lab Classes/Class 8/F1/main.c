#include <stdio.h>
#include <stdlib.h>
int add_var(int a,int b);
int add_array(int arr[],int size);

int add_var(int a,int b){
    int sum=a+b;
    return sum;
}
int add_array(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main()
{   int arr[5];
    for(int i=0; i<5; i++){
        scanf("%d",&arr[i]);
    }
//int x,y; scanf("%d %d",&x,&y);int sum_var= add_var(x,y);
    int sum_var= add_var(15,30);
    printf("sum of variables=%d\n",sum_var);
    printf("sum of array elements=%d",add_array(arr,5));
    return 0;
}
