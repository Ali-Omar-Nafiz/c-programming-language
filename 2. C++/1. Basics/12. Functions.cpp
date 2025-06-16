#include<iostream>
#include<utility> // Needed for std::pair
using namespace std;

// ---------- Function Prototypes ----------

// 1. Function with parameters and return value
int add(int a, int b);

// 2. Function without parameters and with return value
int getFive();

// 3. Void function
void greet();

// 4. Function with default parameters
void welcome(string name = "Guest");

// 5a. Return by reference
int& weirdReturn(int &x);

// 5b. Return a pair
pair<int, int> getMinMax(int a, int b);

// 6. Pass by reference
void incrementByRef(int &n);

// 7. Pass by pointer
void incrementByPtr(int* n);

int main() {
    // Demonstrating function with parameters and return value
    int sum = add(3, 4);
    cout << "1. Sum (3 + 4): " << sum << endl;

    // Demonstrating function without parameters
    int x = getFive();
    cout << "2. Function without parameters returned: " << x << endl;

    // Demonstrating void function
    cout << "3. Calling a void function:\n";
    greet();

    // Demonstrating default parameters
    cout << "4. Default parameters:\n";
    welcome("Alice");
    welcome();  // uses default argument

    // Demonstrating weird return (return by reference)
    int a = 10;
    int &ref = weirdReturn(a);  // modifies `a` and returns reference
    cout << "5a. Weird return - by reference:\n";
    cout << "Modified value: " << a << endl;
    ref += 5;  // also modifies `a` because ref is a reference
    cout << "Modified again through reference: " << a << endl;

    // Demonstrating paired return values
    cout << "5b. Weird return - pair (min, max of 7 and 3):\n";
    pair<int, int> result = getMinMax(7, 3);
    cout << "Min: " << result.first << ", Max: " << result.second << endl;

    // Demonstrating pass by reference
    int n1 = 5;
    incrementByRef(n1);
    cout << "6. After incrementByRef: " << n1 << endl;

    // Demonstrating pass by pointer
    int n2 = 10;
    incrementByPtr(&n2);
    cout << "7. After incrementByPtr: " << n2 << endl;

    return 0;
}

// ---------- Function Definitions ----------

int add(int a, int b) {
    return a + b;
}

int getFive() {
    return 5;
}

void greet() {
    cout << "Hello from a void function!\n";
}

void welcome(string name) {
    cout << "Welcome, " << name << "!\n";
}

int& weirdReturn(int &x) {
    x += 10;
    return x;
}

pair<int, int> getMinMax(int a, int b) {
    if (a < b)
        return {a, b};
    else
        return {b, a};
}

void incrementByRef(int &n) {
    n++;
}

void incrementByPtr(int* n) {
    (*n)++;
}

