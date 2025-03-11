#include<iostream>
using namespace std;

int main(){


     //Print the 0-1 Triangle Pattern.

     // bool val = true;
     // int n;
     // cout<<"Enter a number:";
     // cin>>n;

     // for(int i=1; i<=n; i++){
     //      for(int j=1; j<=i; j++){
     //           cout<<val<<" ";
     //           val=!val;
     //      }
     //      cout<<endl;
     // }


     //Print the RhombusPattern.

     // int n;
     // cout<<"Enter a number:";
     // cin>>n;

     // for(int i=0; i<=n; i++){

          //space
     //      for(int j=0; j<=n-i+1; j++){
     //           cout<<" ";
     //      }
          //star
     //      for(int j=0; j<n; j++){
     //           cout<<"*";
     //      }
          
     //      cout<<endl;
     // }


     //Print thePalindromic Pattern with Numbers

    
     int n;
     cout<<"Enter a number";
     cin>>n;

     for(int i=1; i<=n; i++){

          //space
          for(int j=1; j<=n-i; j++){
               cout<<" ";
          }
          //val backward
          for(int j=i; j>=1; j--){
               cout<<j;
          }

            //val forward
          for(int j=2; j<=i; j++){
               cout<<j;
          }
          cout<<endl;
     }

     return 0;
}