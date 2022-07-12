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

// Time Complexity : O(n) because we first iterate the linked list to find number of elements and then we iterate till we find the middle element

void findmiddleelement()
{
    int c = 0;
    node *temp = head;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }

    temp = head;
    int i;

    int mid;
    if (c % 2 == 0)
    {
        mid = c / 2;
    }
    else
    {
        mid = (c + 1) / 2;
    }

    for (i = 1; i < mid; i++)
    {
        temp = temp->next;
    }

    cout << temp->data << endl;

    if (c % 2 == 0)
    {
        cout << temp->next->data << endl;
    }
}

int main()
{

    return 0;
}