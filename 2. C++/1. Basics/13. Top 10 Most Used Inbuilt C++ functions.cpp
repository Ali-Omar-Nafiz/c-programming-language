#include <iostream>
#include <cmath>       // pow, sqrt, floor, ceil
#include <algorithm>   // min, max, swap, __gcd
#include <cctype>      // toupper, tolower
using namespace std;

int main() {
    double a = 5.5, b = 2.0;

    // 1. pow() and sqrt()
    cout << "pow(5.5, 2.0): " << pow(a, b) << endl;
    cout << "sqrt(25): " << sqrt(25) << endl;

    // 2. min(), max() with 2 values
    cout << "min(10, 20): " << min(10, 20) << endl;
    cout << "max(10, 20): " << max(10, 20) << endl;

    // 3. min(), max() with multiple values
    int minVal = min({10, 2, 50, 7});
    int maxVal = max({10, 2, 50, 7});
    cout << "min({10, 2, 50, 7}): " << minVal << endl;
    cout << "max({10, 2, 50, 7}): " << maxVal << endl;

    // 4. swap()
    int x = 100, y = 200;
    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(x, y);
    cout << "After swap:  x = " << x << ", y = " << y << endl;

    // 5. __gcd()
    cout << "gcd(48, 18): " << __gcd(48, 18) << endl;

    // 6. toupper(), tolower()
    char ch1 = 'a', ch2 = 'Z';
    cout << "toupper('a'): " << (char)toupper(ch1) << endl;
    cout << "tolower('Z'): " << (char)tolower(ch2) << endl;

    // 7. floor(), ceil()
    double val = 7.8;
    cout << "floor(7.8): " << floor(val) << endl;
    cout << "ceil(7.8): " << ceil(val) << endl;

    return 0;
}
