#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Time Complexity : O(n)

vector<int> flipbits(vector<int> vec){
    int n = vec.size();
    int i;
    int team0=0;
    int team1=0;
    for(i=0;i<n;i++){
        if(vec[i] == 0){
            team0++;
        } else{
            team1++;
        }
    }

    bool check = team0>team1;
    int m = vec.size();
    while(m--){
        if(check){
            vec.push_back(1);
        } else {
            vec.push_back(0);
        }
    }

    return vec;
}

int main(){
    
return 0;
}