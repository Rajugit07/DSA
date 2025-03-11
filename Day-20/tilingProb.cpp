#include <iostream>
using namespace std;

int tilingProb(int n)
{

     if (n == 0 || n == 1)
     {
          return 1;
     }
     // *vertical
     // int ans1 = tilingProb(n - 1);
     // *horizontal
     // int ans2 = tilingProb(n - 2);
     // return ans1 + ans2;

     //*OR

     return tilingProb(n - 1) + tilingProb(n - 2);
}

int main()
{
     int n = 3;
     cout << tilingProb(n) << endl;
     return 0;
}