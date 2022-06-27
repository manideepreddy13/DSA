#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int flipBits(int* arr, int n) 
{
    int maxValue = 0;
    int totalOnes = 0;
    

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == 1) 
        {
            totalOnes++;
        }
        int count1 = 0, count0 = 0;
        for (int j = i; j < n; j++) 
        {
            if (arr[j] == 1) 
            {
                count1++;
            } 
            else 
            {
                count0++;
            }
            maxValue = max(maxValue, count0 - count1);
        }
    }
    int result = totalOnes + maxValue;
    return result;
}

int main(){
    
return 0;
}