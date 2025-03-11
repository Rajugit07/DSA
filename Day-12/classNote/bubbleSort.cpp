#include <iostream>
using namespace std;

void print(int arr[], int n)
{
     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << ",";
     }
}

void bubbleSort(int arr[], int n)
{
     bool isSwap = false;
     for (int i = 0; i < n - 1; i++)
     {
          for (int j = 0; j < n - i - 1; j++)
          {
               if (arr[j] > arr[j + 1])
               {
                    swap(arr[j], arr[j + 1]);
                    isSwap = true;
               }
          }

          if (!isSwap)
          {
               // array is already sorted.
               return;
          }
     }
     print(arr, n);
}

int main()
{

     int arr[5] = {5, 4, 1, 3, 2};
     // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
     bubbleSort(arr, 5);
     return 0;
}

// Time Complexity is O(n^2)

// isSwap is used for check the array is already sorted or not if already sorted then one time run the outer and inner for loop. 