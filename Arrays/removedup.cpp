#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int removeDuplicates(vector<int>& nums){
    int n = nums.size();
    int temp[n];
    int i;
    int j = 1;
    for(i=1;i<n;i++){
        if(temp[j-1] != nums[i]){
            temp[j] = nums[i];
            j++;
        }
    }

    for(i=0;i<j;i++){
        nums[i] = temp[i];
    }

    return j;
}

int main(){
    
return 0;
}