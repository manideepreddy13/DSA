#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *createnode(int k)
{
    node *ptr = new node();
    ptr->data = k;
    ptr->next = NULL;
    return ptr;
}

node *head = NULL;

// Reversing linked list in a iterative manner
// Time Complexity : O(n)

void reverselist1()
{
    node *curr = head;
    node *prev = NULL;
    node *ahead;

    while (curr != NULL)
    {
        ahead = curr->next;
        curr->next = prev;
        prev = curr;
        curr = ahead;
    }

    head = prev;
}

// Reversing linked list in a recursive manner

void reverselist2(node *ptr)
{
    if (ptr->next != NULL)
    {
        head = ptr;
    }
    else
    {
        reverselist2(ptr->next);
        node *q = ptr->next;
        q->next = ptr;
        ptr->next = NULL;
    }
}

// Printing list in reverse (a shortcut if all options doesn't pan out in the end)

void printreverse(node *ptr)
{
    if (ptr == NULL)
    {
        cout << endl;
    }
    else
    {
        printreverse(ptr->next);
        cout << ptr->data << endl;
    }
}

int main()
{

    return 0;
}