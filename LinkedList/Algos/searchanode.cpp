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

// Time Complexity : O(n)

int search(int k)
{
    node *temp = head;
    int c = 1;

    while (temp != NULL)
    {
        if (temp->data == k)
        {
            return c;
        }
        else
        {
            temp = temp->next;
            c++;
        }
    }

    return -1;
}

// Recursive way of searching a node
// Normally ptr is the head

int searchrec(node *ptr, int k)
{
    if (ptr == NULL)
    {
        return -1;
    }

    if (ptr->data == k)
    {
        return 1;
    }

    static int c = searchrec(ptr->next, k);

    if (c != -1)
    {
        return c + 1;
    }
    else
    {
        return -1;
        }
}

int main()
{

    return 0;
}