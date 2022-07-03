#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool checkIfExist(vector<int>& arr) {
    int i,j;
    int n = arr.size();
    for(j=0;j<n;j++){
        for(i=j+1;i<n;i++){
            if((arr[i] == 2*arr[j]) || (arr[j] == 2*arr[i])){
                return true;
            }
        }
    }

    return false;
        
}

int main(){
    
return 0;
}