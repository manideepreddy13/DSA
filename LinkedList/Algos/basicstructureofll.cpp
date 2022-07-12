#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// template of a node

struct node
{
    int data;
    node *next; // pointer node to the next node
};

// head of the list. basically denotes the list
node *head = NULL;

// creating a new node
node *createnode(int num)
{
    node *temp;
    temp = new node();
    temp->data = num;
    temp->next = NULL;
    return temp;
}

// node can also be defined using class template

class node1
{
    int data;
    node1 *next;

    node1(int k)
    {
        data = k;
        next = NULL;
    }
};

int main()
{
    int a, b, c;
    a = 6;
    b = 4;
    c = 2;

    node *ptr;
    ptr = createnode(a);

    node *temp;

    // adding a node at the end of the list
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = ptr;
    }

    ptr = createnode(b);

    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = ptr;
    }

    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }

    return 0;
}