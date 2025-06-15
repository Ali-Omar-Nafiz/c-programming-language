#include<stdio.h>
#include<stdlib.h>
int* takeinput();
int* sorter(int* ptr);
void showresult(int* sorted_array);
int n;
int main()
{
    int* ptr= takeinput();
    int* sorted_array=sorter(ptr);
    showresult(sorted_array);
    free(ptr);
    ptr=NULL;
    return 0;
}
int* takeinput()
{
    int* ptr;                                                        //A pointer to integer (int*) does not need to be static
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
int* sorter(int* ptr)
{

    for(int i=0; i<n; i++)
    {
         int min=ptr[i],index=i;
        for(int j=i+1;j<n;j++)
        {
            if(ptr[j]<min)
            {
                min=ptr[j];
                index=j;
            }
        }
        ptr[index]=ptr[i];
        ptr[i]=min;
    }
    return ptr;
}
void showresult(int* sorted_array)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",sorted_array[i]);
    }
}

