#include <iostream>
using namespace std;

int main() {
    // One-dimensional array
    int array1[5];
    int* p1 = array1;

    cout << "Enter 5 elements for 1D array:\n";
    for (int i = 0; i < 5; i++) {
        cin >> *(p1 + i); // same as: cin >> array1[i];
    }

    cout << "\n1D Array Access:\n";
    for (int i = 0; i < 5; i++) {
        cout << array1[i] << " ";       // Direct access
        cout << p1[i] << " ";           // Pointer with index
        cout << *(array1 + i) << " ";   // Array with pointer arithmetic
        cout << *(p1 + i) << " ";       // Pointer with pointer arithmetic
        cout << endl;
    }

    cout << "\n";

    // Two-dimensional array
    int array2[2][5];
    int* p2 = &array2[0][0]; // Flatten 2D to 1D pointer

    cout << "Enter 10 elements for 2D array (2x5):\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> *(p2 + i * 5 + j); // same as: cin >> array2[i][j];
        }
    }

    cout << "\n2D Array Access:\n";
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array2[i][j] << " ";             // 2D index access
            cout << *(p2 + i * 5 + j) << " ";         // Pointer arithmetic
        }
        cout << endl;
    }

    return 0;
}

