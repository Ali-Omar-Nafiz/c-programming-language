#include <iostream>
using namespace std;

int main() {
    // 1. Creating References
    int x = 42;
    int &ref = x;  // 'ref' is a reference to 'x'

    cout << "1. Creating References:\n";
    cout << "Value of x  : " << x << endl;
    cout << "Value of ref: " << ref << " (reference to x)" << endl;
    cout << endl;

    // Changing value via reference
    ref = 99;
    cout << "After ref = 99:\n";
    cout << "Value of x  : " << x << endl;
    cout << "Value of ref: " << ref << endl;
    cout << endl;

    // 2. Memory Address of Variables
    cout << "2. Memory Address:\n";
    cout << "&x   = " << &x << endl;
    cout << "&ref = " << &ref << " (same as &x)" << endl;
    cout << endl;

    // 3. Reference Rules
    int y = 10;
    int &anotherRef = y;    // ✅ Must initialize
    cout << "3. Reference Rules:\n";
    cout << "y          = " << y << endl;
    cout << "anotherRef = " << anotherRef << " (reference to y)" << endl;

    int z = 500;
    anotherRef = z; // value copy, not rebinding
    cout << "After anotherRef = z (value assignment):\n";
    cout << "y          = " << y << " (value changed)" << endl;
    cout << "z          = " << z << endl;
    cout << "anotherRef = " << anotherRef << endl;
    cout << endl;

    // 4. Reference With Arrays
    int arr[5] = {10, 20, 30, 40, 50};
    int (&arrRef)[5] = arr; // Reference to entire array of size 5

    cout << "4. Reference With Arrays:\n";
    cout << "Original array: ";
    for (int i = 0; i < 5; i++) {
        cout << arrRef[i] << " ";
    }
    cout << endl;

    // Modify array using reference
    arrRef[2] = 300;
    cout << "After arrRef[2] = 300:\n";
    cout << "arr[2] = " << arr[2] << endl;
    cout << "arrRef[2] = " << arrRef[2] << endl;

    return 0;
}

