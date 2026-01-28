#pragma once
#include<iostream>
#include "ClsMyQueue.h"
using namespace std;
template<class T>
class ClsMyStack:public ClsMyQueue<T>{
    public:
    void push(T value){
        ClsMyQueue<T>:: _Mylist.InsertAtBeginning(value);
    }
    T Top(){
        return ClsMyQueue<T>::Front();
    }
    T Bottom(){
        return ClsMyQueue<T>::Back();
    }

};