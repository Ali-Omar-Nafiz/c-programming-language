#include<stdio.h>
int main()
{

    int i,j,n,m;
    /*printf("\nEnter the column:");
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("\nEnter the value:");
            scanf("%d",&arr[i][j]);
        }

    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {

            printf("arr[%d][%d]=%d ",i,j,arr[i][j]);
        }
        printf("\n");

    }
    printf("\n");*/

    int niloy[2][3]= {4,5,6,7,8,9},nafiz[2][3]= {1,2,3,4,5,6},sum[2][3];

    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {

            printf("niloy[%d][%d]=%d ",i,j,niloy[i][j]);
        }
        printf("\n");

    }
    printf("\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {

            printf("nafiz[%d][%d]=%d ",i,j,nafiz[i][j]);
        }
        printf("\n");

    }

    printf("\nTrans of Niloy[][3] :");
    for(i=0; i<3; i++)
    {
        for(j=0; j<2; j++)
        {

            printf("niloy[%d][%d]=%d ",i,j,niloy[j][i]);
        }
        printf("\n");

    }
    printf("\nSum :");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {

            sum[i][j]=niloy[i][j]+nafiz[i][j];
            printf("sum[%d][%d]=%d ",i,j,sum[i][j]);
        }
        printf("\n");

    }




    return 0;
}
