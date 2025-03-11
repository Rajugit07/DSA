#include <iostream>
using namespace std;

int printSubArrays(int *arr, int n)
{

     int start = 0;
     int end = n - 1;

     for (int start = 0; start < n; start++)
     {

          for (int end = start; end < n; end++)
          {

               // cout<<"("<<start<<","<<end<<") ";

               for (int i = start; i <= end; i++)
               {

                    cout << arr[i];
               }
               cout << ",";
          }
          cout << endl;
     }
}

int main()
{

     int arr[] = {1, 2, 3, 4, 5};
     int n = sizeof(arr) / sizeof(int);

     printSubArrays(arr, n);
     return 0;
} 