#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Time Complexity : O(n^2)
//We can decrease the time complexity to O(n) by just restricting the inner loop traversal limit to the last copy of the element
//before unnecessarily iterating through the full array


void frequencyinarr(vector<int> vec){
    int f=1;
    int i,j;
    
    for(i=0;i<vec.size();i++){
        for(j=i;j<vec.size();j++){
            if(vec[i] == vec[i+1]){
                f++;
            }
        }
        cout<<"frequency of "<<vec[i]<<f<<endl;
        f=1;
    }
}

int main(){
    
return 0;
}