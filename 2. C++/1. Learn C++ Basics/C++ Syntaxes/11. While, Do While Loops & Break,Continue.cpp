#include<iostream>
using namespace std;

int main()
{
    // 1. Basic while loop: Print numbers from 1 to 5
    cout << "1. While loop - Counting from 1 to 5:\n";
    int i = 1;
    while (i <= 5) {
        cout << i << " ";
        i++;
    }
    cout << "\n\n";

    // 2. Reverse while loop: Count down from 5 to 1
    cout << "2. While loop - Counting down from 5 to 1:\n";
    int j = 5;
    while (j >= 1) {
        cout << j << " ";
        j--;
    }
    cout << "\n\n";

    // 3. Do while loop - Run at least once
    cout << "3. Do while loop - Input until user types 0:\n";
    int num;
    do {
        cout << "Enter a number (0 to stop): ";
        cin >> num;
        if (num != 0)
            cout << "You entered: " << num << "\n";
    } while (num != 0);
    cout << "Loop ended.\n\n";

    // 4. While loop with break - stops when user enters a negative number
    cout << "4. While loop with break:\n";
    int value;
    while (true) {
        cout << "Enter a positive number (negative to stop): ";
        cin >> value;
        if (value < 0) break;
        cout << "You entered: " << value << "\n";
    }
    cout << "Loop ended with break.\n\n";

    // 5. While loop with continue - skip even numbers
    cout << "5. While loop with continue - printing only odd numbers from 1 to 10:\n";
    int k = 1;
    while (k <= 10) {
        if (k % 2 == 0) {
            k++;
            continue; // Skip even numbers
        }
        cout << k << " ";
        k++;
    }
    cout << "\n\n";

    // 6. Do while loop - guaranteed one-time execution
    cout << "6. Do while loop executes at least once:\n";
    int test = 100;
    do {
        cout << "This message shows even though test = " << test << " is greater than 10.\n";
    } while (test < 10);

    return 0;
}

