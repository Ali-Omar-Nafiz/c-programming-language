#include <stdio.h>
void InputMatrix(int* arr,int m,int n);
void ShowMatrix(int* arr,int m,int n);
void ScalarMultiply(int *arr, int k,int m,int n);

int main()
{
    int m,n;
    printf("Enter m and n:");
    scanf("%d%d",&m,&n);
    int arr[m][n];

    InputMatrix((int *)arr,m,n);
    ShowMatrix((int *)arr,m,n);

    int k;
    printf("Enter the multiplier: ");
    scanf("%d", &k);

    ScalarMultiply((int *)arr, k,m,n);
    ShowMatrix((int *)arr,m,n);

    return 0;
}

void InputMatrix(int* arr,int m,int n)

{
    printf("Enter the elements:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i*n+j]);
        }
    }
}


void ShowMatrix(int* arr,int m,int n)
{
    printf("Matrix elements:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i*n+j]);
        }
        printf("\n");
    }
}


void ScalarMultiply(int *arr, int k,int m,int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i*n+j] *= k;
        }
    }
}

