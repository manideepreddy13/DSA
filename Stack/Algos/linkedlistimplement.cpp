#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

node *createnode(int num)
{
    node *temp;
    temp = new node();
    temp->data = num;
    temp->next = NULL;
    return temp;
}

void push(int k)
{
    // There is no Stack Overflow Condition, so this is one of the advantages linked list implementation has over array implementation
    node *ptr = createnode(k);
    ptr->next = head;
    head = ptr;
}

void pop()
{
    if (head == NULL)
    {
        // Stack Underflow Condition
        return;
    }
    node *ptr = head;
    head = head->next;
    free(ptr);
}

int peek()
{
    return head->data;
}

int main()
{

    return 0;
}
