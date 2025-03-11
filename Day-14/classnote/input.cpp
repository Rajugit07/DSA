#include <iostream>
using namespace std;

int main()
{

     // in input something after space can't read the word .(cin>> ignore after the white space)
     // char word[50];
     // cin >> word;

     // cout << word<<endl;



     //solution Used (getline(sentence,50,'*') -- (the third argument it means that if user enter * then stop there.) function)
     char sentence[50];
     cin.getline(sentence,50,'*');

     cout<<sentence;

     return 0;
}

