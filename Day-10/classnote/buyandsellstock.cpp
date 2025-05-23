#include<iostream>
using namespace std;


     void maxProfit(int *price , int n){

          int bestBuy[100000];
          bestBuy[0] = INT16_MAX;
          for(int i=1; i<n; i++){

               bestBuy[i] = min(bestBuy[i-1],price[i-1]);
          }

          int maxProfit = 0;
          for(int i=1; i<n; i++){

               int currProfit = price[i] - bestBuy[i];
               maxProfit = max(maxProfit,currProfit);
          }
          cout<<"Max Profit:"<<maxProfit<<endl;

     }

          
     int main(){

          int prices[] = {7,1,5,3,6,4};
          int n = sizeof(prices) / sizeof(int);

          maxProfit(prices,n);
          return 0;
     }

     //Time complexity O(n) + O(n) = O(2n) = O(n);