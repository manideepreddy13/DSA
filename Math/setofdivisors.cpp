#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

void setofdivisors(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    setofdivisors(n);
    return 0;
}