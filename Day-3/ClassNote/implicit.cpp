#include <iostream>
using namespace std;

int main()
{

     // Implicit conversion

     // cout<< (10/3) <<endl; //integer to integer = integer
     // cout<< (10/3.0)<<endl; //integer to float = float(size of float is big so float)
     // cout<<('A' + 1)<<endl;
     // cout<<('a' + 1);

     // Explicit conversion by programmer

     // cout<<(int)('A') << endl;
     // return 0;

     // Explicit conversion by programmer
     float PI = 3.14;
     cout << (int)('A') << endl;
     cout << (int)(PI) << endl;
     cout << (char)('A') << endl;
     cout << (char)('A' + 1) << endl;
     return 0;
}