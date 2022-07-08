#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> vec(2);
    int i, j;
    for(i=0;i<nums.size();i++){
        for(j=i+1;j<nums.size();j++){
            if(nums[i]+nums[j] == target){
                vec.push_back(i);
                vec.push_back(j);
                return vec;
            }
        }
    }

    return vec;
}

int main(){
    
return 0;
}