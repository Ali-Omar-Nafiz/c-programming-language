#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,count=0;
    cin>>n;
    string arr;
    cin>>arr;
    for(int i=0; i<n; i++)
    {
        count+=arr[i]-'0';
    }
    cout<<count;
    return 0;
}
