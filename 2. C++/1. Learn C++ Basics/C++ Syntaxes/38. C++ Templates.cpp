#include <iostream>
using namespace std;

// Function template definition
template <typename T>
T myMax(T x, T y) {
    return (x > y) ? x : y;
}

// Class template definition
template <typename T>
class Geek {
  public:
    T x;
    T y;

    // Constructor
    Geek(T val1, T val2) : x(val1), y(val2) {}

    // Method to display values
    void getValues() {
        cout << "Values: " << x << " and " << y << endl;
    }

    // Method to display the max of x and y using the function template
    void displayMax() {
        cout << "Max value: " << myMax(x, y) << endl;
    }
};

int main() {
    // Demonstrate function template separately
    cout << "Function Template Examples:" << endl;
    cout << "Max of 3 and 7: " << myMax<int>(3, 7) << endl;
    cout << "Max of 3.0 and 7.0: " << myMax<double>(3.0, 7.0) << endl;
    cout << "Max of 'g' and 'e': " << myMax<char>('g', 'e') << endl;
    cout << "------------------------------" << endl;

    // Demonstrate class template
    cout << "Class Template Examples:" << endl;
    Geek<int> intGeek(10, 20);
    intGeek.getValues();
    intGeek.displayMax();

    Geek<double> doubleGeek(5.5, 2.3);
    doubleGeek.getValues();
    doubleGeek.displayMax();

    return 0;
}
