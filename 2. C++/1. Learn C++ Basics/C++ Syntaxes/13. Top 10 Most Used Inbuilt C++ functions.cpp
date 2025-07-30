#include <iostream>
#include <cmath>        // pow, sqrt, floor, ceil
#include <algorithm>    // min, max, swap, __gcd, sort, reverse, binary_search, find
#include <cctype>       // isalpha, isdigit, toupper, tolower, islower, isupper
#include <string>       // stoi, to_string, string::find
#include <numeric>      // accumulate
#include <vector>
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

    // 6. toupper(), tolower(), isalpha(), isdigit(), islower(), isupper()
    char ch1 = 'a', ch2 = 'Z', ch3 = '7';
    cout << "toupper('a'): " << (char)toupper(ch1) << endl;
    cout << "tolower('Z'): " << (char)tolower(ch2) << endl;
    cout << "isalpha('a'): " << isalpha(ch1) << endl;
    cout << "isdigit('7'): " << isdigit(ch3) << endl;
    cout << "islower('a'): " << islower(ch1) << endl;
    cout << "isupper('Z'): " << isupper(ch2) << endl;

    // 7. floor(), ceil()
    double val = 7.8;
    cout << "floor(7.8): " << floor(val) << endl;
    cout << "ceil(7.8): " << ceil(val) << endl;

    // 8. stoi(), to_string()

    /*
    ========================= stoi, stol, stoll, stof, stod, stold =========================

    These functions convert a `std::string` (or `const char*`) to a numeric type.

    1. stoi     → string to int
    2. stol     → string to long
    3. stoll    → string to long long
    4. stof     → string to float
    5. stod     → string to double
    6. stold    → string to long double

    Syntax:
        int n = stoi("123");               // 123
        long l = stol("456789");
        long long ll = stoll("9876543210");
        float f = stof("3.14");
        double d = stod("2.71828");
        long double ld = stold("1.618033");

    Notes:
    - All are in `<string>`
    - Can throw `std::invalid_argument` if the string is not a number
    - Can throw `std::out_of_range` if the value doesn't fit the target type

    =========================================================================================
    */

    string strNum = "1234";
    int number = stoi(strNum);
    cout << "stoi(\"1234\"): " << number << ", number + 10 = " << number + 10 << endl;

    int n = 567;
    string strFromInt = to_string(n);
    cout << "to_string(567): \"" << strFromInt << "\"" << endl;

    // 9. sort(), reverse(), binary_search()
    vector<int> v = {5, 2, 8, 1, 3};
    sort(v.begin(), v.end());
    cout << "Sorted vector: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    reverse(v.begin(), v.end());
    cout << "Reversed vector: ";
    for (int i : v) cout << i << " ";
    cout << endl;

    bool found = binary_search(v.begin(), v.end(), 3);
    cout << "Is 3 in vector? " << (found ? "Yes" : "No") << endl;

    // 10. accumulate()
    int total = accumulate(v.begin(), v.end(), 0);
    cout << "Sum of elements in vector: " << total << endl;

    // 11. string::find()
    string sentence = "hello world";
    auto pos = sentence.find("world");

    if (pos != string::npos) {
        cout << "\"world\" found at position: " << pos << " in \"" << sentence << "\"" << endl;
    } else {
        cout << "\"world\" not found in \"" << sentence << "\"" << endl;
    }

    // 12. find() in vector
    vector<int> nums = {10, 20, 30, 40, 50};
    auto it = find(nums.begin(), nums.end(), 30);

    if (it != nums.end()) {
        cout << "Found 30 at index: " << distance(nums.begin(), it) << endl;
    } else {
        cout << "30 not found in the vector." << endl;
    }

    return 0;
}

