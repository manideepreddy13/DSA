#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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

//Time Complexity : O(n^2)

int longestsubarray01(vector<int> vec){
    int i,j;
    int n = vec.size();

    int sum = 0;
    int maxsize = 0;
    int a;

    for(i=0;i<n-1;i++){
        if(vec[0]){
            sum = 1;
        } else {
            sum = -1;
        }

        for(j=i+1;j<n;j++){
            if(vec[j] == 1){
                sum += 1;
            } else{
                sum -= 1;
            }

            if(sum == 0 && (maxsize < j-i+1)){
                maxsize = j-i+1;
                a=i;
            }
        }
    }    

    return maxsize;
}

int main(){
    
return 0;
}