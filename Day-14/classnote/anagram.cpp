#include <iostream>
#include <string>
using namespace std;

bool anagram(string str1, string str2)
{

     if (str1 != str2)
     {
          cout << "This is not a anagram" << endl;
          return false;
     }

     int count[26] = {0};
     for (int i = 0; i < str1.length(); i++)
     {
          int idx = str1[i] - 'a';
          count[idx]++;
     }

     for (int i = 0; i < str2.length(); i++)
     {

          int idx = str2[i] - 'a';
          if (count[idx] == 0)
          {
               cout << "This is not a anagram" << endl;
               return false;
          }
          count[idx]--;
     }

     cout << "This is a anagram";
     return true;
}

int main()
{

     string str1 = "nice";
     string str2 = "ice";
     anagram(str1, str2);

     return 0;
}