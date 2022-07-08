#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<vector<int>> merge(vector<vector<int>>& intervals) {
    int m = 2;
    int n = intervals.size();

    int i,j;
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> vec;

    for(i=0;i<n;i++){
        if(vec.empty() || (vec.back()[1] < intervals[i][0])){
            vec.push_back(intervals[i]);
        } else {
            vec.back()[1] = max(vec.back()[1],intervals[i][1]);
        }
    }

    return vec;
}

int main(){
    
return 0;
}