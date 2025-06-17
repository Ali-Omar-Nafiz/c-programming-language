#include <iostream>
using namespace std;

int main() {
    // One-dimensional array
    int array1[5] = {1, 2, 3, 4, 5};
    int* p1 = array1;

    cout << "1D Array Access:\n";
    for (int i = 0; i < 5; i++) {
        cout << array1[i] << " ";       // Direct access
        cout << p1[i] << " ";           // Pointer with index
        cout << *(array1 + i) << " ";   // Array with pointer arithmetic
        cout << *(p1 + i) << " ";       // Pointer with pointer arithmetic
        cout << endl;
    }

    cout << "\n";

    // Two-dimensional array
    int array2[2][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10}
    };
    int* p2 = &array2[0][0]; // Flatten 2D to 1D pointer

    cout << "2D Array Access:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array2[i][j] << " ";              // 2D index access
            cout << *(p2 + i * 5 + j) << " ";          // Pointer arithmetic
        }
        cout << endl;
    }

    return 0;
}

