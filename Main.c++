#include <iostream>
#include "ClsMyQueue.h"
using namespace std;
int main()
{
    ClsMyQueue<int> Queue;
    Queue.push(1);
    Queue.push(2);
    Queue.push(3);
    Queue.push(4);
    Queue.print();
   return 0;
};
