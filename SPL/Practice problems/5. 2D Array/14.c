#include<stdio.h>

int main()
{
    int m,n,k,l;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(int i=0; i<m; i++)
    {

        for(int j=0; j<n; j++)
        {
            scanf("%d",&arr[i][j]);

        }
    }

    for(int i=0; i<m; i++)
    {

        for(int j=0; j<n; j++)
        {


            for(k=0; k<m; k++)
            {

                for(l=0; l<n; l++)
                {
                    if((i!=k || j!=l)&& arr[i][j]!=-1 && arr[i][j]==arr[k][l])
                    {
                        arr[k][l]=-1;
                    }
                }


            }
        }
    }
    for(int i=0; i<m; i++)
    {

        for(int j=0; j<n; j++)
        {
            printf("%d ",arr[i][j]);

        }
        printf("\n");
    }



    return 0;
}