#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int maxco = 0;
        vector<int> :: iterator it;
        
        for(it = nums.begin();it!=nums.end();it++){
            if(*it == 1){
                count++;
            } else {
                 if(maxco<=count){
                    maxco = count;
                }
                count = 0;
            }
        }
        
        
        if(maxco<=count){
                    maxco = count;
                }
        
        return maxco;
    }
};


int main(){
    
return 0;
}