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
    printf("\n");
    for(int i=1; i<=n; i++)
    {
        int m=1;
        for(int j=1; j<=n; j++)
        {
            if(j==half-i+1 || j==half+i-1 || i==half || (j==1 && i>half) || (j==n && i>half))
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
            if(j==1 || i==1 || i==half && j<n-half)
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
            if(i==1 || i==n || i+j==n+1)
            {
                printf("*");

            }
            else printf(" ");

        }
        printf("\n");

    }




    return 0;
}


