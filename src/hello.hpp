#include <string>

#include "link.hpp"

class LinkedList
{

private:
    struct Node
    {
        Link *data;
        Node *next;

        Node(Link *link)
        {

            data = link;
            next = nullptr;
        }
    };
    Node *head;
    int list_size;

public:
    LinkedList()
    {
        head = nullptr;
        list_size = 0;
    }
    ~LinkedList();
    void add(Link *n);
    void print();
    Node *get_head()
    {
        return head;
    }
    int size()
    {
        return list_size;
    }
};
