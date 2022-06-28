#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


vector<vector<int>> generate(int numRows) {
        vector<vector<int>> vec;
        int i,j;
        for(i=0;i<numRows;i++){
            for(j=0;j<=i;j++){
                if(j==0 || j == i){
                    vec[i][j] = 1;
                } else {
                    vec[i][j] = vec[i-1][j-1] + vec[i-1][j];
                }
            }
        }
        

       return vec;
}


int main(){
    int n;
    cin>>n;
    vector<vector<int>> v;
    v = generate(n);
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
return 0;
}