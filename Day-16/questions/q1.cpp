// * Write a function to update the bit in a number according to given number (0 or 1);

#include <iostream>
using namespace std;

void updateIthBit(int num, int i, int val)
{

     num = num & ~(1 << i); // clear the ith position

     num = num | (val << i);

     cout << num << endl;
}

int main()
{
     updateIthBit(7, 2, 0);
     return 0;
}