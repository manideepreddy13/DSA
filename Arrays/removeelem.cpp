#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    int i = 0;
    int j = 0;
    int n = nums.size();
    while (j < n)
    {
        if (nums[j] != val)
        {
            nums[i] = nums[j];
            i++;
        }
        j++;
    }
    return i;
}

int main()
{

    return 0;
}