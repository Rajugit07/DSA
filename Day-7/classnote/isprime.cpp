#include<iostream>
using namespace std;



bool isPrime(int n){

     if(n == 1){
          return false;
     }

     for(int i=2; i*i<=n; i++){

          if(n % 2 == 0){
               return false;
          }
     }

     return true;
}


void allPrime(int n){

     //all prime 2 to n

     for(int i=2; i<=n; i++){
          if(isPrime(i)){
               cout<< i << " ";
          }
     }
     cout<<endl;
}


int main(){

     allPrime(100);
     return 0;
}