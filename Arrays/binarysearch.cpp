#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int search(int* arr, int n, int key) {
    
    int i,j;
    int temp;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    
    int low = 0;
    int high = n-1;
    int mid;
    
    while(low<=high){
        mid = (low+high)/2;
        
        if(arr[mid] == key){
            return mid;
        }
        
        if(arr[mid] > key){
            high = mid-1;
        } else if(arr[mid] < key){
            low = mid+1;
        }
    }
    
    return -1;
}

int main(){
    
return 0;
}