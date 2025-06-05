#include<stdio.h>
void  ascending(int* arr,int m);
int main()
{
    int n;
    printf("Enter the n:");
    scanf("%d",&n);
    int ar[n];
    printf("Enter the array elements:");
    for(int i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    ascending(ar,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",ar[i]);
    }


    return 0;
}
void  ascending(int* arr,int m)
{
    int New;
    int min;
    for(int i=0; i<m; i++)
    {
        New=i;
        min=arr[i];
        for(int j=0; j<m; j++)
        {
            if(j>i)
            {
                if(arr[j]<min)
                {
                    min=arr[j];
                    New=j;
                }
            }
        }
        arr[New]=arr[i];
        arr[i]=min;
    }

}
