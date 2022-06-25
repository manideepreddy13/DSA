#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int noofdigits(int n){
        int m=0;
        while(n>=1){
            m++;
            n /= 10;
        }
        
        return m;
    }
    
    int findNumbers(vector<int>& nums) {
        vector<int> :: iterator it;
        vector<int> evennum;
        
        int m;
        
        for(it=nums.begin();it!=nums.end();it++){
            m = noofdigits(*it);
            
            if(m%2==0){
                evennum.push_back(m);
            }
        }
        
        int l;
        l = evennum.size();
        
        return l;
    }
};


int main(){
    
return 0;
}