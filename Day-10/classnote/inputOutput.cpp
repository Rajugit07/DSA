#include <iostream>
using namespace std;

int main()
{

     // Output array
     int arr[20] = {10, 34, 23, 45, 77};
     int n = sizeof(arr) / sizeof(int);

     for (int i = 0; i < n; i++)
     {

          cout << arr[i] << " ";
     }

     // input
     //  int n;
     //  cout<<"Enter the size of the array:";
     //  cin>>n;
     //  int arr[n];

     // for(int i=0; i<n; i++){

     //      cin>>arr[i];
     // }

     // for(int i=0; i<n; i++){

     //      cout<<arr[i]<<",";
     // }

     return 0;
}