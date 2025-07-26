#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    if(n<3)
        {
            printf("Size of the array have to be more than 2 digits1!");
            return 0;
        }
    int arr[n];
    printf("Enter the values of the array: ");
    for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            int sum=0;
            for(int j=arr[i]; j>0; j/=10)
                {
                    sum+=(j%10);
                }
            if(arr[i]%sum==0)printf("%d is an Ivan Niven\n",arr[i]);
            else printf("%d is not an Ivan Niven\n",arr[i]);
        }


    return 0;
}
