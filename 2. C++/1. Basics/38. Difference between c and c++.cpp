#include <iostream>     // C++ I/O
#include <cstdio>       // C I/O (still usable in C++)
#include <cstring>      // For string functions like strcmp
#include <stdexcept>    // For exceptions
using namespace std;

// Function with default parameter (Not available in C)
void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
    // C equivalent: No default parameters allowed
    // void greet(char* name); // Called with all arguments manually
}

// Function Overloading (Only possible in C++)
int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

// Function Templates (Only in C++)
template <typename T>
T multiply(T a, T b) {
    return a * b;
    // C equivalent: No templates; you must write separate functions for each type
}

// Using class (Only possible in C++)
class Student {
public:
    string name;
    int age;

    // Constructor (not in C)
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void show() {
        cout << "Student: " << name << ", Age: " << age << endl;
    }
};

// Inline function (must be outside main)
inline int square(int n) {
    return n * n;
}

int main() {
    // C++ I/O
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    // C I/O equivalent
    // printf("Enter two numbers: ");
    // scanf("%d %d", &x, &y);

    cout << "C++ Add (int): " << add(x, y) << endl;
    cout << "C++ Add (double): " << add(1.5, 2.5) << endl;

    // Function template usage
    cout << "Template Multiply (int): " << multiply(3, 4) << endl;
    cout << "Template Multiply (double): " << multiply(2.5, 4.5) << endl;

    // Default parameter example
    greet("Ali");
    greet();  // Uses default

    // C equivalent
    // greet("Ali");
    // greet(NULL); // No default in C

    // Class usage in C++
    Student s("John", 20);
    s.show();

    // C equivalent (Struct with no functions)
    /*
    struct Student {
        char name[50];
        int age;
    };
    struct Student s = {"John", 20"};
    printf("Student: %s, Age: %d\n", s.name, s.age);
    */

    // Namespaces (Only in C++)
    cout << "Using namespace std for cout/cin etc." << endl;
    // C has no namespaces; all identifiers are global unless static

    // References (Only in C++)
    int a = 10;
    int &ref = a; // reference variable
    ref = 20; // changes a
    cout << "Reference example, a = " << a << endl;

    // C equivalent:
    // int a = 10;
    // int *ptr = &a;
    // *ptr = 20;

    // new/delete (C++), malloc/free in C
    int *arr = new int[5]; // C++ dynamic allocation
    delete[] arr;          // C++ deallocation

    // C equivalent:
    // int *arr = (int*)malloc(5 * sizeof(int));
    // free(arr);

    // Exception handling (Only in C++)
    try {
        throw runtime_error("Something went wrong!");
    }
    catch (exception &e) {
        cout << "Caught exception: " << e.what() << endl;
    }
    // C equivalent:
    // No exceptions; error handling done via return codes or setjmp/longjmp

    // bool type (in C++ by default)
    bool isActive = true;
    cout << "Bool example: " << isActive << endl;
    // C equivalent (C99):
    // #include <stdbool.h>
    // bool isActive = true;

    cout << "Inline square(5): " << square(5) << endl;

    return 0;
}

