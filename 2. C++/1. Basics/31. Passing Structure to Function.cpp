#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int age;
    float marks;
};

// Pass by Value
void showByValue(Student s) {
    cout << "\n[By Value] Name: " << s.name << ", Age: " << s.age << ", Marks: " << s.marks << endl;
}

// Pass by Reference
void showByReference(const Student& s) {
    cout << "\n[By Reference] Name: " << s.name << ", Age: " << s.age << ", Marks: " << s.marks << endl;
}

// Pass by Pointer
void showByPointer(const Student* s) {
    cout << "\n[By Pointer] Name: " << s->name << ", Age: " << s->age << ", Marks: " << s->marks << endl;
}

int main() {
    Student stu = {"Alice", 20, 88.5};

    // Function calls
    showByValue(stu);       // Passed by value (copy)
    showByReference(stu);   // Passed by reference (efficient and safe)
    showByPointer(&stu);    // Passed by pointer (classic C-style)

    return 0;
}

