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

void deletelink(int M, int N)
{
    node *temp1 = head;
    while (temp1 != NULL)
    {
        int p = M;
        while (temp1 != NULL && p != 1)
        {
            temp1 = temp1->next;
            p--;
        }
        if (temp1 == NULL)
        {
            break;
        }
        p = N;
        node *temp2 = temp1->next;
        while (temp2 != NULL && p != 0)
        {
            temp2 = temp2->next;
            p--;
        }
        temp1->next = temp2;
        temp1 = temp2;
    }
}

int main()
{

    return 0;
}