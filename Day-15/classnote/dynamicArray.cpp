// #include <iostream>
// using namespace std;

// int main()
// {

//      int size;
//      cin >> size;

//      int *arr = new int[size];
//      int x = 1;
//      for (int i = 0; i < size; i++)
//      {

//           arr[i] = x;
//           cout << arr[i] << " ";
//           x++;
//      }
//      cout << endl;

//      return 0;
// }

//** */ -----------------------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

void fun()
{

     int size;
     cin >> size;

     int *arr = new int[size];
     int x = 1;
     for (int i = 0; i < size; i++)
     {

          arr[i] = x;
          cout << arr[i] << " ";
          x++;
     }
     cout << endl;
     delete[] arr;
}

int main()
{
     fun();
     return 0;
}

// *If you create dynamic array crete, then used (delete) the particular array in code , because the dynamic allocated memory can't delete automatically in program*

// * in static array create memory it automatically delete the memory.*