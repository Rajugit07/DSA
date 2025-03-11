#include <iostream>
using namespace std;

// Detect and Remove Cycle in Linked List

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

    // PUSH FRONT FUNCTION
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

        // If tail is NULL (list was empty), update tail
        if (tail == NULL)
        {
            tail = head;
        }
    }

    // POP FRONT FUNCTION
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

        // If list becomes empty, reset tail
        if (head == NULL)
        {
            tail = NULL;
        }
    }

    // PRINT FUNCTION (handles cycle by limiting traversal)
    void printList()
    {
        Node *temp = head;
        int count = 0; // Prevent infinite loop in case of a cycle

        while (temp != NULL && count < 100) // Prevent infinite loop
        {
            cout << temp->data << "->";
            temp = temp->next;
            count++;
        }
        cout << "NULL\n";
    }

    // Detect and Remove Cycle
    void removeCycle(Node *head)
    {
        if (head == NULL || head->next == NULL)
        {
            cout << "List is empty or too short for a cycle.\n";
            return;
        }

        Node *slow = head;
        Node *fast = head;
        bool isCycle = false;

        // Detect cycle using Floyd’s cycle-finding algorithm
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) // Cycle detected
            {
                cout << "Cycle detected!\n";
                isCycle = true;
                break;
            }
        }

        if (!isCycle)
        {
            cout << "No cycle exists.\n";
            return;
        }

        // Reset slow to head to find cycle start
        slow = head;

        // Special case: If the cycle starts from the head
        if (slow == fast)
        {
            while (fast->next != slow)
            {
                fast = fast->next;
            }
            fast->next = NULL; // Remove cycle
            return;
        }

        // General case: Finding the start of the cycle
        Node *prev = NULL;
        while (slow != fast)
        {
            prev = fast;
            slow = slow->next;
            fast = fast->next;
        }
        prev->next = NULL; // Remove cycle
    }
};

int main()
{
    List ll;
    ll.push_front(4);
    ll.push_front(3);
    ll.push_front(2);
    ll.push_front(1);

    // Correct cycle creation (update tail correctly)
    ll.tail->next = ll.head->next; // Creating a cycle (1->2->3->4->2...)

    ll.removeCycle(ll.head); // Detect and remove cycle
    ll.printList(); // Should print a normal linked list now

    return 0;
}
