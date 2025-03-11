#include <iostream>
using namespace std;

int main()
{

     char cal;
     int a;
     int b;
     cout << "Enter a integer number:" << endl;
     cin >> a;
     cout << "Enter a second integer value:" << endl;
     cin >> b;
     cout << "Enter  the operation you want to perform:" << endl;
     cin >> cal;

     switch (cal)
     {
     case '+':
          cout << "Sum of two number is:" << a + b << endl;
          break;
     case '-':
          cout << "Minus of two number is:" << a - b << endl;
          break;
     case '*':
          cout << "Multiplication of two number is:" << a * b << endl;
          break;
     case '/':
          cout << "Division of two number is:" << a / b << endl;
     default:
          cout << "Invalid entry:" << endl;
     }
     return 0;
}