#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//To be edited

double myPow(double x, int n) {
    if(n<0){
        x = 1/x;
        n = -n;
    }

    double result = 1;
    int i;
    for(i=0;i<n;i++){
        result *= x;
    }

    return result;
}

int main(){
    
return 0;
}