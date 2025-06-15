#include<iostream>  // Include the input/output stream library
using namespace std;

int main()
{
    int n, x;  // Declare two integer variables

    cin >> n;  // Take input for variable 'n'
    cout << n << endl;  // Output the value of 'n'

    // Check if the previous input operation failed (e.g., if user entered a letter instead of a number)
    cout << cin.fail();  // Prints 1 if input failed, 0 if input was successful

    cin.clear();  // Clear the error flag so that future I/O operations can proceed

    // Remove up to 1000 characters from the input buffer or until a newline is found
    cin.ignore(1000, '\n');

    cin >> x;  // Take input again, this time for variable 'x'
    cout << x;  // Output the value of 'x'

    return 0;  // End of program
}
