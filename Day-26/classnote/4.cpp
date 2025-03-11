#include <iostream>
using namespace std;

// MERGE SORT WITH LINKED LIST

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

    // Function to split list into two halves
    Node *splitMid(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return NULL;
        }

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
            prev->next = NULL; // Split at middle
        }

        return slow; // Right half's head
    }

    // Merging two sorted linked lists in-place
    Node *merge(Node *left, Node *right)
    {
        if (!left)
            return right;
        if (!right)
            return left;

        Node *result = NULL;

        if (left->data <= right->data)
        {
            result = left;
            result->next = merge(left->next, right);
        }
        else
        {
            result = right;
            result->next = merge(left, right->next);
        }

        return result;
    }

    // Merge Sort implementation for Linked List
    Node *mergeSort(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            return head;
        }

        Node *rightHead = splitMid(head);

        Node *left = mergeSort(head);      // Left half
        Node *right = mergeSort(rightHead); // Right half

        return merge(left, right); // Merge sorted halves
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
    ll.printList(); // Expected Output: 5->4->3->2->1->NULL

    // Corrected: Assign sorted list back to head
    ll.head = ll.mergeSort(ll.head);

    ll.printList(); // Expected Output: 1->2->3->4->5->NULL (sorted)

    return 0;
}
