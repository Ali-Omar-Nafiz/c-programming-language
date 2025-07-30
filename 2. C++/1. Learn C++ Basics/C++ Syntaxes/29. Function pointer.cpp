#include <iostream>
using namespace std;

// A normal function that adds two integers
int add(int a, int b) {
    return a + b;
}

int main() {
    // Declare a function pointer
    int (*funcPtr)(int, int);

    // Point it to the 'add' function
    funcPtr = add;

    // Call the function using the pointer
    int result = funcPtr(5, 7);

    cout << "Result of add(5, 7) using function pointer: " << result << endl;

    return 0;
}

