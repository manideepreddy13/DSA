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

// Time Complexity : O(n)

void removeduplicate()
{
    node *temp = head;
    node *pv;
    while (temp != NULL && temp->next != NULL)
    {
        if (temp->data == temp->next->data)
        {
            pv = temp->next;
            temp->next = temp->next->next;
            free(pv);
        }
        else
        {
            temp = temp->next;
        }
    }
}

int main()
{

    return 0;
}