#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    nums1.resize(m);
    nums2.resize(n);
    
    vector<int> :: iterator it;
    for(it = nums2.begin(); it != nums2.end(); it++){
        nums1.push_back(*it);
    }
        
        sort(nums1.begin(),nums1.end());

    nums2.clear();

}

int main(){
    
return 0;
}