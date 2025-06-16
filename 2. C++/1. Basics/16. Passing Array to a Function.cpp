#include <iostream>
#include <vector>
using namespace std;

const int ARRAY_SIZE = 5;

// 1. Pass a 1D array to a function
void display1D(int m[]) {
    cout << "Displaying 1D Array (Marks):" << endl;
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        cout << "Student " << i + 1 << ": " << m[i] << endl;
    }
    cout << endl;
}

// 2. Pass a 2D array to a function
void display2D(int n[][2], int rows) {
    cout << "Displaying 2D Array:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < 2; ++j) {
            cout << "num[" << i << "][" << j << "]: " << n[i][j] << endl;
        }
    }
    cout << endl;
}

// 3. Return a subarray using vector
vector<int> sliceArray(vector<int>& arr, int start, int end) {
    vector<int> result;
    for (int i = start; i < end && i < arr.size(); ++i) {
        result.push_back(arr[i]);
    }
    return result;
}

// Display vector elements
void displayVector(const vector<int>& vec) {
    cout << "Sliced Vector Elements: ";
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;
}

int main() {
    // ----------- 1D Array Example -----------
    int marks[ARRAY_SIZE] = {88, 76, 90, 61, 69};
    display1D(marks);

    // ----------- 2D Array Example -----------
    int num[3][2] = {
        {3, 4},
        {9, 5},
        {7, 1}
    };
    display2D(num, 3);

    // ----------- Returning an Array (vector) -----------
    vector<int> fullArray = {10, 20, 30, 40, 50, 60};
    vector<int> subArray = sliceArray(fullArray, 2, 5);
    displayVector(subArray);

    return 0;
}

