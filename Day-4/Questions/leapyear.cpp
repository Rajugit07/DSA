#include <iostream>
using namespace std;

int main()
{

     // leap year or not

     int year;
     cout << "Enter a year:" << endl;
     cin >> year;

     if (year % 400 == 0)
     {
          cout << "This is a leap Year:" << year << endl;
     }
     else if (year % 100 == 0)
     {
          cout << "This is not a leap year:" << year;
     }
     else if (year % 4 == 0)
     {
          cout << "This is a leap year:" << year;
     }
     else
     {
          cout << "This is not a leap year:" << year;
     }

     return 0;
}