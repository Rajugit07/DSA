#include <iostream>
#include <vector>
using namespace std;

// create stack using vectorcls


class Stack
{
    vector<int> vec;

public:
    void push(int val) // O(1)
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

    int top() // O(1)
    {
        if (isEmpty())
        {
            cout << "stack is empty.\n";
            return -1;
        }
        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    bool isEmpty() // O(1)
    {

        return vec.size() == 0;
    }
};

// create stack using array

// class StackArr
// {

//     int arr[] = 5;

// public:
//     void push(int vel)
//     {
//         arr.push_back(vel);
//     }
//     void pop(isEmpty())
//     {
//         if ()
//         {
//             cout << "Stack is empty.\n";
//             return;
//         }
//         arr.pop_back();
//     }
//     int top()
//     {
//         if (isEmpty())
//         {
//             cout < "Stack is empty./n";
//             return -1;
//         }
//         int lastidx = 4;
//         return arr[lastidx];
//     }
//     bool isEmpty()
//     {
//         return arr.size() == 0;
//     }
// };

int main()
{
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    // using array
    // StackArr a;
    // a.push(3);
    // a.push(2);
    // a.push(1);

    // while (!s.isEmpty())
    // {
    //     cout << a.top() << " ";
    //     a.pop();
    // }

    return 0;
}