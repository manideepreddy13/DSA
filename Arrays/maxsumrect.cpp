#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int maxSumRectangle(vector<vector<int>>& arr, int n, int m)
{
    int up, down, left, right;
    int maxsum = -INFINITY;
    int sum=0;
    
    int i,j;
    
    for(up=0;up<=n;up++){
        for(left=0;left<=n;left++){
            for(down=0;down<=n;down++){
                for(right=0;right<=n;right++){
                    int sum=0;
                    for(i=up;i<=down;i++){
                        for(j=left;j<=right;j++){
                            sum = sum + arr[i][j];
                        }
                    }
                    
                    if(maxsum < sum){
                        maxsum = sum;
                    }
                }
            }
        }
    }
    
    return maxsum;
    
}


int main(){
    
return 0;
}