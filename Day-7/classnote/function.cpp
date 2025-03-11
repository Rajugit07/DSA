#include<iostream>
using namespace std;


//function follow of execution (function call);

// void functionOne(){
//      cout<<"This is function One"<<endl; //First Print(functionOne), then go to functionTwo(Step-4)
// }

// void functionTwo(){

//      functionOne();  //Step-2
//      cout<<"This is function two"; //Print functionTwo (Step-5)
// }

// int main(){
//      functionTwo();  //Step-1
//      return 0;
// }


//----------------------------------------------------------------------//
//----------------------------------------------------------------------//


// void print(); //forward declaration 

// int main(){

//      print();
//      return 0;
// }

// void print(){
//      cout<<"Inside print function:";
// }

//----------------------------------------------------------------------//
//----------------------------Parameters-------------------------------//


int sum(int a, int b){   //Here we can used default parameter value, its only let say int b = 2 , then if argument don't have any value then default parameter used other wise arguments value used.(Note: can't assign int a =3 as default parameter value it's give an error:)

     int sum = a+b;
     return sum;
}



int main(){

     int s = sum(10,20);
     cout<<"Sum of two number is:"<<s<<endl;
     return 0;
}






//----------------------------------------------------------------------//
//----------------------------------------------------------------------//