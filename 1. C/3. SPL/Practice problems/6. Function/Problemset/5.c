
#include <stdio.h>
void comparer(int k, int l);

int main() {
    int m,n;
    printf("Enter the numbers n and m:");
    scanf("%d %d",&n,&m);
    comparer(n,m);
   
    
    
    
    return 0;
}
void comparer(int k, int l)
{
    k>l?printf("%d is grater than %d",k,l): k<l?printf("%d is grater than %d",l,k):printf("%d is equal to %d",l,k);
}