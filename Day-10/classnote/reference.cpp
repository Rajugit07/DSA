#include<iostream>
using namespace std;


     // void printArr(int arr[]){  
     //      arr[0] = 1000;
     // }

     //Both are same 

     // void printArr2(int *arr){
     //      arr[1] = 2000;
     // }

     void printArr(int ptr[], int n){

          for(int i=0; i<n; i++){
               cout<<ptr[i]<<",";
          }
          cout<<endl;

     }


int main(){
     int arr [] = {1,2,3,4,5,6};
     // printArr(arr);  //passing array name equivelent to passing the pointer
     // printArr2(arr);
     // cout<<arr[0]<<endl;
     // cout<<arr[1]<<endl;

     int n = sizeof(arr) / sizeof(int);
     printArr(arr,n);

     return 0;
}