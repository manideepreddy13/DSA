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

// Here we segregate even and odd elements with even spearheading the list. Then we append both the lists
//

void evenandodd()
{
    node *evenhead = NULL;
    node *eventail = NULL;
    node *oddhead = NULL;
    node *oddtail = NULL;
    node *dummy;

    node *temp = head;
    while (temp != NULL)
    {
        if (temp->data % 2 == 0)
        {
            if (evenhead == NULL)
            {
                evenhead = temp;
                eventail = temp;
            }
            else
            {
                eventail->next = temp;
                eventail = eventail->next;
            }
        }
        else
        {
            if (oddhead == NULL)
            {
                oddhead = temp;
                oddtail = temp;
            }
            else
            {
                oddtail->next = temp;
                oddtail = oddtail->next;
            }
        }
    }

    eventail->next = oddhead;
    oddtail->next = NULL;
}

int main()
{

    return 0;
}