#include <iostream>
#include <stack>
#include <vector>
#include <string>
using namespace std;

//* Reverse a string using STACK

string reverseString(string str)
{
    string ans;
    stack<char> stack;

    for (int i = 0; i < str.size(); i++)
    {
        stack.push(str[i]);
    }

    // POP
    while (!stack.empty())
    {
        char top = stack.top();
        ans += top;
        stack.pop();
    }
    return ans;
}

int main()
{
    string str = "abcd";
    cout << "reversed string " << reverseString(str) << endl;
    return 0;
}

//& Time & Space complexity is ----> O(n)