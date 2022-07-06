#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//prefix(0,a-1) = prefix(a+1,n-1) then a is an equilibrium point 
//Time Complexity = O(n)

int equalibriumpoint(vector<int> vec){
    int leftsum=0;
    int rightsum=0;
    int i;
    for(i=0;i<vec.size();i++){
        rightsum += vec[i];
    }

    for(i=0;i<vec.size();i++){
        if(leftsum == rightsum - vec[i]){
            return vec[i];
        }

        leftsum += vec[i];
        rightsum -= vec[i];
    }

    return -1;

}

int main(){
    
return 0;
}