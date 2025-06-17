#include <iostream>
using namespace std;

// Function that returns a pointer to the first element of a static array
int* getArray() {
    static int arr[5] = {10, 20, 30, 40, 50};  // static so it stays alive after function ends
    return arr;  // return pointer to the first element
}

int main() {
    int* ptr = getArray();  // receive the pointer

    cout << "Elements of the array returned by function:\n";
    for (int i = 0; i < 5; i++) {
        cout << ptr[i] << " ";  // access elements using pointer
    }
    cout << endl;

    return 0;
}

