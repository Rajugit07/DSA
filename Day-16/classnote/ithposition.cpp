#include <iostream>
using namespace std;

int getIthBit(int num, int i)
{

     int bitmask = 1 << i;

     if (!(num & bitmask))
     {
          return 0;
     }
     else
     {
          return 1;
     }
}

int main()
{
     cout << getIthBit(6, 2);
     return 0;
}