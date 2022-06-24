#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    double max = -INFINITY;
    double min = INFINITY;






    for(i=0;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }

        if(arr[i] < min){
            min = arr[i];
        }
    }

    cout<<min<<endl<<max<<endl;

return 0;
}