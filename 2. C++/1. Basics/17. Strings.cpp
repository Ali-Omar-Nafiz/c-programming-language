#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1. String Declaration
    string word = "HelloWorld";  //cin>>word; //to take input until first white space

    // 2. String Indexing
    cout << "Character at index 0: " << word[0] << endl;
    cout << "Character at index 4: " << word[4] << endl;
    word[5] = '_'; // Modify character at index 5
    cout << "Modified string: " << word << endl;

    // 3. .size() and .length()
    cout << "\nLength using size(): " << word.size() << endl;
    cout << "Length using length(): " << word.length() << endl;

    // 4. Iterating through string - Method 1: Traditional for loop
    cout << "\nCharacters using for loop (index-based): ";
    for (int i = 0; i < word.length(); i++) {
        cout << word[i] << ' ';
    }
    cout << endl;

    // Method 2: Range-based for loop
    cout << "Characters using range-based for loop: ";
    for (char c : word) {
        cout << c << ' ';
    }
    cout << endl;

    // Method 3: While loop
    cout << "Characters using while loop: ";
    int i = 0;
    while (i < word.size()) {
        cout << word[i] << ' ';
        i++;
    }
    cout << endl;

    return 0;
}

/* Alternative way using char array like C

#include <iostream>
using namespace std;

int main()
{
    char str[100];

    cout << "Enter a string: ";
    cin >> str;  // only takes input until first space
    cout << "You entered: " << str << endl;

    cout << "\nEnter another string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    return 0;
}

/* Alternative way using getline() to take full line input (including spaces)

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input;

    cout << "Enter a full line: ";
    getline(cin, input);  // takes full line input
    cout << "You entered: " << input << endl;

    return 0;
}
*/
