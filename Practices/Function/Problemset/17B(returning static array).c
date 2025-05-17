#include<stdio.h>
int*  ascending(int* arr,int m);
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
    int* new_array=ascending(ar,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",new_array[i]);
    }


    return 0;
}
int*  ascending(int* arr,int m)
{
    int k;
    int min;
    static int middleman[100];
    for(int i=0; i<m; i++)
    {
        middleman[i]=arr[i];
    }
    for(int i=0; i<m; i++)
    {
        k=i;
        min=middleman[i];
        for(int j=0; j<m; j++)
        {
            if(j>i)
            {
                if(middleman[j]<min)
                {
                    min=middleman[j];
                    k=j;
                }
            }
        }
        middleman[k]=middleman[i];
        middleman[i]=min;
    }
    return middleman;

}
