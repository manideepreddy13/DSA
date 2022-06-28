#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int i,j,l,h;
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){

                if(matrix[i][j] == 0){
                    for(l=0;l<n;l++){
                        if(matrix[l][j] != 0){
                            matrix[l][j] = 1000000;
                        }
                    }

                    for(h=0;h<m;h++){
                        if(matrix[i][h] != 0){
                            matrix[i][h] = 1000000;
                        }
                    }
                }
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                if(matrix[i][j] == 1000000){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};


int main(){
    
return 0;
}