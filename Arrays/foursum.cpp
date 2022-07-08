#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int>& nums, int target) {
    vector<vector<int>> vec;
    vector<int> temp;

    int a,b,c,d;
    int n = nums.size();
    int c = -1;

    for(a=0;a<n;a++){
        for(b=a+1;b<n;b++){
            for(c=b+1;c<n;c++){
                for(d=c+1;d<n;d++){
                    if(nums[a] + nums[b] + nums[c] + nums[d] == target){
                        temp.push_back(a);
                        temp.push_back(b);
                        temp.push_back(c);
                        temp.push_back(d);
                        vec.push_back(temp);
                        temp.clear();
                        c++;
                    }
                }
            }
        }
    }        

    vector<vector<int>> :: iterator it;
    it = unique(vec.begin(),vec.end()+c);

    vec.resize(distance(vec.begin(),it));

    return vec;
}

int main(){
    
return 0;
}