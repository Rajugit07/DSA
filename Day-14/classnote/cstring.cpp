#include <iostream>
#include <cstring>
using namespace std;

int main()
{

     // function:1--- < strcpy(destination,sources) >

     char str[100];
     char str2[100] = "new string is apple";

     strcpy(str, str2);

     cout << str << endl;

     // function:2 --- < strcat() >

     char str3[100] = "first string";
     char str4[100] = "second string";
     strcat(str3, str4);
     cout << str3 << endl;

     // function:3--- < strcmp(+ve / 0 / -ve) >
     char str5[100] = " string";
     char str6[100] = " string";
     strcmp(str5, str6);

     cout << strcmp(str5, str6) << endl;

     // output '0' string is equal


     return 0;
}