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

// We iterate a whole list and find out the right place for the ptr. If found, then follow the insertion at the middle protocol
// Or else add at last
// Time Complexity : O(n) if the incoming element's data is greater than the ll member's data

void insertinsortedll(node *ptr)
{
    if (head == NULL)
    {
        head = ptr;
    }
    else if (head->next == NULL)
    {
        if (head->data > ptr->data)
        {
            ptr->next = head;
            head = ptr;
        }
        else
        {
            node *ptr1 = head->next;
            head->next = ptr;
            ptr->next = ptr1;
        }
    }
    else
    {
        node *temp = head;
        node *pv;
        while (ptr->data > temp->data && temp->next != NULL)
        {
            pv = temp;
            temp = temp->next;
        }

        pv->next = ptr;
        ptr->next = temp;
    }
}

int main()
{

    return 0;
}