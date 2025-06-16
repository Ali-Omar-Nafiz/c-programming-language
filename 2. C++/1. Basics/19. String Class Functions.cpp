#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. Creating Strings
    string str1 = "Hello world, wonderful world!";
    string str2 = "Hello world,";
    string str3 = "Hello world, world!";
    string str4 = "Hello world, beautiful world!";
    string str5 = "Hello world, beautiful world!";
    string a = "Hello world";
    string b = "Hello world";
    string c = "Hello";
    string d = "Hello world, What's Up?";

    // 2. Finding Substrings (find, rfind)
    cout << "String for find/rfind: " << str1 << endl;
    size_t first = str1.find("world");
    size_t last = str1.rfind("world");
    if (first != string::npos) {
        cout << "First occurrence of 'world': " << first << endl;
        cout << "Last occurrence of 'world' : " << last << endl;
    } else {
        cout << "'world' not found." << endl;
    }
    cout << endl;

    // 3. Appending a String (append)
    cout << "Before append: " << str2 << endl;
    str2.append(" Have a good day!");
    cout << "After append: " << str2 << endl;
    cout << endl;

    // 4. Inserting into a String (insert)
    cout << "Before insert: " << str3 << endl;
    str3.insert(13, " beautiful");
    cout << "After insert: " << str3 << endl;
    cout << endl;

    // 5. Erasing Characters (erase)
    cout << "Before erase: " << str4 << endl;
    str4.erase(7, 5);  // removes 5 chars from index 7
    cout << "After erase: " << str4 << endl;
    cout << endl;

    // 6. Replacing Part of the String (replace)
    cout << "Before replace: " << str5 << endl;
    str5.replace(6, 2, "Earth");  // replaces 2 chars at index 6 with "Earth"
    cout << "After replace: " << str5 << endl;
    cout << endl;

    // 7. Comparing Strings (compare)
    cout << "String A: " << a << endl;
    cout << "String B: " << b << endl;
    cout << "String C: " << c << endl;
    cout << "String D: " << d << endl;

    cout << "Compare A & B: " << a.compare(b) << " (Equal)" << endl;
    cout << "Compare A & C: " << a.compare(c) << " (A is longer)" << endl;
    cout << "Compare A & D: " << a.compare(d) << " (A is smaller)" << endl;

    return 0;
}

