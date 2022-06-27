#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long maxSubarraySum(int arr[], int n)
{
   
    
    int sum =0;
    double maxsum = -INFINITY;
    int i;
    for(i=0;i<n;i++){
        sum = sum + arr[i];
        
        if(maxsum < sum){
            maxsum = sum;
        }
        
        if(sum < 0){
            sum=0;
        }
    }
    
    if(maxsum < 0){
        return 0;
    }
    
    return (long long) maxsum;
}

int main(){
    
return 0;
}