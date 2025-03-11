#include<iostream>
using namespace std;

// Write a function to calculate the sum of digits of a number.
int digSum(int n) {


      int res = 0;


      while(n > 0) 
      {   
          res += n % 10; n = n/10;
          
      }
          return res;
}

//Write a function which takes 2 numbers as parameters (a & b) and outputs : a^2 + b^2 + 2*ab.

int abSquare(int a, int b) {
     
      return a*a + b*b + 2*a*b;
}


//Write a function that prints the largest of 3 numbers.

int largest(int a, int b, int c) { 

     if(a >= b && a >= c) 
     {
               return a;
     } else if(b >= c)   
          { 
                return b;
          } else 
               {
                    return c;
               }
}


//Write a function that accepts a character (ch) as parameters & returns the character that occurs after ch in the English alphabet.

char getChar(char ch){

     if(ch == 'z'){
          return 'a';
     } else {
          return ch + 1;
     }
}


int main(){
     cout<<digSum(124)<<endl;
     cout<<abSquare(2,4)<<endl;
     cout<<largest(2,4,8)<<endl;
     cout<<getChar('z')<<endl;
     return 0;
}


