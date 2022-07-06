#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Time Complexity : O(n^2)

int findmajority(vector<int> vec){
    int count;
    int i,j;
    for(i=0;i<vec.size();i++){
        count = 1;
        for(j=i+1;j<vec.size();j++){
            if(vec[i] == vec[j]){
                count++;
            }
        }

        if(count > vec.size()/2){
            return vec[i];
        }
    }

    return -1;
}


//Moore's Voting Algorithm
//Time Complexity : O(n)


int moorealgo(vector<int> vec){

    //Let's find a candidate for Majority Position
    int maj=0;
    int count = 1;
    int candidate;
    int i;
    for(i=1;i<vec.size();i++){
        if(vec[i] == vec[maj]){
            count++;
        } else{
            count--;
        }

        if(count==0){
            maj = i;
            count = 1;
        }
    }

    candidate = vec[maj];

    //Let's verify if the candidate indeed is a Majority Element
    int newcount=0;
    int flag = 0;
    for(i=0;i<vec.size();i++){
        if(vec[i] == candidate){
            newcount++;
        }
    }

    if(newcount > vec.size()/2){
        flag = 1;
    }

    if(flag == 1){
        return candidate;
    } else {
        return -1;
    }
}

int main(){
    
return 0;
}