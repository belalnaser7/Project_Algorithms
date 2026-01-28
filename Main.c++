#include <iostream>
#include "ClsDblLinkedList.h"
#include "ClsMyQueue.h"
#include "ClsMyStack.h"
using namespace std;
int main()
{
    ClsDblLinkedList<int> lined;
    lined.InsertAtBeginning(1);
    lined.InsertAtBeginning(2);
    lined.InsertAtBeginning(3);
    lined.InsertAtBeginning(4);
    lined.printList();
    cout << "The First Element In linked is:-" << lined.GetItem(0);
    ClsMyQueue<int> Queue;
    Queue.push(1);
    Queue.push(2);
    Queue.push(3);
    Queue.push(4);
    Queue.print();
    cout << "The First Element In Queue is:-" << Queue.Front();
    ClsMyStack<int> Stack;
    Stack.push(1);  
    Stack.push(2);
    Stack.push(3);
    Stack.push(4);
    Stack.print();
    cout << "The First Element In Stack is:-" << Stack.Top();
    return 0;
};
