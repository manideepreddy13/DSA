#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
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

// Reversing linked list in a iterative manner
// Time Complexity : O(n)

void reverselist1()
{
    node *curr = head;
    node *prev = NULL;
    node *ahead;

    while (curr != NULL)
    {
        ahead = curr->next;
        curr->next = prev;
        prev = curr;
        curr = ahead;
    }

    head = prev;
}

// Reversing linked list in a recursive manner
// Time Complexity : O(n)
// Space Complexity : O(n) as we are using implicit stack (computer stack) to hold recursive function calls

void reverselist2(node *ptr)
{
    if (ptr->next != NULL)
    {
        head = ptr;
    }
    else
    {
        reverselist2(ptr->next);
        node *q = ptr->next;
        q->next = ptr;
        ptr->next = NULL;
    }
}

// Reversing linked list using stack
// Time and Space Complexity is same as of Recursive Manner of Reversing List except that here we are using an explicit stack object

void reverselist3()
{
    stack<node *> stk;
    node *temp;
    temp = head;
    while (temp != NULL)
    {
        stk.push(temp);
        temp = temp->next;
    }

    head = stk.top();
    temp = head;
    stk.pop();

    while (stk.empty() != 1)
    {
        temp->next = stk.top();
        stk.pop();
        temp = temp->next;
    }
}

// Printing list in reverse (a shortcut if all options doesn't pan out in the end)

void printreverse(node *ptr)
{
    if (ptr == NULL)
    {
        cout << endl;
    }
    else
    {
        printreverse(ptr->next);
        cout << ptr->data << endl;
    }
}

int main()
{

    return 0;
}