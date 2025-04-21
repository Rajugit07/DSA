#include<iostream>
using namespace std;

int main(){

     //Pattern print

     // int n;
     // cout<<"Enter a number:";
     // cin>>n;

     // for(int i=1; i<=n; i++){
     //      for(int j=1; j<=i; j++){
     //           cout<<"*";
     //      }
     //      cout<<endl;
     // }

     //Inverted star pattern

     // int n;
     // cout<<"Enter a Number:";
     // cin>>n;

     // for(int i = 1; i<=n; i++){
     //      for(int j=1; j<=n-i+1; j++){
     //           cout<<"*";
     //      }
     //      cout<<endl;
     // }


     //Half-Pyramid pattern

     // int n;
     // cout<<"Enter a number:";
     // cin>>n;

     // for(int i=1; i<=n; i++){
     //      for(int j=1; j<=i; j++){
     //           cout<<j;
     //      }
     //      cout<<endl;
     // }


//Character Pyramid pattern
     // int n;
     // char ch = 'A';
     // cout<<"Enter a number:";
     // cin>>n;
     // for(int i=1; i<=n; i++){

     //      for(int j=1; j<=i; j++){
     //           cout<<ch;
     //           ch++;
     //      }
     //       cout<<endl;
     // }



    //Hollow rectangle pattern

    int n;
    cout<<"Enter a number:";
    cin>>n;

    for(int i=1; i<=n; i++ ){

          cout<<"*";

          for(int j=1; j<=n-1; j++){
               if(i == 1 || i == n){
                    cout<<"*";
               }else{
                    cout<<"-";
               }
          }

          cout<<"*"<<endl;
    }


     //Inverted and half pyramid

     // int n;
     // cout<<"Enter a Number:";
     // cin>>n;

     // for(int i=1; i<=n; i++){

     //      for(int j=1; j<=n-i; j++){
     //           cout<<" ";
     //      }

     //      for(int j=1; j<=i; j++){
     //           cout<<"*";
     //      }
     //      cout<<endl;
     // }


     //Floyd's triangle

     // int n;
     // cout<<"Enter a Number";
     // cin>>n;
     // int a = 1;

     // for(int i=1; i<=n; i++){
     //      for(int j=1; j<=i; j++){
     //           cout<<a;
     //           a++;
     //      }
     //      cout<<endl;
     // }


     //Diamond pattern print

     // int n;
     // cout<<"Enter a Number:";
     // cin>>n;

     //first pyramid
     // for(int i=1; i<=n; i++){

          //space print

     //      for(int j=1; j<=n-i; j++){
     //           cout<<" ";
     //      }

          //star print

     //      for(int j=1; j<=2*i-1; j++){
     //           cout<<"*";
     //      }
     //      cout<<endl;

     // }

      //second pyramid

     // for(int i=n; i>=1; i--){

          //space
     //      for(int j=1; j<=n-i; j++){
     //           cout<<" ";
     //      }

          //star
     //      for(int j=1; j<=2*i-1; j++){
     //           cout<<"*";
     //      }
     //      cout<<endl;
     // }



     //Butterfly pattern



     // int n;
     // cout<<"Enter a Number:";
     // cin>>n;

     // upper half
     // for(int i=1; i<=n; i++){

     //      //star
     //      for(int j=1; j<=i; j++){
     //           cout<<"*";
     //      }
     //      //space
     //      for(int j=1; j<=2*(n-i); j++){
     //           cout<<" ";
     //      }
     //      //star
     //      for(int j=1; j<=i; j++){
     //           cout<<"*";
     //      }
     //      cout<<endl;

     // }

     //lower half

     //  for(int i=n; i>=1; i--){

     //      //star
     //      for(int j=1; j<=i; j++){
     //           cout<<"*";
     //      }
     //      //space
     //      for(int j=1; j<=2*(n-i); j++){
     //           cout<<" ";
     //      }
     //      //star
     //      for(int j=1; j<=i; j++){
     //           cout<<"*";
     //      }
     //      cout<<endl;

     // }

     return 0;
}