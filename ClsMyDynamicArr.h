#pragma once
#include <iostream>

using namespace std;
template <class T>
class ClsDynamicArray{

    protected:
    int _size=0;
    T*NewArray;
    public:
    T*OriginalArray;
    ClsDynamicArray(int _size=0){
        if (_size<0)
        {
            _size=0;
        }
       this->_size=_size;
        OriginalArray=new T[_size];
    }
    ~ClsDynamicArray(){
        delete[] OriginalArray;
    }
    bool SetItem(int index, T value){
        if (index>_size||_size==0)
        {
            return false;
        }
        OriginalArray[index]=value;

        return true;

    }

    int Size(){
        return _size;
    }
    void resize(int size){
        if (size==_size)
        {
            return;
        }
        if (size<0)
        {
            size=0;
        }
        _size=size;
        NewArray=new T[_size];
        for (size_t i = 0; i <= _size-1; i++)
        {
           
                NewArray[i]=OriginalArray[i];
          
        }
        delete[] OriginalArray;
        OriginalArray=NewArray;
    }
    bool IsEmpty(){
        return (_size<=0?true:false);
    }
    T getitem(int index){
        if(index<_size){
            return OriginalArray[index];
        }else{
            return T();
        }
    }
    int find(T value){
        for (size_t i = 0; i <= _size-1; i++)
        {
            if (OriginalArray[i]==value)
            {
                return i;
            }
        }
        return -1;
    }
    void DeleteByValue(T value){
        int index=find(value);
        if (index==-1)
        {
            return;
        }
        deleteItemAt(index);

    }
    void Reverse(){
         NewArray=new T[_size];
         int count=0;
        for (int i = _size-1; i >=0 ; i--)
        {
            NewArray[count]=OriginalArray[i];
            count++;
        }
        delete[] OriginalArray;
        OriginalArray=NewArray;
    }
    void clear(){
       _size=0;
       NewArray=new T[0];
       delete[] OriginalArray;
         OriginalArray=NewArray;
    }
    void deleteItemAt(int index){
        if (index<0||index>=_size)
        {
            return;
        }
        NewArray=new T[_size-1];
        int count=0;
        for (size_t i = 0; i <= _size-1; i++)
        {
            if (i==index)
            {
                continue;
            }
            NewArray[count]=OriginalArray[i];
            count++;
        }
        
        delete[] OriginalArray;
        OriginalArray=NewArray;
        _size--;
    }
    void insertAt(int index,T value){
        if (index<0||index>_size)
        {
            return;
        }
        NewArray=new T[_size+1];
        int count=0;
        for (size_t i = 0; i <= _size; i++)
        {
            if (i==index)
            {
                NewArray[i]=value;
                continue;
            }
            NewArray[i]=OriginalArray[count];
            count++;
        }
        
        delete[] OriginalArray;
        OriginalArray=NewArray;
        _size++;
    }
    void insertFirst(T value){
        insertAt(0,value);
    }
     void insertLast(T value){
        insertAt(_size,value);
    }
    void InsertBefore(int index,T value){
        if (index<0||index>=_size)
        {
            return;
        }
        insertAt(index-1,value);
       
    }
        void InsertAfter(int index,T value){
            if (index<0||index>=_size)
            {
                return;
            }
            insertAt(index+1,value);
        
        }
    void deletefirst(){
        deleteItemAt(0);
    }
     void deletelast(){
        deleteItemAt(_size-1);
    }

    void PrintList(){
     
       for (size_t i = 0; i <= _size-1; i++)
       {
        cout<<OriginalArray[i]<<" ";
       }
       cout<<endl;
    }
};