#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


// The following function returns a vector

// Time Complexity : O(n) but it's taking extra space.

vector<int> removedup(vector<int> arr){
    vector<int> vec;
    int i;
    vec.push_back(arr[0]);
    int j=1;
    for(i=1;i<arr.size();i++){
        if(vec[j-1] != arr[i]){
            vec.push_back(arr[i]);
            j++;
        }
    }

    return vec;
}

int main(){
    
return 0;
}