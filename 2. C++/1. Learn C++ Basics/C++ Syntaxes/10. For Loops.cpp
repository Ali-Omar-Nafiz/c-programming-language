#include<iostream>
using namespace std;

int main()
{
    // 1. Basic for loop: Counting from 1 to 5
    cout << "1. Counting from 1 to 5:\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    // 2. Reverse for loop: Counting down from 5 to 1
    cout << "2. Counting down from 5 to 1:\n";
    for (int i = 5; i >= 1; i--) {
        cout << i << " ";
    }
    cout << "\n\n";

    // 3. For loop with step/increment of 2
    cout << "3. Even numbers from 2 to 10:\n";
    for (int i = 2; i <= 10; i += 2) {
        cout << i << " ";
    }
    cout << "\n\n";

    // 4. Using for loop with condition only (initialization outside, increment inside)
    cout << "4. Using loop with initialization outside and increment inside:\n";
    int i = 1;
    for ( ; i <= 5; ) {
        cout << i << " ";
        i++; // increment inside the loop body
    }
    cout << "\n\n";

    // 5. Infinite for loop with break
    cout << "5. Infinite loop (broken with condition):\n";
    for (;;) {
        int num;
        cout << "Enter a number (0 to stop): ";
        cin >> num;
        if (num == 0) break;
        cout << "You entered: " << num << "\n";
    }
    cout << "Loop ended.\n\n";

    // 6. Nested for loops: Print a square pattern
    cout << "6. Nested for loops - printing a 3x3 grid:\n";
    for (int row = 1; row <= 3; row++) {
        for (int col = 1; col <= 3; col++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}

