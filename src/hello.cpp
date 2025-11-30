#include <string>
#include <iostream>

#include "hello.hpp"

LinkedList::~LinkedList()
{
   Node *current = head;
   while (current != nullptr)
   {
      Node *next_node = current->next;
      delete current->data;
      delete current;
      current = next_node;
   }
}

void LinkedList::add(Link *n)
{
   Node *new_node = new Node(n);
   if (head == nullptr)
   {
      head = new_node;
   }

   else
   {
      Node *current = head;
      while (current->next != nullptr)
      {
         current = current->next;
      }
      current->next = new_node;
   }
   list_size++;
}

void LinkedList::print()
{
   Node *current = head;
   while (current != nullptr)
   {
      std::cout << current->data->get_material() << ", ";
      current = current->next;
   }
}
