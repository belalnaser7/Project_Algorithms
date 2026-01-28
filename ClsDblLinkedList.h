#pragma once
#include <iostream>
using namespace std;
template <class T>
class ClsDblLinkedList
{

protected:
   int _size;

public:
   class Node
   {
   public:
      T data;
      Node *Next;
      Node *prev;
   };

private:
   Node *_head = NULL;

public:
   void InsertAtBeginning(T data)
   {
      Node *NewNode = new Node();
      NewNode->data = data;
      NewNode->prev = NULL;
      NewNode->Next = _head;
      if (_head != NULL)
      {
         _head->prev = NewNode;
      }
      _head = NewNode;
      _size++;
   };
   void InsertAfter(Node *find, T data)
   {
      if (find == NULL)
         return;
      Node *NewNode = new Node();
      NewNode->data = data;
      NewNode->Next = find->Next;
      NewNode->prev = find;
      if (find->Next != NULL)
      {
         find->Next->prev = NewNode;
      }
      find->Next = NewNode;
      _size++;
   };
   void InsertEnd(T data)
   {
      Node *NewNode = new Node();
      NewNode->data = data;
      NewNode->Next = NULL;
      if (_head == NULL)
      {
         NewNode->prev = NULL;
         _head = NewNode;
         _size++;
         return;
      }
      Node *Last = _head;
      while (Last->Next != NULL)
      {
         Last = Last->Next;
      }
      NewNode->prev = Last;
      Last->Next = NewNode;
      _size++;
   };
   Node *find(T data) const
   {
      Node *Current = _head;
      while (Current != NULL)
      {
         if (Current->data == data)
         {
            return Current;
         }
         Current = Current->Next;
      }
      return NULL;
   };
   void DeleteNode(T data)
   {
      if (_head == NULL)
         return;

      Node *Current = _head;

      while (Current != NULL)
      {
         Node *NextNode = Current->Next;
         if (Current->data == data)
         {
            if (Current->prev == NULL)
            {
               _head = Current->Next;
               if (_head != NULL)
               {
                  _head->prev = NULL;
               }
            }
            else if (Current->Next == NULL)
            {
               Current->prev->Next = NULL;
            }
            else
            {
               Current->prev->Next = Current->Next;
               Current->Next->prev = Current->prev;
            }
            delete Current;
         }
         Current = NextNode;
      }

      _size--;
   };
   void DeleteFrist()
   {
      if (_head == NULL)
         return;
      Node *temp = _head;
      _head = _head->Next;
      if (_head != NULL)
      {
         _head->prev = NULL;
      }
      delete temp;
      _size--;
   };
   void DeleteLast()
   {
      if (_head == NULL)
         return;
      Node *temp = _head;
      if (_head->Next == NULL)
      {
         delete _head;
         _head = NULL;
         _size--;
         return;
      }
      while (temp->Next != NULL)
      {
         temp = temp->Next;
      }
      temp->prev->Next = NULL;
      delete temp;
      _size--;
   };
   int size()
   {
      return _size;
   }
   bool IsEmpty()
   {
      // return (_head==NULL);
      return _size == 0 ? true : false;
   }
   void Clear()
   {
      while (_size > 0)
      {
         DeleteFrist();
      }
   }
   Node *GetNode(int index)
   {
      if (_head == NULL || _size < index)
         return NULL;
      int counter = 0;
      Node *Current = _head;
      while (Current != NULL)
      {
         counter++;
         if (counter == index)
            return Current;
         Current = Current->Next;
      }
      return NULL;
   }
   T GetItem(int index)
   {
      Node *item = GetNode(index);
      if (item == NULL)
      {
         return T();
      }
      else
      {
         return item->data;
      }
   }

   void UpdateItem(int index,T value){
        Node *item = GetNode(index);
        if (item!=NULL){
         item->data=value;
        }
   }
   bool InsertAfter(int index,T value){
       Node *find = GetNode(index);
       if(find!=NULL){
          InsertAfter(find,value);
           _size++;
          return true;
       }
      return false;
      
   }
   void Reverse()
   {
      Node *Current = _head;
      Node *temp = NULL;
      while (Current != NULL)
      {
         temp = Current->prev;
         Current->prev = Current->Next;
         Current->Next = temp;
         Current = Current->prev;
      }
      if (temp != NULL)
         _head = temp->prev;
   }
   void printList()
   {
      Node *temp = _head;
      while (temp != NULL)
      {
         cout << "(" << temp->data << ")";
         temp = temp->Next;
      }
      cout << endl;
   };

   void PrintReverse()
   {
      if (_head == NULL)
      {
         return;
      }
      Node *last = _head;
      while (last->Next != NULL)
      {
         last = last->Next;
      }

      while (last != NULL)
      {
         cout << "(" << last->data << ")";
         last = last->prev;
      }
      cout << endl;
   }
};
