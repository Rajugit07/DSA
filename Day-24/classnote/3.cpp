#include <iostream>
#include <string>
using namespace std;

// Q. Find Permutation

void permutation(string str, string ans)
{

     int n = str.size();

     if (n == 0)
     {
          cout << ans << '\n';
          return;
     }

     for (int i = 0; i < str.size(); i++)
     {

          char ch = str[i];
          string nextStr = str.substr(0, i) + str.substr(i + 1, n - 1 - i);
          permutation(nextStr, ans + ch);
     }
}

int main()
{

     string str = "abc";
     string ans = "";

     permutation(str, ans);

     return 0;
}