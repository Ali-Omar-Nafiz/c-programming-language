#include <iostream>
#include <string>
using namespace std;

// Define a structure
struct Book {
    string title;
    string author;
    int year;
};

// Function that returns a Book structure
Book createBook() {
    Book b;
    cout << "Enter book title: ";
    getline(cin, b.title);
    cout << "Enter author name: ";
    getline(cin, b.author);
    cout << "Enter published year: ";
    cin >> b.year;
    cin.ignore();  // clear the newline character from buffer

    return b;  // returning the structure
}

// Function to display book information
void displayBook(const Book& b) {
    cout << "\nBook Information:\n";
    cout << "Title : " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Year  : " << b.year << endl;
}

int main() {
    Book myBook = createBook();  // receiving structure from function
    displayBook(myBook);         // passing structure to function
    return 0;
}

