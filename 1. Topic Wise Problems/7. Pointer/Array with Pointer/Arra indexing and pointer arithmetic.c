#include <stdio.h>

int main()
{
    // One-dimensional array
    int array1[5] = {1, 2, 3, 4, 5};
    int *p1 = array1;

    // Printing elements of array1 using different pointer notations
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", array1[i]);       // Direct access
        printf("%d ", p1[i]);           // Pointer with index
        printf("%d ", *(array1 + i));   // Array with pointer arithmetic
        printf("%d ", *(p1 + i));       // Pointer with pointer arithmetic
        // printf("%d ", *(p1));
        // p1++;  // array1++ prohibited
    }

    printf("\n");

    // Two-dimensional array
    int array2[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };
    int *p2 = &array2[0][0];

    // Printing elements of array2 using both 2D indexing and pointer arithmetic
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
