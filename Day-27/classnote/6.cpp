#include <iostream>
#include <vector>
#include <stack>
using namespace std;

//* Push at Bottom of the Stack...



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