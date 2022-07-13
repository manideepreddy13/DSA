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

void evenandodd()
{
    node *evenhead = NULL;
    node *oddhead = NULL;
    node *dummy;

    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            dummy = createnode(temp->data);
            if (evenhead == NULL)
            {
                evenhead = dummy;
            }
            else
            {
            }
        }
    }
}

int main()
{

    return 0;
}