#include <stdio.h>

int main()
{
    // One-dimensional array
    int array1[5];
    int *p1 = array1;

    // Input for 1D array using pointer arithmetic
    printf("Enter 5 elements for 1D array:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (p1 + i));  // same as: scanf("%d", &array1[i]);
    }

    // Printing elements of array1 using different pointer notations
    printf("1D Array outputs:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array1[i]);       // Direct access
        printf("%d ", p1[i]);           // Pointer with index
        printf("%d ", *(array1 + i));   // Array with pointer arithmetic
        printf("%d ", *(p1 + i));       // Pointer with pointer arithmetic
        printf("\n");
    }

    // Two-dimensional array
    int array2[2][5];
    int *p2 = &array2[0][0];

    // Input for 2D array using pointer arithmetic
    printf("Enter 10 elements for 2D array (2x5):\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", (p2 + i * 5 + j));  // same as: scanf("%d", &array2[i][j]);
        }
    }

    // Printing elements of array2 using both 2D indexing and pointer arithmetic
    printf("2D Array outputs:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", array2[i][j]);              // 2D index access
            printf("%d ", *(p2 + i * 5 + j));         // Pointer arithmetic
        }
        printf("\n");
    }

    return 0;
}

