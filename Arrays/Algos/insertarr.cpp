#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time Complexity : O(n) if the insertion is at the front and O(1) if it is at the back 


void insertarr(vector <int> vec, int k, int j, int c){
    
    //if the capacity is not reached yet
    if(vec.size() != c){
        int i;
        for(i=vec.size()-1;i>j-1;i--){
            vec[i] = vec[i-1];
        }
        vec[j-1] = k;

    } else {
        vec.resize(2*vec.size());
        insertarr(vec,k,j,c);
    }
}

// If the array has reached the capacity, increase the size by 2n


int main(){
    
return 0;
}