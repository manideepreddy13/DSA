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

// Time Complexity : O(length of merged linked list)

node *mergesort(node *head1, node *head2)
{
    node *mhead = NULL;
    node *mtail = NULL;

    node *temp1 = head1;
    node *temp2 = head2;

    if (temp1->data < temp2->data)
    {
        mhead = temp1;
        temp1 = temp1->next;
    }
    else
    {
        mhead = temp2;
        temp2 = temp2->next;
    }

    mtail = mhead;

    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->data < temp2->data)
        {
            mtail->next = temp1;
            mtail = temp1;
            temp1 = temp1->next;
        }
        else
        {
            mtail->next = temp2;
            mtail = temp2;
            temp2 = temp2->next;
        }
    }

    if (temp1 == NULL)
    {
        mtail->next = temp2;
    }
    else
    {
        mtail->next = temp1;
    }

    return mhead;
}

int main()
{

    return 0;
}