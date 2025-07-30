
#include<iostream>
using namespace std;

int main()
{
    int a = 5;  // binary: 0101
    int b = 3;  // binary: 0011

    cout << "Bitwise Operators Demonstration:\n\n";

    // AND operator
    cout << "a & b = " << (a & b) << endl;    // 0101 & 0011 = 0001 = 1

    // OR operator
    cout << "a | b = " << (a | b) << endl;    // 0101 | 0011 = 0111 = 7

    // XOR operator
    cout << "a ^ b = " << (a ^ b) << endl;    // 0101 ^ 0011 = 0110 = 6

    // NOT operator (1's complement)
    cout << "~a = " << (~a) << endl;          // ~0101 = ...11111010 (2's complement: -6)

    // Left shift
    cout << "a << 1 = " << (a << 1) << endl;  // 0101 << 1 = 1010 = 10     //x<<k = x*2^k

    // Right shift
    cout << "a >> 1 = " << (a >> 1) << endl;  // 0101 >> 1 = 0010 = 2     //x>>k = x/2^k

    return 0;
}

/*
📘 Bitwise Operators in C++:

1. &   → Bitwise AND
2. |   → Bitwise OR
3. ^   → Bitwise XOR
4. ~   → Bitwise NOT (1's complement)
5. <<  → Left shift
6. >>  → Right shift

💡 Binary reference:
    a = 5 → 0101
    b = 3 → 0011
*/
