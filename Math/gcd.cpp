#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;

int findgcd(int num1, int num2)
{
    int i;
    int gcd;
    for (i = 1; i <= min(num1, num2); i++)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }

    return gcd;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    int gcd = findgcd(num1, num2);
    cout << gcd << endl;
    return 0;
}