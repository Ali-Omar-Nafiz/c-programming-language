#include<stdio.h>
#include<stdlib.h>
int* takeinput();
int find_the_large(int* ptr);
void showresult(int max);
int n;
int main()
{
    int* ptr= takeinput();
    int max=find_the_large(ptr);
    showresult(max);
    return 0;
}
int* takeinput()
{
    static int* ptr;

    printf("Enter the size of the array:");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    if (ptr == NULL)
    {
        printf("Allocation Failed");
        exit(0);
    }
    printf("Enter the elements:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    return ptr;
}
int find_the_large(int* ptr)
{
    int max=ptr[0];
    for(int i=0; i<n; i++)
    {
        if(ptr[i]>max)
        {
            max=ptr[i];
        }
    }
    return max;
}
void showresult(int max)
{
    printf("Max: %d",max);
}
