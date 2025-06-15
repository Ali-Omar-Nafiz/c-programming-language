#include<iostream>
using namespace std;
int main()
{
    int input,year,month,day;
    cin>>input;
    year=input/365;
    month=(input-year*365)/30;
    day=(input-year*365-month*30);
    cout<<year<<" years"<<endl;
    cout<<month<<" months"<<endl;
    cout<<day<<" days"<<endl;
    return 0;
}
