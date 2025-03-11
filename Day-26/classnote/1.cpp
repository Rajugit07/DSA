#include <iostream>
using namespace std;

// Implementation of Link List Used classes and object

class Node
{
public:
     int data;
     Node *next;

     Node(int data)
     {
          this->data = data;
          next = NULL;
     }
};

class List
{
public:
     Node *head;
     Node *tail;

     List()
     {
          head = NULL;
          tail = NULL;
     }

     // POP FUNCTION

     void push_front(int val)
     {
          Node *newNode = new Node(val);

          if (head == NULL)
          {
               head = tail = newNode;
          }
          else
          {
               newNode->next = head;
               head = newNode;
          }
     }

     // POP FUNCTION
     void pop_front()
     {

          if (head == NULL)
          {
               return;
          }
          Node *temp = head;
          head = head->next;

          temp->next = NULL;
          delete temp;
     }

     // PRINT FUNCTION
     void printList()
     {

          Node *temp = head;
          while (temp != NULL)
          {
               cout << temp->data << "->";
               temp = temp->next;
          }
          cout << "NULL\n";
     }

     bool isCycle(Node *head)
     {

          Node *slow = head;
          Node *fast = head;

          while (fast != NULL && fast->next != NULL)
          {

               slow = slow->next;       // +1
               fast = fast->next->next; //+2

               if (slow == fast)
               {

                    cout << "Cycle is exist\n";
                    return true;
               }
          }
          cout << "Cycle is not exist\n";
          return false;
     }
};

int main()
{
     List ll;
     ll.push_front(4);
     ll.push_front(3);
     ll.push_front(2);
     ll.push_front(1);

     ll.tail->next = ll.head;
     ll.isCycle(ll.head);

     return 0;
}
