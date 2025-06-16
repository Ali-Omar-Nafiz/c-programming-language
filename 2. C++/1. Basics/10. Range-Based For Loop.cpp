#include <iostream>
#include <string>
using namespace std;

int main() {
    string word = "Programming";

    cout << "Original Word: " << word << "\n\n";

    // 1. Traditional Index-Based For Loop
    cout << "Using index-based for loop: ";
    for (int i = 0; i < word.size(); i++) {
        cout << word[i] << ' ';
    }
    cout << endl;

    // 2. Range-Based For Loop (read-only)
    cout << "Using range-based for loop: ";
    for (char c : word) {
        cout << c << ' ';
    }
    cout << endl;

    // 3. Modifying string using reference in range-based loop
    for (char &c : word) {
        if (c >= 'a' && c <= 'z') {
            c = toupper(c); // convert lowercase to uppercase
        }
    }

    // After modification
    cout << "\nAfter converting to uppercase (using reference in range loop): " << word << endl;

    return 0;
}

