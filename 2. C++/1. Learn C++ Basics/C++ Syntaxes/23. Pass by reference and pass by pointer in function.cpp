#include <iostream>
using namespace std;

// ----------- Function Declarations ----------- //

// Pass by Reference
void swapByReference(int& n1, int& n2);

// Const Reference for read-only operation
int addByConstReference(const int& num1, const int& num2);

// Pass by Pointer
void swapByPointer(int* n1, int* n2);

// --------------------------------------------- //

int main() {
    int a = 5, b = 10;

    // ---------- Pass by Reference ---------- //
    cout << "Before swapByReference:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swapByReference(a, b);

    cout << "After swapByReference:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    // ---------- Const Reference for Addition ---------- //
    int num1, num2;
    cout << "\nEnter two numbers to add: ";
    cin >> num1 >> num2;

    int sum = addByConstReference(num1, num2);
    cout << "Sum using const reference: " << sum << endl;

    // ---------- Pass by Pointer ---------- //
    cout << "\nBefore swapByPointer:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swapByPointer(&a, &b);

    cout << "After swapByPointer:" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}

// ---------- Function Definitions ---------- //

// Pass by Reference
void swapByReference(int& n1, int& n2) {
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

// Const Reference (Read-only)
int addByConstReference(const int& num1, const int& num2) {
    return num1 + num2;
}

// Pass by Pointer
void swapByPointer(int* n1, int* n2) {
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

