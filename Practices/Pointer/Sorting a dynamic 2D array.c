#include<stdio.h>
#include<stdlib.h>
int* takeinput();
int* sorter(int* ptr);
void showresult(int* sorted_array);
int m,n;
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
    printf("Enter the row and column of the array:");
    scanf("%d%d",&m,&n);
    ptr=(int *)calloc(m*n,sizeof(int));
    if (ptr == NULL)
    {
        printf("Allocation Failed");
        exit(0);
    }
    printf("Enter the elements:");
    for(int i=0; i<m*n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    return ptr;
}
int* sorter(int* ptr)
{

    for(int i=0; i<m*n; i++)
    {
         int min=ptr[i],index=i;
        for(int j=i+1;j<m*n;j++)
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
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",sorted_array[i*m+j]);
        }
        printf("\n");
    }
}


