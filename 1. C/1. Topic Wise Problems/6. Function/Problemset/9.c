// Online C compiler to run C program online
#include <stdio.h>
void factorial(int k);

int main() {
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
   factorial(n);
    
    
    
    return 0;
}
void factorial(int k)
{
  int mult=1;
 
   for(int i=k;i>0;i--)
   {
       
       
       mult*=i;
   }
   printf("%d",mult);
  
}