#include<stdio.h>

// Function Prototypes
void oneDpassColumnKnown(int a[5]);                   // 1D array with known column size
void oneDpassColumnUnknown(int a[], int size);        // 1D array with unknown size
void oneDpassByPointer(int *a, int size);             // 1D array via pointer

void twoDpassRowColumnKnown(int a[2][5]);             // 2D array with known row and column
void twoDpassRowUnknown(int a[][5], int rsize);       // 2D array with unknown row
void twoDpassByPointer(int *a, int rsize, int csize); // 2D array via pointer

int *return_oneDArray();                              // Return 1D array
int *return_twoDArray();                              // Return 2D array as pointer to 1D
int *return_twoDArray_with_size(int *rows, int *cols);// Return 2D array with row & column size

int main()
{
    // --- One Dimensional Arrays ---

    int oneDarr1[5] = {1, 2, 3, 4, 5};
    oneDpassColumnKnown(oneDarr1);
    oneDpassByPointer(oneDarr1, 5);

    int oneDarr2[] = {12, 13, 14, 15, 16};
    int size = sizeof(oneDarr2) / sizeof(oneDarr2[0]);
    oneDpassColumnUnknown(oneDarr2, size);
    oneDpassByPointer(oneDarr2, size);

    printf("\n");

    // --- Two Dimensional Arrays ---

    int twoDarr1[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };
    twoDpassRowColumnKnown(twoDarr1);
    twoDpassByPointer(&twoDarr1[0][0], 2, 5);

    int twoDarr2[][5] = {
        {10, 11, 12, 13, 14},
        {16, 17, 18, 19, 20}
    };
    int rsize = sizeof(twoDarr2) / sizeof(twoDarr2[0]);
    int csize = sizeof(twoDarr2[0]) / sizeof(twoDarr2[0][0]);
    twoDpassRowUnknown(twoDarr2, rsize);
    twoDpassByPointer(&twoDarr2[0][0], rsize, csize);

    printf("\n");

    // --- Returning Arrays ---

    // 1D array
    int *oneDarr = return_oneDArray();
    printf("Returned 1D Array:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", *(oneDarr + i));
    }
    printf("\n");

    // 2D array
    int *twoDarr = return_twoDArray();
    printf("Returned 2D Array:\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", *(twoDarr + i * 5 + j));
        }
        printf("\n");
    }

    printf("\n");

    // --- Returning 2D Array with Size ---

    int rows, cols;
    int *arr_with_size = return_twoDArray_with_size(&rows, &cols);
    printf("Returned 2D Array with Size (%d x %d):\n", rows, cols);
    for(int i = 0; i < rows; i++)
    {
        for(int j = 0; j < cols; j++)
        {
            printf("%d ", *(arr_with_size + i * cols + j));
        }
        printf("\n");
    }

    return 0;
}

// --- Function Definitions ---

void oneDpassByPointer(int *a, int size)
{
    printf("By Pointer:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", *(a + i));
    }
    printf("\n");
}

void oneDpassColumnKnown(int a[5])
{
    printf("1D Array 1:\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void oneDpassColumnUnknown(int a[], int size)
{
    printf("1D Array 2:\n");
    for(int i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void twoDpassByPointer(int *a, int rsize, int csize)
{
    printf("By Pointer:\n");
    for(int i = 0; i < rsize; i++)
    {
        for(int j = 0; j < csize; j++)
        {
            printf("%d ", *(a + i * csize + j));
        }
        printf("\n");
    }
}

void twoDpassRowColumnKnown(int a[2][5])
{
    printf("2D Array 1:\n");
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

void twoDpassRowUnknown(int a[][5], int rsize)
{
    printf("2D Array 2:\n");
    for(int i = 0; i < rsize; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int *return_oneDArray()
{
    static int a[5] = {1, 2, 3, 4, 5};
    return a;
}

int *return_twoDArray()
{
    static int a[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };
    return &a[0][0];
}

int *return_twoDArray_with_size(int *rows, int *cols)
{
    static int a[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    *rows = 3;
    *cols = 4;

    return &a[0][0];
}
