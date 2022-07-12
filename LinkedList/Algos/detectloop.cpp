#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct node
{
    int data;
    node *next;
    bool visited;
};

node *createnode(int k)
{
    node *ptr = new node();
    ptr->data = k;
    ptr->next = NULL;
    ptr->visited = false;
    return ptr;
}

node *head = NULL;

// Time Complexity : O(n)

bool detectloop()
{
    node *temp = head;
    if (head == NULL || head->next == NULL)
    {
        return false;
    }

    while (temp->next != NULL)
    {
        if (temp->visited == true)
        {
            return true;
        }

        temp->visited = true;
        temp = temp->next;
    }

    return false;
}

int main()
{

    return 0;
}