#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(vector<int> &nums)
{
    sort(nums.begin(), nums.end());

    int n = nums.size();

    int i;
    for (i = 0; i < n; i++)
    {
        if (nums[i] != i)
        {
            return i;
        }
    }

    return n;
}

int main()
{

    return 0;
}