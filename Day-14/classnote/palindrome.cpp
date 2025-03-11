#include <iostream>
#include <cstring>
using namespace std;

bool palindrome(char str[], int n)
{

     int st = 0;
     int end = n - 1;

     while (st < end)
     {
          if (str[st++] != str[end--])
          {
               cout << "This is not a palindrome";
               return false;
          }
     }

     cout << "This is  a palindrome";
     return true;
}

int main()
{

     char word[] = "non";
     palindrome(word, strlen(word));

     return 0;
}