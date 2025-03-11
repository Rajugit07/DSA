#include <iostream>
using namespace std;

int main()
{

     int arr[] = {43, 44, 56, 32, 45};
     int n = sizeof(arr) / sizeof(int);

     int max = arr[0];
     int min = arr[0];
     for (int i = 0; i < n; i++)
     {
          if (arr[i] > max)
          {

               max = arr[i];
               // cout<<"Assign value "<< arr[i] << " to max"<<endl;
          }
          if (arr[i] < min)
          {

               min = arr[i];
          }
     }
     cout << "Max value is: " << max << endl;
     cout << "Min value is: " << min << endl;

     return 0;
}