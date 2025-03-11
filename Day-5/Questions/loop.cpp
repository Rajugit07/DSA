#include <iostream>
using namespace std;

int main()
{

     //* Factorial

     // int n;
     // cout << "Enter  a number: ";
     // cin >> n;
     // int fact = 1;
     // for (int i = 1; i <= n; i++)
     // {
     //      fact *= i;
     // }

     // cout << fact;
     // cout << "factorial of " << n << " = " << fact << "\n";

     //* Multiplication

     // int num;
     // cout << "Enter a Number:";
     // cin >> num;

     // for (int i = 1; i <= 10; i++)
     // {
     //      cout << num * i << endl;
     // }

     // *WAP to input a number and check whether the number is an Armstrong
     // *number or not.

     int n = 371;
     int num = n;
     int cubeSum = 0;
     while (num > 0)
     {
          int lastDig = num % 10;
          cubeSum += lastDig * lastDig * lastDig;
          num /= 10;
     }
     if (n == cubeSum)
     {
          cout << "Armstrong number\n"
               << cubeSum;
     }
     else
     {
          cout << "NOT an Armstrong number\n"
               << cubeSum;
     }

     //* For a positive N , WAP that prints all the prime numbers from 2 to N.

     // int N = 15;
     // for (int i = 2; i <= N; i++)
     // {
     //      int curr = i; // current number to check for bool isPrime = true;
     //      bool isPrime = true;
     //      for (int j = 2; j * j <= i; j++)
     //      {

     //           if (curr % j == 0)
     //           {
     //                isPrime = false;
     //           }
     //      }

     //      if (isPrime)
     //      {
     //           cout << curr << " ";
     //      }
     // }
     // cout << endl;

     //* For a positive N , WAP that prints the first N Fibonacci numbers.

     // int n;
     // cout << "Enter a Number:";
     // cin >> n;
     // int first = 0, sec = 1;
     // cout << first << " " << sec << " ";
     // for (int i = 2; i < n; i++)
     // {
     //      int third = first + sec;
     //      cout << third << " ";
     //      first = sec;
     //      sec = third;
     // }
     // cout << "\n";

     return 0;
}