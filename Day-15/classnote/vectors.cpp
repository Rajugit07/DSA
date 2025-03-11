#include <iostream>
#include <vector>
using namespace std;

int main()
{

     vector<int> vac1(10, -1);
     cout << vac1.size() << endl;

     for (int i = 0; i < vac1.size(); i++)
     {

          cout << vac1[i] << " ";
     }

     cout << endl;
     return 0;
}