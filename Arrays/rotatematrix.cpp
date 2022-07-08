#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix){
    int n = matrix.size();

    //transpose
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }

    //reverse each row
    int l,h;
    for(i=0;i<n;i++){
        l = 0;
        h = n-1;
        while(l<h){
            temp = matrix[i][l];
            matrix[i][l] = matrix[i][h];
            matrix[i][h] = temp;
            l++;
            h--;
        }
    }
}

int main(){
    
return 0;
}