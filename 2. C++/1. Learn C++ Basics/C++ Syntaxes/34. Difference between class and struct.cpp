#include <iostream>
using namespace std;

// Define a struct
struct MyStruct {
    int a; // public by default

    void showA() {
        cout << "Struct a: " << a << endl;
    }
};

// Define a class
class MyClass {
    int b; // private by default

public:
    void setB(int val) {
        b = val;
    }

    void showB() {
        cout << "Class b: " << b << endl;
    }
};

int main() {
    MyStruct s;
    s.a = 10;           // ✅ Allowed: public by default
    s.showA();          // ✅ Allowed

    MyClass c;
    // c.b = 20;        // ❌ Error: b is private
    c.setB(20);         // ✅ Use public setter
    c.showB();          // ✅ Show value using method

    return 0;
}

