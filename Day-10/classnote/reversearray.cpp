#include <iostream>
using namespace std;

// void printArr(int *arr, int n)
// {

//      for (int i = 0; i < n; i++)
//      {

//           cout << arr[i] << ",";
//      }
// }
// int main()
// {

//      int arr[] = {23, 33, 46, 56, 67};
//      int n = sizeof(arr) / sizeof(int);

//      int copyArr[n];
//      for (int i = 0; i < n; i++)
//      {

//           int j = n - i - 1;
//           copyArr[i] = arr[j];
//      }

//      // for (int i = 0; i < n; i++)
//      // {

//      //      arr[i] = copyArr[i];
//      // }

//      printArr(copyArr, n);
//      return 0;
// }

// Time and Space complexity is O(n) and O(n) (to be better approach for Space Com.⬇️ )
//----------------------------------------------------------------------------------------

void printArr(int *arr, int n)
{

     for (int i = 0; i < n; i++)
     {

          cout << arr[i] << ",";
     }
}
int main()
{

     int arr[] = {23, 33, 46, 56, 67};
     int n = sizeof(arr) / sizeof(int);

     int start = 0;
     int end = n - 1;

     while (start < end)
     {

          int temp = arr[start]; // OR use "swap method also {swap(arr[start],arr[end])}"
          arr[start] = arr[end];
          arr[end] = temp;

          start++;
          end--;
     }

     printArr(arr, n);
     return 0;
}
