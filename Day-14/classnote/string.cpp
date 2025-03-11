#include <iostream>
#include <string>
using namespace std;

int main()
{

     // Some Member function of String Class:

     string str = "I love C++ and Java";
     cout << str.length() << endl;
     cout << str.at(2) << endl;
     cout << str.substr(1, 4) << endl;
     cout << str.find("and") << endl;

     return 0;
}