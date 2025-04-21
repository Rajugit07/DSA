#include <iostream>
#include <vector>
using namespace std;

//* create stack operation using vector

class Stack
{

public:
    vector<int> vec;

    // push
    void push(int vel)
    {

        vec.push_back(vel);
    }

    // pop
    void pop()
    {

        if (isEmpty())
        {
            cout << "Stack is empty";
        }
        vec.pop_back();
    }

    // top

    int top()
    {

        int lastIdx = vec.size() - 1;
        return vec[lastIdx];
    }

    bool isEmpty()
    {
        return vec.size() == 0;
    }
};

int main()
{
    Stack s;
    s.push(3);
    s.push(2);
    s.push(1);

    while (!s.isEmpty())
    {
        cout << s.top() << "";
        s.pop();
    }

    return 0;
}

//* create stack operation using array
//   #include <iostream>
//  using namespace std;

// class StackArr
// {
// private:
//     int arr[5];      // Fixed-size array for stack
//     int topIndex;    // To track the top element

// public:
//     StackArr() { topIndex = -1; } // Initialize stack as empty

//     void push(int val)
//     {
//         if (topIndex >= 4) // Stack overflow check
//         {
//             cout << "Stack overflow! Cannot push " << val << ".\n";
//             return;
//         }
//         arr[++topIndex] = val; // Insert element and increment top index
//     }

//     void pop()
//     {
//         if (isEmpty()) // Stack underflow check
//         {
//             cout << "Stack is empty.\n";
//             return;
//         }
//         topIndex--; // Remove top element
//     }

//     int top()
//     {
//         if (isEmpty()) // Check if stack is empty
//         {
//             cout << "Stack is empty.\n";
//             return -1;
//         }
//         return arr[topIndex]; // Return the top element
//     }

//     bool isEmpty()
//     {
//         return topIndex == -1; // Check if top index is -1 (empty)
//     }
// };

// int main()
// {
//     StackArr stack;
//     stack.push(10);
//     stack.push(20);
//     stack.push(30);

//     cout << "Top element: " << stack.top() << endl;

//     stack.pop();
//     cout << "Top after pop: " << stack.top() << endl;

//     stack.pop();
//     stack.pop();
//     stack.pop(); // Trying to pop when stack is empty

//     return 0;
// }
