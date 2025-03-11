#include <iostream>
using namespace std;

void oddEven(int num)
{

     if (!(num & 1))
     {
          cout << "even" << endl;
     }
     else
     {
          cout << "odd" << endl;
     }
}

int main()
{

     oddEven(5);
     oddEven(8);

     return 0;
}