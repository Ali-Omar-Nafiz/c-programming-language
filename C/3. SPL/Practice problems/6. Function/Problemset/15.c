// Online C compiler to run C program online
#include <stdio.h>
#include<limits.h>
int find_MIN(int k[],int l);

int main() {
    int n,elements;
    printf("Enter the number of total elements:");
    scanf("%d",&n);
    int arr[n];
     printf("Enter the elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&elements);
        arr[i]=elements;
        }
        printf("Minimum value from the array is %d",find_MIN(arr,n));
        
   
    
    
    return 0;
}
int find_MIN(int k[],int l)
{
    int max=INT_MIN;
    int min=INT_MAX;
 for(int i=0;i<l;i++)
 {
   if(k[i]<min)
   {
       min=k[i];
   }
 }
 return min;
  
}