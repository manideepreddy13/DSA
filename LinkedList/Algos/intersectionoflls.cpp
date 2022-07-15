#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
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

node *head1 = NULL;

// This Algo first finds the lengths of the two linked list and makes a temp point to a location in a bigger linked list from where the length from point to tail matches the length of other linked list
// Time Complexity : O(n)

node *intersection(node *head1, node *head2)
{
    int len1, len2;
    len1 = 0;
    len2 = 0;

    node *temp;
    temp = head1;

    while (temp != NULL)
    {
        len1++;
        temp = temp->next;
    }

    temp = head2;

    while (temp != NULL)
    {
        len2++;
        temp = temp->next;
    }

    node *strt;
    node *inf;

    if (len1 > len2)
    {
        strt = head1;
        inf = head2;
    }
    else
    {
        strt = head2;
        inf = head1;
    }

    int len = abs(len1 - len2);
    temp = strt;

    int i;
    for (i = 1; i < len; i++)
    {
        temp = temp->next;
    }

    while (temp != inf)
    {
        temp = temp->next;
        inf = inf->next;
    }

    return temp;
}

int main()
{

    return 0;
}