#include<iostream>
using namespace std;


     //Binary to decimal number conversion
     void binToDec(int binNum){

          int n = binNum;
          int decNum = 0;
          int pow = 1; //2^1 2^2 ....


          while (n > 0)
          {
               int lastDigit = n % 10;
               decNum += lastDigit * pow;
               pow = pow * 2;
               n = n/10;
          }
          
          cout<<decNum<<endl;
     }


     //Decimal to binary conversion
     void decToBin(int decNum){

          int n = decNum;
          int pow = 1;
          int binNum = 0;


          while (n > 0)
          {
              int rem = n % 2;
              binNum += rem * pow;
              n = n / 2;
              pow = pow * 10;
          }
          cout<<binNum<<endl;
           
     }
int main(){

     binToDec(1010);
     decToBin(10);
     return 0;

}