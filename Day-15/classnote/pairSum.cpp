#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(vector<int> arr, int target)
{
     int st = 0;
     int end = arr.size() - 1;
     int currSum = 0;
     vector<int> ans;

     while (st < end)
     {
          currSum = arr[st] + arr[end];
          if (currSum == target)
          {
               ans.push_back(st);
               ans.push_back(end);
               return ans;
          }
          else if (currSum > target)
          {
               end--;
          }
          else
          {
               st++;
          }
     }

     return ans;
}

int main()
{

     vector<int> vac = {1, 2, 7, 13};
     int target = 9;

     vector<int> ans = pairSum(vac, target);
     cout << ans[0] << "," << ans[1] << endl;

     return 0;
}

//(Time complexity is :: O(n))




// /* Brute force method*/

// #include <iostream>
// #include <vector>
// using namespace std;

// vector<int> pairSum(vector<int> arr, int target)
// {
//      vector<int> ans;



     // Brute force approach: Check every pair


//      for (int i = 0; i < arr.size(); i++)
//      {
//           for (int j = i + 1; j < arr.size(); j++)
//           {
//                if (arr[i] + arr[j] == target)
//                {
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     return ans; // Return the indices of the first pair found
//                }
//           }
//      }

//      return ans; // Return empty if no pair is found
// }

// int main()
// {
//      vector<int> vac = {1, 2, 7, 13};
//      int target = 9;

//      vector<int> ans = pairSum(vac, target);
//      if (!ans.empty())
//      {
//           cout << ans[0] << "," << ans[1] << endl;
//      }
//      else
//      {
//           cout << "No pair found!" << endl;
//      }

//      return 0;
// }



//(Time complexity is :: O(n^2))