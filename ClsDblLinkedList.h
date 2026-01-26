#pragma once
#include <iostream>
using namespace std;
template <class T>
class ClsDblLinkedList
{
public:
   class Node
   {
   public:
      T data;
      Node *Next;
      Node *prev;
   };
   Node *head = NULL;

   void InsertAtBeginning(T data)
   {
      Node *NewNode = new Node();
      NewNode->data = data;
      NewNode->prev = NULL;
      NewNode->Next = head;
      if (head != NULL)
      {
         head->prev = NewNode;
      }
      head = NewNode;
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
   };
   void InsertEnd(T data)
   {
      Node *NewNode = new Node();
      NewNode->data = data;
      NewNode->Next = NULL;
      if (head == NULL)
      {
         NewNode->prev = NULL;
         head = NewNode;
         return;
      }
      Node *Last = head;
      while (Last->Next != NULL)
      {
         Last = Last->Next;
      }
      NewNode->prev = Last;
      Last->Next = NewNode;
   };
   Node *find(T data) const
   {
      Node *Current = head;
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
      if (head == NULL)
         return;

      Node *Current = head;

      while (Current != NULL)
      {
         Node *NextNode = Current->Next;
         if (Current->data == data)
         {
            if (Current->prev == NULL)
            {
               head = Current->Next;
               if (head != NULL)
               {
                  head->prev = NULL;
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
   };
   void DeleteFrist()
   {
      if (head == NULL)
         return;
      Node *temp = head;
      head = head->Next;
      if (head != NULL)
      {
         head->prev = NULL;
      }
      delete temp;
   };
   void DeleteLast()
   {
      if (head == NULL)
         return;
      Node *temp = head;
      if (head->Next == NULL)
      {
         delete head;
         head = NULL;
         return;
      }

      while (temp->Next != NULL)
      {
         temp = temp->Next;
      }
      temp->prev->Next = NULL;
      delete temp;
   };
   void printList()
   {
      Node *temp = head;
      while (temp != NULL)
      {
         cout << "(" << temp->data << ")";
         temp = temp->Next;
      }
      cout << endl;
   };
};
