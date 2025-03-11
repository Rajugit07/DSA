#include <iostream>
#include <cstring>
using namespace std;

int countLowerCase(char str1[], int n)
{

     int count = 0;

     for (int i = 0; i < n; i++)
     {

          char lo = str1[i];

          if (lo >= 'A' & lo <= 'Z')
          {

               continue;
          }
          else
          {

               count = count + 1;
          }
     }
     cout << count;
}

int main()
{

     char lowercase[50];
     cout << "Enter a letter to count lowercase:" << endl;
     cin >> lowercase;
     countLowerCase(lowercase, strlen(lowercase));

     return 0;
}