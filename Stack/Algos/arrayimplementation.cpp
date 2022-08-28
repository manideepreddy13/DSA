#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arr[100];
int n = 100;
int top = -1; // Which means that the stack initially is empty

bool isempty()
{
    if (top == -1)
    {
        // It means Stack Underflow
        return 1;
    }
    return 0;
}

bool isfull()
{
    if (top == n - 1)
    {
        // It means Stack Overflow
        return 1;
    }
    return 0;
}

void push(int x)
{
    if (isfull())
    {
        return;
    }
    arr[++top] = x;
}

void pop()
{
    if (isempty())
    {
        return;
    }
    top--;
}

int peek()
{
    return arr[top];
}

int main()
{

    return 0;
}