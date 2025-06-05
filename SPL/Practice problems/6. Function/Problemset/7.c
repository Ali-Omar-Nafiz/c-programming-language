// Online C compiler to run C program online
#include <stdio.h>
int additioiner(int a[],int number_of_elements);

int main() {
    int n,sum,input;
    printf("Enter the n:");
    scanf("%d",&n);
    int arr[n];
       printf("Enter the Numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&input);
        arr[i]=input;
    }
    sum=additioiner(arr,n);
    printf("Sum in main:%d\n",sum);
   
    
    
    
    return 0;
}
int additioiner(int a[],int number_of_elements)
{
    int sum_function=0;
 
   for(int i=0;i<number_of_elements;i++)
   {
       
       
       sum_function+=a[i];
   }
   printf("Sum in function:%d\n",sum_function);
   return sum_function;
}