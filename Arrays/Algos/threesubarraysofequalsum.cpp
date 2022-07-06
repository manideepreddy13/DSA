#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Time Complexity : O(n)
//To be further corrected

bool checktriad(vector<int> vec){
    int sum=0;
    int i;
    for(i=0;i<vec.size();i++){
        sum += vec[i];
    }

    if(sum%3 == 0){
        int p = sum/3;
        int presum=0;
        for(i=0;i<vec.size();i++){
            if(presum + vec[i] == p){
                return true;
            }

            presum += vec[i];
        }

        return false;
    } else{
        return false;
    }
}

int main(){
    
return 0;
}