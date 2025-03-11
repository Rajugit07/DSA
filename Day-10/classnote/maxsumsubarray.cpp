#include<iostream>
using namespace std;

     //Brute force Method.

     void maxSubArraySum1(int *arr, int n){
          int maxSum =  INT16_MIN;

          for(int start = 0; start < n; start++){

               for(int end=start; end<n; end++){

                    int currentSum = 0;
                    for(int i=start; i<=end; i++){

                         currentSum += arr[i];
                    }
                    cout<< currentSum<<",";
                    maxSum = max(maxSum,currentSum);
               }
               cout<<endl;
          }

          cout<<"Maximum sub array sum is:"<<maxSum<<endl;
          
     }



     int main(){

          int arr[] = {2,-3,6,-5,4,2};
          int n = sizeof(arr) / sizeof(int);

          maxSubArraySum1(arr,n);
          return 0;
     }


     //-----------------------------------Sightly Optimized Approach---------------------------------------


     // void maxSubArraySum1(int *arr, int n){
     //      int maxSum =  INT16_MIN;

     //      for(int start = 0; start < n; start++){
     //           int currentSum = 0;

     //           for(int end=start; end<n; end++){

     //                currentSum += arr[end];                    
     //                maxSum = max(maxSum,currentSum);
     //           }
     //      }

     //      cout<<"Maximum sub array sum is:"<<maxSum<<endl;
          
     // }


     // int main(){

     //      int arr[] = {2,-3,6,-5,4,2};
     //      int n = sizeof(arr) / sizeof(int);

     //      maxSubArraySum1(arr,n);
     //      return 0;
     // }

     //Kadane's Algorithms (DP)


     // void maxSubArraySum1(int *arr, int n){
     //      int maxSum =  INT16_MIN;
     //      int currentSum = 0;
     //      for(int i = 0; i < n; i++){
               
     //           currentSum += arr[i];                    
     //           maxSum = max(maxSum,currentSum);

     //           if(currentSum < 0){

     //                currentSum = 0;
     //           }
               
     //      }

     //      cout<<"Maximum sub array sum is:"<<maxSum<<endl;
          
     // }


     // int main(){

     //      int arr[] = {2,-3,6,-5,4,2};
     //      int n = sizeof(arr) / sizeof(int);

     //      maxSubArraySum1(arr,n);
     //      return 0;
     // }