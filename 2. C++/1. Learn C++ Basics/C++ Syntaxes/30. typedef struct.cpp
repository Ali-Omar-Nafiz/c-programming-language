#include <iostream>
using namespace std;

// Regular struct (you must use 'struct' when declaring variables)
struct Student1 {
    char name[50];
    int ID;
};

// typedef struct (you can use the alias directly without 'struct')
typedef struct {
    char name[50];
    int ID;
} Student2;

int main() {
    // Using normal struct: must write 'struct' before type
    struct Student1 s1;

    // Using typedef struct: just write the alias
    Student2 s2;

    // Assigning values
    s1.ID = 101;
    s2.ID = 102;

    cout << "Student1 ID: " << s1.ID << endl;
    cout << "Student2 ID: " << s2.ID << endl;

    return 0;
}
