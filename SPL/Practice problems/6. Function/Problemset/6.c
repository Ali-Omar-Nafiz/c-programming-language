
#include <stdio.h>
int additioiner(int k);

int main() {
    int n,sum;
    printf("Enter the n:");
    scanf("%d",&n);
    sum=additioiner(n);
    printf("Sum in main:%d\n",sum);
   
    
    
    
    return 0;
}
int additioiner(int k)
{
    int input,sum_function=0;
    printf("Enter the Numbers:");
   for(int i=1;i<=k;i++)
   {
       
       scanf("%d",&input);
       sum_function+=input;
   }
   printf("Sum in function:%d\n",sum_function);
   return sum_function;
}