#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

int countdigits(int n)
{
    string str = to_string(n);
    return str.length();
}

bool isArmstrong(int n)
{
    int m = countdigits(n);
    int dummy = n;
    int arm = 0;
    int d;

    while (dummy >= 1)
    {
        d = dummy % 10;
        arm = arm + pow(d, m);
        dummy = dummy / 10;
    }

    if (arm == n)
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
    int n;
    cin >> n;
    bool isArm = isArmstrong(n);
    if (isArm == 1)
    {
        cout << "True\n";
    }
    else
    {
        cout << "False\n";
    }
    return 0;
}
