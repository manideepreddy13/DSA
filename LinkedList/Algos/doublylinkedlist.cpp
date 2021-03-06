#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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
        head = ptr;
    }
    else
    {
        head->prev = ptr;
        ptr->next = head;
        head = ptr;
    }
}

// Time Complexity : O(n)

void insertatend(node *ptr)
{
    node *temp;

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
        ptr->prev = temp;
    }
}

// Reversing a doubly linked list means swapping prev and next pointers of each node
// Time Complexity : O(n)

void reverselist()
{
    node *temp, *ptr;
    ptr = head;

    while (ptr != NULL)
    {
        temp = ptr->prev;
        ptr->prev = ptr->next;
        ptr->next = temp;
        temp = temp->prev;
    }
}

// Time Complexity : O(1)

void deleteatstart()
{
    node *temp;
    if (head->next == NULL)
    {
        free(head);
    }
    else
    {
        temp = head;
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
}

// Time Complexity : O(n)

void deleteatend()
{
    node *temp;
    if (head->next == NULL)
    {
        free(head);
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }

        node *pv = temp->prev;
        pv->next = NULL;
        free(temp);
    }
}

// Time Complexity : O(n)

void printlist()
{
    node *temp;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

int main()
{

    return 0;
}