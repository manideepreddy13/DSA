#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getInversions(vector<int> arr){
    int i,j;
    int n = arr.size();
    int count = 0;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    
    return (long long)count;
}

int main(){
    
return 0;
}