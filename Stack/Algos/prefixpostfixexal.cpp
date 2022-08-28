#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// Time Complexity : O(n)
// Postfix : {(a*b)+(c*d)}-e+f --> {(ab*)+(cd*)}-e+f --> {ab*cd*+}-e+f --> ab*cd*+e-+f --> ab*cd*+e-f+
// We scan from left to right and if we find an operand, then we push it into the stack. If it is a operator, then we pop out 2 elements, find the resultant and push it into the stack

int postval(string expr)
{
    stack<int> stk;
    string ::iterator it;
    int a, b, c;
    for (it = expr.begin(); it != expr.end(); it++)
    {
        if (*it >= '0' && *it <= '9')
        {
            stk.push((int)*it);
        }
        else
        {
            b = stk.top();
            stk.pop();
            a = stk.top();
            stk.pop();

            switch (*it)
            {
            case '+':
                c = a + b;
                break;

            case '-':
                c = a - b;
                break;

            case '*':
                c = a * b;
                break;

            case '/':
                c = a / b;
                break;
            }

            stk.push(c);
        }
    }

    return stk.top();
}

// Time Complexity is same as of Postfix evaluation code
// The code is similar to that of Postfix evaluation code except that we are scanning from right to left

int preval(string expr)
{
    stack<int> stk;
    string ::iterator it;
    int a, b, c;

    for (it = expr.end() - 1; it != expr.begin() - 1; it--)
    {
        if (*it >= '0' && *it <= '9')
        {
            stk.push((int)*it);
        }
        else
        {
            a = stk.top();
            stk.pop();
            b = stk.top();
            stk.pop();

            switch (*it)
            {
            case '+':
                c = a + b;
                break;

            case '-':
                c = a - b;
                break;

            case '*':
                c = a * b;
                break;

            case '/':
                c = a / b;
                break;
            }

            stk.push(c);
        }
    }

    return stk.top();
}

int main()
{

    return 0;
}