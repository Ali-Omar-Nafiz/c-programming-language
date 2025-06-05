#include<stdio.h>
int main()
{
    int n,half;
    printf("Enter the row:");
    scanf("%d",&n);

    half=n/2+1;
    for(int i=1; i<=n; i++)
    {
        int m=1;
        for(int j=1; j<=n; j++)
        {
            if(j==1 || j==n || i==j)
            {
                printf("*");

            }
            else printf(" ");

        }
        printf("\n");

    }
    for(int i=1; i<=n; i++)
    {
        int m=1;
        for(int j=1; j<=n; j++)
        {
            if(i==1 || i==n || j==half)
            {
                printf("*");

            }
            else printf(" ");

        }
        printf("\n");

    }
    printf("\n");
    for(int i=1; i<=n; i++)
    {
        int m=1;
        for(int j=1; j<=n; j++)
        {
            if(j==1 || i==n)
            {
                printf("*");

            }
            else printf(" ");

        }
        printf("\n");

    }
    printf("\n");
    for(int i=1; i<=n; i++)
    {
        int m=1;
        for(int j=1; j<=n; j++)
        {
            if(j==1 || j==n || i==1 || i==n)
            {
                printf("*");

            }
            else printf(" ");

        }
        printf("\n");

    }
    printf("\n");
    for(int i=1; i<=n; i++)
    {
        int m=1;
        for(int j=1; j<=n; j++)
        {
            if((i==j && i<=half)|| (i+j==n+1 && i<=half) || (j==half && i>half))
            {
                printf("*");

            }
            else printf(" ");

        }
        printf("\n");

    }




    return 0;
}

