#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec;
    int i=0;
    int n;
    cin >> n;
    int m;

    for(i=0;i<n;i++){
        cin >> m;
        vec.push_back(m);
    }

    int j=n-1;
    i=0;
    int temp;

    while(i<j){
        temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
        i++;
        j--;
    }

    for(i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }



return 0;
}