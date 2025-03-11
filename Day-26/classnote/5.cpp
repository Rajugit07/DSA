#include <iostream>
using namespace std;

// ZIG-ZAG LINKED LIST

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

     // PUSH BACK
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
               head = newNode;
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

     // SPLIT LIST INTO TWO HALVES
     Node *splitMid(Node *head)
     {
          if (head == NULL || head->next == NULL)
               return NULL;

          Node *slow = head;
          Node *fast = head;
          Node *prev = NULL;

          while (fast != NULL && fast->next != NULL)
          {
               prev = slow;
               slow = slow->next;
               fast = fast->next->next;
          }

          if (prev != NULL)
          {
               prev->next = NULL; // split at middle
          }

          return slow; // slow = rightHead
     }

     // MERGE TWO SORTED LINKED LISTS
     Node *merge(Node *left, Node *right)
     {
          if (!left)
               return right;
          if (!right)
               return left;

          Node *head = NULL, *tail = NULL;
          if (left->data <= right->data)
          {
               head = tail = left;
               left = left->next;
          }
          else
          {
               head = tail = right;
               right = right->next;
          }

          while (left && right)
          {
               if (left->data <= right->data)
               {
                    tail->next = left;
                    tail = left;
                    left = left->next;
               }
               else
               {
                    tail->next = right;
                    tail = right;
                    right = right->next;
               }
          }

          if (left)
               tail->next = left;
          if (right)
               tail->next = right;

          return head;
     }

     // MERGE SORT
     Node *mergeSort(Node *head)
     {
          if (head == NULL || head->next == NULL)
          {
               return head;
          }

          Node *rightHead = splitMid(head);

          Node *left = mergeSort(head);       // left half
          Node *right = mergeSort(rightHead); // right half

          return merge(left, right); // head of sorted list
     }

     // REVERSE A LINKED LIST
     Node *reverse(Node *head)
     {
          Node *prev = NULL;
          Node *curr = head;
          Node *next = NULL;

          while (curr != NULL)
          {
               next = curr->next;
               curr->next = prev;
               prev = curr;
               curr = next;
          }
          return prev; // new head of reversed LL
     }

     // ZIG-ZAG REARRANGEMENT
     Node *zigZagLL(Node *head)
     {
          if (head == NULL || head->next == NULL)
               return head;

          Node *rightHead = splitMid(head);
          Node *rightHeadRev = reverse(rightHead);

          // Merge alternately
          Node *left = head;
          Node *right = rightHeadRev;
          Node *tail = NULL;

          while (left != NULL && right != NULL)
          {
               Node *nextLeft = left->next;
               Node *nextRight = right->next;

               left->next = right;
               right->next = nextLeft;

               tail = right;

               left = nextLeft;
               right = nextRight;
          }

          if (right != NULL)
          {
               tail->next = right;
          }

          return head;
     }
};

int main()
{
     List ll;

     ll.push_front(1);
     ll.push_front(2);
     ll.push_front(3);
     ll.push_front(4);
     ll.push_front(5);
     ll.printList(); // 5->4->3->2->1->NULL

     ll.head = ll.zigZagLL(ll.head);
     ll.printList(); // Zig-zag arranged list

     return 0;
}
