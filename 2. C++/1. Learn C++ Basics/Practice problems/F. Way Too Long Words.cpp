#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
        int len = str[i].length();

        if (len <= 10)
        {
            cout << str[i] << endl;
        }
        else
        {
            cout << str[i][0] << len - 2 << str[i][len - 1] << endl;
        }
    }

    return 0;
}
