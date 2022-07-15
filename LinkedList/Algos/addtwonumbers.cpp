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

// Inserting in the resultant list

void insertion(node *hd, node *ht, int data)
{
    node *ptr = new node();
    ptr->data = data;
    ptr->next = NULL;

    if (hd == NULL)
    {
        hd = ptr;
        ht = ptr;
    }
    else
    {
        ht->next = ptr;
        hd = ptr;
    }
}

// Time Complexity : O(length of the bigger linked list)

node *addtwonumbers(node *head1, node *head2)
{
    node *temp1, *temp2;
    temp1 = head1;
    temp2 = head2;

    node *mhead = NULL;
    node *mtail = NULL;
    int c;
    int carry = 0;

    while (temp1 != NULL && temp2 != NULL)
    {
        c = temp1->data + temp2->data + carry;
        if (c >= 10)
        {
            c = c - 10;
            carry = 1;
        }
        else
        {
            carry = 0;
        }

        insertion(mhead, mtail, c);

        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 == NULL)
    {
        while (temp2 != NULL)
        {
            c = temp2->data + carry;
            if (c >= 10)
            {
                c = c - 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            insertion(mhead, mtail, c);

            temp2 = temp2->next;
        }
    }
    else
    {
        while (temp1 != NULL)
        {
            c = temp1->data + carry;
            if (c >= 10)
            {
                c = c - 10;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            insertion(mhead, mtail, c);
            temp1 = temp1->next;
        }
    }

    if (carry == 1)
    {
        insertion(mhead, mtail, carry);
    }

    return mhead;
}

int main()
{

    return 0;
}