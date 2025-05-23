#include <iostream>
using namespace std;

class Node
{
public:
     int data;
     Node *next;
     Node *prev;

     Node(int val)
     {
          data = val;
          prev = next = NULL;
     }
};

class DoublyList
{
public:
     Node *head;
     Node *tail;

     DoublyList()
     {
          head = tail = NULL;
     }

     // PUSH FRONT

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
               head->prev = newNode;
               head = newNode;
          }
     }

     // POP FRONT

     void pop_front()
     {

          Node *temp = head;
          head = head->next;
          if (head != NULL)
          {
               head->prev = NULL;
          }
          temp->next = NULL;
          delete temp;
     }

     // PRINT
     void printList()
     {
          Node *temp = head;
          while (temp != NULL)
          {
               cout << temp->data << "<=>";
               temp = temp->next;
          }
          cout << "NULL\n";
     }
};

int main()
{
     DoublyList dbll;
     dbll.push_front(4);
     dbll.push_front(3);
     dbll.push_front(2);
     dbll.push_front(1);

     dbll.printList(); // 1<=>2<=>3<=>4<=>NULL

     dbll.pop_front();
     dbll.printList(); // 2<=>3<=>4<=>NULL

     return 0;
}