#include<iostream>
#include<string>
using namespace std;

int main()
{
    // Relational operators return boolean values: true (1) or false (0)

    bool test = 5 > 3;
    cout << test << endl;         // Output: 1 (true), because 5 is greater than 3

    cout << (5 < 3) << endl;      // Output: 0 (false), because 5 is not less than 3

    cout << ('a' < 'a') << endl;  // Output: 0 (false), because both are equal

    cout << ('A' < 'a') << endl;  // Output: 1 (true), because ASCII value of 'A' (65) is less than 'a' (97)

    cout << ("AbC" == "aBc") << endl;


    return 0;
}

/*
Relational Operators:
    >   : Greater than
    <   : Less than
    >=  : Greater than or equal to
    <=  : Less than or equal to
    ==  : Equal to
    !=  : Not equal to
*/
