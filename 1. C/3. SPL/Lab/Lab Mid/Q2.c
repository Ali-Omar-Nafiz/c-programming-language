#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter the dimension 'n': ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("'n' must be an odd number!");
        return 1;
    }
    int input,count=0,half=ceil(n/2.0);
    printf("Enter the values of the (n x n) matrix: ");
    for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
                {
                    scanf("%d",&input);
                    if((i==half||j==half ||(j>half&&i==1)||(j<half&&i==n)))count+=input;
                }
        }
    printf("Sum of the boxed position values: %d",count);

    return 0;
}

