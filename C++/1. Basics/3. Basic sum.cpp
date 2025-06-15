#include<iostream>
using namespace std;

int main()
{
    int a, b;

    // Prompt user to enter the first number
    cout << "Enter the 1st number: ";
    cin >> a;

    // Input cleanup (helps avoid issues if the user enters invalid input)
    cin.clear();                    // Clears the error flag on cin (if any)
    cin.ignore(100000000, '\n');    // Discards up to 100 million characters or until newline

    // Prompt user to enter the second number
    cout << "Enter the 2nd number: ";
    cin >> b;

    // Calculate and display the sum
    int sum = a + b;
    cout << "Sum: " << sum << endl;

    return 0;
}
