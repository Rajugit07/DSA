#include <iostream>
using namespace std;

// pass by value
// void changeA(int para)
// {
//      para = 20;
//      cout << para << endl;
// }

// pass by reference using pointer variable

// void changeA(int *ptr)
// {
//      *ptr = 20;
//      cout << *ptr << endl;
// }

void changeA(int &ptr)
{
     ptr = 20;
     cout << ptr << endl;
}
int main()
{

     // Pass by value(it generate the copy of the current variable in memory) int a = 10;
     // changeA(a);  // 20 10
     // changeA(&a); // 20 20
     // cout << a << endl;

     // Pass by reference

     int a = 10;
     changeA(a);
     cout << a << endl;

     return 0;
}