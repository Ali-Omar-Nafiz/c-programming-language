#include<stdio.h>
void find_even_odd(int i,int j,int k);
int main()
{
    int range,starting=0,choice;
    printf("Enter the range. Then, 1 for odd, and 0 for even.");
    scanf("%d%d",&range,&choice);
    find_even_odd(starting,range,choice);
    return 0;
}
void find_even_odd(int i,int j,int k)
{
    if(i>j)return;
    if(k==0)
    {
        if(i%2==0)printf("%d ",i);
    }
    else if(k==1) {}
    if(i%2!=0)printf("%d ",i);

    find_even_odd(i+1,j,k);
}

