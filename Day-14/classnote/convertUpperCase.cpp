// #include <iostream>
// #include <cstring>
// using namespace std;

// void toUpperCase(char word[], int n)
// {

//      for (int i = 0; i < n; i++)
//      {
//           char ch = word[i];

//           if (ch >= 'A' && ch <= 'Z')
//           {
//                continue;
//           }
//           else
//           {
//                word[i] = ch - 'a' + 'A';
//           }
//      }
// }

// int main()
// {

//      char word[] = "apple";

//      toUpperCase(word, strlen(word));
//      cout << word << endl;
//      return 0;
// }

// Lower case

#include <iostream>
#include <cstring>
using namespace std;

void toUpperCase(char word[], int n)
{

     for (int i = 0; i < n; i++)
     {
          char ch = word[i];

          if (ch >= 'a' && ch <= 'z')
          {
               continue;
          }
          else
          {
               word[i] = ch - 'A' + 'a';
          }
     }
}

int main()
{

     char word[] = "APPLE";

     toUpperCase(word, strlen(word));
     cout << word << endl;
     return 0;
}