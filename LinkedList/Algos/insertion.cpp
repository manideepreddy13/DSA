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

// Insertion at end
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
    }
}

// Insertion at the beginning
// Time Complexity : O(1)

void insertatstart(node *ptr)
{
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        ptr->next = head;
        head = ptr;
    }
}

// Insertion at the middle
// Time Complexity : Depends but mostly it will be O(n)

void insertatmiddle(node *ptr, int n)
{
    node *temp, temp1;

    if (n == 1)
    {
        ptr->next = head;
        head = ptr;
    }
    else
    {
        int i;
        temp = head;
        for (i = 1; i < n - 1; i++)
        {
            temp = temp->next;
        }

        ptr->next = temp->next;
        temp->next = ptr;
    }
}

void printlinkedlist()
{
    node *temp = head;
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