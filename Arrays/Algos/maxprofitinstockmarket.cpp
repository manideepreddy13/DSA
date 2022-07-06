#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//In stock market, when the point in the graph is low, then we make a buy.
//When it is at a high point, then we sell our stocks
//So in a graph, the maxima represents the product value's peak and the minima represents one of the product's low
//It kind of depends whether the maxima/minima we are discussing here is either local or extreme
//Note that there is no radius of curvature here because the slope is a constant number in a stock market graph
//PS: Sorry my JEE Mathematics AOD just kicked in XD


//Time Complexity : O(n)

int maxprofit(vector<int> vec){
    int prof = 0;
    int i;
    for(i=0;i<vec.size()-1;i++){
        if(vec[i] < vec[i+1]){
            prof = vec[i+1] - vec[i];
        }
    }

    return prof;
}

int main(){
    
return 0;
}