#include <iostream>
using namespace std;

int main() {
    // Static 2D Array (VLA equivalent in C++)
    int m, n;
    cout << "Enter the row and column size of the static 2D array: ";
    cin >> m >> n;

    int** s_arr = new int*[m];
    for (int i = 0; i < m; ++i) {
        s_arr[i] = new int[n];
    }

    cout << "Enter the elements of the static 2D array:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cin >> s_arr[i][j];

    cout << "Static 2D Array (" << m << "x" << n << "):\n";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cout << s_arr[i][j] << " ";
        cout << endl;
    }

    // 1. Pointer to the first element of 2D array (flattened)
    cout << "\n\"Passing the 1st element of this array to another pointer\"\n";
    int* p = &s_arr[0][0];
    cout << "Printing the elements via pointer:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cout << p[i * n + j] << " ";

    // 2. Pointer to entire 2D array
    cout << "\n\n\"Passing this whole array to another pointer\"\n";
    int*** ptr = &s_arr;
    cout << "Printing the elements via pointer to pointer:\n";
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            cout << (*ptr)[i][j] << " ";

    // Clean up static 2D allocation
    for (int i = 0; i < m; ++i)
        delete[] s_arr[i];
    delete[] s_arr;

    // Dynamic 2D Array (flattened to 1D)
    int row, column;
    cout << "\n\nCreating Dynamic 2D array (flattened) of size row x column\n";
    cout << "Enter the row and column size: ";
    cin >> row >> column;

    int* d_array = new (nothrow) int[row * column];
    if (!d_array) {
        cerr << "Memory allocation failed\n";
        return 1;
    }

    cout << "Enter " << row * column << " elements (row-major order): ";
    for (int i = 0; i < row * column; ++i)
        cin >> d_array[i];

    cout << "Dynamic 2D Array (" << row << "x" << column << "):\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j)
            cout << d_array[i * column + j] << " ";
        cout << endl;
    }

    // Resize dynamic array
    int new_row, new_column;
    cout << "\nEnter new row and column sizes: ";
    cin >> new_row >> new_column;

    int* temp = (int*)realloc(d_array, new_row * new_column * sizeof(int));
    if (!temp) {
        cerr << "Memory reallocation failed\n";
        delete[] d_array;
        return 1;
    } else {
        d_array = temp;
        cout << "Memory reallocation successful\n";
    }

    if (new_row * new_column > row * column) {
        cout << "Enter " << new_row * new_column - row * column << " new elements: ";
        for (int i = row * column; i < new_row * new_column; ++i)
            cin >> d_array[i];
    }

    cout << "Resized Dynamic 2D Array (" << new_row << "x" << new_column << "):\n";
    for (int i = 0; i < new_row; ++i) {
        for (int j = 0; j < new_column; ++j)
            cout << d_array[i * new_column + j] << " ";
        cout << endl;
    }

    delete[] d_array;
    d_array = nullptr;

    return 0;
}

