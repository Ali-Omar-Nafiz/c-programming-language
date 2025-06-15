#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Static 1D Array (VLA - Variable-Length Array)
    int n;
    printf("Enter the column size of the static 1D array: ");
    scanf("%d", &n);

    int s_arr[n];
    printf("Enter the elements of the static 1D array: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &s_arr[i]);
    }

    printf("Printing the elements of the static 1D array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", s_arr[i]);
    }

    {
        // Passing static 1D array to a pointer
        // 1. Points to 1st element of the arr
        printf("\n\"Passing the 1st element of this array to another pointer\"\n");
        int *p;
        p = &s_arr[0];             // or p = s_arr;                                             //Pointer to the First Element of Array

        printf("Printing the elements via pointer:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", p[i]);
        }

//2. Pointer to an entire array of n integers
        printf("\n\"Passing this whole array to another pointer\"\n");
        int(*ptr)[n];
        ptr = &s_arr;             // or ptr = (int (*)[n]) s_arr;                              //Pointer to the entire Array

        printf("Printing the elements via pointer:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", (*ptr)[i]);
        }
    }
    // Dynamic 1D Array (Heap Allocation)
    printf("\n\"Creating Dynamic 1D array of size n\"\n");
    printf("Enter the column size of Dynamic 1D array:");
    scanf("%d",&n);
    int *d_array = (int *)malloc(n * sizeof(int));
    if (d_array == NULL)
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    else
    {
        printf("Memory allocation successful\n");
    }

    printf("Enter the %d elements of the Dynamic 1D array: ",n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &d_array[i]);
    }

    printf("Printing the elements of the dynamic 1D array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", d_array[i]);
    }

    // Resizing Dynamic Array (realloc)
    int new_size;
    printf("\nEnter the new size of the dynamic 1D array: ");
    scanf("%d", &new_size);

    int *temp = (int *)realloc(d_array, new_size * sizeof(int));
    if (temp == NULL)
    {
        printf("Memory Re-allocation failed\n");
        free(d_array);  // Free old memory before exit
        exit(1);
    }
    else
    {
        d_array = temp;  // Update pointer to new memory
        printf("Memory Re-allocation successful\n");
    }

    // Input new elements (only if expanded)
    if(new_size>n)
    {
        printf("Enter %d new elements: ", new_size - n);
        for (int i = n; i < new_size; i++)
        {
            scanf("%d", &d_array[i]);
        }

    }

    printf("Updated dynamic array elements:\n");
    for (int i = 0; i < new_size; i++)
    {
        printf("%d ", d_array[i]);
    }

    // Free memory
    free(d_array);
    d_array = NULL;  // Good practice to avoid dangling pointer

    // the process of Passing dynamic array to another pointer is as same as above some line
    return 0;
}
