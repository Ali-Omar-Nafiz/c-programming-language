// Online C compiler to run C program online
#include <stdio.h>
void evenchecker(int k[],int l);

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
        evenchecker(arr,n);
   
    
    
    return 0;
}
void evenchecker(int k[],int l)
{
 for(int i=0;i<l;i++)
 {
     if(k[i]%2==0)
    { printf("%d ",k[i]);}
 }
  
}