#include<iostream>
using namespace std;


     int printArr(int *ptr, int n){

          for(int i=0; i<n; i++){

               cout<<(*ptr + i)<<endl;
          }
     }

     int main(){



          int arr [] = {1,2,3,4,5};
          int n = sizeof(arr) / sizeof(int);

          printArr(arr,n);


          //Arithmetic Operation increment and decrement

          // int a = 10;
          // int *ptr = &a;

          // cout<<ptr<<endl;
          // ptr++;
          // cout<<ptr<<endl;
          // ptr--;
          // cout<<ptr<<endl;
          
          return 0;
     }