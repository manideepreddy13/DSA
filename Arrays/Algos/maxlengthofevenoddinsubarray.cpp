#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Time Complexity : O(n)

int maxlength(vector<int> vec){
    int count=1;
    int maxcount=1;
    int i;
    for(i=0;i<vec.size()-1;i++){
        if(((vec[i]%2 == 0) && (vec[i+1]%2 == 1)) || ((vec[i]%2 == 1) && (vec[i+1]%2==0))){
            count++;
            maxcount = max(maxcount,count);
        } else {
            count = 1;
        }
    }

    return maxcount;
}

int main(){
    
return 0;
}