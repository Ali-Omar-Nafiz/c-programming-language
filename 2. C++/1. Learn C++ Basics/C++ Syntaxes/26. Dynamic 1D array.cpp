#include <iostream>
using namespace std;

int main() {
    // Static 1D Array (VLA-like using dynamic input)
    int n;
    cout << "Enter the column size of the static 1D array: ";
    cin >> n;

    int* s_arr = new int[n];
    cout << "Enter the elements of the static 1D array: ";
    for (int i = 0; i < n; i++) {
        cin >> s_arr[i];
    }

    cout << "Printing the elements of the static 1D array:\n";
    for (int i = 0; i < n; i++) {
        cout << s_arr[i] << " ";
    }
    cout << endl;

    {
        // 1. Pointer to the first element of the array
        cout << "\n\"Passing the 1st element of this array to another pointer\"\n";
        int* p = s_arr;  // pointer to the first element

        cout << "Printing the elements via pointer:\n";
        for (int i = 0; i < n; i++) {
            cout << p[i] << " ";
        }
        cout << endl;

        // 2. Pointer to the entire array
        cout << "\n\"Passing this whole array to another pointer\"\n";
        int (*ptr)[];
        ptr = reinterpret_cast<int (*)[]>(s_arr);  // reinterpret to pointer-to-array

        cout << "Printing the elements via pointer to entire array:\n";
        for (int i = 0; i < n; i++) {
            cout << (*ptr)[i] << " ";
        }
        cout << endl;
    }

    // Dynamic 1D Array (using new)
    cout << "\n\"Creating Dynamic 1D array of size n\"\n";
    cout << "Enter the column size of Dynamic 1D array: ";
    cin >> n;

    int* d_array = new(nothrow) int[n];
    if (!d_array) {
        cout << "Memory allocation failed\n";
        return 1;
    } else {
        cout << "Memory allocation successful\n";
    }

    cout << "Enter the " << n << " elements of the Dynamic 1D array: ";
    for (int i = 0; i < n; i++) {
        cin >> d_array[i];
    }

    cout << "Printing the elements of the dynamic 1D array:\n";
    for (int i = 0; i < n; i++) {
        cout << d_array[i] << " ";
    }
    cout << endl;

    // Resizing Dynamic Array (manually, since realloc doesn't work with new)
    int new_size;
    cout << "\nEnter the new size of the dynamic 1D array: ";
    cin >> new_size;

    int* temp = new(nothrow) int[new_size];
    if (!temp) {
        cout << "Memory Re-allocation failed\n";
        delete[] d_array;
        return 1;
    }

    // Copy old values
    for (int i = 0; i < min(n, new_size); i++) {
        temp[i] = d_array[i];
    }

    delete[] d_array;  // free old memory
    d_array = temp;

    // Input new elements (if expanded)
    if (new_size > n) {
        cout << "Enter " << new_size - n << " new elements: ";
        for (int i = n; i < new_size; i++) {
            cin >> d_array[i];
        }
    }

    cout << "Updated dynamic array elements:\n";
    for (int i = 0; i < new_size; i++) {
        cout << d_array[i] << " ";
    }
    cout << endl;

    // Free memory
    delete[] d_array;
    d_array = nullptr;  // good practice

    return 0;
}

