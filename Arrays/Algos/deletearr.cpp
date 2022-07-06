#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time Complexity : O(n) there isn't a worst case as it takes some part to search up the element
//                   the rest of the traversal happens by responding to the displacement of elements

void deletearr(vector<int> vec, int k)
{
    int i;
    for (i = 0; i < vec.size(); i++)
    {
        if (vec[i] == k)
        {
            break;
        }
    }

    int j;
    for (j = i; j < vec.size(); j++)
    {
        vec[j] = vec[j + 1];
    }
}

int main()
{

    return 0;
}