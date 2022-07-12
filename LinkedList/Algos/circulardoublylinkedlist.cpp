#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Circular + Doubly = Circular Doubly Linked List

// if only head exists in the list, then the next and prev attributes of head points to itself

struct node
{
    int data;
    node *prev, *next;
};

node *createnode(int k)
{
    node *ptr = new node();
    ptr->data = k;
    ptr->next = NULL;
    ptr->prev = NULL;
    return ptr;
}

node *head = NULL;

// Time Complexity : O(1)

void insertatstart(node *ptr)
{
    if (head == NULL)
    {
        ptr->next = ptr;
        ptr->prev = ptr;
        head = ptr;
    }
    else
    {
        node *tail = head->prev;
        ptr->prev = tail;
        tail->next = ptr;
        head->prev = ptr;
        ptr->next = head;
        head = ptr;
    }
}

// Insertion at the end works in the same way as the above code except that there is no need to change the head pointer

int main()
{

    return 0;
}