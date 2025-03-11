
#include <iostream>
using namespace std;

bool hasDuplicates(int *nums, int size)
{
     for (int i = 0; i < size; i++)
     {
          for (int j = i + 1; j < size; j++) // Compare each element with every other element
          {
               if (nums[i] == nums[j]) // If any duplicate is found
               {
                    return true; // Return true if duplicates are found
               }
          }
     }
     return false; // Return false if no duplicates found
}

int main()
{
     int nums[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
     int size = sizeof(nums) / sizeof(int);

     cout << (hasDuplicates(nums, size) ? "true" : "false") << endl; // Print true or false based on result
     return 0;
}
