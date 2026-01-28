#pragma once
#include <iostream>
#include "ClsDblLinkedList.h"
using namespace std;

template <class T>
class ClsMyQueue
{
protected:
ClsDblLinkedList<T> _Mylist;
public:

void push(T value){
    _Mylist.InsertEnd(value);
}
void pop(){
    _Mylist.DeleteFrist();
}
void print(){
    _Mylist.printList();
}
int size(){
    return _Mylist.size();
}
bool IsEmpty(){
    return _Mylist.IsEmpty();
}
T Front(){
    return _Mylist.GetItem(0);
}
T Back(){
    return _Mylist.GetItem(size()-1);
}
T GetItem(int index){
    return _Mylist.GetItem(index);
}
void Reverse(){
    _Mylist.Reverse();
}
void UpdateItem(int index,T value ){
    _Mylist.UpdateItem(index,value);
}
void InsertAfter(int index,T value){
    _Mylist.InsertAfter(index,value);
}
void InsertAtFornt(T value){
    _Mylist.InsertAtBeginning(value);
}
void InsertAtBack(T value){
    _Mylist.InsertEnd(value);
}
void clear(){
    _Mylist.Clear();
}
};