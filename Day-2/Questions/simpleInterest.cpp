#include<iostream>
using namespace std;

int main(){


     float principal;
     float rate;
     float time;


     cout<<"Enter your Principal Rate And time to calculate interest:\n";

     cout<<"Enter your principal amount:";
     cin>>principal;

     cout<<"Enter your rate of the interest in percentage:";
     cin>>rate;

     cout<<"Enter your time period in year:";
     cin>>time;

     float interest = (principal*rate*time) / 100;
     cout<<"Your simple interest is:"<<interest;

     return 0;
}