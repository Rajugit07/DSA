#include <iostream>
using namespace std;

int main()
{

     // positive or negative or zero

     int val;
     cout << "Enter Number:" << endl;
     cin >> val;

     if (val > 0)
     {
          cout << "The Number is Positive Number:" << val << endl;
     }
     else if (val < 0)
     {
          cout << "The Number is Negative Number:" << val << endl;
     }
     else
     {
          cout << "The Number is Zero:" << val << endl;
     }
     return 0;
}