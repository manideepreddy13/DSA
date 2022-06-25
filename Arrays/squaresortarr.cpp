#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sortedarr;
        vector<int> :: iterator it;
        int m;
        for(it=nums.begin();it!=nums.end();it++){
            m = (*it)*(*it);
            sortedarr.push_back(m);
        }
        
        sort(sortedarr.begin(),sortedarr.end());
        
        return sortedarr;
    }
};

int main(){
    
return 0;
}