#pragma once
#include <iostream>

using namespace std;
template <class T>
class ClsDynamicArray{

    protected:
    int _size=0;
    public:
    T*OriginlArray;
    ClsDynamicArray(int _size=0){
        if (_size<0)
        {
            _size=0;
        }
        this->_size;
        OriginlArray=new T[_size];
    }
    ~ClsDynamicArray(){
        delete[] OriginlArray;
    }
    bool SetItem(int index, T value){
        if (index>_size||_size==0)
        {
            return false;
        }
        OriginlArray[index]=value;
        return true;
    }

    int Size(){
        return _size;
    }
    bool IsEmpty(){
        return (_size<=0?true:false);
    }

    void PrintList(){
        int i=0;
       for (size_t i = 0; i < _size-1; i++)
       {
        cout<<OriginlArray[i]<<" ";
       }
       cout<<endl;
    }
};