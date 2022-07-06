#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Time Complexity : O(n)

//The method is called Prefix Sum. The algorithm before this is in the big-O order of n^2
//So to make it cut short to O(n), we compute the sum and store it in prefix array

int prefixsum(vector<int> vec, int a, int b){
    vector<int> prefix;
    prefix.push_back(vec[0]);

    int i;
    for(i=1;i<vec.size();i++){
        prefix.push_back(prefix[i-1] + vec[i]);
    }

    if(a==0){
        return prefix[b];
    } else{
        return prefix[b] - prefix[a-1];
    }
}

int main(){
    
return 0;
}