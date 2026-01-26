#include <iostream>
#include "ClsDblLinkedList.h"
using namespace std;
int main()
{
    ClsDblLinkedList<int> MyDblLinkedList;
    MyDblLinkedList.InsertAtBeginning(5);
    MyDblLinkedList.InsertAtBeginning(4);
    MyDblLinkedList.InsertAtBeginning(3);
    MyDblLinkedList.InsertAtBeginning(2);
    cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
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
    MyDblLinkedList.InsertAfter(FindAfter,1);
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
    MyDblLinkedList.DeleteNode(1);
     cout << "the elements in linkedlist are :-\n";
    MyDblLinkedList.printList();
};