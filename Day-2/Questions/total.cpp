#include<iostream>
using namespace std;

int main(){

     //Calculate the total amount of the product with GST

     float pencil;
     float book;
     float pen;

     cout<<"Enter the pencil price:";
     cin>>pencil;

     cout<<"Enter the book price:";
     cin>>book;
     
     cout<<"Enter the pen price:";
     cin>>pen;

     float amount = pencil + book + pen;
     float amountWithGST = amount + (amount * 18 / 100);

     cout<<"your total price with GST is:"<<amountWithGST;


     return 0;
}