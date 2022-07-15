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

void pairswap()
{
    node *temp = head;
    int tmp;
    while (temp != NULL && temp->next != NULL)
    {
        tmp = temp->data;
        temp->data = temp->next->data;
        temp->next->data = tmp;
        temp = temp->next->next;
    }
}

int main()
{

    return 0;
}