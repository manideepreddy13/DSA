#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

class stack
{
private:
    int *arr;
    int top1, top2, n, mid;

public:
    stack(int m)
    {
        n = m;
        top1 = -1;
        top2 = m;
        arr = new int[n];
    }

    int findmid1(int n)
    {
        if (n % 2 == 0)
        {
            return (n / 2) - 1;
        }
        else
        {
            return n / 2;
        }
    }

    int findmid2(int n)
    {
        if (n % 2 == 0)
        {
            return (n / 2) + 1;
        }
        else
        {
            return n / 2;
        }
    }

    void push1(int x)
    {
        if (top1 == findmid1(n))
        {
            cout << "Stack Overflow. Please use the other stack" << endl;
            return;
        }

        arr[++top1] = x;
    }

    void push2(int x)
    {
        if (top2 == findmid2(n))
        {
            cout << "Stack Overflow. Please use the other stack" << endl;
            return;
        }

        arr[++top2] = x;
    }

    int pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack Underflow" << endl;
        }

        top1--;
        return arr[top1 + 1];
    }

    int pop2()
    {
        if (top2 == n)
        {
            cout << "Stack Underflow" << endl;
        }

        top2++;
        return arr[top2 - 1];
    }

    int peek1()
    {
        return arr[top1];
    }

    int peek2()
    {
        return arr[top2];
    }
};

int main()
{

    return 0;
}