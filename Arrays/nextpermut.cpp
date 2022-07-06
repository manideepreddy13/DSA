#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nextPermutation(vector<int>& nums) {
    int n = nums.size();
    int i = n-1;
    while(i>0 && nums[i-1] >= nums[i]){
        i--;
    }
    if(i==0){
        reverse(nums.begin(), nums.end());
        return;
    }
    int j = n-1;
    while(nums[j] <= nums[i-1]){
        j--;
    }
    swap(nums[i-1], nums[j]);
    reverse(nums.begin()+i, nums.end());
}

int main(){
    
return 0;
}