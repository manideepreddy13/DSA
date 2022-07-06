#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Time Complexity : O(n^2)

int maxdiff(vector<int> vec){
    int diff = 0;
    int i,j;
    for(i=0;i<vec.size();i++){
        for(j=i+1;j<vec.size();j++){
            if(diff < vec[j] - vec[i]){
                diff = vec[j] - vec[i];
            }
        }
    }

    return diff;
}

//Another method is to keep track of minimum element and subtract it with the array element
//Time Complexity : O(n^2)


int maxdiff1(vector<int> vec){
    int diff = vec[1] - vec[0];
    int m = vec[0];
    int check;

    int i;
    for(i=1;i<vec.size();i++){
        check = vec[i] - m;
        diff = max(diff,check);
        m = min(m,vec[i]);
    }

    return diff;

}

int main(){
    
return 0;
}