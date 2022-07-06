#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int amountrainwater(vector<int> vec){
    int n = vec.size();
    int amount=0;

    //Time Complexity: O(n^2)
    
    int i,j;
    for(i=1;i<n-1;i++){
        int left=vec[i];
        for(j=0;j<i;j++){
            left = max(left,vec[j]);
        }

        int right=vec[i];
        for(j=i+1;j<n;j++){
            right = max(right,vec[j]);
        }

        amount = amount + min(left,right) - vec[i];
    }

    return amount;
}

int main(){
    
return 0;
}