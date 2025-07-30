#include <iostream>
using namespace std;

int main() {
    // 1. Declaration and Manual Initialization
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // 2. Accessing & Modifying Elements
    matrix[0][1] = 20;  // Change value at first row, second column

    // 3. Printing the 2D Array
    cout << "Matrix elements:" << endl;
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++) {
            cout << matrix[row][col] << " ";
        }
        cout << endl;
    }

    // 4. Getting Array Size
    int totalSize = sizeof(matrix);              // Total size in bytes
    int rowSize = sizeof(matrix[0]);             // Size of one row
    int elementSize = sizeof(matrix[0][0]);      // Size of one element

    int rows = totalSize / rowSize;
    int cols = rowSize / elementSize;

    cout << "\nArray dimensions: " << rows << " rows x " << cols << " columns" << endl;

    // 5. User Input to Fill 2D Array
    int inputArray[2][2];
    cout << "\nEnter 4 integers for a 2x2 array:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> inputArray[i][j];
        }
    }

    // Display user input
    cout << "You entered:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << inputArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

