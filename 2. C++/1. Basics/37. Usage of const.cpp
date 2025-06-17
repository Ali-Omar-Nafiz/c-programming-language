#include <iostream>
using namespace std;

// 1. Function with a const parameter
void printMessage(const string& msg) {
    // msg cannot be modified inside this function
    cout << "Message: " << msg << endl;
}

int main() {
    // 2. const variable
    const int maxValue = 100;
    cout << "Max value: " << maxValue << endl;

    // 3. pointer to const int
    int a = 10;
    int b = 20;
    const int* ptr = &a; // value pointed to by ptr is const
    cout << "Value via const pointer: " << *ptr << endl;

    ptr = &b; // allowed: we can change what ptr points to
    cout << "Value via const pointer after pointing to b: " << *ptr << endl;

    // *ptr = 30; // ❌ Not allowed: cannot modify value through ptr

    // 4. Call function with const parameter
    string message = "Hello, world!";
    printMessage(message);

    return 0;
}

