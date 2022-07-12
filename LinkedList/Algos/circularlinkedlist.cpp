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

// Time Complexity : O(n) because we have to add the node after the tail
// Note: To make the algorithm run in constant time, we can add the node after the head and swap the data attributes of head and ptr

void insertatstart(node *ptr)
{
    if (head == NULL)
    {
        head = ptr;
    }
    else
    {
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }

        temp->next = ptr;
        ptr->next = head;
        head = ptr;
    }
}

// Inserting at the end works in the same way as the above code except that we don't have to update the head pointer

// Time Complexity : O(n)
// Note: To make the algorithm run in constant time, we can swap the contents of head and head->next and delete->next

void deleteatstart()
{
    if (head->next == NULL)
    {
        free(head);
    }
    else
    {
        node *temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }

        node *pv = temp->next;
        temp->next = pv->next;
        free(pv);
    }
}

// Time Complexity : O(n)

void deleteatmiddle(int n)
{
    node *temp;
    if (n == 1)
    {
        // Implementation of what i left in the note above
        int tmp;
        tmp = head->data;
        head->data = head->next->data;
        head->next->data = tmp;
        temp = head->next;
        head->next = temp->next;
        free(temp);
    }
    else
    {
        int i;
        temp = head;
        for (i = 1; i < n - 1; i++)
        {
            temp = temp->next;
        }

        node *pv = temp->next;
        temp->next = pv->next;
        free(temp->next);
    }
}

// Time Complexity : O(n)

void printlist()
{
    node *temp = head;
    do
    {
        cout << temp->data << endl;
        temp = temp->next;
    } while (temp != head);
}

int main()
{

    return 0;
}