#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b;
    c=a+b;
    cout<<a.length()<<" "<<b.length()<<endl<<c<<endl;
    a[0]=a[0]+b[0];
    b[0]=a[0]-b[0];
    a[0]=a[0]-b[0];
    cout<<a<<" "<<b<<endl;

    return 0;
}
