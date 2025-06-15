#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i = 300, j = 33;

    // Basic arithmetic operations
    cout << "Addition: " << i + j << endl;             // 300 + 33 = 333
    cout << "Subtraction: " << i - j << endl;          // 300 - 33 = 267
    cout << "Division: " << i / j << endl;             // 300 / 33 = 9 (integer division)
    cout << "Modulus: " << i % j << endl;              // 300 % 33 = 3
    cout << "Multiplication: " << i * j << endl;       // 300 * 33 = 9900

    // Compound assignment operators
    cout << "Increment by 10: " << (i += 10) << endl;  // i = 310
    cout << "Decrement by 10: " << (i -= 10) << endl;  // i = 300
    cout << "Multiply by 10: " << (i *= 10) << endl;   // i = 3000
    cout << "Division by 10: " << (i /= 10) << endl;   // i = 300
    cout << "Modulus by 10: " << (i %= 10) << endl;    // i = 0 (300 % 10)

    // Reset i to original if needed (optional)
    i = 300;

    // Increment and decrement examples
    cout << "Initial value of j : " << j << endl;

    cout << "Post-Increment (j++): " << j++ << endl;   // prints 33, then j becomes 34
    j = 33; // reset
    cout << "Pre-Increment (++j): " << ++j << endl;    // j becomes 34, then prints 34
    j = 33; // reset
    cout << "Post-Decrement (j--): " << j-- << endl;   // prints 33, then j becomes 32
    j = 33; // reset
    cout << "Pre-Decrement (--j): " << --j << endl;    // j becomes 32, then prints 32

    return 0;
}

/*
Arithmetic Operators:
    +   : Addition
    -   : Subtraction
    *   : Multiplication
    /   : Division (integer division for ints)
    %   : Modulus (remainder)
    +=  : Add and assign
    -=  : Subtract and assign
    *=  : Multiply and assign
    /=  : Divide and assign
    %=  : Modulus and assign
    ++  : Increment (prefix and postfix)
    --  : Decrement (prefix and postfix)
*/
