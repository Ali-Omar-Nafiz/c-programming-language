#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1. Creating Arrays
    int numbers[5]= {1,2,3,4,5};            // integer array of size 5
    float prices[3];            // float array of size 3
    char letters[4+1];            // char array of size 4
    char letters2[5+1]="Nafiz";
    string names[2];            // string array of size 2

    // 2. Default Initialization
    int defaultArr[5] = {};     // all elements initialized to 0

    // 3. Accessing and Changing Elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    prices[0] = 99.99;
    prices[1] = 12.5;
    prices[2] = 5.75;

    letters[0] = 'A';
    letters[1] = 'B';
    letters[2] = 'C';
    letters[3] = 'D';
    letters[4]= '\0';

    names[0] = "Alice";
    names[1] = "Bob";

    // 4. Printing Array Elements
    cout << "Integer Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }
    cout << endl;

    cout << "Float Array: ";
    for (int i = 0; i < 3; i++)
    {
        cout << prices[i] << " ";
    }
    cout << endl;

    cout << "Char Array1: ";
    for (int i = 0; letters[i]!= '\0'; i++)
    {
        cout << letters[i];
    }
    cout << endl;
    cout << "Char Array2: ";
    cout<<letters2<<endl;
    cout << "String Array: ";
    for (int i = 0; i < 2; i++)
    {
        cout << names[i] << " ";
    }
    cout << endl;

    cout << "Default Initialized Array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << defaultArr[i] << " ";
    }
    cout << endl;

    // 5. Array Errors (uncomment to test)
    // numbers[5] = 100; // ❌ Error: index out of bounds (valid indices: 0–4)
    // cout << numbers[10]; // ❌ Reading outside array range → undefined behavior

    // 6. Getting Array Size
    int sizeOfNumbers = sizeof(numbers) / sizeof(numbers[0]);
    cout << "Size of numbers[]: " << sizeOfNumbers << " elements" << endl;

    int sizeOfPrices = sizeof(prices) / sizeof(prices[0]);
    cout << "Size of prices[]: " << sizeOfPrices << " elements" << endl;

    return 0;
}

