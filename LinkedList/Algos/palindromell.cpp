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

// Time Complexity : O(n) but we are using extra memory for vector container

bool palindrome()
{
    vector<int> vec;
    node *temp = head;
    while (temp != NULL)
    {
        vec.push_back(temp->data);
        temp = temp->next;
    }

    temp = head;

    while (temp != NULL)
    {
        if (vec.back() != temp->data)
        {
            return false;
        }

        vec.pop_back();
        temp = temp->next;
    }

    return true;
}

int main()
{

    return 0;
}