#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool validMountainArray(vector<int>& arr) {
    int n = arr.size();
    int i = 0;
    int j = n-1;
    while(i<j){
        if(arr[i] < arr[i+1]){
            i++;
        }
        else if(arr[j] < arr[j-1]){
            j--;
        }
        else{
            return false;
        }
    }
    return (i==j);
    
}

int main(){
    
return 0;
}