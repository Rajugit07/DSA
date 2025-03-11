#include <iostream>
#include <vector>
using namespace std;

// create stack using template

template <class T>
class Stack
{
    vector<T> vec;

public:
    void push(T val) // O(1)
    {
        vec.push_back(val);
    }

    void pop() // O(1)
    {
        if (isEmpty())
        {
            cout << "stack is empty.\n";
            return;
        }
        vec.pop_back();
    }

    T top() // O(1)
    {
        // if (isEmpty())
        // {
        //     cout << "stack is empty.\n";
        //     return -1;
        // }
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    bool isEmpty() // O(1)
    {

        return vec.size() == 0;
    }
};

int main()
{
    Stack<int> s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}