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

void deletion(int n)
{
    int i;
    node *ptr;
    if (n == 1)
    {
        ptr = head;
        head = head->next;
        free(ptr);
    }
    else
    {
        node *temp = head;
        for (i = 1; i < n - 1; i++)
        {
            temp = temp->next;
        }

        node *fr = temp->next;
        temp->next = fr->next;
        free(fr);
    }
}

int main()
{

    return 0;
}