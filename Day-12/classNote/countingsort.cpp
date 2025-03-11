#include <iostream>
#include <climits>
using namespace std;

void print(int arr[], int n)
{
     for (int i = 0; i < n; i++)
     {
          cout << arr[i] << ",";
     }
     cout << endl;
}

void countSort(int arr[], int n)
{
     int freq[100000] = {0}; // range
     int minVal = INT_MAX;
     int maxVal = INT_MIN;

     // Finding the minimum and maximum values
     for (int i = 0; i < n; i++)
     {
          minVal = min(minVal, arr[i]);
          maxVal = max(maxVal, arr[i]);
     }

     // Counting frequency of each element
     for (int i = 0; i < n; i++)
     {
          freq[arr[i]]++;
     }

     // Sorting the array based on the frequencies
     for (int i = minVal, j = 0; i <= maxVal; i++)
     {
          while (freq[i] > 0)
          {
               arr[j++] = i;
               freq[i]--;
          }
     }

     print(arr, n);
}

int main()
{
     int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};
     countSort(arr, 8);
     return 0;
}
