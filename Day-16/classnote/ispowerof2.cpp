#include <iostream>
using namespace std;

bool isPowerIsTwo(int num)
{

     if (!(num & (num - 1)))
     {
          return true;
     }
     else
     {
          return false;
     }
}

int main()
{
     cout << isPowerIsTwo(7) << endl;
     return 0;
}

