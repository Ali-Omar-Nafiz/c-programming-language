#include <iostream>
using namespace std;

int main() {
    // 1. Pointers and References Visualized
    int x = 10;
    int &ref = x;       // Reference
    int *ptr = &x;      // Pointer storing address of x

    cout << "1. Pointers and References:\n";
    cout << "Value of x      : " << x << endl;
    cout << "Reference (ref) : " << ref << endl;
    cout << "Pointer (ptr)   : " << ptr << " (address of x)" << endl;
    cout << "*ptr            : " << *ptr << " (value at address)" << endl;
    cout << endl;

    // 2. Pointer Examples
    int a = 5;
    int b = 20;
    int *p = &a;
    cout << "2. Pointer Examples:\n";
    cout << "Initially, *p = " << *p << " and p = " << p << endl;

    // Repointing
    p = &b;
    cout << "After repointing, *p = " << *p << " and p = " << p << endl;

    // Changing value via pointer
    *p = 50;
    cout << "After *p = 50, b = " << b << endl;
    cout << endl;

    // 3. Pointer Rules
    int *q = nullptr; // Good practice: initialize to null
    cout << "3. Pointer Rules:\n";
    cout << "q (nullptr) = " << q << endl;

    int y = 100;
    int *validPtr = &y;
    cout << "Valid pointer points to y = " << *validPtr << endl;

    // Dangerous: dereferencing nullptr or uninitialized pointer is undefined behavior!
    // *q = 25;  // ❌ DON'T DO THIS
    cout << endl;

    // 4. Pointer Arithmetic with Arrays
    int arr[] = {10, 20, 30, 40, 50};
    int *arrPtr = arr; // Same as &arr[0]

    cout << "4. Pointer Arithmetic With Arrays:\n";
    cout << "Array elements accessed with pointer:\n";

    for (int i = 0; i < 5; ++i) {
        cout << "*(arrPtr + " << i << ") = " << *(arrPtr + i) << endl;
    }

    cout << "\nAccessing array using pointer indexing:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "arrPtr[" << i << "] = " << arrPtr[i] << endl;
    }

    return 0;
}
