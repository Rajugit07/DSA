#include <iostream>
#include <cmath>
using namespace std;

int main()
{

     bool isPrime = true;
     int n;
     cout << "Enter a Number:";
     cin >> n;

     // for (int i = 2; i <= n - 1; i++)
     // {
     //      if (n % i == 0)
     //      {
     //           isPrime = false;
     //           break;
     //      }
     // }

     // if (isPrime)
     // {
     //      cout << "It is a prime Number:" << n;
     // }
     // else
     // {
     //      cout << "It is not a prime number:" << n;
     // }

     //* Another way

     for (int i = 2; i <= sqrt(n); i++)
     {
          if (n % i == 0)
          {
               isPrime = false;
               break;
          }
     }

     if (isPrime)
     {
          cout << "It is a prime Number:" << n;
     }
     else
     {
          cout << "It is not a prime number:" << n;
     }

     return 0;
}