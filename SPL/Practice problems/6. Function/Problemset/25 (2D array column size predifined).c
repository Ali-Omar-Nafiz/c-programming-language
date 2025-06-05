#include <stdio.h>

#define ROW 3
#define COLUMN 5

void InputMatrix(int (*arr)[COLUMN]);
void ShowMatrix(int (*arr)[COLUMN]);
void ScalarMultiply(int (*arr)[COLUMN], int n);

int main()
{
    int arr[ROW][COLUMN];

    InputMatrix(arr);
    ShowMatrix(arr);

    int n;
    printf("Enter the multiplier: ");
    scanf("%d", &n);

    ScalarMultiply(arr, n);
    ShowMatrix(arr);

    return 0;
}

void InputMatrix(int (*arr)[COLUMN])
{
    printf("Enter the elements:\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
}

void ShowMatrix(int (*arr)[COLUMN])
{
    printf("Matrix elements:\n");
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void ScalarMultiply(int (*arr)[COLUMN], int n)
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            arr[i][j] *= n;
        }
    }
}
