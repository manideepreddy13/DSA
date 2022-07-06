#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Time complexity : O(n) if the element is at the end or the element is not found 
                //   O(1) if the element is at the start

int linearsearch(vector <int> vec, int k){
    int i;
    for(i=0;i<vec.size();i++){
        if(vec[i] == k){
            return i;
        }
    }

    return -1;
}

int main(){
    
return 0;
}