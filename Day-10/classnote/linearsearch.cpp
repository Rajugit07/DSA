#include <iostream>
using namespace std;

int linerSearch(int arr[], int n, int key)
{

     for (int i = 0; i < n; i++)
     {

          if (arr[i] == key)
          {

               return i;
          }
     }
     return -1;
}

int main()
{

     int arr[] = {12, 34, 56, 67, 12, 45, 21, 10, 55, 67, 78, 10};
     int n = sizeof(arr) / sizeof(int);

     cout << linerSearch(arr, n, 10) << endl;
     return 0;
}