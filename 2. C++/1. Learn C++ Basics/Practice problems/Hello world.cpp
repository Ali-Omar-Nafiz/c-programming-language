#include<iostream>
using namespace std;
int main()
{
    cout<<"Hello world!"<<"Nafiz\n";
    cout<<"Hello world!"<<"Nafiz"<<endl;             // ✅ Version 1: Using `using namespace std;`
    cout<<"Hello world!"<<"Nafiz";
    return 0;
}
/*#include<iostream>
int main()
{
    std::cout<<"Hello world!"<<"Nafiz\n";
    std::cout<<"Hello world!"<<"Nafiz"<<std::endl;            // ✅ Version 2: Without using namespace std
    std::cout<<"Hello world!"<<"Nafiz";
    return 0;
}*/
