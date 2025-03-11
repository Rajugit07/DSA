#include <iostream>
#include <vector>
using namespace std;

int lastOccur(vector<int> arr, int target, int i)
{
     if (i == arr.size())
     {
          return -1;
     }
     int indxFound = lastOccur(arr, target, i + 1);

     if (indxFound == -1 && arr[i] == target)
     {
          return i;
     }
     return indxFound;
}

int main()
{
     vector<int> arr = {1, 2, 3, 3, 3, 4};
     cout << lastOccur(arr, 3, 0) << endl;
     return 0;
}