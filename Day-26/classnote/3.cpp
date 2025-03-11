#include <iostream>
#include <list>
using namespace std;

// Link List (predefine in C++) STL

void printList(list<int> ll)
{

     list<int>::iterator itr; // creating iterator of type (link lits)
     for (itr = ll.begin(); itr != ll.end(); itr++)
     {
          cout << (*itr) << " -> ";
     }
     cout << "NULL" << endl;
}

int main()
{

     list<int> ll;
     ll.push_front(2);
     ll.push_front(1); // 1->2

     ll.push_back(3);
     ll.push_back(4); // 1->2->3->4

     printList(ll);

     cout << ll.size() << endl;

     cout << "head = " << ll.front() << endl;
     cout << "tail = " << ll.back() << endl;

     return 0;
}
