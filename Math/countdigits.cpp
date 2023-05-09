#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

//Time Complexity - O(n)
int countdigits1(int n)
{
    int c = 0;
    while (n >= 1)
    {
        c++;
        n /= 10;
    }

    return c;
}

//Time Complexity - O(1)
int countdigits2(int n){
    string str = to_string(n);
    return str.length();
}


int main()
{
    int n;
    cin >> n;

    //int c = countdigits1(n);
    int c = countdigits2(n);
    cout << c << endl;
    return 0;
}