#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//To be edited

vector<int> repeatedNumber(const vector<int> &A){
    int a,b;
    int i,j;
    int count;

    for(i = 1; i<=A.size();i++){
        count = 0;
        for(j=0;j<A.size();j++){
            if(A[j] == i){
                count++;
            }
        }

        if(count == 2){
            a = A[j];
        } else if(count == 0) {
            b = A[j];
        }
    }
    
    vector<int> vec(2);
    vec.push_back(a);
    vec.push_back(b);
    
    return vec;
}

int main(){
    
return 0;
}