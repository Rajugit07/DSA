
// Approach 1
// Brute force method: Time complexity O(n * m)

// #include <iostream>
// using namespace std;

// void searchingInSortingMatrix(int mat[][4], int n)
// {

//      int match = 33;
//      bool found = false;

//      for (int i = 0; i < n; i++)
//      {
//           for (int j = 0; j < n; j++)
//           {

//                if (match == mat[i][j])
//                {
//                     cout << i << j << endl;
//                     found = true;
//                }
//           }
//      }
//      if (!found)
//      {
//           cout << "Elemets are not found in this matrix." << endl;
//      }
// }

// int main()
// {

//      int matrix[4][4] = {{10, 20, 30, 40}, {
//                                                15,
//                                                25,
//                                                35,
//                                                45,
//                                            },
//                          {27, 29, 37, 48},
//                          {32, 33, 39, 50}};
//      searchingInSortingMatrix(matrix, 4);

//      return 0;
// }

// ---------------------------------------------------Approach -2 (Used Binary Search)---------------------------------------

// ---------------------------------------------------Approach -3 (Used State Case Search)------------------------------------

#include <iostream>
using namespace std;

bool search(int mat[][4], int n, int m, int key)
{

     int i = 0;
     int j = m - 1;

     while (i < n && j >= 0)
     {
          if (mat[i][j] == key)
          {
               cout << "Founded at call (" << i << "," << j << ")\n";
               return true;
          }
          else if (mat[i][j] > key)
          {
               // left
               j--;
          }
          else
          {
               // down
               i++;
          }
     }
     cout << "Key not found \n";
     return false;
}

int main()
{

     int matrix[4][4] = {{10, 20, 30, 40},
                         {15, 25, 35, 45},
                         {27, 29, 37, 48},
                         {32, 33, 39, 50}};
     search(matrix, 4, 4, 32);

     return 0;
}