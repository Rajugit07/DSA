#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//* create stack using STACK(using STL LIST)

int main()
{
    stack<int> s;

    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;

    return 0;
}