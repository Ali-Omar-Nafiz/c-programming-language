#include <iostream>
using namespace std;

int main() {
    int num = 100;

    // Single pointer
    int* ptr = &num;

    // Pointer to pointer (double pointer)
    int** ptr2 = &ptr;

    // Display values
    cout << "Value of num        : " << num << endl;
    cout << "Value using *ptr    : " << *ptr << endl;
    cout << "Value using **ptr2  : " << **ptr2 << endl;

    // Display addresses
    cout << "\nAddress of num      : " << &num << endl;
    cout << "Address in ptr      : " << ptr << endl;
    cout << "Address in *ptr2    : " << *ptr2 << endl;

    cout << "\nAddress of ptr      : " << &ptr << endl;
    cout << "Address in ptr2     : " << ptr2 << endl;

    return 0;
}

/*
------------------------- EXPLANATION -------------------------

What is a Pointer to Pointer?
-----------------------------
A pointer to pointer (int** ptr2) is a variable that stores the address of another pointer.
It allows us to indirectly reference or modify the original data through multiple levels.

How it works:
-------------
num   -> an integer variable
ptr   -> holds the address of num (int* ptr = &num)
ptr2  -> holds the address of ptr (int** ptr2 = &ptr)

Dereferencing:
---------------
*ptr     → accesses the value of num
**ptr2   → accesses the value at *ptr → which is num

Why we need double pointers:
----------------------------
✅ Dynamic memory management (like 2D arrays or double pointers to arrays)
✅ Modifying pointers in functions (pass by reference to pointer)
✅ Complex data structures (e.g. linked list, tree, graph using pointers)
✅ When writing code that changes the original pointer itself

Summary:
--------
- One * dereferences one level.
- Two ** dereferences two levels.
- Pointer to pointer is a powerful concept in memory management and advanced data structures.

*/

