#include <iostream>
#include <vector>
using namespace std;

int main()
{

     vector<int> vac = {1, 2, 3, 4};
     cout << "size: " << vac.size() << endl;
     cout << "Capacity :" << vac.capacity() << endl;

     vac.push_back(5);
     cout << "size: " << vac.size() << endl;
     cout << "Capacity :" << vac.capacity() << endl;

     return 0;
}