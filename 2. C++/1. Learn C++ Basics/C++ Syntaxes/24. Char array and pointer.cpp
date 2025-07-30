#include <iostream>
#include<cstring>
using namespace std;

int main() {
    // ----------- Character Array Initialization ----------- //
    char str[] = "Nafiz";  // Automatically adds '\0'
    char str2[10] = "Hello";  // Extra space available

    cout << "Original str: " << str << endl;
    cout << "Original str2: " << str2 << endl;

    // ----------- Accessing via Pointer ----------- //
    char* p = str;  // Pointer to first character of str

    cout << "\nCharacters of str using pointer:" << endl;
    while (*p != '\0') {
        cout << *p << " ";
        p++;
    }
    cout << endl;

    // Reset pointer
    p = str;

    // ----------- Modifying characters using pointer ----------- //
    p[0] = 'M';  // Changing 'N' to 'M'
    *(p + 1) = 'o';  // Changing 'a' to 'o'

    cout << "\nModified str: " << str << endl;

    // ----------- Printing using loop and pointer notation ----------- //
    cout << "\nAccess using pointer arithmetic:" << endl;
    for (int i = 0; str[i] != '\0'; i++) {
        cout << *(str + i) << " ";
    }
    cout << endl;

    // ----------- String Size Info ----------- //
    cout << "\nLength of str (excluding null): " << strlen(str) << endl;
    cout << "Total size of str (with null): " << sizeof(str) << " bytes" << endl;

    return 0;
}

