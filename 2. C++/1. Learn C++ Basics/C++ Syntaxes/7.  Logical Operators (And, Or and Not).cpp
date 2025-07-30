#include<iostream>
using namespace std;

int main()
{
    bool A = true;
    bool B = false;

    cout << "Logical Operators Demonstration:\n\n";

    // AND operator (&&)
    cout << "A && B = " << (A && B) << endl;   // false (0), because one is false
    cout << "A && true = " << (A && true) << endl; // true (1)

    // OR operator (||)
    cout << "A || B = " << (A || B) << endl;   // true (1), because one is true
    cout << "B || false = " << (B || false) << endl; // false (0)

    // NOT operator (!)
    cout << "!A = " << (!A) << endl;           // false (0), because A is true
    cout << "!B = " << (!B) << endl;           // true (1), because B is false

    // Combining multiple operators
    cout << "!(A && B) || A = " << (!(A && B) || A) << endl; // true

    return 0;
}

/*
📘 Logical Operators in C++:

1. &&  → Logical AND
   - true if **both** operands are true
2. ||  → Logical OR
   - true if **at least one** operand is true
3. !   → Logical NOT
   - true if operand is false, and vice versa
*/

