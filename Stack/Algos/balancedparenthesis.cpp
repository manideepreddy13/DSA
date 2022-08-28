#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n)

bool balancedparenthesis(string expr)
{
    stack<char> stk;
    string ::iterator it;
    for (it = expr.begin(); it != expr.end(); it++)
    {
        if (*it == '(' || *it == '{' || *it == '[')
        {
            stk.push(*it);
        }
        else if (*it == ')' || *it == '}' || *it == ']')
        {
            if ((int)*it - (int)stk.top() != 1 || (int)*it - (int)stk.top() != 2)
            {
                return false;
            }
            stk.pop();
        }
    }

    if (stk.empty() == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    return 0;
}