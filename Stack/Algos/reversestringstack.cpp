#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

// Time Complexity : O(n)
// Space Complexity : O(n) as we are using a stack to reverse the string
// Normally this code isn't any better than the iterative two pointer code due to space complexity

string reversestr(string str)
{
    stack<char> stk;
    string ::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        stk.push(*it);
    }

    int i;
    for (i = 0; i < str.length(); i++)
    {
        str[i] = stk.top();
        stk.pop();
    }

    return str;
}

int main()
{

    return 0;
}