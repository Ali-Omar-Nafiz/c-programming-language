#include <stdio.h>

int main()
{
    int N; // Variable to store the number of elements
    printf("Enter the 'N':"); 
    scanf("%d", &N); // Taking input for the size of the array

    int input[N], index = 0, sum = 0, size; // Declaring an array and other necessary variables

    // Taking input values from the user and storing them in the array
    while (index < N)
    {
        printf("\ninput[%d]=", index);
        scanf("%d", &input[index]);
        index++;
    }

    // Attempting to calculate the size of the array (This won't work as expected for VLA)
    size = sizeof(input) / sizeof(input[0]); 
    printf("Size=%d\n", size); // Printing the size (For Variable-Length Arrays, this might not be meaningful)

    // Printing the values entered by the user
    printf("Values:\n");
    index = 0;
    while (index < N)
    {
        printf("\ninput[%d]=%d\n", index, input[index]);
        index++;
    }

    // Resetting index to start summing even numbers
    index = 0;
    while (index < N)
    {
        if (input[index] % 2 == 0) // Checking if the number is even
        {
            sum += input[index]; // Adding even numbers to sum
        }
        index++;
    }

    // Printing the sum of even numbers
    printf("Sum of even inputs is =%d", sum);

    return 0;
}
