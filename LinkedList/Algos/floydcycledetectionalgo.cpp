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

/*
The Algorithm works in this way -
1)Fast pointer takes 2 steps at a time and Slow pointer takes 1 step at a time
2)A loop is detected when the two pointers are apart by length of n i.e, they are pointing to the same node
*/

// Time Complexity : O(n)

bool detectloop()
{
    node *slow, *fast;
    slow = head;
    fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            return true;
        }
    }

    return false;
}

int main()
{

    return 0;
}