#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Kadane's Algo is as follows:
//1. Iterate through the array
//2. Calculate sum along and if we are trampled into a situation where our temp sum is less than the array element value, then temp sum is re-assigned to the array element value
//3. Find the max of temp sum and sum


//Time Complexity : O(n)

int maxsumsubarray(vector<int> vec){
    int sum=0;
    int temp=0;
    int i;
    for(i=0;i<vec.size();i++){
        temp = temp+vec[i];
        temp = max(temp,vec[i]);
        sum = max(sum,temp);
    }

    return sum;
}

int main(){
    
return 0;
}