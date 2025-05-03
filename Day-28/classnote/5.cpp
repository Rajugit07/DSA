#include<iostream>
#include<queue>
using namespace std;

//* Stack using 2 Queues

class Stack {
    queue<int> q1;
    queue<int> q2;
        public:
            void push(int data){                   //O(n)
                while(!q1.empty()){
                    q2.push(q1.front());
                    q1.pop();
                }

                q1.push(data);

                while(!q2.empty()){
                    q1.push(q2.front());
                    q2.pop();
                }
            }
            void pop(){                          //O(1)
                q1.pop();
            }
            int top(){
                return q1.front();              //O(1)
            }
            bool empty(){
                return q1.empty();
            }

};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}