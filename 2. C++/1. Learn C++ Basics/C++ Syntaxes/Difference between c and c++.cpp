#include <iostream>     // C++ I/O
#include <cstdio>       // C I/O (still usable in C++)
#include <cstring>      // For string functions like strcmp
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

    return 0;
}

