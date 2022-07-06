#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//Time Complexity : O(n)

void leftrotate(int arr[], int n){
    int temp = arr[0];
    int i;
    for(i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }

    arr[n-1] = temp;
}

//Another method is by scanning and placing them in the rotated circle
//The formula is (n+i-1)%n. For right rotate, it is (n+i+1)%n


//If we want to left rotate by x times, then following procedure is
// 1.reverse from 0 to d-1
// 2.reverse from d to n-1
// 3.finally reverse the whole array

//if we want to right rotate, then follow the above procedure but in reverwse

int main(){
    
return 0;
}