#include<stdio.h>
int main()
{
    int n1;
    printf("Enter the size of 1D array:");
    scanf("%d",&n1);
    int arr[n1],sum1=0;
    int *ptr=arr;
    printf("Enter the 1D array: ");
    for(int i=0; i<n1; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0; i<n1; i++)
    {
        printf("%d ",ptr[i]);
    }
    printf("\n");
    for(int i=0; i<n1; i++)
    {
        sum1+=ptr[i];
    }
    printf("Sum of 1D array: %d\n",sum1);


    int m,n;
    printf("Enter the size of 2D array:");
    scanf("%d%d",&m,&n);
    int arr2[m][n],sum=0;
    int *ptr2=&arr2[0][0];
    printf("Enter the 2D array: ");
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%d",(ptr2+i*n+j));
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            printf("%d ",*(ptr2+i*n+j));
        }
        printf("\n");
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            sum+=*(ptr2+i*n+j);
        }

    }
    printf("Sum of 2D array: %d\n",sum);

    return 0;
}
