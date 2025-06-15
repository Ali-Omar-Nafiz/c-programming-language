// Online C compiler to run C program online
#include <stdio.h>
void reverse_printer(int a[],int number_of_elements);

int main() {
    int n,input;
    printf("Enter the n:");
    scanf("%d",&n);
    int arr[n];
       printf("Enter the Numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&input);
        arr[i]=input;
    }
    reverse_printer(arr,n);
   
    
    
    
    return 0;
}
void reverse_printer(int a[],int number_of_elements)
{
  
 
   for(int i=number_of_elements-1;i>=0;i--)
   {
       
       
       printf("%d ",a[i]);
   }
  
}