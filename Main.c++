#include <iostream>
#include "ClsDblLinkedList.h"
using namespace std;
int main()
{
    ClsDblLinkedList<int> MyDblLinkedList;
    if (MyDblLinkedList.IsEmpty())
    {
        cout << "\n yes,this linkedlist is empty\n";
    }
    else
    {
        cout << "\n No, this list is'n empty\n ";
    }

    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
    if (MyDblLinkedList.IsEmpty())
    {
        cout << "\n yes,this linkedlist is empty\n";
    }
    else
    {
        cout << "\n No, this list is'n empty\n ";
    }

    MyDblLinkedList.DeleteFrist();

    cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
    MyDblLinkedList.DeleteLast();

    cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
    MyDblLinkedList.InsertEnd(8);

    cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
    ClsDblLinkedList<int>::Node *FindAfter = MyDblLinkedList.find(3);
    MyDblLinkedList.InsertAfter(FindAfter, 1);
    cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
    ClsDblLinkedList<int>::Node *Find = MyDblLinkedList.find(1);
    ClsDblLinkedList<int>::Node *Find1 = MyDblLinkedList.find(2);
    cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
    MyDblLinkedList.DeleteNode(4);
    cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
    MyDblLinkedList.InsertEnd(7);
    cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
    cout << "The Count of Element is " << MyDblLinkedList.size() << endl;
    MyDblLinkedList.DeleteNode(1);
    cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
    cout << "The Count of Element is " << MyDblLinkedList.size() << endl;
    if (MyDblLinkedList.IsEmpty())
    {
        cout << "\n yes,this linkedlist is empty\n";
    }
    else
    {
        cout << "\n No, this list is'n empty\n ";
    }
  
    MyDblLinkedList.InsertAtBeginning(5);
    cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
   
    if (MyDblLinkedList.IsEmpty())

    {
        cout << "\n yes,this linkedlist is empty\n";
    }
    else
    {
        cout << "\n No, this list is'n empty\n ";
    }
    
   
     cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.Reverse();
    
     cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();

cout << "the value of item 2 is "<<MyDblLinkedList.GetItem(2);

MyDblLinkedList.UpdateItem(3,500);
MyDblLinkedList.InsertAfter(5,800);

cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
};
