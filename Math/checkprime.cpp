#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
    {
        return true;
    }

    int i;
    for (i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    int n;
    cin >> n;
    bool isPrm = isPrime(n);
    if (isPrm == 1)
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }
    return 0;
}