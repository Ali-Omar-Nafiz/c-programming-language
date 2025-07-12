#include <stdio.h>

// Function Prototypes
void printOneDArray_FixedSize(int arr[5]);
void printOneDArray_VariableSize(int arr[], int size);
void printOneDArray_ByPointer(int *arr, int size);

void printTwoDArray_FixedSize(int arr[2][5]);
void printTwoDArray_RowVariable(int arr[][5], int rows);
void printTwoDArray_ByPointer(int *arr, int rows, int cols);

int *getOneDArray();
int *getTwoDArray();
int *getTwoDArray_WithSize(int *rows, int *cols);

int main()
{
    // --- One Dimensional Arrays ---

    int oneDArray1[5] = {1, 2, 3, 4, 5};
    printOneDArray_FixedSize(oneDArray1);
    printOneDArray_ByPointer(oneDArray1, 5);

    int oneDArray2[] = {12, 13, 14, 15, 16};
    int oneDArray2_size = sizeof(oneDArray2) / sizeof(oneDArray2[0]);
    printOneDArray_VariableSize(oneDArray2, oneDArray2_size);
    printOneDArray_ByPointer(oneDArray2, oneDArray2_size);

    printf("\n");

    // --- Two Dimensional Arrays ---

    int twoDArray1[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };
    printTwoDArray_FixedSize(twoDArray1);
    printTwoDArray_ByPointer(&twoDArray1[0][0], 2, 5);

    int twoDArray2[][5] = {
        {10, 11, 12, 13, 14},
        {16, 17, 18, 19, 20}
    };
    int rows = sizeof(twoDArray2) / sizeof(twoDArray2[0]);
    int cols = sizeof(twoDArray2[0]) / sizeof(twoDArray2[0][0]);
    printTwoDArray_RowVariable(twoDArray2, rows);
    printTwoDArray_ByPointer(&twoDArray2[0][0], rows, cols);

    printf("\n");

    // --- Returning Arrays ---

    int *oneDArray_returned = getOneDArray();
    printf("Returned 1D Array:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(oneDArray_returned + i));
    }
    printf("\n");

    int *twoDArray_returned = getTwoDArray();
    printf("Returned 2D Array:\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", *(twoDArray_returned + i * 5 + j));
        }
        printf("\n");
    }

    printf("\n");

    int retRows, retCols;
    int *twoDArray_withSize = getTwoDArray_WithSize(&retRows, &retCols);
    printf("Returned 2D Array with Size (%d x %d):\n", retRows, retCols);
    for(int i = 0; i < retRows; i++)
    {
        for(int j = 0; j < retCols; j++)
        {
            printf("%d ", *(twoDArray_withSize + i * retCols + j));
        }
        printf("\n");
    }

    return 0;
}

// --- Function Definitions ---

void printOneDArray_ByPointer(int *arr, int size)
{
    printf("One-D Array (By Pointer):\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

void printOneDArray_FixedSize(int arr[5])
{
    printf("One-D Array (Fixed Size):\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printOneDArray_VariableSize(int arr[], int size)
{
    printf("One-D Array (Variable Size):\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printTwoDArray_ByPointer(int *arr, int rows, int cols)
{
    printf("Two-D Array (By Pointer):\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

void printTwoDArray_FixedSize(int arr[2][5])
{
    printf("Two-D Array (Fixed Size):\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void printTwoDArray_RowVariable(int arr[][5], int rows)
{
    printf("Two-D Array (Row Variable):\n");
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int *getOneDArray()
{
    static int arr[5] = {1, 2, 3, 4, 5};
    return arr;
}

int *getTwoDArray()
{
    static int arr[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };
    return &arr[0][0];
}

int *getTwoDArray_WithSize(int *rows, int *cols)
{
    static int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    *rows = 3;
    *cols = 4;

    return &arr[0][0];
}

