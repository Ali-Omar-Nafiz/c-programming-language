// Online C compiler to run C program online
#include <stdio.h>
void swap(int k,int l);

int main() {
    int m,n;
    printf("Enter the numbers:");
    scanf("%d %d",&m,&n);
   swap(m,n);
    printf("Value in main: %d %d",m,n);



    return 0;
}
void swap(int k,int l)
{
 int temp;
 temp=k;
 k=l;
 l=temp;
 printf("Value in function: %d %d\n",k,l);

}
