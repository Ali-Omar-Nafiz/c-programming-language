#include <iostream>
using namespace std;

struct Distance {
    int feet;
    float inch;
};

int main() {
    Distance d;
    Distance* ptr = &d;

    // Input using arrow operator
    cout << "Enter feet: ";
    cin >> ptr->feet;
    // cin >> (*ptr).feet;  // Alternative: using dereference and dot operator

    cout << "Enter inch: ";
    cin >> ptr->inch;
    // cin >> (*ptr).inch;  // Alternative: using dereference and dot operator

    // Output using arrow operator
    cout << "\nDisplaying information." << endl;
    cout << "Distance = " << ptr->feet << " feet " << ptr->inch << " inches" << endl;
    // cout << "Distance = " << (*ptr).feet << " feet " << (*ptr).inch << " inches" << endl;

    return 0;
}

