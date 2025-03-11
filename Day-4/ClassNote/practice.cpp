#include <iostream>
using namespace std;

int main()
{

     //* Print the largest of 2 number:

     // int a;
     // int b;
     // cout << "Enter a integer number:" << endl;
     // cin >> a;

     // cout << "Enter a integer number: " << endl;
     // cin >> b;

     // if (a >= b)
     // {
     //      cout << "a is larger" << a << endl;
     // }
     // else
     // {
     //      cout << "b is larger" << b << endl;
     // }

     // *Print odd or even

     // int oddEven;

     // cout << "Enter a integer number: ";
     // cin >> oddEven;

     // if (oddEven % 2 == 0)
     // {
     //      cout << "This is a Even number: " << oddEven << endl;
     // }
     // else
     // {
     //      cout << "This is a Odd number: " << oddEven << endl;
     // }

     //* Income text Calculation

     // int income;
     // float tax;
     // cout << "Enter your income (in lakh): ";
     // cin >> income;

     // if (income <= 5)
     // {
     //      tax = 0;
     // }
     // else if (income <= 10)
     // {
     //      tax = 0.2 * income;
     // }
     // else
     // {
     //      tax = 0.3 * income;
     // }

     // cout << "Tax = " << (tax * 100000) << endl;

     //* Print the largest of three number:
     int a, b, c;

     cout << "Enter a:";
     cin >> a;

     cout << "Enter b:";
     cin >> b;

     cout << "Enter c:";
     cin >> c;

     if (a >= b && a >= c)
     {
          {
               cout << "a is greater: " << a;
          }
     }
     else if (b >= c)
     {
          cout << "b is greater:" << b;
     }
     else
     {
          cout << "c is greater:" << c;
     }

     return 0;
}