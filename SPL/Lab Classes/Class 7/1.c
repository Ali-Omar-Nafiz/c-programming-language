#include<stdio.h>
int main()
{
    int n,half;
    printf("Enter the row:");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Row number have to be an even number\n");
        return 1;
    }
    half=n/2+1;
    for(int i=1; i<=n; i++)
    {
        int m=1;
        for(int j=1; j<=n; j++)
        {
            if(j==half || i== half)
            {
                printf("+");

            }
            else printf(" ");

        }
        printf("\n");

    }




    return 0;
}
