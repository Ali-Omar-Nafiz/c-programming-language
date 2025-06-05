// Online C compiler to run C program online
#include <stdio.h>
void power(int k,int l);

int main() {
    int m,n;
    printf("Enter the base and power:");
    scanf("%d %d",&m,&n);
   power(m,n);
    
    
    
    return 0;
}
void power(int k,int l)
{
  int mult=1;
 
   for(int i=1;i<=l;i++)
   {
       
       
       mult*=k;
   }
   printf("%d",mult);
  
}