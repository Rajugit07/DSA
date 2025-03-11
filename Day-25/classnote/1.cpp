#include <iostream>
using namespace std;

// Implementation of Link List Creating classes and object

class Node
{
public:
     int data;
     Node *next;

     Node(int val)
     {
          data = val;
          next = NULL;
     }

     // Destructure
     ~Node()
     {
          if (next != NULL)
          {
               // cout << "~node" << data << endl;
               delete next;
               next = NULL;
          }
     }
};

class List
{

     Node *head;
     Node *tail;

public:
     List()
     {
          head = NULL;
          tail = NULL;
     }

     // Destructure
     ~List()
     {
          // cout << "~List\n";
          if (head != NULL)
          {
               delete head;
               head = NULL;
          }
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

     // PUSH FUNCTION

     void push_back(int val)
     {
          Node *newNode = new Node(val);

          if (head == NULL)
          {
               head = tail = newNode;
          }
          else
          {
               tail->next = newNode;
               tail = newNode;
          }
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

     // inserting node in the middle of the two node.

     void insert(int val, int pos)
     {
          Node *newNode = new Node(val);

          Node *temp = head;
          for (int i = 0; i < pos - 1; i++)
          {
               if (temp == NULL)
               {
                    cout << "postion is INVALID\n";
                    return;
               }
               temp = temp->next;
          }

          // temp is now at pos - 1 that is prev/left
          newNode->next = temp->next;
          temp->next = newNode;
     }

     // POP FRONT
     void pop_front()
     {
          if (head == NULL)
          {
               cout << "LL is empty\n";
               return;
          }
          Node *temp = head;
          head = head->next;

          temp->next = NULL;
          delete temp;
     }

     // POP BACK

     void pop_back()
     {
          Node *temp = head;
          while (temp->next->next != NULL)
          {
               temp = temp->next;
          }
          temp->next = NULL; // temp = tail prev
          delete tail;
          tail = temp;
     }

     // ITERATIVE SEARCH

     int iterativeSearch(int key)
     {
          Node *temp = head;
          int idx = 0;

          while (temp != NULL)
          {
               if (temp->data == key)
               {
                    return idx;
               }

               temp = temp->next;
               idx++;
          }

          return -1;
     }

     // RECURSIVE SEARCH

     int helper(Node *h, int key)
     {

          if (h == NULL)
          {
               return -1;
          }

          if (h->data == key)
          {
               return 0;
          }

          int idx = helper(h->next, key);
          if (idx == -1)
          {
               return -1;
          }
          return idx + 1;
     }

     int searchRec(int key)
     {
          return helper(head, key);
     }

     // REVERSE A LINK LIST

     void reverse()
     {

          Node *curr = head;
          Node *prev = NULL;

          while (curr != NULL)
          {
               Node *next = curr->next;
               curr->next = prev;

               // updating for next itr
               prev = curr;
               curr = next;
          }

          head = prev;
     }

     // Find And Remove  Nth Node from Link List  Time Complexity O(n), SC - O(1)

     int getSize()
     {
          int sz = 0;
          Node *temp = head;

          while (temp != NULL)
          {
               temp = temp->next;
               sz++;
          }
          return sz;
     }

     void removeNth(int n)
     {
          int size = getSize();
          Node *prev = head;

          for (int i = 1; i < (size - n); i++)
          {
               prev = prev->next;
          }
          Node *toDel = prev->next;
          cout << "going to delete :" << toDel->data << endl;

          prev->next = prev->next->next;
     }
};

int main()
{
     List ll;

     ll.push_front(3);
     ll.push_front(2);
     ll.push_front(1);
     ll.printList(); // 1->2->3->NULL

     // ll.push_back(4);
     // ll.push_back(5); // 1->2->3->->4->NULL
     // ll.printList();

     // ll.insert(100, 2);
     // ll.printList(); // 1->2->100-> 3->->4->NULL

     // ll.pop_front();
     // ll.printList(); // 2->100->3->NULL

     // ll.pop_back();
     // ll.printList(); // 1->100->NUll

     // cout << ll.iterativeSearch(2) << endl;

     // cout << ll.searchRec(3) << endl;

     ll.reverse();
     ll.printList();

     // ll.removeNth(2);
     // ll.printList(); // 1->3->NULL;

     return 0;
}
