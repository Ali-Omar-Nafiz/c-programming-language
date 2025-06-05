#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Static 2D Array (VLA)
    int m, n;
    printf("Enter the row and column size of the static 2D array: ");
    scanf("%d %d", &m, &n);

    int s_arr[m][n];
    printf("Enter the elements of the static 2D array:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &s_arr[i][j]);
        }
    }

    printf("Static 2D Array (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", s_arr[i][j]);
        }
        printf("\n");
    }

    {
        // Passing static 2D array to a pointer
        // 1. Points to 1st element of the arr
        printf("\n\"Passing the 1st element of this array to another pointer\"\n");
        int *p;
        p = &s_arr[0][0];             // or p = (int *)s_arr;                                             //Pointer to the First Element of Array

        printf("Printing the elements via pointer:\n");
        for (int i = 0; i < m; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d ", p[i*n+j]);
            }
        }

//2. Pointer to an entire array of n integers
        printf("\n\"Passing this whole array to another pointer\"\n");
        int(*ptr)[m][n];
        ptr = &s_arr;             // or ptr = (int (*)[m][n]) s_arr;                              //Pointer to the entire Array

        printf("Printing the elements via pointer:\n");
        for (int i = 0; i < m; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d ", (*ptr)[i][j]);
            }
        }
    }

    // Dynamic 2D Array (Flattened 1D)
    int row,column;
    printf("\nCreating Dynamic 2D array (flattened) of size rowxcolumn\n");
    printf("Enter the row and column size of the Dynamic 2D array: ");
    scanf("%d %d", &row, &column);
    int *d_array = (int *)malloc(row * column * sizeof(int));
    if (d_array == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    else
    {
        printf("Memory allocation successful\n");
    }

    printf("Enter %d elements (row-major order): ", row * column);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &d_array[i * column + j]);
        }
    }

    printf("Dynamic 2D Array (%dx%d):\n", m, n);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d ", d_array[i * column + j]);
        }
        printf("\n");
    }

    // Resizing Dynamic Array (realloc)
    int new_row, new_column;
    printf("\nEnter new row and column sizes: ");
    scanf("%d %d", &new_row, &new_column);

    int *temp = (int *)realloc(d_array, new_row * new_column * sizeof(int));
    if (temp == NULL)
    {
        printf("Memory Re-allocation failed\n");
        free(d_array);
        exit(1);
    }
    else
    {
        d_array = temp;
        printf("Memory Re-allocation successful\n");
    }

    // Input new elements (if expanded)
    if (new_row * new_column > row * column)
    {
        printf("Enter %d new elements: ", new_row * new_column - row * column);
        for (int i = row*column; i < new_row*new_column; i++)
        {
            scanf("%d", &d_array[i]);
        }

    }

    printf("Resized Dynamic 2D Array (%dx%d):\n", new_row, new_column);
    for (int i = 0; i < new_row; i++)
    {
        for (int j = 0; j < new_column; j++)
        {
            printf("%d ", d_array[i * new_column + j]);
        }
        printf("\n");
    }

    // Free memory
    free(d_array);
    d_array = NULL;

    return 0;
}
