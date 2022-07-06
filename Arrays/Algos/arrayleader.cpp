#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Leader : element which is greater than it's right subordinates.  
// In increasing order, the leader is last element. In decreasing order, every element is a leader.

//Time Complexity : O(n^2) if the array is in decreasing order
//                  O(n) if the array is in increasing order

void leaderarr(vector <int> vec){
    int i,j;
    int flag;
    for(i=0;i<vec.size();i++){
        flag = 0;
        for(j=i+1;j<vec.size();j++){
            if(vec[i] <= vec[j]){
                flag = 1;
                break;
            }
        }

        if(flag == 0){
            cout << vec[i] << endl;
        }
    }
}

//Time Complexity : O(n) but we are using extra space

vector<int> leaderarr1(vector <int> vec){
    vector<int> vec1;
    int n = vec.size();
    int leader = vec[n-1];
    int i;
    for(i=n-2;i>-1;i++){
        if(vec[i] > leader){
            leader = vec[i];
            vec1.push_back(vec[i]);
        }
    }

    return vec1;
}

int main(){
    
return 0;
}