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

int lengthofloop()
{
    node *slow, *fast;
    slow = head;
    fast = head;
    int len = 0;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            break;
        }
    }

    if (slow != fast)
    {
        return 0;
    }

    do
    {
        fast = fast->next;
        len++;
    } while (slow != fast);

    return len + 1;
}

int main()
{

    return 0;
}