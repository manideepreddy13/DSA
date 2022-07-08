#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//To be edited

vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int i, j;
    int d = 1;

    vector<int> vec;

    i = 0;
    j = 0;

    while (m * n > 0)
    {
        while (j != m)
        {
            vec.push_back(matrix[i][j]);
            j = j + d;
        }
        m--;

        while (i != n)
        {
            vec.push_back(matrix[i][j]);
            i = i + d;
        }
        n--;

        d = -d;
    }

    return vec;
}

int main()
{

    return 0;
}