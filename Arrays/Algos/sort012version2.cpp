#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//The following function follows Dutch National Flag Algorithm.
//It can also be used as an alternative to Quick Sort by fixing the pivot as either a last element or a random element.

//Time Complexity: O(n)

void sortColors(vector<int>& nums) {
        int low, mid, high;
        low = 0;
        mid = 0;
        high = nums.size()-1;
        int temp;
        
        int i;
        while(mid<=high){
            if(nums[mid] == 0){
                temp = nums[mid];
                nums[mid] = nums[low];
                nums[low] = temp;
                low++;
                mid++;
            }else if(nums[mid] == 2){
                temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;
                high--;
            }else if(nums[mid] == 1){
                mid++;
            }
        }
        
    }

int main(){
    
return 0;
}