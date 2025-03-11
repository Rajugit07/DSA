#include <iostream>
using namespace std;

//calculating product of two number:

int product(int a, int b){

    
     return a*b;
} 

//Odd Even

bool oddEvn(int val){
     if(val % 2 == 0){
          return true;
     }else{
          return false;
     }
}


//factorial

int fact(int f){

     int fact =1;
     for(int i=1; i<=f; i++){
          fact=fact*i;
     }
     return fact;
}


bool isPrime(int n){

     if(n == 1){
          return false;
     }

     for(int i=2; i<=n-1; i++){

          if(n % i == 0){
               return false;
          }
     }

     return true;

}

//another logic for prime or not

bool isPrime2(int n){

     if(n == 1){
          return false;
     }

     for(int i=2; i*i<=n; i++){

          if(n % i == 0){
               return false;
          }
     }

     return true;

}

int main(){

     //product
     int p = product(5,5);
     cout<<"Product of two number is:"<<p<<endl;

     //odd even
     int oe = oddEvn(21);
     cout<<"The number is: "<<oe<<endl;

     //factorial
     int fa = fact(5);
     cout<<"factorial is:"<<fa<<endl;

     //Prime or not
     cout<<isPrime (7)<<endl;

     cout<<isPrime2(6)<<endl;
     return 0;
}